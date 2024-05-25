#include "stdafx.h"

using namespace Script;

unordered_map<uint64_t, NativeHandler>	Natives::m_handlerCache;
NativeRegistration**					Natives::m_registrationTable;

Natives pNatives;

NativeHandler Natives::getNativeHandler(uint64_t hash) {
	if (hash == 0) return nullptr;

	NativeRegistration* table = m_registrationTable[(hash & 0xFF)];

	for (; table; table = table->getNextRegistration())
		for (uint32_t i = 0; i < table->getNumEntries(); i++)
			if (hash == table->getHash(i))
				return table->handlers[i];

	LOG_ERROR("[Natives] Failed finding handler 0x%p", hash);
	return nullptr;
}

NativeHandler Natives::getNativeHandlerCache(uint64_t original_hash) {
	NativeHandler handler = m_handlerCache[original_hash];
	if (!handler) {
		handler = getNativeHandler(Crossmap::map(original_hash));
		if (!handler) return nullptr;
		m_handlerCache[original_hash] = handler;
	}
	return handler;
}

bool Natives::PreGame() {
	/*Native Registration Table*/
	if (!Hooking::PatternCallback<char>({ "RNT", true, 0x25, "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 48 83 EC 20 33 FF 48 8B D9 40 B6 01" }, [](char* data) {
		m_registrationTable = reinterpret_cast<decltype(m_registrationTable)>(*reinterpret_cast<int *>(data + 3) + data + 7);
	})) return false;

	if (!Hooking::PatternCallback<char>({ "RYTD", true, 0, "48 89 5C 24 ? 48 89 6C 24 ? 48 89 7C 24 ? 41 54 41 56 41 57 48 83 EC 50" }, [](char* data) {
		pNatives.RegisterYTD = reinterpret_cast<tRegisterYTD>(data);
		})) return false;



	
	return true;
}

bool Natives::InGame() {
	//GetThreadPool()->RegisterThread("IMK", [] {
	//		using namespace Globals;
	//		Global(IMIQUEUE_BASE).At(IMIQUEUE_OFFSET).As<int>() = 0;
	//		//Global(IMIQUEUE_BASE).At(IMIQUEUE_OFFSET2).As<int>() = 1; //leave here (backup)
	//	//
	//	//Sleep(1000);
	//	/*Kill entire interaction menu 1.44*/
	//	//Global(71238).As<int>() = 1;
	//	//Global(2436641).At(1888).At(688).As<int>() = 0;
	//});

	//if (!Hooking::ScriptTableCallback("shop_controller", "SC", [](ScriptTableItem* script) {
	//	Hooking::HookScriptNative(script, 0xDC38CC1E35B6A5D7, WarningMessageHook, "WMH");
	//})) return false;

	/*Print native entrypoints to gta directory*/
	/*ofstream file;
	//file.open("EP.txt");
	//for (int i = 0; i < 11882; i += 2) {
	//	auto addr = getNativeHandlerCache(Crossmap::m_crossmapData[i]);
	//	file << hex << "0x" << Crossmap::m_crossmapData[i] << " : " << "GTA5.exe+0x" << (uint64_t)addr - (uint64_t)GetModuleHandle(nullptr) << endl;
	//}
	file.open("EP.txt");
	for (int i = 0; i < 11882; i += 2) {
		auto addr = getNativeHandlerCache(Crossmap::m_crossmapData[i]);
		file << hex << "0x" << Crossmap::m_crossmapData[i] << " : " << "GTA5.exe+0x" << (uint64_t)addr - (uint64_t)GetModuleHandle(nullptr) << endl;
	}
	file.close();*/

	//ScriptTableItem* shop_controller = Backend::GetScriptTable()->FindScript("shop_controller");
	//if (IsValidAddress(shop_controller, "SC", false)) {
	//Hooking::HookScriptNative(shop_controller, 0xDC38CC1E35B6A5D7, WarningMessageHook, "WMH");
	//}
	return true;
}

void Natives::Cleanup() {}