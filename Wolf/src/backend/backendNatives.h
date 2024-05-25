#pragma once
typedef void(__fastcall *tNetUpdateTime)(int a1, __int64 a2);
typedef int* (__cdecl* tRegisterYTD)(int* outIdx, const char* filename, bool one, const char* registerAs, bool errorIfNotFound);

class Natives
{
private:
	static unordered_map<uint64_t, NativeHandler> m_handlerCache;
	static NativeRegistration** m_registrationTable;
public:
	static bool PreGame();
	static bool InGame();
	static void Cleanup();
	tRegisterYTD RegisterYTD;
	static NativeHandler getNativeHandler(uint64_t hash);
	static NativeHandler getNativeHandlerCache(uint64_t hash);
};

extern Natives pNatives;