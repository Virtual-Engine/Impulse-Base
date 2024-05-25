#include "stdafx.h"

LONG WINAPI ExceptionFilter(struct _EXCEPTION_POINTERS* ExceptionInfo) {
	int m_ExceptionCode = ExceptionInfo->ExceptionRecord->ExceptionCode;
	int m_exceptionInfo_0 = ExceptionInfo->ExceptionRecord->ExceptionInformation[0];
	int m_exceptionInfo_1 = ExceptionInfo->ExceptionRecord->ExceptionInformation[1];
	int m_exceptionInfo_2 = ExceptionInfo->ExceptionRecord->ExceptionInformation[2];

	if (m_ExceptionCode == EXCEPTION_BREAKPOINT) {
		return EXCEPTION_CONTINUE_EXECUTION;
	}
	Backend::SetHooking(true);
#ifdef HARD_DEV
	Memory::RelinkModuleToPEB(Backend::GetModule());
	Memory::RestorePeHeaders();
#endif

	uint64_t exceptionAddress = (uint64_t)ExceptionInfo->ExceptionRecord->ExceptionAddress;

	LOG_ERROR("Game crashed...");
	LOG_ERROR("Module base address:  0x%p | 0x%p", Backend::GetModule(), (exceptionAddress - (uint64_t)Backend::GetModule()));
	LOG_ERROR("Game base address:    0x%p | 0x%p", GetModuleHandleA(nullptr), (exceptionAddress - (uint64_t)GetModuleHandleA(nullptr)));
	LOG_ERROR("Exception at address: 0x%p", ExceptionInfo->ExceptionRecord->ExceptionAddress);

	switch (m_ExceptionCode) {
	case EXCEPTION_ACCESS_VIOLATION:
		LOG_ERROR("Cause: EXCEPTION_ACCESS_VIOLATION");
		if (m_exceptionInfo_0 == 0) {
			LOG_ERROR("Attempted to read from: 0x%p", m_exceptionInfo_1);
		}
		else if (m_exceptionInfo_0 == 1) {
			LOG_ERROR("Attempted to write to: 0x%p", m_exceptionInfo_1);
		}
		else if (m_exceptionInfo_0 == 8) {
			LOG_ERROR("Data Execution Prevention (DEP) at: 0x%p", m_exceptionInfo_1);
		}
		else {
			LOG_ERROR("Unknown access violation at: 0x%p", m_exceptionInfo_1);
		}
		break;

	case EXCEPTION_ARRAY_BOUNDS_EXCEEDED: LOG_DEBUG("Cause: EXCEPTION_ARRAY_BOUNDS_EXCEEDED"); break;
	case EXCEPTION_BREAKPOINT: LOG_DEBUG("Cause: EXCEPTION_BREAKPOINT"); break;
	case EXCEPTION_DATATYPE_MISALIGNMENT: LOG_DEBUG("Cause: EXCEPTION_DATATYPE_MISALIGNMENT"); break;
	case EXCEPTION_FLT_DENORMAL_OPERAND: LOG_DEBUG("Cause: EXCEPTION_FLT_DENORMAL_OPERAND"); break;
	case EXCEPTION_FLT_DIVIDE_BY_ZERO: LOG_DEBUG("Cause: EXCEPTION_FLT_DIVIDE_BY_ZERO"); break;
	case EXCEPTION_FLT_INEXACT_RESULT: LOG_DEBUG("Cause: EXCEPTION_FLT_INEXACT_RESULT"); break;
	case EXCEPTION_FLT_INVALID_OPERATION: LOG_DEBUG("Cause: EXCEPTION_FLT_INVALID_OPERATION"); break;
	case EXCEPTION_FLT_OVERFLOW: LOG_DEBUG("Cause: EXCEPTION_FLT_OVERFLOW"); break;
	case EXCEPTION_FLT_STACK_CHECK: LOG_DEBUG("Cause: EXCEPTION_FLT_STACK_CHECK"); break;
	case EXCEPTION_FLT_UNDERFLOW: LOG_DEBUG("Cause: EXCEPTION_FLT_UNDERFLOW"); break;
	case EXCEPTION_ILLEGAL_INSTRUCTION: LOG_DEBUG("Cause: EXCEPTION_ILLEGAL_INSTRUCTION"); break;
	case EXCEPTION_IN_PAGE_ERROR:
		LOG_DEBUG("Cause: EXCEPTION_IN_PAGE_ERROR");
		if (m_exceptionInfo_0 == 0) {
			LOG_ERROR("Attempted to read from: 0x%08x", m_exceptionInfo_1);
		}
		else if (m_exceptionInfo_0 == 1) {
			LOG_ERROR("Attempted to write to: 0x%08x", m_exceptionInfo_1);
		}
		else if (m_exceptionInfo_0 == 8) {
			LOG_ERROR("Data Execution Prevention (DEP) at: 0x%08x", m_exceptionInfo_1);
		}
		else {
			LOG_ERROR("Unknown access violation at: 0x%08x", m_exceptionInfo_1);
		}
		LOG_ERROR("NTSTATUS: 0x%08x", m_exceptionInfo_2);
		break;

	case EXCEPTION_INT_DIVIDE_BY_ZERO: LOG_ERROR("Cause: EXCEPTION_INT_DIVIDE_BY_ZERO"); break;
	case EXCEPTION_INT_OVERFLOW: LOG_ERROR("Cause: EXCEPTION_INT_OVERFLOW"); break;
	case EXCEPTION_INVALID_DISPOSITION: LOG_ERROR("Cause: EXCEPTION_INVALID_DISPOSITION"); break;
	case EXCEPTION_NONCONTINUABLE_EXCEPTION: LOG_ERROR("Cause: EXCEPTION_NONCONTINUABLE_EXCEPTION"); break;
	case EXCEPTION_PRIV_INSTRUCTION: LOG_ERROR("Cause: EXCEPTION_PRIV_INSTRUCTION"); break;
	case EXCEPTION_SINGLE_STEP: LOG_ERROR("Cause: EXCEPTION_SINGLE_STEP"); break;
	case EXCEPTION_STACK_OVERFLOW: LOG_ERROR("Cause: EXCEPTION_STACK_OVERFLOW"); break;
	case DBG_CONTROL_C: LOG_ERROR("Cause: DBG_CONTROL_C"); break;
	default: LOG_ERROR("Cause: 0x%08x", m_ExceptionCode);
	}

	LOG_ERROR("Dumping ASM registers:");

	LOG_ERROR("RAX: 0x%llx || RSI: 0x%llx", ExceptionInfo->ContextRecord->Rax, ExceptionInfo->ContextRecord->Rsi);
	LOG_ERROR("RBX: 0x%llx || RDI: 0x%llx", ExceptionInfo->ContextRecord->Rbx, ExceptionInfo->ContextRecord->Rdi);
	LOG_ERROR("RCX: 0x%llx || RBP: 0x%llx", ExceptionInfo->ContextRecord->Rcx, ExceptionInfo->ContextRecord->Rbp);
	LOG_ERROR("RDX: 0x%llx || RSP: 0x%llx", ExceptionInfo->ContextRecord->Rdx, ExceptionInfo->ContextRecord->Rsp);

	LOG_ERROR("STACK: %s", Memory::BuildStackTrace());
	Backend::SetHooking(false);
	return EXCEPTION_CONTINUE_SEARCH;
}

DWORD WINAPI MainThread(LPVOID hModule) {
	Backend::Start((HMODULE)hModule);
	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
		SetUnhandledExceptionFilter(ExceptionFilter);
		Backend::SetModule(hModule);
		copy((BYTE*)hModule, (BYTE*)(hModule + 0x1000), back_inserter(Backend::m_modulePE));
		Backend::GetModuleInfo();

		DisableThreadLibraryCalls(hModule);
		Memory::UnlinkModuleFromPEB(hModule);
		Memory::UnlinkModuleFromPEB(GetModuleHandleA("dinput8.dll"));
		Memory::FakePeHeader(hModule);

		CreateThread(0, 0, MainThread, hModule, 0, 0);
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return true;
}