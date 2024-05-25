#include "stdafx.h"
#include "menu/util/ScriptHookV.hpp"

bool					Backend::m_loaded;
bool					Backend::m_isHooking;
bool					Backend::m_cleaning;
HWND					Backend::m_hWindow;
HANDLE					Backend::m_process;
DWORD64					Backend::m_gameBase;
DWORD64					Backend::m_gameSize;
HMODULE					Backend::m_hModule;
vector<char>			Backend::m_modulePE;
vector<uint64_t>		Backend::m_nameAddresses;
HMODULE					Backend::m_NTDLLModule;
uint64_t				Backend::m_moduleBaseAddr;
uint64_t				Backend::m_moduleSize;
uint64_t				Backend::m_worldPtr;
uint64_t				Backend::m_eventPoolPtr;
__int64** Backend::m_globalPtr;
GameState* Backend::m_gameState;
Script::ScriptTable* Backend::m_scriptTable;
float					Backend::m_deltaTime;
DWORD					Backend::m_lastFrameTime;
BYTE					Backend::m_isInSession;

Backend::pRegisterFileFn Backend::RegisterFileFn;


typedef char* (*pGetGxtText)(uint64_t rcx, char* gxtLabel);
pGetGxtText OriginalGetGxtText = NULL;
char* GetGxtTextHook(uint64_t rcx, char* gxtLabel) {
	if (!strcmp(gxtLabel, "CTALERT_F_1")) {
		return "Game Alert";
	}
	else if (!strcmp(gxtLabel, "LOADING_SPLAYER_L")) {
		return "Loading GTA with Pegasus";
	}
	else if (!strcmp(gxtLabel, "LOADING_MPLAYER_L")) {
		return "Loading GTA Online with Pegasus";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOT")) {
		return "Play GTA Online With Pegasus";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOT0")) {
		return "C'est parti";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOT1")) {
		return "Play Session crews";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOT2")) {
		return "Session pour notre crew";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOT3")) {
		return "Session me and pote";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOT4")) {
		return "Solo Session";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOT5")) {
		return "Session Invite";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOB")) {
		return "GO GTA Online";
	}
	else if (!strcmp(gxtLabel, "PM_GO")) {
		return "Launch Online With Pegasus";
	}
	else if (!strcmp(gxtLabel, "HUD_JOINING")) {
		return "Loading GTA Online with Pegasus";
	}
	else if (!strcmp(gxtLabel, "PM_INVO_FM")) {
		return "Launch Invite only With Pegasus";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOT5")) {
		return "Pegasus Invite only session";
	}
	else if (!strcmp(gxtLabel, "HUD_TRANSP")) {
		return "Bouge ton cul le transac";
	}
	else if (!strcmp(gxtLabel, "HUD_TRANSPEND")) {
		return "Bouge ton cul le transfert";
	}
	else if (!strcmp(gxtLabel, "HUD_TRYAGAIN")) {
		return "Comment sa reessaye plus tard connard";
	}
	else if (!strcmp(gxtLabel, "PM_INF_PGOB0")) {
		return "Head straight into GTA Online with the Pegasus Trainer.";
	}
	else if (!strcmp(gxtLabel, "HUD_QUITTING")) {
		return "Loading Pegasus for Singleplayer";
	}
	else if (!strcmp(gxtLabel, "PM_FIND_SESS")) {
		return "Find a new session with Pegasus";
	}
	else if (!strcmp(gxtLabel, "PM_QUIT_MP")) {
		return "Leave GTA Online with Pegasus";
	}
	else if (!strcmp(gxtLabel, "RADIO_04_PUNK") || !strcmp(gxtLabel, "FMMCRADIO_4")) {
		return "Pegasus Radio";
	}
	else if (!strcmp(gxtLabel, "RADIO_01_CLASS_ROCK")) {
		return "Edgy Memes";
	}
	else if (!strcmp(gxtLabel, "RADIO_02_POP")) {
		return "Lesbian Elephants Pop Music";
	}
	else if (!strcmp(gxtLabel, "RADIO_03_HIPHOP_NEW")) {
		return "Pegasus HIPHOP";
	}
	else if (!strcmp(gxtLabel, "RADIO_08_MEXICAN")) {
		return "Mother Talks Radio";
	}
	else if (Utils::GetHashKey(gxtLabel) == 0x8CC30479) {
		return "Initializing Pegasus";
	}
	else if (Utils::GetHashKey(gxtLabel) == 0x4FA9A3B2) {
		return "You were vote kicked or host kicked by a menu user";

	}
	

	return OriginalGetGxtText(rcx, gxtLabel);
}

