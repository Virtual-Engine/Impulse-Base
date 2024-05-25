#pragma once

#pragma warning(disable: 4091)
#pragma warning(disable: 4838)
#pragma warning(disable: 4311)
#pragma warning(disable: 4302)
#pragma warning(disable: 4191)
#pragma warning(disable: 4018)
#pragma warning(disable: 4305)
#pragma warning(disable: 4800)
#pragma warning(disable: 4804)
#pragma warning(disable: 4305)
#pragma warning(disable: 4551)
#pragma warning(disable: 4390)
#pragma warning(disable: 4715)

#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1

#define HARD_DEVs // for shit we don't want compiled unless dev is defined
#define TESTER_ONLYs // for when we only want testers using it

#define CRASH_DBGs // enables detailed startup log

/*Windows includes*/#include <windows.h>
#include <windowsx.h>

#include <string>
#include <xstring>

#include <tlhelp32.h>

#include <sstream>
#include <fstream>
#include <filesystem>
#include <iostream>

#include <unordered_map>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <chrono>

#include <memory>
#include <Psapi.h>

#include <timeapi.h>
#pragma comment(lib, "winmm.lib")

#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>

using namespace std;

/*Json*/
#include "util/json.h"
using namespace nlohmann;

/*Minhook*/
#include "minhook.h"

template <typename T, size_t N>
constexpr size_t NUMOF(T(&)[N]) { return N; }


/*Util*/
#include "util/types.h"
#include "util/status.h"
#include "util/utils.h"
#include "util/config.h"
#include "util/log.h"
#include "util/profiler.h"
#include "util/threadPool.h"
#include "util/script.h"
#include "util/fiberManager.h"
#include "util/fiberPool.h"
#include "util/pugiconfig.hpp"
#include "util/pugixml.hpp"
#include "util/translationString.h"
/*Memory*/
#include "util/memory/pattern.h"
#include "util/memory/patternBatch.h"
#include "util/memory/memory.h"
#include "util/memory/VPBypass.h"

/*Natives*/
#include "natives/crossmap.h"
#include "natives/invoker.h"
#include "natives/natives.h"

/*ReClass*/
#include "util/memory/reclass.h"

/*Backend*/
#include "backend/backendHooking.h"
#include "backend/backendMain.h"
#include "backend/backendNatives.h"

/*Renderer*/
#include "menu/renderer.h"

/*Input*/
#include "util/input/keyboard.h"
#include "util/input/controller.h"
#include "util/input/input.h"
#include "util/input/mouse.h"
#include "menu/util/menuInput.h"
#include "menu/util/scaleform.h"

/*Menu Util*/
#include "menu/util/playerManager.h"
#include "menu/util/entityControl.h"
#include "menu/util/animatedYtd.h"
#include "menu/util/playerManager.h"
#include "menu/util/entityControl.h"
/*Option*/
#include "menu/options/option.h"
#include "menu/options/breakOption.h"
#include "menu/options/buttonOption.h"
#include "menu/options/toggleOption.h"
#include "menu/options/numberOption.h"
#include "menu/options/scrollOption.h"
#include "menu/options/submenuOption.h"

/*Submenu*/
#include "menu/submenu.h"
#include "menu/submenuHandler.h"

/*Menu*/
#include "menu/globals.h"
#include "menu/menu.h"
#include "menu/util/menuFunctions.h"