int Backend::RegisterCStreamingFile(char* filename) {
	int index = 0;
	char buffer[256];
	sprintf(buffer, "%s\\Pegasus\\YTD\\%s", GetConfig()->GetPathMyDocuments(), filename);
	pNatives.RegisterYTD(&index, buffer, true, filename, false);
	ZeroMemory(buffer, sizeof(buffer));
	return (index != 0);
}


int Backend::GetStatIntHook(Hash statHash, int* outValue, int p2) {
	static long now;
	static int c_frameCache = 0;
	static once_flag c_init, c_init1, c_textures, c_updates;
	if (SCRIPT::GetHashOfThisScriptName() == 0x5700179C) {
		if (c_frameCache < MISC::GetFrameCount()) {
			c_frameCache = MISC::GetFrameCount();

			now = timeGetTime();
			m_deltaTime = (float)(now - m_lastFrameTime) / 1000;
			m_lastFrameTime = now;

			call_once(c_init1, [] { ScriptThreadInit(); });
			call_once(c_textures, [] { RegisterCStreamingFile("header.ytd"); });
			call_once(c_updates, [] { GetEntityControl()->Update(); g_entityControl.Update(); });

			if (m_frameCounter++ > 9999999)m_frameCounter = 0;
			GetFiberManager()->Tick();
		}
	}
	return OriginalGetStatInt(statHash, outValue, p2);
}

typedef bool(*pIsEntityUpsideDown)(Entity entity);
pIsEntityUpsideDown OriginalIsEntityUpsideDown;

bool Backend::IsEntityUpsideDown(Entity entity) {
	static long now;
	static int c_frameCache = 0;
	static once_flag c_init, c_init1;
	if (SCRIPT::GetHashOfThisScriptName() == 0x5700179C) {
		if (c_frameCache < MISC::GetFrameCount()) {
			c_frameCache = MISC::GetFrameCount();


			now = timeGetTime();
			m_deltaTime = (float)(now - m_lastFrameTime) / 1000;
			m_lastFrameTime = now;

			if (m_gameState != nullptr) {
				if (GetGameState() == GameStatePlaying && !m_cleaning && m_loaded) {
					call_once(c_init1, [] {ScriptThreadInit(); });
					if (m_frameCounter++ > 9999999)m_frameCounter = 0;
					GetFiberManager()->Tick();
				}
			}
		}
	}
	return OriginalIsEntityUpsideDown(entity);
}

typedef BOOL(*pIsRecordingHook)();
pIsRecordingHook originalIsRecordingHook;

BOOL Backend::IsRecordingHook() {
	static long now;
	static int c_frameCache = 0;
	static once_flag c_init, c_init1;
	if (SCRIPT::GetHashOfThisScriptName() == 0x5700179C) {
		if (c_frameCache < MISC::GetFrameCount()) {
			c_frameCache = MISC::GetFrameCount();


			now = timeGetTime();
			m_deltaTime = (float)(now - m_lastFrameTime) / 1000;
			m_lastFrameTime = now;

			if (m_gameState != nullptr) {
				if (GetGameState() == GameStatePlaying && !m_cleaning && m_loaded) {
					call_once(c_init1, [] {ScriptThreadInit(); });
					if (m_frameCounter++ > 9999999)m_frameCounter = 0;
					GetFiberManager()->Tick();
				}
			}
		}
	}
	return originalIsRecordingHook();
}

int Backend::m_frameCounter;
bool Backend::DevMode;
void Backend::ScriptThreadInit() {
	m_lastFrameTime = timeGetTime();
	pMenu.Initialize();
	pRenderer.Initialize();
	GetFiberManager()->Init("M");
	GetFiberManager()->AddFiber("MH", [] {pMenu.Update(); });
	GetFiberManager()->AddFiber("FB", [] {pSubmenuHandler.ASyncUpdate(); });
	GetFiberManager()->AddFiber("MI", [] {GetMenuInput()->Update(); });
	GetFiberPool()->Init();
	GetMouse()->UpdateMouse();
	LOG_PRINT("Finished loading Pegasus");
}

int Backend::StatGetIntHook(NativeContext* cxt) {
	static long now;
	static int c_frameCache = 0;
	static once_flag c_init, c_init1;
	if (SCRIPT::GetHashOfThisScriptName() == 0x5700179C) {
		if (c_frameCache < MISC::GetFrameCount()) {
			c_frameCache = MISC::GetFrameCount();

			now = timeGetTime();
			m_deltaTime = (float)(now - m_lastFrameTime) / 1000;
			m_lastFrameTime = now;

			if (m_gameState != nullptr) {
				if (GetGameState() == GameStatePlaying && !m_cleaning && m_loaded) {
					call_once(c_init1, [] { ScriptThreadInit(); });
					if (m_frameCounter++ > 9999999)m_frameCounter = 0;
					GetFiberManager()->Tick();
				}
			}
		}
	}
	return STATS::StatGetInt(cxt->getArgument<Hash>(0), cxt->getArgument<int*>(1), cxt->getArgument<int>(2));
}


void Backend::WaitHook(NativeContext* cxt) {
	static long now;
	static int c_frameCache = 0;
	static once_flag c_init, c_init1;

	if (c_frameCache < MISC::GetFrameCount()) {
		c_frameCache = MISC::GetFrameCount();


		now = timeGetTime();
		m_deltaTime = (float)(now - m_lastFrameTime) / 1000;
		m_lastFrameTime = now;

		if (m_gameState != nullptr) {
			if (GetGameState() == GameStatePlaying && !m_cleaning && m_loaded) {
				call_once(c_init1, [] { ScriptThreadInit(); });
				if (m_frameCounter++ > 9999999)m_frameCounter = 0;
				GetFiberManager()->Tick();
			}
		}
	}

	SYSTEM::WAIT(cxt->getArgument<int>(0));
}


void Backend::GetModuleInfo() {
	m_process = GetCurrentProcess();
	MODULEINFO module_info;
	memset(&module_info, 0, sizeof(module_info));
	GetModuleInformation(m_process, m_hModule, &module_info, sizeof(module_info));
	m_moduleSize = module_info.SizeOfImage;
	m_moduleBaseAddr = (uint64_t)module_info.lpBaseOfDll;

	memset(&module_info, 0, sizeof(module_info));
	GetModuleInformation(m_process, GetModuleHandleA(0), &module_info, sizeof(module_info));
	m_gameSize = module_info.SizeOfImage;
	m_gameBase = (DWORD64)module_info.lpBaseOfDll;
}

void Backend::Start(HMODULE hModule) {
	GetConfig()->Initialize();
	GetLog()->Initialize();
	GetThreadPool()->Initialize(5);
	GetMouse()->UpdateMouse();

	if (!Hooking::Initialize()) return;

	while (!m_hWindow)m_hWindow = FindWindow(L"grcWindow", nullptr);
	LOG_DEBUG("[Windows] W initialized");

	if (!Input::Initialize()) return;
	if (!Crossmap::Initialize())return;
	if (!Natives::PreGame()) return;

	if (!Hooking::PatternCallback<void>({ "GSI", false, 0, "48 8B C4 48 89 58 10 48 89 70 18 57 48 83 EC 30 48 8B F2" }, [](void* data) {
		return Hooking::HookFunction(data, &GetStatIntHook, &OriginalGetStatInt, "GSI");
		})) return;


	if (!PreGameBackend()) return;

	m_loaded = true;
}

void WarningMessageHook(NativeContext* cxt) {
	return;
}

bool Backend::PreGameBackend() {

	if (!Hooking::PatternCallback<char>({ "GXT", true, 0, "48 89 5C 24 ? 57 48 83 EC 20 48 8B DA 48 8B F9 48 85 D2 75 44 E8 ? ? ? ? 8B 0D ? ? ? ? 65 48 8B 04 25 ? ? ? ? BA ? ? ? ? 48 8B 04 C8 8B 0C 02 D1 E9" }, [](char* data) {
		return Hooking::HookFunction(data, &GetGxtTextHook, &OriginalGetGxtText, "GXT");
		})) return false;

	if (!Hooking::PatternCallback<char>({ "GSP", true, 0, "83 3D ? ? ? ? ? 75 17 8B 43 20 25" }, [](char* data) {
		m_gameState = reinterpret_cast<decltype(m_gameState)>(data + *reinterpret_cast<int32_t*>(data) + 5);
		})) return false;

	if (!Hooking::PatternCallback<char>({ "GWP", true, 0, "48 8B 05 ? ? ? ? 45 ? ? ? ? 48 8B" }, [](char* data) {
		m_worldPtr = GetAddressFromInstruction(data);
		})) return false;

	return true;
}

bool Backend::InGameBackend() {

	return true;
}

DWORD WINAPI Backend::CleanupThread(LPVOID lpParam) {
	m_cleaning = true;
	LOG_PRINT("Starting cleanup");

	Input::Cleanup();
	Natives::Cleanup();
	Hooking::Cleanup();
	Memory::Cleanup();

	GetFiberManager()->Cleanup();
	GetThreadPool()->Cleanup();
	GetLog()->Cleanup();

	LOG_PRINT("Cleanup finished");
	Sleep(1000);
	FreeLibraryAndExitThread(m_hModule, 0);
}