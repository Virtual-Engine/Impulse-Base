#pragma once

#define _i Invoker::invoke

namespace SYSTEM
{
	inline void WAIT(int ms) { _i<Void>(0x4EDE34FBADD967A6, ms); } // 0x4EDE34FBADD967A6 0x7715C03B b323
	inline int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return _i<int>(0xE81651AD79516E48, scriptName, stackSize); } // 0xE81651AD79516E48 0x3F166D0E b323
	inline int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return _i<int>(0xB8BA7F44DF1575E1, scriptName, args, argCount, stackSize); } // 0xB8BA7F44DF1575E1 0x4A2100E4 b323
	inline int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return _i<int>(0xEB1C67C3A5333A92, scriptHash, stackSize); } // 0xEB1C67C3A5333A92 0x8D15BE5D b323
	inline int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return _i<int>(0xC4BB298BD441BE78, scriptHash, args, argCount, stackSize); } // 0xC4BB298BD441BE78 0xE38A3AD4 b323
	inline int TIMERA() { return _i<int>(0x83666F9FB8FEBD4B); } // 0x83666F9FB8FEBD4B 0x45C8C188 b323
	inline int TIMERB() { return _i<int>(0xC9D9444186B5A374); } // 0xC9D9444186B5A374 0x330A9C0C b323
	inline void SETTIMERA(int value) { _i<Void>(0xC1B1E9A034A63A62, value); } // 0xC1B1E9A034A63A62 0x35785333 b323
	inline void SETTIMERB(int value) { _i<Void>(0x5AE11BC36633DE4E, value); } // 0x5AE11BC36633DE4E 0x27C1B7C6 b323
	inline float TIMESTEP() { return _i<float>(0x0000000050597EE2); } // 0x0000000050597EE2 0x50597EE2 b323
	inline float SIN(float value) { return _i<float>(0x0BADBFA3B172435F, value); } // 0x0BADBFA3B172435F 0xBF987F58 b323
	inline float COS(float value) { return _i<float>(0xD0FFB162F40A139C, value); } // 0xD0FFB162F40A139C 0x00238FE9 b323
	inline float SQRT(float value) { return _i<float>(0x71D93B57D07F9804, value); } // 0x71D93B57D07F9804 0x145C7701 b323
	inline float POW(float base, float exponent) { return _i<float>(0xE3621CC40F31FE2E, base, exponent); } // 0xE3621CC40F31FE2E 0x85D134F8 b323
	inline float LOG10(float value) { return _i<float>(0xE816E655DE37FE20, value); } // 0xE816E655DE37FE20 b1493
	inline float VMAG(float x, float y, float z) { return _i<float>(0x652D2EEEF1D3E62C, x, y, z); } // 0x652D2EEEF1D3E62C 0x1FCF1ECD b323
	inline float VMAG2(float x, float y, float z) { return _i<float>(0xA8CEACB4F35AE058, x, y, z); } // 0xA8CEACB4F35AE058 0xE796E629 b323
	inline float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return _i<float>(0x2A488C176D52CCA5, x1, y1, z1, x2, y2, z2); } // 0x2A488C176D52CCA5 0x3C08ECB7 b323
	inline float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return _i<float>(0xB7A628320EFF8E47, x1, y1, z1, x2, y2, z2); } // 0xB7A628320EFF8E47 0xC85DEF1F b323
	inline int SHIFT_LEFT(int value, int bitShift) { return _i<int>(0xEDD95A39E5544DE8, value, bitShift); } // 0xEDD95A39E5544DE8 0x314CC6CD b323
	inline int SHIFT_RIGHT(int value, int bitShift) { return _i<int>(0x97EF1E5BCE9DC075, value, bitShift); } // 0x97EF1E5BCE9DC075 0x352633CA b323
	inline int FLOOR(float value) { return _i<int>(0xF34EE736CF047844, value); } // 0xF34EE736CF047844 0x32E9BE04 b323
	inline int CEIL(float value) { return _i<int>(0x11E019C8F43ACC8A, value); } // 0x11E019C8F43ACC8A 0xD536A1DF b323
	inline int ROUND(float value) { return _i<int>(0xF2DB717A73826179, value); } // 0xF2DB717A73826179 0x323B0E24 b323
	inline float TO_FLOAT(int value) { return _i<float>(0xBBDA792448DB5A89, value); } // 0xBBDA792448DB5A89 0x67116627 b323
	inline void SET_THIS_THREAD_PRIORITY(int priority) { _i<Void>(0x42B65DEEF2EDF2A1, priority); } // 0x42B65DEEF2EDF2A1 b877
}

namespace APP
{
	inline BOOL APP_DATA_VALID() { return _i<BOOL>(0x846AA8E7D55EE5B6); } // 0x846AA8E7D55EE5B6 0x72BDE002 b323
	inline int APP_GET_INT(const char* property) { return _i<int>(0xD3A58A12C77D9D4B, property); } // 0xD3A58A12C77D9D4B 0x2942AAD2 b323
	inline float APP_GET_FLOAT(const char* property) { return _i<float>(0x1514FB24C02C2322, property); } // 0x1514FB24C02C2322 0xD87F3A1C b323
	inline const char* APP_GET_STRING(const char* property) { return _i<const char*>(0x749B023950D2311C, property); } // 0x749B023950D2311C 0x849CEB80 b323
	inline void APP_SET_INT(const char* property, int value) { _i<Void>(0x607E8E3D3E4F9611, property, value); } // 0x607E8E3D3E4F9611 0x1B509C32 b323
	inline void APP_SET_FLOAT(const char* property, float value) { _i<Void>(0x25D7687C68E0DAA4, property, value); } // 0x25D7687C68E0DAA4 0xF3076135 b323
	inline void APP_SET_STRING(const char* property, const char* value) { _i<Void>(0x3FF2FCEC4B7721B4, property, value); } // 0x3FF2FCEC4B7721B4 0x23DF19A8 b323
	inline void APP_SET_APP(const char* appName) { _i<Void>(0xCFD0406ADAF90D2B, appName); } // 0xCFD0406ADAF90D2B 0x8BAC4146 b323
	inline void APP_SET_BLOCK(const char* blockName) { _i<Void>(0x262AB456A3D21F93, blockName); } // 0x262AB456A3D21F93 0xC2D54DD9 b323
	inline void APP_CLEAR_BLOCK() { _i<Void>(0x5FE1DF3342DB7DBA); } // 0x5FE1DF3342DB7DBA 0xDAB86A18 b323
	inline void APP_CLOSE_APP() { _i<Void>(0xE41C65E07A5F05FC); } // 0xE41C65E07A5F05FC 0x03767C7A b323
	inline void APP_CLOSE_BLOCK() { _i<Void>(0xE8E3FCF72EAC0EF8); } // 0xE8E3FCF72EAC0EF8 0xED97B202 b323
	inline BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return _i<BOOL>(0x71EEE69745088DA0); } // 0x71EEE69745088DA0 0xD368BA15 b323
	inline BOOL APP_HAS_SYNCED_DATA(const char* appName) { return _i<BOOL>(0xCA52279A7271517F, appName); } // 0xCA52279A7271517F 0x1DE2A63D b323
	inline void APP_SAVE_DATA() { _i<Void>(0x95C5D356CDA6E85F); } // 0x95C5D356CDA6E85F 0x84A3918D b323
	inline int APP_GET_DELETED_FILE_STATUS() { return _i<int>(0xC9853A2BE3DED1A6); } // 0xC9853A2BE3DED1A6 0x784D550B b323
	inline BOOL APP_DELETE_APP_DATA(const char* appName) { return _i<BOOL>(0x44151AEA95C8A003, appName); } // 0x44151AEA95C8A003 0x2A2FBD1C b323
}

namespace AUDIO
{
	// All found occurrences in b617d, sorted alphabetically and identical lines removed: https://pastebin.com/RFb4GTny
	// 
	// AUDIO::PLAY_PED_RINGTONE("Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
	// AUDIO::PLAY_PED_RINGTONE("Dial_and_Remote_Ring", PLAYER::PLAYER_PED_ID(), 1);
	// 
	inline void PLAY_PED_RINGTONE(const char* ringtoneName, Ped ped, BOOL p2) { _i<Void>(0xF9E56683CA8E11A5, ringtoneName, ped, p2); } // 0xF9E56683CA8E11A5 0x1D530E47 b323
	inline BOOL IS_PED_RINGTONE_PLAYING(Ped ped) { return _i<BOOL>(0x1E8E5E20937E3137, ped); } // 0x1E8E5E20937E3137 0xFE576EE4 b323
	inline void STOP_PED_RINGTONE(Ped ped) { _i<Void>(0x6C5AE23EFA885092, ped); } // 0x6C5AE23EFA885092 0xFEEA107C b323
	inline BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return _i<BOOL>(0x7497D2CE2C30D24C); } // 0x7497D2CE2C30D24C 0x4ED1400A b323
	inline BOOL IS_MOBILE_INTERFERENCE_ACTIVE() { return _i<BOOL>(0xC8B1B2425604CDD0); } // 0xC8B1B2425604CDD0 0x16FB88B5 b323
	inline int GET_CURRENT_TV_SHOW_PLAY_TIME() { return _i<int>(0xDD3AA743AB7D4D75); } // 0xDD3AA743AB7D4D75 b3095
	inline void CREATE_NEW_SCRIPTED_CONVERSATION() { _i<Void>(0xD2C91A0B572AAE56); } // 0xD2C91A0B572AAE56 0xB2BC25F8 b323
	inline void ADD_LINE_TO_CONVERSATION(int index, const char* p1, const char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) { _i<Void>(0xC5EF963405593646, index, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); } // 0xC5EF963405593646 0x96CD0513 b323
	inline void ADD_PED_TO_CONVERSATION(int index, Ped ped, const char* p2) { _i<Void>(0x95D9F4BC443956E7, index, ped, p2); } // 0x95D9F4BC443956E7 0xF8D5EB86 b323
	inline void SET_POSITION_FOR_NULL_CONV_PED(Any p0, float p1, float p2, float p3) { _i<Void>(0x33E3C6C6F2F0B506, p0, p1, p2, p3); } // 0x33E3C6C6F2F0B506 0x73C6F979 b323
	inline void SET_ENTITY_FOR_NULL_CONV_PED(int p0, Entity entity) { _i<Void>(0x892B6AB8F33606F5, p0, entity); } // 0x892B6AB8F33606F5 0x88203DDA b323
	inline void SET_MICROPHONE_POSITION(BOOL toggle, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { _i<Void>(0xB6AE90EDDE95C762, toggle, x1, y1, z1, x2, y2, z2, x3, y3, z3); } // 0xB6AE90EDDE95C762 0xAD7BB191 b323
	inline void SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(BOOL p0) { _i<Void>(0x0B568201DD99F0EB, p0); } // 0x0B568201DD99F0EB 0x1193ED6E b323
	inline void SET_CONVERSATION_AUDIO_PLACEHOLDER(BOOL p0) { _i<Void>(0x61631F5DF50D1C34, p0); } // 0x61631F5DF50D1C34 b323
	inline void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { _i<Void>(0x252E5F915EABB675, p0, p1); } // 0x252E5F915EABB675 0x38E42D07 b323
	inline void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { _i<Void>(0x6004BCB0E226AAEA, p0, p1); } // 0x6004BCB0E226AAEA 0x9ACB213A b323
	inline void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { _i<Void>(0x6B17C62C9635D2DC, p0, p1, p2, p3); } // 0x6B17C62C9635D2DC 0xE5DE7D9D b323
	inline void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { _i<Void>(0x3B3CAD6166916D87, p0, p1, p2, p3); } // 0x3B3CAD6166916D87 0xDDF5C579 b323
	inline void START_PRELOADED_CONVERSATION() { _i<Void>(0x23641AFE870AF385); } // 0x23641AFE870AF385 0xA170261B b323
	inline BOOL GET_IS_PRELOADED_CONVERSATION_READY() { return _i<BOOL>(0xE73364DB90778FFA); } // 0xE73364DB90778FFA 0x336F3D35 b323
	inline BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return _i<BOOL>(0x16754C556D2EDE3D); } // 0x16754C556D2EDE3D 0xCB8FD96F b323
	inline BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return _i<BOOL>(0xDF0D54BE7A776737); } // 0xDF0D54BE7A776737 0xE1870EA9 b323
	inline int GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return _i<int>(0x480357EE890C295A); } // 0x480357EE890C295A 0x9620E41F b323
	inline void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { _i<Void>(0x8530AD776CD72B12, p0); } // 0x8530AD776CD72B12 0xE2C9C6F8 b323
	inline void RESTART_SCRIPTED_CONVERSATION() { _i<Void>(0x9AEB285D1818C9AC); } // 0x9AEB285D1818C9AC 0x6CB24B56 b323
	inline int STOP_SCRIPTED_CONVERSATION(BOOL p0) { return _i<int>(0xD79DEEFB53455EBA, p0); } // 0xD79DEEFB53455EBA 0xAB77DA7D b323
	inline void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { _i<Void>(0x9663FE6B7A61EB00); } // 0x9663FE6B7A61EB00 0x85C98304 b323
	inline void INTERRUPT_CONVERSATION(Ped ped, const char* voiceline, const char* speaker) { _i<Void>(0xA018A12E5C5C2FA6, ped, voiceline, speaker); } // 0xA018A12E5C5C2FA6 0xF3A67AF3 b323
	inline void INTERRUPT_CONVERSATION_AND_PAUSE(Ped ped, const char* p1, const char* speaker) { _i<Void>(0x8A694D7A68F8DC38, ped, p1, speaker); } // 0x8A694D7A68F8DC38 0xDD4A3F1F b323
	inline int GET_VARIATION_CHOSEN_FOR_SCRIPTED_LINE(Any* p0) { return _i<int>(0xAA19F5572C38B564, p0); } // 0xAA19F5572C38B564 0xB58B8FF3 b323
	inline void SET_NO_DUCKING_FOR_CONVERSATION(BOOL p0) { _i<Void>(0xB542DE8C3D1CB210, p0); } // 0xB542DE8C3D1CB210 0x789D8C6C b323
	// This native does absolutely nothing, just a nullsub
	inline void REGISTER_SCRIPT_WITH_AUDIO(int p0) { _i<Void>(0xC6ED9D5092438D91, p0); } // 0xC6ED9D5092438D91 0xA6203643 b323
	// This native does absolutely nothing, just a nullsub
	inline void UNREGISTER_SCRIPT_WITH_AUDIO() { _i<Void>(0xA8638BE228D4751A); } // 0xA8638BE228D4751A 0x66728EFE b323
	// All occurrences and usages found in b617d: https://pastebin.com/NzZZ2Tmm
	// Full list of mission audio bank names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/missionAudioBankNames.json
	// p2 is always -1
	inline BOOL REQUEST_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return _i<BOOL>(0x7345BDD95E62E0F2, audioBank, p1, p2); } // 0x7345BDD95E62E0F2 0x916E37CA b323
	// All occurrences and usages found in b617d, sorted alphabetically and identical lines removed: https://pastebin.com/XZ1tmGEz
	// Full list of ambient audio bank names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/ambientAudioBankNames.json
	// p2 is always -1
	inline BOOL REQUEST_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return _i<BOOL>(0xFE02FFBED8CA9D99, audioBank, p1, p2); } // 0xFE02FFBED8CA9D99 0x23C88BC7 b323
	// All occurrences and usages found in b617d, sorted alphabetically and identical lines removed: https://pastebin.com/AkmDAVn6
	// Full list of script audio bank names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/scriptAudioBankNames.json
	// p2 is always -1
	inline BOOL REQUEST_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return _i<BOOL>(0x2F844A8B08D76685, audioBank, p1, p2); } // 0x2F844A8B08D76685 0x21322887 b323
	// p2 is always -1
	inline BOOL HINT_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return _i<BOOL>(0x40763EA7B9B783E7, audioBank, p1, p2); } // 0x40763EA7B9B783E7 b573
	// p2 is always -1
	inline BOOL HINT_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return _i<BOOL>(0x8F8C0E370AE62F5C, audioBank, p1, p2); } // 0x8F8C0E370AE62F5C 0xF1850DDC b323
	// p2 is always -1
	inline BOOL HINT_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return _i<BOOL>(0xFB380A29641EC31A, audioBank, p1, p2); } // 0xFB380A29641EC31A 0x41FA0E51 b323
	inline void RELEASE_MISSION_AUDIO_BANK() { _i<Void>(0x0EC92A1BF0857187); } // 0x0EC92A1BF0857187 0x8E8824C7 b323
	inline void RELEASE_AMBIENT_AUDIO_BANK() { _i<Void>(0x65475A218FFAA93D); } // 0x65475A218FFAA93D 0x8C938784 b323
	// Full list of script audio bank names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/scriptAudioBankNames.json
	inline void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { _i<Void>(0x77ED170667F50170, audioBank); } // 0x77ED170667F50170 0x16707ABC b323
	inline void RELEASE_SCRIPT_AUDIO_BANK() { _i<Void>(0x7A2D8AD0A9EB9C3F); } // 0x7A2D8AD0A9EB9C3F 0x22F865E5 b323
	inline void UNHINT_AMBIENT_AUDIO_BANK() { _i<Void>(0x19AF7ED9B9D23058); } // 0x19AF7ED9B9D23058 0xA58BBF4F b323
	inline void UNHINT_SCRIPT_AUDIO_BANK() { _i<Void>(0x9AC92EED5E4793AB); } // 0x9AC92EED5E4793AB 0xE67446E9 b323
	inline void UNHINT_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { _i<Void>(0x11579D940949C49E, audioBank); } // 0x11579D940949C49E b678
	inline int GET_SOUND_ID() { return _i<int>(0x430386FE9BF80B45); } // 0x430386FE9BF80B45 0x6AE0AD56 b323
	inline void RELEASE_SOUND_ID(int soundId) { _i<Void>(0x353FC880830B88FA, soundId); } // 0x353FC880830B88FA 0x9C080899 b323
	// All found occurrences in b617d, sorted alphabetically and identical lines removed: https://pastebin.com/A8Ny8AHZ
	// 
	// Full list of audio / sound names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/soundNames.json
	inline void PLAY_SOUND(int soundId, const char* audioName, const char* audioRef, BOOL p3, Any p4, BOOL p5) { _i<Void>(0x7FF4944CC209192D, soundId, audioName, audioRef, p3, p4, p5); } // 0x7FF4944CC209192D 0xB6E1917F b323
	// List: https://pastebin.com/DCeRiaLJ
	// 
	// All occurrences as of Cayo Perico Heist DLC (b2189), sorted alphabetically and identical lines removed: https://git.io/JtLxM
	// 
	// Full list of audio / sound names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/soundNames.json
	inline void PLAY_SOUND_FRONTEND(int soundId, const char* audioName, const char* audioRef, BOOL p3) { _i<Void>(0x67C540AA08E4A6F5, soundId, audioName, audioRef, p3); } // 0x67C540AA08E4A6F5 0x2E458F74 b323
	// Only call found in the b617d scripts:
	// 
	// AUDIO::PLAY_DEFERRED_SOUND_FRONTEND("BACK", "HUD_FREEMODE_SOUNDSET");
	// 
	// Full list of audio / sound names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/soundNames.json
	inline void PLAY_DEFERRED_SOUND_FRONTEND(const char* soundName, const char* soundsetName) { _i<Void>(0xCADA5A0D0702381E, soundName, soundsetName); } // 0xCADA5A0D0702381E 0xC70E6CFA b323
	// All found occurrences in b617d, sorted alphabetically and identical lines removed: https://pastebin.com/f2A7vTj0 
	// No changes made in b678d.
	// 
	// gtaforums.com/topic/795622-audio-for-mods
	// 
	// Full list of audio / sound names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/soundNames.json
	inline void PLAY_SOUND_FROM_ENTITY(int soundId, const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p5) { _i<Void>(0xE65F427EB70AB1ED, soundId, audioName, entity, audioRef, isNetwork, p5); } // 0xE65F427EB70AB1ED 0x95AE00F8 b323
	// Only used with "formation_flying_blips_soundset" and "biker_formation_blips_soundset".
	// p1 is always the model of p2
	inline void PLAY_SOUND_FROM_ENTITY_HASH(int soundId, Hash model, Entity entity, Hash soundSetHash, Any p4, Any p5) { _i<Void>(0x5B9853296731E88D, soundId, model, entity, soundSetHash, p4, p5); } // 0x5B9853296731E88D b877
	// All found occurrences in b617d, sorted alphabetically and identical lines removed: https://pastebin.com/eeFc5DiW
	// 
	// gtaforums.com/topic/795622-audio-for-mods
	// 
	// Full list of audio / sound names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/soundNames.json
	inline void PLAY_SOUND_FROM_COORD(int soundId, const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, int range, BOOL p8) { _i<Void>(0x8D8686B622B88120, soundId, audioName, x, y, z, audioRef, isNetwork, range, p8); } // 0x8D8686B622B88120 0xCAD3E2D5 b323
	inline void UPDATE_SOUND_COORD(int soundId, float x, float y, float z) { _i<Void>(0x7EC3C679D0E7E46B, soundId, x, y, z); } // 0x7EC3C679D0E7E46B b678
	inline void STOP_SOUND(int soundId) { _i<Void>(0xA3B0C41BA5CC0BB5, soundId); } // 0xA3B0C41BA5CC0BB5 0xCD7F4030 b323
	// Could this be used alongside either, 
	// SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES or _SET_NETWORK_ID_SYNC_TO_PLAYER to make it so other players can hear the sound while online? It'd be a bit troll-fun to be able to play the Zancudo UFO creepy sounds globally.
	inline int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return _i<int>(0x2DE3F0A134FFBC0D, soundId); } // 0x2DE3F0A134FFBC0D 0x2576F610 b323
	inline int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return _i<int>(0x75262FD12D0A1C84, netId); } // 0x75262FD12D0A1C84 0xD064D4DC b323
	inline void SET_VARIABLE_ON_SOUND(int soundId, const char* variable, float p2) { _i<Void>(0xAD6B3148A78AE9B6, soundId, variable, p2); } // 0xAD6B3148A78AE9B6 0x606EE5FA b323
	// From the scripts, p0:
	// 
	// "ArmWrestlingIntensity",
	// "INOUT",
	// "Monkey_Stream",
	// "ZoomLevel"
	inline void SET_VARIABLE_ON_STREAM(const char* variable, float p1) { _i<Void>(0x2F9D3834AEB9EF79, variable, p1); } // 0x2F9D3834AEB9EF79 0xF67BB44C b323
	inline void OVERRIDE_UNDERWATER_STREAM(const char* p0, BOOL p1) { _i<Void>(0xF2A9CDABCEA04BD6, p0, p1); } // 0xF2A9CDABCEA04BD6 0x9A083B7E b323
	// AUDIO::SET_VARIABLE_ON_UNDER_WATER_STREAM("inTunnel", 1.0);
	// AUDIO::SET_VARIABLE_ON_UNDER_WATER_STREAM("inTunnel", 0.0);
	inline void SET_VARIABLE_ON_UNDER_WATER_STREAM(const char* variableName, float value) { _i<Void>(0x733ADF241531E5C2, variableName, value); } // 0x733ADF241531E5C2 0x62D026BE b323
	inline BOOL HAS_SOUND_FINISHED(int soundId) { return _i<BOOL>(0xFCBDCE714A7C88E5, soundId); } // 0xFCBDCE714A7C88E5 0xE85AEC2E b323

	// Note: A list of Name and Parameters can be found here https://pastebin.com/1GZS5dCL
	// 
	// Full list of speeches and voices names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/speeches.json
	inline void PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { _i<Void>(0x8E04FEDD28D42462, ped, speechName, speechParam, p3); } // 0x8E04FEDD28D42462 0x5C57B85D b323
	// Plays ambient speech. See also _0x5C57B85D.
	// 
	// See PLAY_PED_AMBIENT_SPEECH_NATIVE for parameter specifications.
	// 
	// Full list of speeches and voices names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/speeches.json
	inline void PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { _i<Void>(0xC6941B4A3A8FBBB9, ped, speechName, speechParam, p3); } // 0xC6941B4A3A8FBBB9 0x444180DB b323
	// This is the same as PLAY_PED_AMBIENT_SPEECH_NATIVE and PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE but it will allow you to play a speech file from a specific voice file. It works on players and all peds, even animals.
	// 
	// EX (C#):
	// GTA.Native.Function.Call(Hash.PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE, Game.Player.Character, "GENERIC_INSULT_HIGH", "s_m_y_sheriff_01_white_full_01", "SPEECH_PARAMS_FORCE_SHOUTED", 0);
	// 
	// The first param is the ped you want to play it on, the second is the speech name, the third is the voice name, the fourth is the speech param, and the last param is usually always 0.
	// 
	// Full list of speeches and voices names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/speeches.json
	inline void PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Ped ped, const char* speechName, const char* voiceName, const char* speechParam, BOOL p4) { _i<Void>(0x3523634255FC3318, ped, speechName, voiceName, speechParam, p4); } // 0x3523634255FC3318 0x8386AE28 b323
	// Full list of speeches and voices names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/speeches.json
	inline void PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(const char* speechName, const char* voiceName, float x, float y, float z, const char* speechParam) { _i<Void>(0xED640017ED337E45, speechName, voiceName, x, y, z, speechParam); } // 0xED640017ED337E45 0xA1A1402E b323
	// This native enables the audio flag "TrevorRageIsOverridden" and sets the voice effect to `voiceEffect`
	inline void OVERRIDE_TREVOR_RAGE(const char* voiceEffect) { _i<Void>(0x13AD665062541A7E, voiceEffect); } // 0x13AD665062541A7E 0x05B9B5CF b323
	inline void RESET_TREVOR_RAGE() { _i<Void>(0xE78503B10C4314E0); } // 0xE78503B10C4314E0 0xE80CF0D4 b323
	inline void SET_PLAYER_ANGRY(Ped ped, BOOL toggle) { _i<Void>(0xEA241BB04110F091, ped, toggle); } // 0xEA241BB04110F091 0x782CA58D b323
	// Needs another parameter [int p2]. The signature is PED::PLAY_PAIN(Ped ped, int painID, int p1, int p2);
	// 
	// Last 2 parameters always seem to be 0.
	// 
	// EX: Function.Call(Hash.PLAY_PAIN, TestPed, 6, 0, 0);
	// 
	// Known Pain IDs
	// ________________________
	// 
	// 1 - Doesn't seem to do anything. Does NOT crash the game like previously said. (Latest patch)
	// 6 - Scream (Short)
	// 7 - Scared Scream (Kinda Long)
	// 8 - On Fire
	// 
	inline void PLAY_PAIN(Ped ped, int painID, int p1, Any p3) { _i<Void>(0xBC9AE166038A5CEC, ped, painID, p1, p3); } // 0xBC9AE166038A5CEC 0x874BD6CB b323
	inline void RELEASE_WEAPON_AUDIO() { _i<Void>(0xCE4AC0439F607045); } // 0xCE4AC0439F607045 0x6096504C b323
	inline void ACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { _i<Void>(0xD01005D2BA2EB778, mode); } // 0xD01005D2BA2EB778 0x59A3A17D b323
	// see ACTIVATE_AUDIO_SLOWMO_MODE for modes
	inline void DEACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { _i<Void>(0xDDC635D5B3262C56, mode); } // 0xDDC635D5B3262C56 0x0E387BFE b323
	// Audio List
	// gtaforums.com/topic/795622-audio-for-mods/
	// 
	// All found occurrences in b617d, sorted alphabetically and identical lines removed: https://pastebin.com/FTeAj4yZ
	inline void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) { _i<Void>(0x6C8065A3B780185B, ped, name); } // 0x6C8065A3B780185B 0xBD2EA1A1 b323
	inline void SET_AMBIENT_VOICE_NAME_HASH(Ped ped, Hash hash) { _i<Void>(0x9A53DED9921DE990, ped, hash); } // 0x9A53DED9921DE990 b463
	inline Hash GET_AMBIENT_VOICE_NAME_HASH(Ped ped) { return _i<Hash>(0x5E203DA2BA15D436, ped); } // 0x5E203DA2BA15D436 b463
	// Assigns some ambient voice to the ped.
	inline void SET_PED_VOICE_FULL(Ped ped) { _i<Void>(0x40CF0D12D142A9E8, ped); } // 0x40CF0D12D142A9E8 b323
	inline void SET_PED_RACE_AND_VOICE_GROUP(Ped ped, int p1, Hash voiceGroup) { _i<Void>(0x1B7ABE26CBCBF8C7, ped, p1, voiceGroup); } // 0x1B7ABE26CBCBF8C7 b372
	inline void SET_PED_VOICE_GROUP(Ped ped, Hash voiceGroupHash) { _i<Void>(0x7CDC8C3B89F661B3, ped, voiceGroupHash); } // 0x7CDC8C3B89F661B3 b323
	// Dat151RelType == 29
	inline void SET_PED_VOICE_GROUP_FROM_RACE_TO_PVG(Ped ped, Hash voiceGroupHash) { _i<Void>(0x0BABC1345ABBFB16, ped, voiceGroupHash); } // 0x0BABC1345ABBFB16 b2699
	// BOOL p1: 0 = Female; 1 = Male
	inline void SET_PED_GENDER(Ped ped, BOOL p1) { _i<Void>(0xA5342D390CDA41D6, ped, p1); } // 0xA5342D390CDA41D6 b323
	inline void STOP_CURRENT_PLAYING_SPEECH(Ped ped) { _i<Void>(0x7A73D05A607734C7, ped); } // 0x7A73D05A607734C7 0x5B7463F4 b323
	inline void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) { _i<Void>(0xB8BEC0CA6F0EDB0F, ped); } // 0xB8BEC0CA6F0EDB0F 0xBB8E64BF b323
	inline BOOL IS_AMBIENT_SPEECH_PLAYING(Ped ped) { return _i<BOOL>(0x9072C8B49907BFAD, ped); } // 0x9072C8B49907BFAD 0x1972E8AA b323
	inline BOOL IS_SCRIPTED_SPEECH_PLAYING(Ped p0) { return _i<BOOL>(0xCC9AA18DCC7084F4, p0); } // 0xCC9AA18DCC7084F4 0x2C653904 b323
	inline BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return _i<BOOL>(0x729072355FA39EC9, ped); } // 0x729072355FA39EC9 0x2B74A6D6 b323
	inline BOOL IS_ANY_POSITIONAL_SPEECH_PLAYING() { return _i<BOOL>(0x30CA2EF91D15ADF8); } // 0x30CA2EF91D15ADF8 b2189
	// Checks if the ped can play the speech or has the speech file, p2 is usually false.
	inline BOOL DOES_CONTEXT_EXIST_FOR_THIS_PED(Ped ped, const char* speechName, BOOL p2) { return _i<BOOL>(0x49B99BF3FDA89A7A, ped, speechName, p2); } // 0x49B99BF3FDA89A7A 0x8BD5F11E b323
	inline BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return _i<BOOL>(0x049E937F18F4020C, ped); } // 0x049E937F18F4020C 0x7B2F0743 b323
	// Sets the ped drunk sounds.  Only works with PLAYER_PED_ID
	// 
	// ====================================================
	// 
	// As mentioned above, this only sets the drunk sound to ped/player.
	// 
	// To give the Ped a drunk effect with drunk walking animation try using SET_PED_MOVEMENT_CLIPSET
	// 
	// Below is an example
	// 
	// if (!Function.Call<bool>(Hash.HAS_ANIM_SET_LOADED, "move_m@drunk@verydrunk"))
	//                 {
	//                     Function.Call(Hash.REQUEST_ANIM_SET, "move_m@drunk@verydrunk");
	//                 }
	//                 Function.Call(Hash.SET_PED_MOVEMENT_CLIPSET, Ped.Handle, "move_m@drunk@verydrunk", 0x3E800000);
	// 
	// 
	// 
	// And to stop the effect use
	// RESET_PED_MOVEMENT_CLIPSET
	inline void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { _i<Void>(0x95D2D383D5396B8A, ped, toggle); } // 0x95D2D383D5396B8A 0xD2EA77A3 b323
	// Plays sounds from a ped with chop model. For example it used to play bark or sniff sounds. p1 is always 3 or 4294967295 in decompiled scripts. By a quick disassembling I can assume that this arg is unused.
	// This native is works only when you call it on the ped with right model (ac_chop only ?)
	// Speech Name can be: CHOP_SNIFF_SEQ CHOP_WHINE CHOP_LICKS_MOUTH CHOP_PANT bark GROWL SNARL BARK_SEQ
	inline void PLAY_ANIMAL_VOCALIZATION(Ped pedHandle, int p1, const char* speechName) { _i<Void>(0xEE066C7006C49C0A, pedHandle, p1, speechName); } // 0xEE066C7006C49C0A 0x498849F3 b323
	inline BOOL IS_ANIMAL_VOCALIZATION_PLAYING(Ped pedHandle) { return _i<BOOL>(0xC265DF9FB44A9FBD, pedHandle); } // 0xC265DF9FB44A9FBD 0x0CBAF2EF b323
	// mood can be 0 or 1 (it's not a boolean value!). Effects audio of the animal.
	inline void SET_ANIMAL_MOOD(Ped animal, int mood) { _i<Void>(0xCC97B29285B1DC3B, animal, mood); } // 0xCC97B29285B1DC3B 0x3EA7C6CB b323
	inline BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return _i<BOOL>(0xB35CE999E8EF317E); } // 0xB35CE999E8EF317E 0x6E502A5B b323
	inline void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { _i<Void>(0xBF286C554784F3DF, state); } // 0xBF286C554784F3DF 0xE1E0ED34 b323
	// Returns 255 (radio off index) if the function fails.
	inline int GET_PLAYER_RADIO_STATION_INDEX() { return _i<int>(0xE8AF77C4C06ADC93); } // 0xE8AF77C4C06ADC93 0x1C4946AC b323
	// Returns active radio station name
	inline const char* GET_PLAYER_RADIO_STATION_NAME() { return _i<const char*>(0xF6D733C32076AD03); } // 0xF6D733C32076AD03 0xD909C107 b323
	// Converts radio station index to string. Use HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION to get the user-readable text.
	inline const char* GET_RADIO_STATION_NAME(int radioStation) { return _i<const char*>(0xB28ECA15046CA8B9, radioStation); } // 0xB28ECA15046CA8B9 0x3DF493BC b323
	inline int GET_PLAYER_RADIO_STATION_GENRE() { return _i<int>(0xA571991A7FE6CCEB); } // 0xA571991A7FE6CCEB 0x872CF0EA b323
	inline BOOL IS_RADIO_RETUNING() { return _i<BOOL>(0xA151A7394A214E65); } // 0xA151A7394A214E65 0xCF29097B b323
	inline BOOL IS_RADIO_FADED_OUT() { return _i<BOOL>(0x0626A247D2405330); } // 0x0626A247D2405330 0x815CAE99 b323
	// Tune Forward...
	inline void SET_RADIO_RETUNE_UP() { _i<Void>(0xFF266D1D0EB1195D); } // 0xFF266D1D0EB1195D 0x53DB6994 b323
	// Tune Backwards...
	inline void SET_RADIO_RETUNE_DOWN() { _i<Void>(0xDD6BCF9E94425DF9); } // 0xDD6BCF9E94425DF9 0xD70ECC80 b323
	// List of radio stations that are in the wheel, in clockwise order, as of LS Tuners DLC: https://git.io/J8a3k
	// An older list including hidden radio stations: https://pastebin.com/Kj9t38KF
	inline void SET_RADIO_TO_STATION_NAME(const char* stationName) { _i<Void>(0xC69EDA28699D5107, stationName); } // 0xC69EDA28699D5107 0x7B36E35E b323
	// List of radio stations that are in the wheel, in clockwise order, as of LS Tuners DLC: https://git.io/J8a3k
	// An older list including hidden radio stations: https://pastebin.com/Kj9t38KF
	inline void SET_VEH_RADIO_STATION(Vehicle vehicle, const char* radioStation) { _i<Void>(0x1B9C0099CB942AC6, vehicle, radioStation); } // 0x1B9C0099CB942AC6 0xE391F55F b323
	inline void SET_VEH_HAS_NORMAL_RADIO(Vehicle vehicle) { _i<Void>(0x3E45765F3FBB582F, vehicle); } // 0x3E45765F3FBB582F b2372
	inline BOOL IS_VEHICLE_RADIO_ON(Vehicle vehicle) { return _i<BOOL>(0x0BE4BE946463F917, vehicle); } // 0x0BE4BE946463F917 b505
	inline void SET_VEH_FORCED_RADIO_THIS_FRAME(Vehicle vehicle) { _i<Void>(0xC1805D05E6D4FE10, vehicle); } // 0xC1805D05E6D4FE10 0x7ABB89D2 b323
	// Full list of static emitters by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/staticEmitters.json
	inline void SET_EMITTER_RADIO_STATION(const char* emitterName, const char* radioStation, Any p2) { _i<Void>(0xACF57305B12AF907, emitterName, radioStation, p2); } // 0xACF57305B12AF907 0x87431585 b323
	// Example:
	// AUDIO::SET_STATIC_EMITTER_ENABLED((Any*)"LOS_SANTOS_VANILLA_UNICORN_01_STAGE", false);    AUDIO::SET_STATIC_EMITTER_ENABLED((Any*)"LOS_SANTOS_VANILLA_UNICORN_02_MAIN_ROOM", false);    AUDIO::SET_STATIC_EMITTER_ENABLED((Any*)"LOS_SANTOS_VANILLA_UNICORN_03_BACK_ROOM", false);
	// 
	// This turns off surrounding sounds not connected directly to peds.
	// 
	// Full list of static emitters by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/staticEmitters.json
	inline void SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) { _i<Void>(0x399D2D3B33F1B8EB, emitterName, toggle); } // 0x399D2D3B33F1B8EB 0x91F72E92 b323
	// Full list of static emitters by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/staticEmitters.json
	inline void LINK_STATIC_EMITTER_TO_ENTITY(const char* emitterName, Entity entity) { _i<Void>(0x651D3228960D08AF, emitterName, entity); } // 0x651D3228960D08AF b505
	// Sets radio station by index.
	inline void SET_RADIO_TO_STATION_INDEX(int radioStation) { _i<Void>(0xA619B168B8A8570F, radioStation); } // 0xA619B168B8A8570F 0x1D82766D b323
	inline void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { _i<Void>(0xF7F26C6E9CC9EBB8, active); } // 0xF7F26C6E9CC9EBB8 0xB1172075 b323
	// "news" that play on the radio after you've done something in story mode(?)
	inline void UNLOCK_MISSION_NEWS_STORY(int newsStory) { _i<Void>(0xB165AB7C248B2DC1, newsStory); } // 0xB165AB7C248B2DC1 0xCCD9ABE4 b323
	inline BOOL IS_MISSION_NEWS_STORY_UNLOCKED(int newsStory) { return _i<BOOL>(0x66E49BF55B4B1874, newsStory); } // 0x66E49BF55B4B1874 0x27305D37 b323
	inline int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return _i<int>(0x50B196FC9ED6545B); } // 0x50B196FC9ED6545B 0xA2B88CA7 b323
	inline void PLAY_END_CREDITS_MUSIC(BOOL play) { _i<Void>(0xCD536C4D33DCC900, play); } // 0xCD536C4D33DCC900 0x8E88B3CC b323
	inline void SKIP_RADIO_FORWARD() { _i<Void>(0x6DDBBDD98E2E9C25); } // 0x6DDBBDD98E2E9C25 0x10D36630 b323
	inline void FREEZE_RADIO_STATION(const char* radioStation) { _i<Void>(0x344F393B027E38C3, radioStation); } // 0x344F393B027E38C3 0x286BF543 b323
	inline void UNFREEZE_RADIO_STATION(const char* radioStation) { _i<Void>(0xFC00454CF60B91DD, radioStation); } // 0xFC00454CF60B91DD 0x4D46202C b323
	inline void SET_RADIO_AUTO_UNFREEZE(BOOL toggle) { _i<Void>(0xC1AA9F53CE982990, toggle); } // 0xC1AA9F53CE982990 0xA40196BF b323
	inline void SET_INITIAL_PLAYER_STATION(const char* radioStation) { _i<Void>(0x88795F13FACDA88D, radioStation); } // 0x88795F13FACDA88D 0x9B069233 b323
	inline void SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) { _i<Void>(0x19F21E63AE6EAE4E, toggle); } // 0x19F21E63AE6EAE4E 0x52E054CE b323
	// Only found this one in the decompiled scripts:
	// 
	// AUDIO::SET_RADIO_TRACK("RADIO_03_HIPHOP_NEW", "ARM1_RADIO_STARTS");
	// 
	inline void SET_RADIO_TRACK(const char* radioStation, const char* radioTrack) { _i<Void>(0xB39786F201FEE30B, radioStation, radioTrack); } // 0xB39786F201FEE30B 0x76E96212 b323
	inline void SET_RADIO_TRACK_WITH_START_OFFSET(const char* radioStationName, const char* mixName, int p2) { _i<Void>(0x2CB0075110BE1E56, radioStationName, mixName, p2); } // 0x2CB0075110BE1E56 b1493
	inline void SET_NEXT_RADIO_TRACK(const char* radioName, const char* radioTrack, const char* p2, const char* p3) { _i<Void>(0x55ECF4D13D9903B0, radioName, radioTrack, p2, p3); } // 0x55ECF4D13D9903B0 b1868
	inline void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { _i<Void>(0xBB6F1CAEC68B0BCE, vehicle, toggle); } // 0xBB6F1CAEC68B0BCE 0x8D9EDD99 b323
	inline BOOL CAN_VEHICLE_RECEIVE_CB_RADIO(Vehicle vehicle) { return _i<BOOL>(0x032A116663A4D5AC, vehicle); } // 0x032A116663A4D5AC 0xCBA99F4A b323
	inline void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL toggle) { _i<Void>(0x1098355A16064BB3, toggle); } // 0x1098355A16064BB3 0x990085F0 b323
	inline BOOL DOES_PLAYER_VEH_HAVE_RADIO() { return _i<BOOL>(0x109697E2FFBAC8A1); } // 0x109697E2FFBAC8A1 0x46B0C696 b323
	inline BOOL IS_PLAYER_VEH_RADIO_ENABLE() { return _i<BOOL>(0x5F43D83FD6738741); } // 0x5F43D83FD6738741 0x2A3E5E8B b323
	// can't seem to enable radio on cop cars etc
	inline void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { _i<Void>(0x3B988190C0AA6C0B, vehicle, toggle); } // 0x3B988190C0AA6C0B 0x6F812CAB b323
	inline void SET_POSITIONED_PLAYER_VEHICLE_RADIO_EMITTER_ENABLED(Any p0) { _i<Void>(0xDA07819E452FFE8F, p0); } // 0xDA07819E452FFE8F b505
	// Examples:
	// 
	// AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_MICHAEL", 1);
	// AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_MICHAEL", 1);
	// AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_KILL_TREVOR", 1);
	// AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "END_CREDITS_SAVE_MICHAEL_TREVOR", 1);
	// AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "OFF_ROAD_RADIO_ROCK_LIST", 1);
	// AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_06_COUNTRY", "MAGDEMO2_RADIO_DINGHY", 1);
	// AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_16_SILVERLAKE", "SEA_RACE_RADIO_PLAYLIST", 1);
	// AUDIO::SET_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK", "OFF_ROAD_RADIO_ROCK_LIST", 1);
	inline void SET_CUSTOM_RADIO_TRACK_LIST(const char* radioStation, const char* trackListName, BOOL p2) { _i<Void>(0x4E404A9361F75BB2, radioStation, trackListName, p2); } // 0x4E404A9361F75BB2 0x128C3873 b323
	// 3 calls in the b617d scripts, removed duplicate.
	// 
	// AUDIO::CLEAR_CUSTOM_RADIO_TRACK_LIST("RADIO_16_SILVERLAKE");
	// AUDIO::CLEAR_CUSTOM_RADIO_TRACK_LIST("RADIO_01_CLASS_ROCK");
	inline void CLEAR_CUSTOM_RADIO_TRACK_LIST(const char* radioStation) { _i<Void>(0x1654F24A88A8E3FE, radioStation); } // 0x1654F24A88A8E3FE 0x1D766976 b323
	inline int GET_NUM_UNLOCKED_RADIO_STATIONS() { return _i<int>(0xF1620ECB50E01DE7); } // 0xF1620ECB50E01DE7 0xCC91FCF5 b323
	inline int FIND_RADIO_STATION_INDEX(Hash stationNameHash) { return _i<int>(0x8D67489793FF428B, stationNameHash); } // 0x8D67489793FF428B 0xECA1512F b323
	// 6 calls in the b617d scripts, removed identical lines:
	// 
	// AUDIO::SET_RADIO_STATION_MUSIC_ONLY("RADIO_01_CLASS_ROCK", 1);
	// AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 0);
	// AUDIO::SET_RADIO_STATION_MUSIC_ONLY(AUDIO::GET_RADIO_STATION_NAME(10), 1);
	inline void SET_RADIO_STATION_MUSIC_ONLY(const char* radioStation, BOOL toggle) { _i<Void>(0x774BD811F656A122, radioStation, toggle); } // 0x774BD811F656A122 0xB1FF7137 b323
	inline void SET_RADIO_FRONTEND_FADE_TIME(float fadeTime) { _i<Void>(0x2C96CDB04FCA358E, fadeTime); } // 0x2C96CDB04FCA358E 0xC8B514E2 b323
	// AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_16_SILVERLAKE", "MIRRORPARK_LOCKED");
	inline void UNLOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { _i<Void>(0x031ACB6ABA18C729, radioStation, trackListName); } // 0x031ACB6ABA18C729 0xBE998184 b323
	inline void LOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { _i<Void>(0xFF5E5EA2DCEEACF3, radioStation, trackListName); } // 0xFF5E5EA2DCEEACF3 b2372
	// Just a nullsub (i.e. does absolutely nothing) since build 1604.
	inline void UPDATE_UNLOCKABLE_DJ_RADIO_TRACKS(BOOL enableMixes) { _i<Void>(0x47AED84213A47510, enableMixes); } // 0x47AED84213A47510 b1493
	// Disables the radio station (hides it from the radio wheel).
	inline void LOCK_RADIO_STATION(const char* radioStationName, BOOL toggle) { _i<Void>(0x477D9DB48F889591, radioStationName, toggle); } // 0x477D9DB48F889591 b1493
	// Doesn't have an effect in Story Mode.
	inline void SET_RADIO_STATION_AS_FAVOURITE(const char* radioStation, BOOL toggle) { _i<Void>(0x4CAFEBFA21EC188D, radioStation, toggle); } // 0x4CAFEBFA21EC188D b2372
	inline BOOL IS_RADIO_STATION_FAVOURITED(const char* radioStation) { return _i<BOOL>(0x2B1784DB08AFEA79, radioStation); } // 0x2B1784DB08AFEA79 b2699
	inline BOOL GET_NEXT_AUDIBLE_BEAT(float* out1, float* out2, int* out3) { return _i<BOOL>(0xC64A06D939F826F5, out1, out2, out3); } // 0xC64A06D939F826F5 b1493
	// Changes start time of a tracklist (milliseconds)
	// R* uses a random int: MISC::GET_RANDOM_INT_IN_RANGE(0, 13) * 60000)
	inline void FORCE_MUSIC_TRACK_LIST(const char* radioStation, const char* trackListName, int milliseconds) { _i<Void>(0x4E0AF9114608257C, radioStation, trackListName, milliseconds); } // 0x4E0AF9114608257C b2372
	inline int GET_CURRENT_TRACK_PLAY_TIME(const char* radioStationName) { return _i<int>(0x3E65CDE5215832C1, radioStationName); } // 0x3E65CDE5215832C1 b1493
	inline Hash GET_CURRENT_TRACK_SOUND_NAME(const char* radioStationName) { return _i<Hash>(0x34D66BC058019CE0, radioStationName); } // 0x34D66BC058019CE0 b1493
	inline void SET_VEHICLE_MISSILE_WARNING_ENABLED(Vehicle vehicle, BOOL toggle) { _i<Void>(0xF3365489E0DD50F9, vehicle, toggle); } // 0xF3365489E0DD50F9 0x8AFC488D b323
	// Full list of ambient zones by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/ambientZones.json
	inline void SET_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1, BOOL p2) { _i<Void>(0xBDA07E5950085E46, zoneName, p1, p2); } // 0xBDA07E5950085E46 0x2849CAC9 b323
	// This function also has a p2, unknown. Signature AUDIO::CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, bool p1, Any p2);
	// 
	// Still needs more research.
	// 
	// Full list of ambient zones by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/ambientZones.json
	inline void CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1) { _i<Void>(0x218DD44AAAC964FF, zoneName, p1); } // 0x218DD44AAAC964FF 0xCDFF3C82 b323
	inline void SET_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1, BOOL p2) { _i<Void>(0x9748FA4DE50CCE3E, ambientZone, p1, p2); } // 0x9748FA4DE50CCE3E 0xBF80B412 b323
	inline void CLEAR_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1) { _i<Void>(0x120C48C614909FA4, ambientZone, p1); } // 0x120C48C614909FA4 0x38B9B8D4 b323
	// Full list of ambient zones by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/ambientZones.json
	inline void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { _i<Void>(0x1D6650420CEC9D3B, ambientZone, p1, p2); } // 0x1D6650420CEC9D3B 0xC1FFB672 b323
	// Full list of ambient zones by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/ambientZones.json
	inline void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { _i<Void>(0xF3638DAE8C4045E1, ambientZone, p1, p2); } // 0xF3638DAE8C4045E1 0x5F5A2605 b323
	// Full list of ambient zones by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/ambientZones.json
	inline BOOL IS_AMBIENT_ZONE_ENABLED(const char* ambientZone) { return _i<BOOL>(0x01E2817A479A7F9B, ambientZone); } // 0x01E2817A479A7F9B 0xBFABD872 b323
	inline void REFRESH_CLOSEST_OCEAN_SHORELINE() { _i<Void>(0x5D2BFAAB8D956E0E); } // 0x5D2BFAAB8D956E0E b573
	// All occurrences found in b617d, sorted alphabetically and identical lines removed: 
	// 
	// AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_AK");
	// AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_CUSTOM");
	// AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
	// Full list of cutscene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/cutsceneNames.json
	inline void SET_CUTSCENE_AUDIO_OVERRIDE(const char* name) { _i<Void>(0x3B4BF5F0859204D9, name); } // 0x3B4BF5F0859204D9 0xCE1332B7 b323
	inline void SET_VARIABLE_ON_SYNCH_SCENE_AUDIO(const char* variableName, float value) { _i<Void>(0xBCC29F935ED07688, variableName, value); } // 0xBCC29F935ED07688 0xD63CF33A b323
	// Plays the given police radio message.
	// 
	// All found occurrences in b617d, sorted alphabetically and identical lines removed: https://pastebin.com/GBnsQ5hr
	// Full list of police report names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/policeReportNames.json
	inline int PLAY_POLICE_REPORT(const char* name, float p1) { return _i<int>(0xDFEBD56D9BD1EB16, name, p1); } // 0xDFEBD56D9BD1EB16 0x3F277B62 b323
	inline void CANCEL_ALL_POLICE_REPORTS() { _i<Void>(0xB4F90FAF7670B16F); } // 0xB4F90FAF7670B16F b323
	// Plays the siren sound of a vehicle which is otherwise activated when fastly double-pressing the horn key.
	// Only works on vehicles with a police siren.
	inline void BLIP_SIREN(Vehicle vehicle) { _i<Void>(0x1B9025BDA76822B6, vehicle); } // 0x1B9025BDA76822B6 0xC0EB6924 b323
	// Overrides the vehicle's horn hash.
	// When changing this hash on a vehicle, it will not return the 'overwritten' hash. It will still always return the default horn hash (same as GET_VEHICLE_DEFAULT_HORN)
	// 
	// vehicle - the vehicle whose horn should be overwritten
	// mute - p1 seems to be an option for muting the horn
	// p2 - maybe a horn id, since the function AUDIO::GET_VEHICLE_DEFAULT_HORN(veh) exists?
	inline void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL override, int hornHash) { _i<Void>(0x3CDC1E622CCE0356, vehicle, override, hornHash); } // 0x3CDC1E622CCE0356 0x2ACAB783 b323
	// Checks whether the horn of a vehicle is currently played.
	inline BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return _i<BOOL>(0x9D6BFC12B05C6121, vehicle); } // 0x9D6BFC12B05C6121 0x20E2BDD0 b323
	// Makes pedestrians sound their horn longer, faster and more agressive when they use their horn.
	inline void SET_AGGRESSIVE_HORNS(BOOL toggle) { _i<Void>(0x395BF71085D1B1D9, toggle); } // 0x395BF71085D1B1D9 0x01D6EABE b323
	// Does nothing (it's a nullsub).
	inline void SET_RADIO_POSITION_AUDIO_MUTE(BOOL p0) { _i<Void>(0x02E93C796ABD3A97, p0); } // 0x02E93C796ABD3A97 0x3C395AEE b323
	// SET_VEHICLE_CONVERSATIONS_PERSIST?
	inline void SET_VEHICLE_CONVERSATIONS_PERSIST(BOOL p0, BOOL p1) { _i<Void>(0x58BB377BEC7CD5F4, p0, p1); } // 0x58BB377BEC7CD5F4 0x8CE63FA1 b323
	inline void SET_VEHICLE_CONVERSATIONS_PERSIST_NEW(BOOL p0, BOOL p1, BOOL p2) { _i<Void>(0x9BD7BD55E4533183, p0, p1, p2); } // 0x9BD7BD55E4533183 b1290
	inline BOOL IS_STREAM_PLAYING() { return _i<BOOL>(0xD11FA52EB849D978); } // 0xD11FA52EB849D978 0xF1F51A14 b323
	inline int GET_STREAM_PLAY_TIME() { return _i<int>(0x4E72BBDBCA58A3DB); } // 0x4E72BBDBCA58A3DB 0xB4F0AD56 b323
	// Example:
	// AUDIO::LOAD_STREAM("CAR_STEAL_1_PASSBY", "CAR_STEAL_1_SOUNDSET");
	// 
	// All found occurrences in the b678d decompiled scripts: https://pastebin.com/3rma6w5w
	// 
	// Stream names often ends with "_MASTER", "_SMALL" or "_STREAM". Also "_IN", "_OUT" and numbers.   
	// 
	// soundSet is often set to 0 in the scripts. These are common to end the soundSets: "_SOUNDS", "_SOUNDSET" and numbers.
	// 
	// Full list of audio / sound names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/soundNames.json
	inline BOOL LOAD_STREAM(const char* streamName, const char* soundSet) { return _i<BOOL>(0x1F1F957154EC51DF, streamName, soundSet); } // 0x1F1F957154EC51DF 0x0D89599D b323
	// Example:
	// AUDIO::LOAD_STREAM_WITH_START_OFFSET("STASH_TOXIN_STREAM", 2400, "FBI_05_SOUNDS");
	// 
	// Only called a few times in the scripts.
	// 
	// Full list of audio / sound names by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/soundNames.json
	inline BOOL LOAD_STREAM_WITH_START_OFFSET(const char* streamName, int startOffset, const char* soundSet) { return _i<BOOL>(0x59C16B79F53B3712, streamName, startOffset, soundSet); } // 0x59C16B79F53B3712 0xE5B5745C b323
	inline void PLAY_STREAM_FROM_PED(Ped ped) { _i<Void>(0x89049DD63C08B5D1, ped); } // 0x89049DD63C08B5D1 0xA1D7FABE b323
	inline void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { _i<Void>(0xB70374A758007DFA, vehicle); } // 0xB70374A758007DFA 0xF8E4BDA2 b323
	// Used with AUDIO::LOAD_STREAM
	// 
	// Example from finale_heist2b.c4:
	// TASK::TASK_SYNCHRONIZED_SCENE(l_4C8[2/*14*/], l_4C8[2/*14*/]._f7, l_30A, "push_out_vault_l", 4.0, -1.5, 5, 713, 4.0, 0);
	//                     PED::SET_SYNCHRONIZED_SCENE_PHASE(l_4C8[2/*14*/]._f7, 0.0);
	//                     PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(l_4C8[2/*14*/], 0, 0);
	//                     PED::SET_PED_COMBAT_ATTRIBUTES(l_4C8[2/*14*/], 38, 1);
	//                     PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(l_4C8[2/*14*/], 1);
	//                     if (AUDIO::LOAD_STREAM("Gold_Cart_Push_Anim_01", "BIG_SCORE_3B_SOUNDS")) {
	//                         AUDIO::PLAY_STREAM_FROM_OBJECT(l_36F[0/*1*/]);
	//                     }
	inline void PLAY_STREAM_FROM_OBJECT(Object object) { _i<Void>(0xEBAA9B64D76356FD, object); } // 0xEBAA9B64D76356FD 0xC5266BF7 b323
	inline void PLAY_STREAM_FRONTEND() { _i<Void>(0x58FCE43488F9F5F4); } // 0x58FCE43488F9F5F4 0x2C2A16BC b323
	inline void PLAY_STREAM_FROM_POSITION(float x, float y, float z) { _i<Void>(0x21442F412E8DE56B, x, y, z); } // 0x21442F412E8DE56B 0x6FE5D865 b323
	inline void STOP_STREAM() { _i<Void>(0xA4718A1419D18151); } // 0xA4718A1419D18151 0xD1E364DE b323
	inline void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { _i<Void>(0x9D64D7405520E3D3, ped, shaking); } // 0x9D64D7405520E3D3 0xFF92B49D b323
	inline void BLOCK_ALL_SPEECH_FROM_PED(Ped ped, BOOL p1, BOOL p2) { _i<Void>(0xF8AD2EED7C47E8FE, ped, p1, p2); } // 0xF8AD2EED7C47E8FE b1734
	inline void STOP_PED_SPEAKING_SYNCED(Ped ped, BOOL p1) { _i<Void>(0xAB6781A5F3101470, ped, p1); } // 0xAB6781A5F3101470 b1868
	inline void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { _i<Void>(0xA9A41C1E940FB0E8, ped, toggle); } // 0xA9A41C1E940FB0E8 0x3B8E2D5F b323
	// Common in the scripts:
	// AUDIO::IS_AMBIENT_SPEECH_DISABLED(PLAYER::PLAYER_PED_ID());
	inline BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return _i<BOOL>(0x932C2D096A2C3FFF, ped); } // 0x932C2D096A2C3FFF 0x109D1F89 b323
	inline void BLOCK_SPEECH_CONTEXT_GROUP(const char* p0, int p1) { _i<Void>(0xA8A7D434AFB4B97B, p0, p1); } // 0xA8A7D434AFB4B97B b1493
	inline void UNBLOCK_SPEECH_CONTEXT_GROUP(const char* p0) { _i<Void>(0x2ACABED337622DF2, p0); } // 0x2ACABED337622DF2 b1493
	inline void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL toggle) { _i<Void>(0x1FEF0683B96EBCF2, vehicle, toggle); } // 0x1FEF0683B96EBCF2 0x77182D58 b323
	inline void SET_SIREN_BYPASS_MP_DRIVER_CHECK(Vehicle vehicle, BOOL toggle) { _i<Void>(0xF584CF8529B51434, vehicle, toggle); } // 0xF584CF8529B51434 b2372
	inline void TRIGGER_SIREN_AUDIO(Vehicle vehicle) { _i<Void>(0x66C3FB05206041BA, vehicle); } // 0x66C3FB05206041BA b1290
	inline void SET_HORN_PERMANENTLY_ON(Vehicle vehicle) { _i<Void>(0x9C11908013EA4715, vehicle); } // 0x9C11908013EA4715 0xDE8BA3CD b323
	inline void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { _i<Void>(0x76D683C108594D0E, vehicle, toggle); } // 0x76D683C108594D0E 0x6EB92D05 b323
	inline void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { _i<Void>(0xE5564483E407F914, vehicle, p1); } // 0xE5564483E407F914 0x271A9766 b323
	inline void SET_HORN_PERMANENTLY_ON_TIME(Vehicle vehicle, float time) { _i<Void>(0x9D3AF56E94C9AE98, vehicle, time); } // 0x9D3AF56E94C9AE98 0x2F0A16D1 b323
	inline void USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) { _i<Void>(0xFA932DE350266EF8, vehicle, toggle); } // 0xFA932DE350266EF8 0xC6BC16F3 b323
	// This native sets the audio of the specified vehicle to the audioName (p1).
	// 
	// Use the audioNameHash found in vehicles.meta
	// 
	// Example:
	// _SET_VEHICLE_AUDIO(veh, "ADDER");
	// The selected vehicle will now have the audio of the Adder.
	inline void FORCE_USE_AUDIO_GAME_OBJECT(Vehicle vehicle, const char* audioName) { _i<Void>(0x4F0C413926060B38, vehicle, audioName); } // 0x4F0C413926060B38 0x33B0B007 b323
	inline void PRELOAD_VEHICLE_AUDIO_BANK(Hash vehicleModel) { _i<Void>(0xCA4CEA6AE0000A7E, vehicleModel); } // 0xCA4CEA6AE0000A7E b1180
	inline void SET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle, const char* p1, const char* p2) { _i<Void>(0xF1F8157B8C3F171C, vehicle, p1, p2); } // 0xF1F8157B8C3F171C 0x1C0C5E4C b323
	inline void RESET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle) { _i<Void>(0xD2DCCD8E16E20997, vehicle); } // 0xD2DCCD8E16E20997 b323
	inline void SET_VEHICLE_FORCE_REVERSE_WARNING(Any p0, Any p1) { _i<Void>(0x97FFB4ADEED08066, p0, p1); } // 0x97FFB4ADEED08066 b2372
	inline BOOL IS_VEHICLE_AUDIBLY_DAMAGED(Vehicle vehicle) { return _i<BOOL>(0x5DB8010EE71FDEF2, vehicle); } // 0x5DB8010EE71FDEF2 0x6E660D3F b323
	inline void SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(Vehicle vehicle, float damageFactor) { _i<Void>(0x59E7B488451F4D3A, vehicle, damageFactor); } // 0x59E7B488451F4D3A 0x23BE6432 b323
	// intensity: 0.0f - 1.0f, only used once with 1.0f in R* Scripts (nigel2)
	// Makes an engine rattling noise when you decelerate, you need to be going faster to hear lower values
	inline void SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Vehicle vehicle, float intensity) { _i<Void>(0x01BB4D577D38BD9E, vehicle, intensity); } // 0x01BB4D577D38BD9E 0xE81FAC68 b323
	inline void ENABLE_VEHICLE_FANBELT_DAMAGE(Vehicle vehicle, BOOL toggle) { _i<Void>(0x1C073274E065C6D2, vehicle, toggle); } // 0x1C073274E065C6D2 0x9365E042 b323
	inline void ENABLE_VEHICLE_EXHAUST_POPS(Vehicle vehicle, BOOL toggle) { _i<Void>(0x2BE4BC731D039D5A, vehicle, toggle); } // 0x2BE4BC731D039D5A 0x2A60A90E b323
	// SET_VEHICLE_BOOST_ACTIVE(vehicle, 1, 0);
	// SET_VEHICLE_BOOST_ACTIVE(vehicle, 0, 0); 
	// 
	// Will give a boost-soundeffect.
	inline void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL toggle) { _i<Void>(0x4A04DE7CAB2739A1, vehicle, toggle); } // 0x4A04DE7CAB2739A1 0x072F15F2 b323
	inline void SET_PLAYER_VEHICLE_ALARM_AUDIO_ACTIVE(Vehicle vehicle, BOOL toggle) { _i<Void>(0x6FDDAD856E36988A, vehicle, toggle); } // 0x6FDDAD856E36988A 0x934BE749 b323
	inline void SET_SCRIPT_UPDATE_DOOR_AUDIO(Hash doorHash, BOOL toggle) { _i<Void>(0x06C0023BED16DD6B, doorHash, toggle); } // 0x06C0023BED16DD6B 0xE61110A2 b323
	// doorId: see SET_VEHICLE_DOOR_SHUT
	inline void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int doorId) { _i<Void>(0x3A539D52857EA82D, vehicle, doorId); } // 0x3A539D52857EA82D 0x84930330 b323
	// doorId: see SET_VEHICLE_DOOR_SHUT
	inline void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int doorId) { _i<Void>(0x62A456AA4769EF34, vehicle, doorId); } // 0x62A456AA4769EF34 0xBA2CF407 b323
	// Works for planes only.
	inline void ENABLE_STALL_WARNING_SOUNDS(Vehicle vehicle, BOOL toggle) { _i<Void>(0xC15907D667F7CFB2, vehicle, toggle); } // 0xC15907D667F7CFB2 0x563B635D b323
	inline void _ENABLE_DRAG_RACE_STATIONARY_WARNING_SOUNDS(Vehicle vehicle, BOOL enable) { _i<Void>(0xBEFB80290414FD4F, vehicle, enable); } // 0xBEFB80290414FD4F b3095
	// Hardcoded to return 1
	inline BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return _i<BOOL>(0x6D28DC1671E334FD); } // 0x6D28DC1671E334FD 0x7643170D b323
	inline void SET_GPS_ACTIVE(BOOL active) { _i<Void>(0x3BD3F52BA9B1E4E8, active); } // 0x3BD3F52BA9B1E4E8 0x0FC3379A b323
	// Called 38 times in the scripts. There are 5 different audioNames used.
	//  One unknown removed below.
	// 
	// AUDIO::PLAY_MISSION_COMPLETE_AUDIO("DEAD");
	// AUDIO::PLAY_MISSION_COMPLETE_AUDIO("FRANKLIN_BIG_01");
	// AUDIO::PLAY_MISSION_COMPLETE_AUDIO("GENERIC_FAILED");
	// AUDIO::PLAY_MISSION_COMPLETE_AUDIO("TREVOR_SMALL_01");
	inline void PLAY_MISSION_COMPLETE_AUDIO(const char* audioName) { _i<Void>(0xB138AAB8A70D3C69, audioName); } // 0xB138AAB8A70D3C69 0x3033EA1D b323
	inline BOOL IS_MISSION_COMPLETE_PLAYING() { return _i<BOOL>(0x19A30C23F5827F8A); } // 0x19A30C23F5827F8A 0x939982A1 b323
	inline BOOL IS_MISSION_COMPLETE_READY_FOR_UI() { return _i<BOOL>(0x6F259F82D873B8B8); } // 0x6F259F82D873B8B8 0xCBE09AEC b323
	inline void BLOCK_DEATH_JINGLE(BOOL toggle) { _i<Void>(0xF154B8D1775B2DEC, toggle); } // 0xF154B8D1775B2DEC 0xD2858D8A b323
	// Used to prepare a scene where the surrounding sound is muted or a bit changed. This does not play any sound.
	// 
	// List of all usable scene names found in b617d. Sorted alphabetically and identical names removed: https://pastebin.com/MtM9N9CC
	// Full list of audio scene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/audioSceneNames.json
	inline BOOL START_AUDIO_SCENE(const char* scene) { return _i<BOOL>(0x013A80FC08F6E4F2, scene); } // 0x013A80FC08F6E4F2 0xE48D757B b323
	// Full list of audio scene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/audioSceneNames.json
	inline void STOP_AUDIO_SCENE(const char* scene) { _i<Void>(0xDFE8422B3B94E688, scene); } // 0xDFE8422B3B94E688 0xA08D8C58 b323
	// ??
	inline void STOP_AUDIO_SCENES() { _i<Void>(0xBAC7FC81A75EC1A1); } // 0xBAC7FC81A75EC1A1 0xF6C7342A b323
	// Full list of audio scene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/audioSceneNames.json
	inline BOOL IS_AUDIO_SCENE_ACTIVE(const char* scene) { return _i<BOOL>(0xB65B60556E2A9225, scene); } // 0xB65B60556E2A9225 0xACBED05C b323
	// Full list of audio scene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/audioSceneNames.json
	inline void SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) { _i<Void>(0xEF21A9EF089A2668, scene, variable, value); } // 0xEF21A9EF089A2668 0x19BB3CE8 b323
	inline void SET_AUDIO_SCRIPT_CLEANUP_TIME(int time) { _i<Void>(0xA5F377B175A699C5, time); } // 0xA5F377B175A699C5 0xE812925D b323
	// All found occurrences in b678d:
	// https://pastebin.com/ceu67jz8
	inline void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity entity, const char* groupName, float p2) { _i<Void>(0x153973AB99FE8980, entity, groupName, p2); } // 0x153973AB99FE8980 0x2BC93264 b323
	inline void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity entity, float p1) { _i<Void>(0x18EB48CFC41F2EA0, entity, p1); } // 0x18EB48CFC41F2EA0 0x308ED0EC b323
	inline BOOL AUDIO_IS_MUSIC_PLAYING() { return _i<BOOL>(0x845FFC3A4FEEFA3E); } // 0x845FFC3A4FEEFA3E b323
	// This is an alias of AUDIO_IS_MUSIC_PLAYING.
	inline BOOL AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return _i<BOOL>(0x2DD39BF3E2F9C47F); } // 0x2DD39BF3E2F9C47F b463
	// All music event names found in the b617d scripts: https://pastebin.com/GnYt0R3P
	// Full list of music event names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/musicEventNames.json
	inline BOOL PREPARE_MUSIC_EVENT(const char* eventName) { return _i<BOOL>(0x1E5185B72EF5158A, eventName); } // 0x1E5185B72EF5158A 0x534A5C1C b323
	// All music event names found in the b617d scripts: https://pastebin.com/GnYt0R3P
	// Full list of music event names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/musicEventNames.json
	inline BOOL CANCEL_MUSIC_EVENT(const char* eventName) { return _i<BOOL>(0x5B17A90291133DA5, eventName); } // 0x5B17A90291133DA5 0x89FF942D b323
	// List of all usable event names found in b617d used with this native. Sorted alphabetically and identical names removed: https://pastebin.com/RzDFmB1W
	// 
	// All music event names found in the b617d scripts: https://pastebin.com/GnYt0R3P
	// Full list of music event names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/musicEventNames.json
	inline BOOL TRIGGER_MUSIC_EVENT(const char* eventName) { return _i<BOOL>(0x706D57B0F50DA710, eventName); } // 0x706D57B0F50DA710 0xB6094948 b323
	inline BOOL IS_MUSIC_ONESHOT_PLAYING() { return _i<BOOL>(0xA097AB275061FB21); } // 0xA097AB275061FB21 0x2705C4D5 b323
	inline int GET_MUSIC_PLAYTIME() { return _i<int>(0xE7A0D23DC414507B); } // 0xE7A0D23DC414507B 0xD633C809 b323
	inline void SET_GLOBAL_RADIO_SIGNAL_LEVEL(Any p0) { _i<Void>(0x159B7318403A1CD8, p0); } // 0x159B7318403A1CD8 b1103
	inline void RECORD_BROKEN_GLASS(float x, float y, float z, float radius) { _i<Void>(0xFBE20329593DEC9D, x, y, z, radius); } // 0xFBE20329593DEC9D 0x53FC3FEC b323
	inline void CLEAR_ALL_BROKEN_GLASS() { _i<Void>(0xB32209EFFDC04913); } // 0xB32209EFFDC04913 0xE6B033BF b323
	inline void SCRIPT_OVERRIDES_WIND_ELEVATION(BOOL p0, Any p1) { _i<Void>(0x70B8EC8FC108A634, p0, p1); } // 0x70B8EC8FC108A634 0x95050CAD b323
	inline void SET_PED_WALLA_DENSITY(float p0, float p1) { _i<Void>(0x149AEE66F0CB3A99, p0, p1); } // 0x149AEE66F0CB3A99 0xE64F97A0 b323
	inline void SET_PED_INTERIOR_WALLA_DENSITY(float p0, float p1) { _i<Void>(0x8BF907833BE275DE, p0, p1); } // 0x8BF907833BE275DE 0x2CD26D69 b323
	inline void FORCE_PED_PANIC_WALLA() { _i<Void>(0x062D5EAD4DA2FA6A); } // 0x062D5EAD4DA2FA6A 0xD87AF337 b323
	// Full list of alarm names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/alarmSounds.json
	inline BOOL PREPARE_ALARM(const char* alarmName) { return _i<BOOL>(0x9D74AE343DB65533, alarmName); } // 0x9D74AE343DB65533 0x084932E8 b323
	// Full list of alarm names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/alarmSounds.json
	inline void START_ALARM(const char* alarmName, BOOL p2) { _i<Void>(0x0355EF116C4C97B2, alarmName, p2); } // 0x0355EF116C4C97B2 0x703F524B b323
	// Full list of alarm names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/alarmSounds.json
	inline void STOP_ALARM(const char* alarmName, BOOL toggle) { _i<Void>(0xA1CADDCD98415A41, alarmName, toggle); } // 0xA1CADDCD98415A41 0xF987BE8C b323
	inline void STOP_ALL_ALARMS(BOOL stop) { _i<Void>(0x2F794A877ADD4C92, stop); } // 0x2F794A877ADD4C92 0xC3CB9DC6 b323
	// Example:
	// 
	// bool playing = AUDIO::IS_ALARM_PLAYING("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
	// Full list of alarm names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/alarmSounds.json
	inline BOOL IS_ALARM_PLAYING(const char* alarmName) { return _i<BOOL>(0x226435CB96CCFC8C, alarmName); } // 0x226435CB96CCFC8C 0x9D8E1D23 b323
	// Returns hash of default vehicle horn
	// 
	// Hash is stored in audVehicleAudioEntity
	inline Hash GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) { return _i<Hash>(0x02165D55000219AC, vehicle); } // 0x02165D55000219AC 0xE84ABC19 b323
	inline Hash GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(Vehicle vehicle) { return _i<Hash>(0xACB5DCCA1EC76840, vehicle); } // 0xACB5DCCA1EC76840 0xFD4B5B3B b323
	inline void RESET_PED_AUDIO_FLAGS(Ped ped) { _i<Void>(0xF54BB7B61036F335, ped); } // 0xF54BB7B61036F335 0xDF720C86 b323
	// Enables/disables ped's "loud" footstep sound.
	inline void SET_PED_FOOTSTEPS_EVENTS_ENABLED(Ped ped, BOOL toggle) { _i<Void>(0x0653B735BFBDFE87, ped, toggle); } // 0x0653B735BFBDFE87 b1493
	// Enables/disables ped's "quiet" footstep sound.
	inline void SET_PED_CLOTH_EVENTS_ENABLED(Ped ped, BOOL toggle) { _i<Void>(0x29DA3CA8D8B2692D, ped, toggle); } // 0x29DA3CA8D8B2692D b1493
	inline void OVERRIDE_PLAYER_GROUND_MATERIAL(Hash hash, BOOL toggle) { _i<Void>(0xD2CC78CD3D0B50F9, hash, toggle); } // 0xD2CC78CD3D0B50F9 0xC307D531 b323
	inline void USE_FOOTSTEP_SCRIPT_SWEETENERS(Ped ped, BOOL p1, Hash hash) { _i<Void>(0xBF4DC1784BE94DFA, ped, p1, hash); } // 0xBF4DC1784BE94DFA 0xD99E275B b323
	inline void OVERRIDE_MICROPHONE_SETTINGS(Hash hash, BOOL toggle) { _i<Void>(0x75773E11BA459E90, hash, toggle); } // 0x75773E11BA459E90 b323
	inline void FREEZE_MICROPHONE() { _i<Void>(0xD57AAAE0E2214D11); } // 0xD57AAAE0E2214D11 0x2B9D91E8 b323
	inline void DISTANT_COP_CAR_SIRENS(BOOL value) { _i<Void>(0x552369F549563AD5, value); } // 0x552369F549563AD5 0x13EB5861 b323
	inline void SET_SIREN_CAN_BE_CONTROLLED_BY_AUDIO(Vehicle vehicle, BOOL p1) { _i<Void>(0x43FA0DFC5DF87815, vehicle, p1); } // 0x43FA0DFC5DF87815 0x7BED1872 b323
	inline void ENABLE_STUNT_JUMP_AUDIO() { _i<Void>(0xB81CF134AEB56FFB); } // 0xB81CF134AEB56FFB b791
	inline void SET_AUDIO_FLAG(const char* flagName, BOOL toggle) { _i<Void>(0xB9EFD5C25018725A, flagName, toggle); } // 0xB9EFD5C25018725A 0x1C09C9E0 b323
	// p1 is always 0 in the scripts
	inline BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT(const char* audioEvent, Any p1) { return _i<BOOL>(0xC7ABCACA4985A766, audioEvent, p1); } // 0xC7ABCACA4985A766 0xE1D91FD0 b323
	inline BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int sceneID, const char* audioEvent) { return _i<BOOL>(0x029FE7CD1B7E2E75, sceneID, audioEvent); } // 0x029FE7CD1B7E2E75 0x7652DD49 b323
	inline BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return _i<BOOL>(0x8B2FD4560E55DD2D, sceneID); } // 0x8B2FD4560E55DD2D 0x507F3241 b323
	inline BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return _i<BOOL>(0x92D6A88E64A94430, sceneID); } // 0x92D6A88E64A94430 0xADEED2B4 b323
	inline void INIT_SYNCH_SCENE_AUDIO_WITH_POSITION(const char* audioEvent, float x, float y, float z) { _i<Void>(0xC8EDE9BDBCCBA6D4, audioEvent, x, y, z); } // 0xC8EDE9BDBCCBA6D4 0x55A21772 b323
	inline void INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY(const char* audioEvent, Entity entity) { _i<Void>(0x950A154B8DAB6185, audioEvent, entity); } // 0x950A154B8DAB6185 0xA17F9AB0 b323
	// Needs to be called every frame.
	// Audio mode to apply this frame: https://alloc8or.re/gta5/doc/enums/audSpecialEffectMode.txt
	inline void SET_AUDIO_SPECIAL_EFFECT_MODE(int mode) { _i<Void>(0x12561FCBB62D5B9C, mode); } // 0x12561FCBB62D5B9C 0x62B43677 b323
	inline void SET_PORTAL_SETTINGS_OVERRIDE(const char* p0, const char* p1) { _i<Void>(0x044DBAD7A7FA2BE5, p0, p1); } // 0x044DBAD7A7FA2BE5 0x8AD670EC b323
	inline void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* p0) { _i<Void>(0xB4BBFD9CD8B3922B, p0); } // 0xB4BBFD9CD8B3922B 0xD24B4D0C b323
	inline void STOP_SMOKE_GRENADE_EXPLOSION_SOUNDS() { _i<Void>(0xE4E6DD5566D28C82); } // 0xE4E6DD5566D28C82 0x7262B5BA b323
	inline int GET_MUSIC_VOL_SLIDER() { return _i<int>(0x3A48AB4445D499BE); } // 0x3A48AB4445D499BE 0x93A44A1F b323
	inline void REQUEST_TENNIS_BANKS(Ped ped) { _i<Void>(0x4ADA3F19BE4A6047, ped); } // 0x4ADA3F19BE4A6047 0x13777A0B b323
	inline void UNREQUEST_TENNIS_BANKS() { _i<Void>(0x0150B6FF25A9E2E5); } // 0x0150B6FF25A9E2E5 0x1134F68B b323
	inline void SET_SKIP_MINIGUN_SPIN_UP_AUDIO(BOOL p0) { _i<Void>(0xBEF34B1D9624D5DD, p0); } // 0xBEF34B1D9624D5DD 0xE0047BFD b323
	inline void STOP_CUTSCENE_AUDIO() { _i<Void>(0x806058BBDC136E06); } // 0x806058BBDC136E06 0x55461BE6 b323
	inline BOOL HAS_LOADED_MP_DATA_SET() { return _i<BOOL>(0x544810ED9DB6BBE6); } // 0x544810ED9DB6BBE6 b323
	inline BOOL HAS_LOADED_SP_DATA_SET() { return _i<BOOL>(0x5B50ABB1FE3746F4); } // 0x5B50ABB1FE3746F4 b323
	inline int GET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle) { return _i<int>(0xD53F3A29BCE2580E, vehicle); } // 0xD53F3A29BCE2580E b1365
	inline void SET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle, int value) { _i<Void>(0x0350E7E17BA767D0, vehicle, value); } // 0x0350E7E17BA767D0 b1365
}

namespace BRAIN
{
	inline void ADD_SCRIPT_TO_RANDOM_PED(const char* name, Hash model, float p2, float p3) { _i<Void>(0x4EE5367468A65CCC, name, model, p2, p3); } // 0x4EE5367468A65CCC 0xECC76C3D b323
	inline void REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5) { _i<Void>(0x0BE84C318BA6EC22, scriptName, modelHash, p2, activationRange, p4, p5); } // 0x0BE84C318BA6EC22 0xB6BCC608 b323
	inline BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return _i<BOOL>(0xCCBA154209823057, object); } // 0xCCBA154209823057 0xBA4CAA56 b323
	inline void REGISTER_WORLD_POINT_SCRIPT_BRAIN(const char* scriptName, float activationRange, int p2) { _i<Void>(0x3CDC7136613284BD, scriptName, activationRange, p2); } // 0x3CDC7136613284BD 0x725D91F7 b323
	inline BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return _i<BOOL>(0xC5042CC6F5E3D450); } // 0xC5042CC6F5E3D450 0x2CF305A0 b323
	inline void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { _i<Void>(0x67AA4D73F0CFA86B, brainSet); } // 0x67AA4D73F0CFA86B 0x2765919F b323
	inline void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { _i<Void>(0x14D8518E9760F08F, brainSet); } // 0x14D8518E9760F08F 0xFBD13FAD b323
	inline void REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { _i<Void>(0x0B40ED49D7D6FF84); } // 0x0B40ED49D7D6FF84 0x19B27825 b323
	inline void REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { _i<Void>(0x4D953DF78EBF8158); } // 0x4D953DF78EBF8158 0xF3A3AB08 b323
	inline void REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { _i<Void>(0x6D6840CEE8845831, scriptName); } // 0x6D6840CEE8845831 0x949FE53E b323
	inline void REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { _i<Void>(0x6E91B04E08773030, scriptName); } // 0x6E91B04E08773030 0x29CE8BAA b323
}

namespace CAM
{
	// ease - smooth transition between the camera's positions
	// easeTime - Time in milliseconds for the transition to happen
	// 
	// If you have created a script (rendering) camera, and want to go back to the 
	// character (gameplay) camera, call this native with render set to 0.
	// Setting ease to 1 will smooth the transition.
	inline void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { _i<Void>(0x07E5B515DB0636FC, render, ease, easeTime, p3, p4, p5); } // 0x07E5B515DB0636FC 0x74337969 b323
	// This native makes the gameplay camera zoom into first person/third person with a special effect.
	inline void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(BOOL render, float p1, int p2, Any p3) { _i<Void>(0xC819F3CBB62BF692, render, p1, p2, p3); } // 0xC819F3CBB62BF692 0xD3C08183 b323
	// "DEFAULT_SCRIPTED_CAMERA"
	// "DEFAULT_ANIMATED_CAMERA"
	// "DEFAULT_SPLINE_CAMERA"
	// "DEFAULT_SCRIPTED_FLY_CAMERA"
	// "TIMED_SPLINE_CAMERA"
	inline Cam CREATE_CAM(const char* camName, BOOL p1) { return _i<Cam>(0xC3981DCE61D9E13F, camName, p1); } // 0xC3981DCE61D9E13F 0xE9BF2A7D b323
	// camName is always set to "DEFAULT_SCRIPTED_CAMERA" in Rockstar's scripts.
	// ------------
	// Camera names found in the b617d scripts:
	// "DEFAULT_ANIMATED_CAMERA"
	// "DEFAULT_SCRIPTED_CAMERA"
	// "DEFAULT_SCRIPTED_FLY_CAMERA"
	// "DEFAULT_SPLINE_CAMERA"
	// ------------
	// Side Note: It seems p8 is basically to represent what would be the bool p1 within CREATE_CAM native. As well as the p9 since it's always 2 in scripts seems to represent what would be the last param within SET_CAM_ROT native which normally would be 2.
	inline Cam CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return _i<Cam>(0xB51194800B257161, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0xB51194800B257161 0x23B02F15 b323
	inline Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return _i<Cam>(0x5E3CF89C6BCCA67D, camHash, p1); } // 0x5E3CF89C6BCCA67D 0x5D6739AE b323
	// p9 uses 2 by default
	inline Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return _i<Cam>(0x6ABFA3E16460F22D, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); } // 0x6ABFA3E16460F22D 0x0688BE9A b323
	// BOOL param indicates whether the cam should be destroyed if it belongs to the calling script.
	inline void DESTROY_CAM(Cam cam, BOOL bScriptHostCam) { _i<Void>(0x865908C81A2C22E9, cam, bScriptHostCam); } // 0x865908C81A2C22E9 0xC39302BD b323
	// BOOL param indicates whether the cam should be destroyed if it belongs to the calling script.
	inline void DESTROY_ALL_CAMS(BOOL bScriptHostCam) { _i<Void>(0x8E5FB15663F79120, bScriptHostCam); } // 0x8E5FB15663F79120 0x10C151CE b323
	// Returns whether or not the passed camera handle exists.
	inline BOOL DOES_CAM_EXIST(Cam cam) { return _i<BOOL>(0xA7A932170592B50E, cam); } // 0xA7A932170592B50E 0x1EF89DC0 b323
	// Set camera as active/inactive.
	inline void SET_CAM_ACTIVE(Cam cam, BOOL active) { _i<Void>(0x026FB97D0A425F84, cam, active); } // 0x026FB97D0A425F84 0x064659C2 b323
	// Returns whether or not the passed camera handle is active.
	inline BOOL IS_CAM_ACTIVE(Cam cam) { return _i<BOOL>(0xDFB2B516207D3534, cam); } // 0xDFB2B516207D3534 0x4B58F177 b323
	inline BOOL IS_CAM_RENDERING(Cam cam) { return _i<BOOL>(0x02EC0AF5C5A49B7A, cam); } // 0x02EC0AF5C5A49B7A 0x6EC6B5B2 b323
	inline Cam GET_RENDERING_CAM() { return _i<Cam>(0x5234F9F10919EABA); } // 0x5234F9F10919EABA 0x0FCF4DF1 b323
	inline Vector3 GET_CAM_COORD(Cam cam) { return _i<Vector3>(0xBAC038F7459AE5AE, cam); } // 0xBAC038F7459AE5AE 0x7C40F09C b323
	// The last parameter, as in other "ROT" methods, is usually 2.
	inline Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return _i<Vector3>(0x7D304C1C955E3E12, cam, rotationOrder); } // 0x7D304C1C955E3E12 0xDAC84C9F b323
	inline float GET_CAM_FOV(Cam cam) { return _i<float>(0xC3330A45CCCDB26A, cam); } // 0xC3330A45CCCDB26A 0xD6E9FCF5 b323
	inline float GET_CAM_NEAR_CLIP(Cam cam) { return _i<float>(0xC520A34DAFBF24B1, cam); } // 0xC520A34DAFBF24B1 0xCFCD35EE b323
	inline float GET_CAM_FAR_CLIP(Cam cam) { return _i<float>(0xB60A9CFEB21CA6AA, cam); } // 0xB60A9CFEB21CA6AA 0x09F119B8 b323
	inline float GET_CAM_NEAR_DOF(Cam cam) { return _i<float>(0xC2612D223D915A1C, cam); } // 0xC2612D223D915A1C b2699
	inline float GET_CAM_FAR_DOF(Cam cam) { return _i<float>(0x255F8DAFD540D397, cam); } // 0x255F8DAFD540D397 0x98C5CCE9 b323
	inline float GET_CAM_DOF_STRENGTH(Cam cam) { return _i<float>(0x06D153C0B99B6128, cam); } // 0x06D153C0B99B6128 b2699
	inline void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) { _i<Void>(0xBFD8727AEA3CCEBA, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); } // 0xBFD8727AEA3CCEBA 0x2167CEBF b323
	// Sets the position of the cam.
	inline void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { _i<Void>(0x4D41783FB745E42E, cam, posX, posY, posZ); } // 0x4D41783FB745E42E 0x7A8053AF b323
	// Sets the rotation of the cam.
	// Last parameter unknown.
	// 
	// Last parameter seems to always be set to 2.
	inline void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { _i<Void>(0x85973643155D0B07, cam, rotX, rotY, rotZ, rotationOrder); } // 0x85973643155D0B07 0xEE38B3C1 b323
	// Sets the field of view of the cam.
	// ---------------------------------------------
	// Min: 1.0f
	// Max: 130.0f
	inline void SET_CAM_FOV(Cam cam, float fieldOfView) { _i<Void>(0xB13C14F66A00D047, cam, fieldOfView); } // 0xB13C14F66A00D047 0xD3D5D74F b323
	inline void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { _i<Void>(0xC7848EFCCC545182, cam, nearClip); } // 0xC7848EFCCC545182 0x46DB13B1 b323
	inline void SET_CAM_FAR_CLIP(Cam cam, float farClip) { _i<Void>(0xAE306F2A904BF86E, cam, farClip); } // 0xAE306F2A904BF86E 0x0D23E381 b323
	inline void FORCE_CAM_FAR_CLIP(Cam cam, float p1) { _i<Void>(0xAABD62873FFB1A33, cam, p1); } // 0xAABD62873FFB1A33 b2189
	inline void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { _i<Void>(0x6F0F77FBA9A8F2E6, cam, strength); } // 0x6F0F77FBA9A8F2E6 0xFD6E0D67 b323
	inline void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { _i<Void>(0x3FA4BF0A7AB7DE2C, cam, nearDOF); } // 0x3FA4BF0A7AB7DE2C 0xF28254DF b323
	inline void SET_CAM_FAR_DOF(Cam cam, float farDOF) { _i<Void>(0xEDD91296CD01AEE0, cam, farDOF); } // 0xEDD91296CD01AEE0 0x58515E8E b323
	inline void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { _i<Void>(0x5EE29B4D7D5DF897, cam, dofStrength); } // 0x5EE29B4D7D5DF897 0x3CC4EB3F b323
	inline void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { _i<Void>(0x3CF48F6F96E749DC, cam, p1, p2, p3, p4); } // 0x3CF48F6F96E749DC 0xAD6C2B8F b323
	inline void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { _i<Void>(0x16A96863A17552BB, cam, toggle); } // 0x16A96863A17552BB 0x8306C256 b323
	inline void SET_USE_HI_DOF() { _i<Void>(0xA13B0222F3D94A94); } // 0xA13B0222F3D94A94 0x8BBF2950 b323
	// Only used in R* Script fm_mission_controller_2020
	inline void SET_USE_HI_DOF_ON_SYNCED_SCENE_THIS_UPDATE() { _i<Void>(0x731A880555DA3647); } // 0x731A880555DA3647 b2699
	inline void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(Cam camera, float p1) { _i<Void>(0xF55E4046F6F831DC, camera, p1); } // 0xF55E4046F6F831DC b323
	inline void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(Any p0, float p1) { _i<Void>(0xE111A7C0D200CBC5, p0, p1); } // 0xE111A7C0D200CBC5 b323
	// This native has its name defined inside its codE
	// 
	inline void SET_CAM_DOF_FNUMBER_OF_LENS(Cam camera, float p1) { _i<Void>(0x7DD234D6F3914C5B, camera, p1); } // 0x7DD234D6F3914C5B b323
	// Native name labeled within its code
	inline void SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER(Cam camera, float multiplier) { _i<Void>(0x47B595D60664CFFA, camera, multiplier); } // 0x47B595D60664CFFA b1011
	// This native has a name defined inside its code
	inline void SET_CAM_DOF_FOCUS_DISTANCE_BIAS(Cam camera, float p1) { _i<Void>(0xC669EEA5D031B7DE, camera, p1); } // 0xC669EEA5D031B7DE b323
	// This native has a name defined inside its code
	inline void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(Cam camera, float p1) { _i<Void>(0xC3654A441402562D, camera, p1); } // 0xC3654A441402562D b323
	// This native has a name defined inside its code
	inline void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(Cam camera, float p1) { _i<Void>(0x2C654B4943BDDF7C, camera, p1); } // 0x2C654B4943BDDF7C b323
	// This native has a name defined inside its code
	inline void SET_CAM_DOF_SHOULD_KEEP_LOOK_AT_TARGET_IN_FOCUS(Cam camera, BOOL state) { _i<Void>(0x7CF3AF51DCFE4108, camera, state); } // 0x7CF3AF51DCFE4108 b2944
	// Last param determines if its relative to the Entity
	inline void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { _i<Void>(0xFEDB7D269E8C60E3, cam, entity, xOffset, yOffset, zOffset, isRelative); } // 0xFEDB7D269E8C60E3 0xAD7C45F6 b323
	inline void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { _i<Void>(0x61A3DBA14AB7F411, cam, ped, boneIndex, x, y, z, heading); } // 0x61A3DBA14AB7F411 0x506BB35C b323
	inline void HARD_ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { _i<Void>(0x149916F50C34A40D, cam, ped, boneIndex, p3, p4, p5, p6, p7, p8, p9); } // 0x149916F50C34A40D b1180
	// Example from am_mp_drone script: 
	// 
	// CAM::HARD_ATTACH_CAM_TO_ENTITY(Local_190.f_169, NETWORK::NET_TO_OBJ(Local_190.f_159), 0f, 0f, 180f, Var0, 1);
	inline void HARD_ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xRot, float yRot, float zRot, float xOffset, float yOffset, float zOffset, BOOL isRelative) { _i<Void>(0x202A5ED9CE01D6E7, cam, entity, xRot, yRot, zRot, xOffset, yOffset, zOffset, isRelative); } // 0x202A5ED9CE01D6E7 b2189
	// This native works with vehicles only. Bone indexes are usually given by this native GET_ENTITY_BONE_INDEX_BY_NAME.
	inline void ATTACH_CAM_TO_VEHICLE_BONE(Cam cam, Vehicle vehicle, int boneIndex, BOOL relativeRotation, float rotX, float rotY, float rotZ, float offsetX, float offsetY, float offsetZ, BOOL fixedDirection) { _i<Void>(0x8DB3F12A02CAEF72, cam, vehicle, boneIndex, relativeRotation, rotX, rotY, rotZ, offsetX, offsetY, offsetZ, fixedDirection); } // 0x8DB3F12A02CAEF72 b1290
	inline void DETACH_CAM(Cam cam) { _i<Void>(0xA2FABBE87F4BAD82, cam); } // 0xA2FABBE87F4BAD82 0xF4FBF14A b323
	// The native seems to only be called once.
	// 
	// The native is used as so,
	// CAM::SET_CAM_INHERIT_ROLL_VEHICLE(l_544, getElem(2, &l_525, 4));
	// In the exile1 script.
	inline void SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, BOOL p1) { _i<Void>(0x45F1DE9C34B93AE6, cam, p1); } // 0x45F1DE9C34B93AE6 0xE4BD5342 b323
	inline void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { _i<Void>(0xF75497BB865F0803, cam, x, y, z); } // 0xF75497BB865F0803 0x914BC21A b323
	// p5 always seems to be 1 i.e TRUE
	inline void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { _i<Void>(0x5640BFF86B16E8DC, cam, entity, p2, p3, p4, p5); } // 0x5640BFF86B16E8DC 0x7597A0F7 b323
	// Parameters p0-p5 seems correct. The bool p6 is unknown, but through every X360 script it's always 1. Please correct p0-p5 if any prove to be wrong. 
	inline void POINT_CAM_AT_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL p6) { _i<Void>(0x68B2B5F33BA63C41, cam, ped, boneIndex, x, y, z, p6); } // 0x68B2B5F33BA63C41 0x09F47049 b323
	inline void STOP_CAM_POINTING(Cam cam) { _i<Void>(0xF33AB75780BA57DE, cam); } // 0xF33AB75780BA57DE 0x5435F6A5 b323
	// Allows you to aim and shoot at the direction the camera is facing.
	inline void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { _i<Void>(0x8C1DC7770C51DC8D, cam, toggle); } // 0x8C1DC7770C51DC8D 0x0C74F9AF b323
	// Rotates the radar to match the camera's Z rotation
	inline void SET_CAM_CONTROLS_MINI_MAP_HEADING(Cam cam, BOOL toggle) { _i<Void>(0x661B5C8654ADD825, cam, toggle); } // 0x661B5C8654ADD825 0xE1A0B2F1 b323
	// When set to true shadows appear more smooth but less detailed.
	// Set to false by default.
	inline void SET_CAM_IS_INSIDE_VEHICLE(Cam cam, BOOL toggle) { _i<Void>(0xA2767257A320FC82, cam, toggle); } // 0xA2767257A320FC82 b323
	inline void ALLOW_MOTION_BLUR_DECAY(Any p0, BOOL p1) { _i<Void>(0x271017B9BA825366, p0, p1); } // 0x271017B9BA825366 0x43220969 b323
	// NOTE: Debugging functions are not present in the retail version of the game.
	inline void SET_CAM_DEBUG_NAME(Cam camera, const char* name) { _i<Void>(0x1B93E0107865DD40, camera, name); } // 0x1B93E0107865DD40 0x9B00DF3F b323
	inline Cam GET_DEBUG_CAM() { return _i<Cam>(0x77C3CEC46BE286F6); } // 0x77C3CEC46BE286F6 b2372
	// I filled p1-p6 (the floats) as they are as other natives with 6 floats in a row are similar and I see no other method. So if a test from anyone proves them wrong please correct.
	// 
	// p7 (length) determines the length of the spline, affects camera path and duration of transition between previous node and this one
	// 
	// p8 big values ~100 will slow down the camera movement before reaching this node
	// 
	// p9 != 0 seems to override the rotation/pitch (bool?)
	inline void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int smoothingStyle, int rotationOrder) { _i<Void>(0x8609C75EC438FB3B, camera, x, y, z, xRot, yRot, zRot, length, smoothingStyle, rotationOrder); } // 0x8609C75EC438FB3B 0xAD3C7EAA b323
	// p0 is the spline camera to which the node is being added.
	// p1 is the camera used to create the node.
	// p3 is always 3 in scripts. It might be smoothing style or rotation order.
	inline void ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(Cam cam, Cam cam2, int length, int p3) { _i<Void>(0x0A9F2A468B328E74, cam, cam2, length, p3); } // 0x0A9F2A468B328E74 0x30510511 b323
	// p0 is the spline camera to which the node is being added.
	// p1 is the camera used to create the node.
	// p3 is always 3 in scripts. It might be smoothing style or rotation order.
	inline void ADD_CAM_SPLINE_NODE_USING_CAMERA(Cam cam, Cam cam2, int length, int p3) { _i<Void>(0x0FB82563989CF4FB, cam, cam2, length, p3); } // 0x0FB82563989CF4FB 0xBA6C085B b323
	// p2 is always 2 in scripts. It might be smoothing style or rotation order.
	inline void ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(Cam cam, int length, int p2) { _i<Void>(0x609278246A29CA34, cam, length, p2); } // 0x609278246A29CA34 0xB4737F03 b323
	inline void SET_CAM_SPLINE_PHASE(Cam cam, float p1) { _i<Void>(0x242B5874F0A4E052, cam, p1); } // 0x242B5874F0A4E052 0xF0AED233 b323
	// Can use this with SET_CAM_SPLINE_PHASE to set the float it this native returns.
	// 
	// (returns 1.0f when no nodes has been added, reached end of non existing spline)
	inline float GET_CAM_SPLINE_PHASE(Cam cam) { return _i<float>(0xB5349E36C546509A, cam); } // 0xB5349E36C546509A 0x39784DD9 b323
	// I'm pretty sure the parameter is the camera as usual, but I am not certain so I'm going to leave it as is.
	inline float GET_CAM_SPLINE_NODE_PHASE(Cam cam) { return _i<float>(0xD9D0E694C8282C96, cam); } // 0xD9D0E694C8282C96 0x7B9522F6 b323
	// I named p1 as timeDuration as it is obvious. I'm assuming tho it is ran in ms(Milliseconds) as usual.
	inline void SET_CAM_SPLINE_DURATION(Cam cam, int timeDuration) { _i<Void>(0x1381539FEE034CDA, cam, timeDuration); } // 0x1381539FEE034CDA 0x3E91FC8A b323
	inline void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam cam, int smoothingStyle) { _i<Void>(0xD1B0F412F109EA5D, cam, smoothingStyle); } // 0xD1B0F412F109EA5D 0x15E141CE b323
	inline int GET_CAM_SPLINE_NODE_INDEX(Cam cam) { return _i<int>(0xB22B17DF858716A6, cam); } // 0xB22B17DF858716A6 0xF8AEB6BD b323
	inline void SET_CAM_SPLINE_NODE_EASE(Cam cam, int easingFunction, int p2, float p3) { _i<Void>(0x83B8201ED82A9A2D, cam, easingFunction, p2, p3); } // 0x83B8201ED82A9A2D 0x21D275DA b323
	inline void SET_CAM_SPLINE_NODE_VELOCITY_SCALE(Cam cam, int p1, float scale) { _i<Void>(0xA6385DEB180F319F, cam, p1, scale); } // 0xA6385DEB180F319F 0xA3BD9E94 b323
	inline void OVERRIDE_CAM_SPLINE_VELOCITY(Cam cam, int p1, float p2, float p3) { _i<Void>(0x40B62FA033EB0346, cam, p1, p2, p3); } // 0x40B62FA033EB0346 0x326A17E2 b323
	// Max value for p1 is 15.
	inline void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Cam cam, int p1, float p2, float p3) { _i<Void>(0x7DCF7C708D292D55, cam, p1, p2, p3); } // 0x7DCF7C708D292D55 0x633179E6 b323
	inline void SET_CAM_SPLINE_NODE_EXTRA_FLAGS(Cam cam, int p1, int flags) { _i<Void>(0x7BF1A54AE67AC070, cam, p1, flags); } // 0x7BF1A54AE67AC070 0xC90B2DDC b323
	inline BOOL IS_CAM_SPLINE_PAUSED(Cam cam) { return _i<BOOL>(0x0290F35C0AD97864, cam); } // 0x0290F35C0AD97864 0x60B34FF5 b323
	// Previous declaration void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, BOOL easeLocation, BOOL easeRotation) is completely wrong. The last two params are integers not BOOLs...
	// 
	inline void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { _i<Void>(0x9FBDA379383A52A4, camTo, camFrom, duration, easeLocation, easeRotation); } // 0x9FBDA379383A52A4 0x7983E7F0 b323
	inline BOOL IS_CAM_INTERPOLATING(Cam cam) { return _i<BOOL>(0x036F97C908C2B52C, cam); } // 0x036F97C908C2B52C 0x7159CB5D b323
	// Possible shake types (updated b617d):
	// 
	// DEATH_FAIL_IN_EFFECT_SHAKE
	// DRUNK_SHAKE
	// FAMILY5_DRUG_TRIP_SHAKE
	// HAND_SHAKE
	// JOLT_SHAKE
	// LARGE_EXPLOSION_SHAKE
	// MEDIUM_EXPLOSION_SHAKE
	// SMALL_EXPLOSION_SHAKE
	// ROAD_VIBRATION_SHAKE
	// SKY_DIVING_SHAKE
	// VIBRATE_SHAKE
	// 
	// Full list of cam shake types by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/camShakeTypesCompact.json
	inline void SHAKE_CAM(Cam cam, const char* type, float amplitude) { _i<Void>(0x6A25241C340D3822, cam, type, amplitude); } // 0x6A25241C340D3822 0x1D4211B0 b323
	// Example from michael2 script.
	// 
	// CAM::ANIMATED_SHAKE_CAM(l_5069, "shake_cam_all@", "light", "", 1f);
	inline void ANIMATED_SHAKE_CAM(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude) { _i<Void>(0xA2746EEAE3E577CD, cam, p1, p2, p3, amplitude); } // 0xA2746EEAE3E577CD 0xE1168767 b323
	inline BOOL IS_CAM_SHAKING(Cam cam) { return _i<BOOL>(0x6B24BFE83A2BE47B, cam); } // 0x6B24BFE83A2BE47B 0x0961FD9B b323
	inline void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { _i<Void>(0xD93DB43B82BC0D00, cam, amplitude); } // 0xD93DB43B82BC0D00 0x60FF6382 b323
	inline void STOP_CAM_SHAKING(Cam cam, BOOL p1) { _i<Void>(0xBDECF64367884AC3, cam, p1); } // 0xBDECF64367884AC3 0x40D0EB87 b323
	// CAM::SHAKE_SCRIPT_GLOBAL("HAND_SHAKE", 0.2);
	// 
	// Full list of cam shake types by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/camShakeTypesCompact.json
	inline void SHAKE_SCRIPT_GLOBAL(const char* p0, float p1) { _i<Void>(0xF4C8CF9E353AFECA, p0, p1); } // 0xF4C8CF9E353AFECA 0x2B0F05CD b323
	// CAM::ANIMATED_SHAKE_SCRIPT_GLOBAL("SHAKE_CAM_medium", "medium", "", 0.5f);
	// 
	// Full list of cam shake types by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/camShakeTypesCompact.json
	inline void ANIMATED_SHAKE_SCRIPT_GLOBAL(const char* p0, const char* p1, const char* p2, float p3) { _i<Void>(0xC2EAE3FB8CDBED31, p0, p1, p2, p3); } // 0xC2EAE3FB8CDBED31 0xCB75BD9C b323
	// In drunk_controller.c4, sub_309
	// if (CAM::IS_SCRIPT_GLOBAL_SHAKING()) {
	//     CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	// }
	inline BOOL IS_SCRIPT_GLOBAL_SHAKING() { return _i<BOOL>(0xC912AF078AF19212); } // 0xC912AF078AF19212 0x6AEFE6A5 b323
	// In drunk_controller.c4, sub_309
	// if (CAM::IS_SCRIPT_GLOBAL_SHAKING()) {
	//     CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	// }
	inline void STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) { _i<Void>(0x1C9D7949FA533490, p0); } // 0x1C9D7949FA533490 0x26FCFB96 b323
	// p1: 0..16
	inline void TRIGGER_VEHICLE_PART_BROKEN_CAMERA_SHAKE(Vehicle vehicle, int p1, float p2) { _i<Void>(0x5D96CFB59DA076A0, vehicle, p1, p2); } // 0x5D96CFB59DA076A0 b2060
	// Atleast one time in a script for the zRot Rockstar uses GET_ENTITY_HEADING to help fill the parameter.
	// 
	// p9 is unknown at this time.
	// p10 throughout all the X360 Scripts is always 2.
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline BOOL PLAY_CAM_ANIM(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return _i<BOOL>(0x9A2D0FB2E7852392, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); } // 0x9A2D0FB2E7852392 0xBCEFB87E b323
	inline BOOL IS_CAM_PLAYING_ANIM(Cam cam, const char* animName, const char* animDictionary) { return _i<BOOL>(0xC90621D8A0CEECF2, cam, animName, animDictionary); } // 0xC90621D8A0CEECF2 0xB998CB49 b323
	inline void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { _i<Void>(0x4145A4C44FF3B5A6, cam, phase); } // 0x4145A4C44FF3B5A6 0x3CB1D17F b323
	inline float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return _i<float>(0xA10B2DB49E92A6B0, cam); } // 0xA10B2DB49E92A6B0 0x345F72D0 b323
	// Examples:
	// 
	// CAM::PLAY_SYNCHRONIZED_CAM_ANIM(l_2734, NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(l_2739), "PLAYER_EXIT_L_CAM", "mp_doorbell");
	// 
	// CAM::PLAY_SYNCHRONIZED_CAM_ANIM(l_F0D[7/*1*/], l_F4D[15/*1*/], "ah3b_attackheli_cam2", "missheistfbi3b_helicrash");
	inline BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, const char* animName, const char* animDictionary) { return _i<BOOL>(0xE32EFE9AB4A9AA0C, p0, p1, animName, animDictionary); } // 0xE32EFE9AB4A9AA0C 0x9458459E b323
	inline void SET_FLY_CAM_HORIZONTAL_RESPONSE(Cam cam, float p1, float p2, float p3) { _i<Void>(0x503F5920162365B2, cam, p1, p2, p3); } // 0x503F5920162365B2 0x56F9ED27 b323
	inline void SET_FLY_CAM_VERTICAL_RESPONSE(Cam cam, float p1, float p2, float p3) { _i<Void>(0xE827B9382CFB41BA, cam, p1, p2, p3); } // 0xE827B9382CFB41BA b791
	inline void SET_FLY_CAM_MAX_HEIGHT(Cam cam, float height) { _i<Void>(0xF9D02130ECDD1D77, cam, height); } // 0xF9D02130ECDD1D77 0x71570DBA b323
	inline void SET_FLY_CAM_COORD_AND_CONSTRAIN(Cam cam, float x, float y, float z) { _i<Void>(0xC91C6C55199308CA, cam, x, y, z); } // 0xC91C6C55199308CA 0x60B345DE b323
	inline void SET_FLY_CAM_VERTICAL_CONTROLS_THIS_UPDATE(Cam cam) { _i<Void>(0xC8B5C4A79CC18B94, cam); } // 0xC8B5C4A79CC18B94 0x44473EFC b323
	inline BOOL WAS_FLY_CAM_CONSTRAINED_ON_PREVIOUS_UDPATE(Cam cam) { return _i<BOOL>(0x5C48A1D6E3B33179, cam); } // 0x5C48A1D6E3B33179 0xDA931D65 b323
	inline BOOL IS_SCREEN_FADED_OUT() { return _i<BOOL>(0xB16FCE9DDC7BA182); } // 0xB16FCE9DDC7BA182 0x9CAA05FA b323
	inline BOOL IS_SCREEN_FADED_IN() { return _i<BOOL>(0x5A859503B0C08678); } // 0x5A859503B0C08678 0x4F37276D b323
	inline BOOL IS_SCREEN_FADING_OUT() { return _i<BOOL>(0x797AC7CB535BA28F); } // 0x797AC7CB535BA28F 0x79275A57 b323
	inline BOOL IS_SCREEN_FADING_IN() { return _i<BOOL>(0x5C544BC6C57AC575); } // 0x5C544BC6C57AC575 0xC7C82800 b323
	// Fades the screen in.
	// 
	// duration: The time the fade should take, in milliseconds.
	inline void DO_SCREEN_FADE_IN(int duration) { _i<Void>(0xD4E8E24955024033, duration); } // 0xD4E8E24955024033 0x66C1BDEE b323
	// Fades the screen out.
	// 
	// duration: The time the fade should take, in milliseconds.
	inline void DO_SCREEN_FADE_OUT(int duration) { _i<Void>(0x891B5B39AC6302AF, duration); } // 0x891B5B39AC6302AF 0x89D01805 b323
	inline void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { _i<Void>(0xDCD4EA924F42D01A, p0, p1); } // 0xDCD4EA924F42D01A 0x1A75DC9A b323
	inline BOOL ARE_WIDESCREEN_BORDERS_ACTIVE() { return _i<BOOL>(0x4879E4FE39074CDF); } // 0x4879E4FE39074CDF b372
	inline Vector3 GET_GAMEPLAY_CAM_COORD() { return _i<Vector3>(0x14D6F5678D8F1B37); } // 0x14D6F5678D8F1B37 0x9388CF79 b323
	// p0 dosen't seem to change much, I tried it with 0, 1, 2:
	// 0-Pitch(X): -70.000092
	// 0-Roll(Y): -0.000001
	// 0-Yaw(Z): -43.886459
	// 1-Pitch(X): -70.000092
	// 1-Roll(Y): -0.000001
	// 1-Yaw(Z): -43.886463
	// 2-Pitch(X): -70.000092
	// 2-Roll(Y): -0.000002
	// 2-Yaw(Z): -43.886467
	inline Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return _i<Vector3>(0x837765A25378F0BB, rotationOrder); } // 0x837765A25378F0BB 0x13A010B5 b323
	inline float GET_GAMEPLAY_CAM_FOV() { return _i<float>(0x65019750A0324133); } // 0x65019750A0324133 0x4D6B3BFA b323
	// some camera effect that is used in the drunk-cheat, and turned off (by setting it to 0.0) along with the shaking effects once the drunk cheat is disabled.
	inline void SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(float p0) { _i<Void>(0x487A82C650EB7799, p0); } // 0x487A82C650EB7799 0xA6E73135 b323
	// some camera effect that is (also) used in the drunk-cheat, and turned off (by setting it to 0.0) along with the shaking effects once the drunk cheat is disabled.
	inline void SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(float p0) { _i<Void>(0x0225778816FDC28C, p0); } // 0x0225778816FDC28C 0x1126E37C b323
	inline float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return _i<float>(0x743607648ADD4587); } // 0x743607648ADD4587 0xCAF839C2 b323
	// Sets the camera position relative to heading in float from -360 to +360.
	// 
	// Heading is alwyas 0 in aiming camera.
	inline void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { _i<Void>(0xB4EC2312F4E5B1F1, heading); } // 0xB4EC2312F4E5B1F1 0x20C6217C b323
	inline float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return _i<float>(0x3A6867B4845BEDA2); } // 0x3A6867B4845BEDA2 0xFC5A4946 b323
	// This native sets the camera's pitch (rotation on the x-axis).
	inline void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float angle, float scalingFactor) { _i<Void>(0x6D0858B8EDFD2B7D, angle, scalingFactor); } // 0x6D0858B8EDFD2B7D 0x6381B963 b323
	inline void RESET_GAMEPLAY_CAM_FULL_ATTACH_PARENT_TRANSFORM_TIMER() { _i<Void>(0x7295C203DD659DFE); } // 0x7295C203DD659DFE b2699
	inline void FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(float roll, float pitch, float yaw) { _i<Void>(0x48608C3464F58AB4, roll, pitch, yaw); } // 0x48608C3464F58AB4 b505
	inline void FORCE_BONNET_CAMERA_RELATIVE_HEADING_AND_PITCH(float p0, float p1) { _i<Void>(0x28B022A17B068A3A, p0, p1); } // 0x28B022A17B068A3A b1734
	// Does nothing
	inline void SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(float yaw) { _i<Void>(0x103991D4A307D472, yaw); } // 0x103991D4A307D472 b323
	inline void SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(float pitch) { _i<Void>(0x759E13EBC1C15C5A, pitch); } // 0x759E13EBC1C15C5A b323
	inline void SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(BOOL p0) { _i<Void>(0x469F2ECDEC046337, p0); } // 0x469F2ECDEC046337 b323
	// Possible shake types (updated b617d):
	// 
	// DEATH_FAIL_IN_EFFECT_SHAKE
	// DRUNK_SHAKE
	// FAMILY5_DRUG_TRIP_SHAKE
	// HAND_SHAKE
	// JOLT_SHAKE
	// LARGE_EXPLOSION_SHAKE
	// MEDIUM_EXPLOSION_SHAKE
	// SMALL_EXPLOSION_SHAKE
	// ROAD_VIBRATION_SHAKE
	// SKY_DIVING_SHAKE
	// VIBRATE_SHAKE
	// 
	// Full list of cam shake types by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/camShakeTypesCompact.json
	inline void SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) { _i<Void>(0xFD55E49555E017CF, shakeName, intensity); } // 0xFD55E49555E017CF 0xF2EFE660 b323
	inline BOOL IS_GAMEPLAY_CAM_SHAKING() { return _i<BOOL>(0x016C090630DF1F89); } // 0x016C090630DF1F89 0x3457D681 b323
	// Sets the amplitude for the gameplay (i.e. 3rd or 1st) camera to shake. Used in script "drunk_controller.ysc.c4" to simulate making the player drunk.
	inline void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { _i<Void>(0xA87E00932DB4D85D, amplitude); } // 0xA87E00932DB4D85D 0x9219D44A b323
	inline void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { _i<Void>(0x0EF93E9F3D08C178, p0); } // 0x0EF93E9F3D08C178 0xFD569E4E b323
	// Forces gameplay cam to specified ped as if you were the ped or spectating it
	inline void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Ped ped) { _i<Void>(0x8BBACBF51DA047A8, ped); } // 0x8BBACBF51DA047A8 0x7D3007A2 b323
	// Examples when this function will return 0 are:
	// - During busted screen.
	// - When player is coming out from a hospital.
	// - When player is coming out from a police station.
	// - When player is buying gun from AmmuNation.
	inline BOOL IS_GAMEPLAY_CAM_RENDERING() { return _i<BOOL>(0x39B5D1B10383F0C8); } // 0x39B5D1B10383F0C8 0x0EF276DA b323
	inline BOOL IS_INTERPOLATING_FROM_SCRIPT_CAMS() { return _i<BOOL>(0x3044240D2E0FA842); } // 0x3044240D2E0FA842 0xC0B00C20 b323
	inline BOOL IS_INTERPOLATING_TO_SCRIPT_CAMS() { return _i<BOOL>(0x705A276EBFF3133D); } // 0x705A276EBFF3133D 0x60C23785 b323
	inline void SET_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_STATE(BOOL p0) { _i<Void>(0xDB90C6CCA48940F1, p0); } // 0xDB90C6CCA48940F1 0x20BFF6E5 b323
	// Shows the crosshair even if it wouldn't show normally. Only works for one frame, so make sure to call it repeatedly.
	inline void DISABLE_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_THIS_UPDATE() { _i<Void>(0xEA7F0AD7E9BA676F); } // 0xEA7F0AD7E9BA676F 0xA61FF9AC b323
	inline BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return _i<BOOL>(0x70FDA869F3317EA9); } // 0x70FDA869F3317EA9 0x33C83F17 b323
	inline void SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Entity entity) { _i<Void>(0x2AED6301F67007D5, entity); } // 0x2AED6301F67007D5 0x2701A9AD b323
	inline void DISABLE_CAM_COLLISION_FOR_OBJECT(Entity entity) { _i<Void>(0x49482F9FCD825AAA, entity); } // 0x49482F9FCD825AAA 0xC4736ED3 b323
	inline void BYPASS_CAMERA_COLLISION_BUOYANCY_TEST_THIS_UPDATE() { _i<Void>(0xA7092AFE81944852); } // 0xA7092AFE81944852 b2189
	inline void SET_GAMEPLAY_CAM_ENTITY_TO_LIMIT_FOCUS_OVER_BOUNDING_SPHERE_THIS_UPDATE(Entity entity) { _i<Void>(0xFD3151CD37EA2245, entity); } // 0xFD3151CD37EA2245 b323
	// Sets some flag on cinematic camera
	inline void DISABLE_FIRST_PERSON_CAMERA_WATER_CLIPPING_TEST_THIS_UPDATE() { _i<Void>(0xB1381B97F70C7B30); } // 0xB1381B97F70C7B30 b1180
	inline void SET_FOLLOW_CAM_IGNORE_ATTACH_PARENT_MOVEMENT_THIS_UPDATE() { _i<Void>(0xDD79DF9F4D26E1C9); } // 0xDD79DF9F4D26E1C9 0x6B0E9D57 b323
	inline BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return _i<BOOL>(0xE33D59DA70B58FDF, x, y, z, radius); } // 0xE33D59DA70B58FDF 0xDD1329E2 b323
	inline BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return _i<BOOL>(0xC6D3D26810C8E0F9); } // 0xC6D3D26810C8E0F9 0x9F9E856C b323
	// From the scripts:
	// 
	// CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_ATTACHED_TO_ROPE_CAMERA", 0);
	// CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_ON_EXILE1_LADDER_CAMERA", 1500);
	// CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_CAMERA", 0);
	// CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_CAMERA", 3000);
	// CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_FAMILY5_CAMERA", 0);
	// CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_SKY_DIVING_CAMERA", 0);
	inline BOOL SET_FOLLOW_PED_CAM_THIS_UPDATE(const char* camName, int p1) { return _i<BOOL>(0x44A113DD6FFC48D1, camName, p1); } // 0x44A113DD6FFC48D1 0x1425F6AC b323
	inline void USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(BOOL p0, BOOL p1) { _i<Void>(0x271401846BD26E92, p0, p1); } // 0x271401846BD26E92 0x8DC53629 b323
	inline void SET_FOLLOW_PED_CAM_LADDER_ALIGN_THIS_UPDATE() { _i<Void>(0xC8391C309684595A); } // 0xC8391C309684595A 0x1F9DE6E4 b323
	// minimum: Degrees between -180f and 180f.
	// maximum: Degrees between -180f and 180f.
	// 
	// Clamps the gameplay camera's current yaw.
	// 
	// Eg. SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(0.0f, 0.0f) will set the horizontal angle directly behind the player.
	inline void SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float minimum, float maximum) { _i<Void>(0x8F993D26E0CA5E8E, minimum, maximum); } // 0x8F993D26E0CA5E8E 0x749909AC b323
	// minimum: Degrees between -90f and 90f.
	// maximum: Degrees between -90f and 90f.
	// 
	// Clamps the gameplay camera's current pitch.
	// 
	// Eg. SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(0.0f, 0.0f) will set the vertical angle directly behind the player.
	inline void SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float minimum, float maximum) { _i<Void>(0xA516C198B7DCA1E1, minimum, maximum); } // 0xA516C198B7DCA1E1 0xFA3A16E7 b323
	// Seems to animate the gameplay camera zoom.
	// 
	// Eg. SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(1f, 1000f);
	// will animate the camera zooming in from 1000 meters away.
	// 
	// Game scripts use it like this:
	// 
	// // Setting this to 1 prevents V key from changing zoom
	// PLAYER::SET_PLAYER_FORCED_ZOOM(PLAYER::PLAYER_ID(), 1);
	// 
	// // These restrict how far you can move cam up/down left/right
	// CAM::SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(-20f, 50f);
	// CAM::SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(-60f, 0f);
	// 
	// CAM::SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(1f, 1f);
	inline void SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(float p0, float distance) { _i<Void>(0xDF2E1F7742402E81, p0, distance); } // 0xDF2E1F7742402E81 0x77340650 b323
	inline float _GET_THIRD_PERSON_CAM_MIN_ORBIT_DISTANCE_SPRING() { return _i<float>(0xBC456FB703431785); } // 0xBC456FB703431785 b3095
	inline float _GET_THIRD_PERSON_CAM_MAX_ORBIT_DISTANCE_SPRING() { return _i<float>(0xD4592A16D36673ED); } // 0xD4592A16D36673ED b3095
	// Forces gameplay cam to specified vehicle as if you were in it
	inline void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle p0, int p1) { _i<Void>(0xE9EA16D6E54CDCA4, p0, p1); } // 0xE9EA16D6E54CDCA4 0x4B22C5CB b323
	// Disables first person camera for the current frame.
	// 
	// Found in decompiled scripts:
	// GRAPHICS::DRAW_DEBUG_TEXT_2D("Disabling First Person Cam", 0.5, 0.8, 0.0, 0, 0, 255, 255);
	// CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	inline void DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE() { _i<Void>(0xDE2EF5DA284CC8DF); } // 0xDE2EF5DA284CC8DF b323
	inline void DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE() { _i<Void>(0x59424BD75174C9B1); } // 0x59424BD75174C9B1 b323
	inline void BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE() { _i<Void>(0x9F97DA93681F87EA); } // 0x9F97DA93681F87EA b1734
	inline int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return _i<int>(0x33E6C8EFD0CD93E9); } // 0x33E6C8EFD0CD93E9 0x57583DF1 b323
	// See viewmode enum in CAM.GET_FOLLOW_VEHICLE_CAM_VIEW_MODE for return value
	inline int GET_FOLLOW_PED_CAM_VIEW_MODE() { return _i<int>(0x8D4D46230B2C353A); } // 0x8D4D46230B2C353A 0xA65FF946 b323
	// Sets the type of Player camera:
	// 
	// 0 - Third Person Close
	// 1 - Third Person Mid
	// 2 - Third Person Far
	// 4 - First Person
	inline void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { _i<Void>(0x5A4F9EDF1673F704, viewMode); } // 0x5A4F9EDF1673F704 0x495DBE8D b323
	inline BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return _i<BOOL>(0xCBBDE6D335D6D496); } // 0xCBBDE6D335D6D496 0x8DD49B77 b323
	inline void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_THIS_UPDATE(BOOL p0) { _i<Void>(0x91EF6EE6419E5B97, p0); } // 0x91EF6EE6419E5B97 0x9DB5D391 b323
	inline void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(BOOL p0, BOOL p1) { _i<Void>(0x9DFE13ECDC1EC196, p0, p1); } // 0x9DFE13ECDC1EC196 0x92302899 b323
	inline BOOL SET_TABLE_GAMES_CAMERA_THIS_UPDATE(Hash hash) { return _i<BOOL>(0x79C0E43EB9B944E2, hash); } // 0x79C0E43EB9B944E2 b1734
	inline int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return _i<int>(0xEE82280AB767B690); } // 0xEE82280AB767B690 0x8CD67DE3 b323
	inline void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { _i<Void>(0x19464CB6E4078C8A, zoomLevel); } // 0x19464CB6E4078C8A 0x8F55EBBE b323
	// Returns the type of camera:
	// 
	// enum _viewmode //0xA11D7CA8
	// {
	// 	THIRD_PERSON_NEAR = 0,
	// 	THIRD_PERSON_MEDIUM = 1,
	// 	THIRD_PERSON_FAR = 2,
	// 	CINEMATIC = 3,
	// 	FIRST_PERSON = 4
	// };
	inline int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return _i<int>(0xA4FF579AC0E3AAAE); } // 0xA4FF579AC0E3AAAE 0xA4B4DB03 b323
	// Sets the type of Player camera in vehicles:
	// viewmode: see CAM.GET_FOLLOW_VEHICLE_CAM_VIEW_MODE
	inline void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { _i<Void>(0xAC253D7842768F48, viewMode); } // 0xAC253D7842768F48 0xC4FBBBD3 b323
	// context: see _GET_CAM_ACTIVE_VIEW_MODE_CONTEXT
	inline int GET_CAM_VIEW_MODE_FOR_CONTEXT(int context) { return _i<int>(0xEE778F8C7E1142E2, context); } // 0xEE778F8C7E1142E2 0xF3B148A6 b323
	// context: see _GET_CAM_ACTIVE_VIEW_MODE_CONTEXT, viewmode: see CAM.GET_FOLLOW_VEHICLE_CAM_VIEW_MODE
	inline void SET_CAM_VIEW_MODE_FOR_CONTEXT(int context, int viewMode) { _i<Void>(0x2A2173E46DAECD12, context, viewMode); } // 0x2A2173E46DAECD12 0x1DEBCB45 b323
	// enum Context
	// {
	// 	ON_FOOT,
	// 	IN_VEHICLE,
	// 	ON_BIKE,
	// 	IN_BOAT,
	// 	IN_AIRCRAFT,
	// 	IN_SUBMARINE,
	// 	IN_HELI,
	// 	IN_TURRET
	// };
	inline int GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() { return _i<int>(0x19CAFA3C87F7C2FF); } // 0x19CAFA3C87F7C2FF b323
	inline void USE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { _i<Void>(0x6493CF69859B116A); } // 0x6493CF69859B116A b791
	// Sets gameplay camera to hash
	inline void USE_DEDICATED_STUNT_CAMERA_THIS_UPDATE(const char* camName) { _i<Void>(0x425A920FDB9A0DDA, camName); } // 0x425A920FDB9A0DDA b1180
	inline void FORCE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { _i<Void>(0x0AA27680A0BD43FA); } // 0x0AA27680A0BD43FA b1103
	inline void SET_FOLLOW_VEHICLE_CAM_SEAT_THIS_UPDATE(int seatIndex) { _i<Void>(0x5C90CAB09951A12F, seatIndex); } // 0x5C90CAB09951A12F b1365
	inline BOOL IS_AIM_CAM_ACTIVE() { return _i<BOOL>(0x68EDDA28A5976D07); } // 0x68EDDA28A5976D07 0xC24B4F6F b323
	inline BOOL IS_AIM_CAM_ACTIVE_IN_ACCURATE_MODE() { return _i<BOOL>(0x74BD83EA840F6BC9); } // 0x74BD83EA840F6BC9 0x8F320DE4 b323
	inline BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return _i<BOOL>(0x5E346D934122613F); } // 0x5E346D934122613F 0xD6280468 b323
	inline void DISABLE_AIM_CAM_THIS_UPDATE() { _i<Void>(0x1A31FE0049E542F6); } // 0x1A31FE0049E542F6 0x1BAA7182 b323
	inline float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() { return _i<float>(0x7EC52CC40597D170); } // 0x7EC52CC40597D170 0x33951005 b323
	inline void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(float zoomFactor) { _i<Void>(0x70894BD0915C5BCA, zoomFactor); } // 0x70894BD0915C5BCA 0x9F4AF763 b323
	inline void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR_LIMITS_THIS_UPDATE(float p0, float p1) { _i<Void>(0xCED08CBE8EBB97C7, p0, p1); } // 0xCED08CBE8EBB97C7 0x68BA0730 b323
	inline void SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float p0, float p1) { _i<Void>(0x2F7F2B26DD3F18EE, p0, p1); } // 0x2F7F2B26DD3F18EE 0x2F29F0D5 b323
	inline void SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float p0, float p1) { _i<Void>(0xBCFC632DB7673BF0, p0, p1); } // 0xBCFC632DB7673BF0 0x76DAC96C b323
	inline void SET_FIRST_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { _i<Void>(0x0AF7B437918103B3, p0); } // 0x0AF7B437918103B3 0x0E21069D b323
	inline void SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { _i<Void>(0x42156508606DE65E, p0); } // 0x42156508606DE65E 0x71E9C63E b323
	inline void SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(BOOL p0) { _i<Void>(0x4008EDF7D6E48175, p0); } // 0x4008EDF7D6E48175 0xD1EEBC45 b323
	inline void FORCE_TIGHTSPACE_CUSTOM_FRAMING_THIS_UPDATE() { _i<Void>(0x380B4968D1E09E55); } // 0x380B4968D1E09E55 b1290
	inline Vector3 GET_FINAL_RENDERED_CAM_COORD() { return _i<Vector3>(0xA200EB1EE790F448); } // 0xA200EB1EE790F448 0x9C84BDA0 b323
	// p0 seems to consistently be 2 across scripts
	// 
	// Function is called faily often by CAM::CREATE_CAM_WITH_PARAMS
	inline Vector3 GET_FINAL_RENDERED_CAM_ROT(int rotationOrder) { return _i<Vector3>(0x5B4E4C817FCC2DFB, rotationOrder); } // 0x5B4E4C817FCC2DFB 0x1FFBEFC5 b323
	inline Vector3 GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_ROT(Player player, int rotationOrder) { return _i<Vector3>(0x26903D9CD1175F2C, player, rotationOrder); } // 0x26903D9CD1175F2C 0xACADF916 b323
	// Gets some camera fov
	inline float GET_FINAL_RENDERED_CAM_FOV() { return _i<float>(0x80EC114669DAEFF4); } // 0x80EC114669DAEFF4 0x721B763B b323
	inline float GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_FOV(Player player) { return _i<float>(0x5F35F6732C3FBBA0, player); } // 0x5F35F6732C3FBBA0 0x23E3F106 b323
	inline float GET_FINAL_RENDERED_CAM_NEAR_CLIP() { return _i<float>(0xD0082607100D7193); } // 0xD0082607100D7193 0x457AE195 b323
	inline float GET_FINAL_RENDERED_CAM_FAR_CLIP() { return _i<float>(0xDFC8CBC606FDB0FC); } // 0xDFC8CBC606FDB0FC 0x46CB3A49 b323
	inline float GET_FINAL_RENDERED_CAM_NEAR_DOF() { return _i<float>(0xA03502FC581F7D9B); } // 0xA03502FC581F7D9B 0x19297A7A b323
	inline float GET_FINAL_RENDERED_CAM_FAR_DOF() { return _i<float>(0x9780F32BCAF72431); } // 0x9780F32BCAF72431 0xF24777CA b323
	inline float GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH() { return _i<float>(0x162F9D995753DC19); } // 0x162F9D995753DC19 0x38992E83 b323
	inline void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int p6) { _i<Void>(0xD51ADCD2D8BC0FB3, x, y, z, duration, blendOutDuration, blendInDuration, p6); } // 0xD51ADCD2D8BC0FB3 0xF27483C9 b323
	inline void SET_GAMEPLAY_PED_HINT(Ped ped, float x1, float y1, float z1, BOOL p4, int duration, int blendOutDuration, int blendInDuration) { _i<Void>(0x2B486269ACD548D3, ped, x1, y1, z1, p4, duration, blendOutDuration, blendInDuration); } // 0x2B486269ACD548D3 0x7C27343E b323
	// Focuses the camera on the specified vehicle.
	inline void SET_GAMEPLAY_VEHICLE_HINT(Vehicle vehicle, float offsetX, float offsetY, float offsetZ, BOOL p4, int time, int easeInTime, int easeOutTime) { _i<Void>(0xA2297E18F3E71C2E, vehicle, offsetX, offsetY, offsetZ, p4, time, easeInTime, easeOutTime); } // 0xA2297E18F3E71C2E 0x2C9A11D8 b323
	inline void SET_GAMEPLAY_OBJECT_HINT(Object object, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime) { _i<Void>(0x83E87508A2CA2AC6, object, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime); } // 0x83E87508A2CA2AC6 0x2ED5E2F8 b323
	// p8 could be some sort of flag. Scripts use:
	// -244429742
	// 0
	// 1726668277
	// 1844968929
	inline void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime, int p8) { _i<Void>(0x189E955A8313E298, entity, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime, p8); } // 0x189E955A8313E298 0x66C32306 b323
	inline BOOL IS_GAMEPLAY_HINT_ACTIVE() { return _i<BOOL>(0xE520FF1AD2785B40); } // 0xE520FF1AD2785B40 0xAD8DA205 b323
	inline void STOP_GAMEPLAY_HINT(BOOL p0) { _i<Void>(0xF46C581C61718916, p0); } // 0xF46C581C61718916 0x1BC28B7B b323
	// This native does absolutely nothing, just a nullsub
	inline void STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(BOOL p0) { _i<Void>(0xCCD078C2665D2973, p0); } // 0xCCD078C2665D2973 0xCAFEE798 b323
	inline void STOP_CODE_GAMEPLAY_HINT(BOOL p0) { _i<Void>(0x247ACBC4ABBC9D1C, p0); } // 0x247ACBC4ABBC9D1C b323
	inline BOOL IS_CODE_GAMEPLAY_HINT_ACTIVE() { return _i<BOOL>(0xBF72910D0F26F025); } // 0xBF72910D0F26F025 b323
	inline void SET_GAMEPLAY_HINT_FOV(float FOV) { _i<Void>(0x513403FB9C56211F, FOV); } // 0x513403FB9C56211F 0x96FD173B b323
	inline void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(float value) { _i<Void>(0xF8BDBF3D573049A1, value); } // 0xF8BDBF3D573049A1 0x72E8CD3A b323
	inline void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(float value) { _i<Void>(0xD1F8363DFAD03848, value); } // 0xD1F8363DFAD03848 0x79472AE3 b323
	inline void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(float xOffset) { _i<Void>(0x5D7B620DAE436138, xOffset); } // 0x5D7B620DAE436138 0xFC7464A0 b323
	inline void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(float yOffset) { _i<Void>(0xC92717EF615B6704, yOffset); } // 0xC92717EF615B6704 0x3554AA0E b323
	inline void SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(BOOL toggle) { _i<Void>(0xE3433EADAAF7EE40, toggle); } // 0xE3433EADAAF7EE40 0x2F0CE859 b323
	inline void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { _i<Void>(0x51669F7D1FB53D9F, p0); } // 0x51669F7D1FB53D9F 0x3FBC5D00 b323
	inline BOOL IS_CINEMATIC_CAM_RENDERING() { return _i<BOOL>(0xB15162CB5826E9E8); } // 0xB15162CB5826E9E8 0x80471AD9 b323
	// p0 argument found in the b617d scripts: "DRUNK_SHAKE"
	// 
	// Full list of cam shake types by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/camShakeTypesCompact.json
	inline void SHAKE_CINEMATIC_CAM(const char* shakeType, float amount) { _i<Void>(0xDCE214D9ED58F3CF, shakeType, amount); } // 0xDCE214D9ED58F3CF 0x61815F31 b323
	inline BOOL IS_CINEMATIC_CAM_SHAKING() { return _i<BOOL>(0xBBC08F6B4CB8FF0A); } // 0xBBC08F6B4CB8FF0A 0x8376D939 b323
	inline void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { _i<Void>(0xC724C701C30B2FE7, p0); } // 0xC724C701C30B2FE7 0x67510C4B b323
	inline void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { _i<Void>(0x2238E588E588A6D7, p0); } // 0x2238E588E588A6D7 0x71C12904 b323
	inline void DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE() { _i<Void>(0xADFF1B2A555F5FBA); } // 0xADFF1B2A555F5FBA 0x5AC6DAC9 b323
	inline void DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE() { _i<Void>(0x62ECFCFDEE7885D6); } // 0x62ECFCFDEE7885D6 0x837F8581 b323
	// Resets the vehicle idle camera timer. Calling this in a loop will disable the idle camera.
	inline void INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE() { _i<Void>(0x9E4CFFF989258472); } // 0x9E4CFFF989258472 0x65DDE8AF b323
	// Resets the idle camera timer. Calling that in a loop once every few seconds is enough to disable the idle cinematic camera.
	inline void INVALIDATE_IDLE_CAM() { _i<Void>(0xF4F2C0D4EE209E20); } // 0xF4F2C0D4EE209E20 0xD75CDD75 b323
	inline BOOL IS_CINEMATIC_IDLE_CAM_RENDERING() { return _i<BOOL>(0xCA9D2AA3E326D720); } // 0xCA9D2AA3E326D720 0x96A07066 b323
	inline BOOL IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING() { return _i<BOOL>(0x4F32C0D5A90A9B40); } // 0x4F32C0D5A90A9B40 b323
	// hash is always JOAAT("CAMERA_MAN_SHOT") in decompiled scripts
	inline void CREATE_CINEMATIC_SHOT(Hash p0, int time, BOOL p2, Entity entity) { _i<Void>(0x741B0129D4560F31, p0, time, p2, entity); } // 0x741B0129D4560F31 0xAC494E35 b323
	// Hash is always JOAAT("CAMERA_MAN_SHOT") in decompiled scripts
	inline BOOL IS_CINEMATIC_SHOT_ACTIVE(Hash p0) { return _i<BOOL>(0xCC9F3371A7C28BC9, p0); } // 0xCC9F3371A7C28BC9 0xA4049042 b323
	// Only used once in carsteal3 with p0 set to -1096069633 (CAMERA_MAN_SHOT)
	inline void STOP_CINEMATIC_SHOT(Hash p0) { _i<Void>(0x7660C6E75D3A078E, p0); } // 0x7660C6E75D3A078E 0xD78358C5 b323
	inline void FORCE_CINEMATIC_RENDERING_THIS_UPDATE(BOOL toggle) { _i<Void>(0xA41BCD7213805AAC, toggle); } // 0xA41BCD7213805AAC 0xFBB85E02 b323
	inline void SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE() { _i<Void>(0xDC9DA9E8789F5246); } // 0xDC9DA9E8789F5246 0x4938C82F b323
	// Toggles the vehicle cinematic cam; requires the player ped to be in a vehicle to work.
	inline void SET_CINEMATIC_MODE_ACTIVE(BOOL toggle) { _i<Void>(0xDCF0754AC3D6FD4E, toggle); } // 0xDCF0754AC3D6FD4E 0x2009E747 b323
	inline BOOL IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING() { return _i<BOOL>(0x1F2300CB7FA7B7F6); } // 0x1F2300CB7FA7B7F6 0x6739AD55 b323
	inline BOOL DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE() { return _i<BOOL>(0x17FCA7199A530203); } // 0x17FCA7199A530203 b323
	inline BOOL IS_BONNET_CINEMATIC_CAM_RENDERING() { return _i<BOOL>(0xD7360051C885628B); } // 0xD7360051C885628B 0x1DD55F13 b372
	// Tests some cinematic camera flags
	inline BOOL IS_CINEMATIC_CAM_INPUT_ACTIVE() { return _i<BOOL>(0xF5F1E89A970B7796); } // 0xF5F1E89A970B7796 0x1A900C84 b1493
	inline void IGNORE_MENU_PREFERENCE_FOR_BONNET_CAMERA_THIS_UPDATE() { _i<Void>(0x7B8A361C1813FBEF); } // 0x7B8A361C1813FBEF b573
	inline void BYPASS_CUTSCENE_CAM_RENDERING_THIS_UPDATE() { _i<Void>(0xDB629FFD9285FA06); } // 0xDB629FFD9285FA06 b323
	inline void STOP_CUTSCENE_CAM_SHAKING(Any p0) { _i<Void>(0x324C5AA411DA7737, p0); } // 0x324C5AA411DA7737 b323
	// Hardcoded to only work in multiplayer.
	inline void SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(float p0) { _i<Void>(0x12DED8CA53D47EA5, p0); } // 0x12DED8CA53D47EA5 0x067BA6F5 b323
	inline Ped GET_FOCUS_PED_ON_SCREEN(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return _i<Ped>(0x89215EC747DF244A, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x89215EC747DF244A 0xFD99BE2B b323
	inline void DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE() { _i<Void>(0x5A43C76F7FC7BA5F); } // 0x5A43C76F7FC7BA5F 0xE206C450 b323
	// if p0 is 0, effect is cancelled
	// 
	// if p0 is 1, effect zooms in, gradually tilts cam clockwise apx 30 degrees, wobbles slowly. Motion blur is active until cancelled.
	// 
	// if p0 is 2, effect immediately tilts cam clockwise apx 30 degrees, begins to wobble slowly, then gradually tilts cam back to normal. The wobbling will continue until the effect is cancelled.
	inline void SET_CAM_DEATH_FAIL_EFFECT_STATE(int p0) { _i<Void>(0x80C8B1846639BB19, p0); } // 0x80C8B1846639BB19 0xB06CCD38 b323
	inline void SET_FIRST_PERSON_FLASH_EFFECT_TYPE(Any p0) { _i<Void>(0x5C41E6BABC9E2112, p0); } // 0x5C41E6BABC9E2112 b323
	// From b617 scripts:
	// 
	// CAM::SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME("DINGHY");
	// CAM::SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME("ISSI2");
	// CAM::SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME("SPEEDO");
	inline void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME(const char* vehicleName) { _i<Void>(0x21E253A7F8DA5DFB, vehicleName); } // 0x21E253A7F8DA5DFB b323
	inline void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(Hash vehicleModel) { _i<Void>(0x11FA5D3479C7DD47, vehicleModel); } // 0x11FA5D3479C7DD47 b323
	inline BOOL IS_ALLOWED_INDEPENDENT_CAMERA_MODES() { return _i<BOOL>(0xEAF0FA793D05C592); } // 0xEAF0FA793D05C592 b323
	inline void CAMERA_PREVENT_COLLISION_SETTINGS_FOR_TRIPLEHEAD_IN_INTERIORS_THIS_UPDATE() { _i<Void>(0x62374889A4D59F72); } // 0x62374889A4D59F72 b877
	inline float REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() { return _i<float>(0x8BFCEB5EA1B161B6); } // 0x8BFCEB5EA1B161B6 b323
}

namespace CLOCK
{
	// SET_CLOCK_TIME(12, 34, 56);
	inline void SET_CLOCK_TIME(int hour, int minute, int second) { _i<Void>(0x47C3B5848C3E45D8, hour, minute, second); } // 0x47C3B5848C3E45D8 0x26F6AF14 b323
	inline void PAUSE_CLOCK(BOOL toggle) { _i<Void>(0x4055E40BD2DBEC1D, toggle); } // 0x4055E40BD2DBEC1D 0xB02D6124 b323
	inline void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { _i<Void>(0xC8CA9670B9D83B3B, hour, minute, second); } // 0xC8CA9670B9D83B3B 0x57B8DA7C b323
	inline void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { _i<Void>(0xD716F30D8C8980E2, hours, minutes, seconds); } // 0xD716F30D8C8980E2 0xCC40D20D b323
	// Gets the current ingame hour, expressed without zeros. (09:34 will be represented as 9)
	inline int GET_CLOCK_HOURS() { return _i<int>(0x25223CA6B4D20B7F); } // 0x25223CA6B4D20B7F 0x7EF8316F b323
	// Gets the current ingame clock minute.
	inline int GET_CLOCK_MINUTES() { return _i<int>(0x13D2B8ADD79640F2); } // 0x13D2B8ADD79640F2 0x94AAC486 b323
	// Gets the current ingame clock second. Note that ingame clock seconds change really fast since a day in GTA is only 48 minutes in real life.
	inline int GET_CLOCK_SECONDS() { return _i<int>(0x494E97C2EF27C470); } // 0x494E97C2EF27C470 0x099C927E b323
	inline void SET_CLOCK_DATE(int day, int month, int year) { _i<Void>(0xB096419DF0D06CE7, day, month, year); } // 0xB096419DF0D06CE7 0x96891C94 b323
	// Gets the current day of the week.
	// 
	// 0: Sunday
	// 1: Monday
	// 2: Tuesday
	// 3: Wednesday
	// 4: Thursday
	// 5: Friday
	// 6: Saturday
	inline int GET_CLOCK_DAY_OF_WEEK() { return _i<int>(0xD972E4BD7AEB235F); } // 0xD972E4BD7AEB235F 0x84E4A289 b323
	inline int GET_CLOCK_DAY_OF_MONTH() { return _i<int>(0x3D10BC92A4DB1D35); } // 0x3D10BC92A4DB1D35 0xC7A5ACB7 b323
	inline int GET_CLOCK_MONTH() { return _i<int>(0xBBC72712E80257A1); } // 0xBBC72712E80257A1 0x3C48A3D5 b323
	inline int GET_CLOCK_YEAR() { return _i<int>(0x961777E64BDAF717); } // 0x961777E64BDAF717 0xB8BECF15 b323
	inline int GET_MILLISECONDS_PER_GAME_MINUTE() { return _i<int>(0x2F8B4D1C595B11DB); } // 0x2F8B4D1C595B11DB 0x3B74095C b323
	// Gets system time as year, month, day, hour, minute and second.
	// 
	// Example usage:
	// 
	//     int year;
	//  int month;
	//     int day;
	//   int hour;
	//  int minute;
	//    int second;
	// 
	//  TIME::GET_POSIX_TIME(&year, &month, &day, &hour, &minute, &second);
	// 
	inline void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { _i<Void>(0xDA488F299A5B164E, year, month, day, hour, minute, second); } // 0xDA488F299A5B164E 0xE15A5281 b323
	// Gets current UTC time
	inline void GET_UTC_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { _i<Void>(0x8117E09A19EEF4D3, year, month, day, hour, minute, second); } // 0x8117E09A19EEF4D3 0xC589CD7D b323
	// Gets local system time as year, month, day, hour, minute and second.
	// 
	// Example usage:
	// 
	// int year;
	// int month;
	// int day;
	// int hour;
	// int minute;
	// int second;
	// or use std::tm struct
	// 
	// TIME::GET_LOCAL_TIME(&year, &month, &day, &hour, &minute, &second);
	// 
	inline void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { _i<Void>(0x50C7A99057A69748, year, month, day, hour, minute, second); } // 0x50C7A99057A69748 0x124BCFA2 b323
}

namespace CUTSCENE
{
	// flags: Usually 8
	// Full list of cutscene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/cutsceneNames.json
	inline void REQUEST_CUTSCENE(const char* cutsceneName, int flags) { _i<Void>(0x7A86743F475D9E09, cutsceneName, flags); } // 0x7A86743F475D9E09 0xB5977853 b323
	// flags: Usually 8
	// 
	// playbackFlags: Which scenes should be played.
	// Example: 0x105 (bit 0, 2 and 8 set) will enable scene 1, 3 and 9.
	// Full list of cutscene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/cutsceneNames.json
	inline void REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(const char* cutsceneName, int playbackFlags, int flags) { _i<Void>(0xC23DE0E91C30B58C, cutsceneName, playbackFlags, flags); } // 0xC23DE0E91C30B58C 0xD98F656A b323
	inline void REMOVE_CUTSCENE() { _i<Void>(0x440AF51A3462B86F); } // 0x440AF51A3462B86F 0x8052F533 b323
	inline BOOL HAS_CUTSCENE_LOADED() { return _i<BOOL>(0xC59F528E9AB9F339); } // 0xC59F528E9AB9F339 0xF9998582 b323
	// Full list of cutscene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/cutsceneNames.json
	inline BOOL HAS_THIS_CUTSCENE_LOADED(const char* cutsceneName) { return _i<BOOL>(0x228D3D94F8A11C3C, cutsceneName); } // 0x228D3D94F8A11C3C 0x3C5619F2 b323
	// Sets the cutscene's owning thread ID.
	inline void SET_SCRIPT_CAN_START_CUTSCENE(int threadId) { _i<Void>(0x8D9DF6ECA8768583, threadId); } // 0x8D9DF6ECA8768583 0x25A2CABC b323
	inline BOOL CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() { return _i<BOOL>(0xB56BBBCC2955D9CB); } // 0xB56BBBCC2955D9CB 0xDD8878E9 b323
	inline BOOL IS_CUTSCENE_PLAYBACK_FLAG_SET(int flag) { return _i<BOOL>(0x71B74D2AE19338D0, flag); } // 0x71B74D2AE19338D0 0x7B93CDAA b323
	inline void SET_CUTSCENE_ENTITY_STREAMING_FLAGS(const char* cutsceneEntName, int p1, int p2) { _i<Void>(0x4C61C75BEE8184C2, cutsceneEntName, p1, p2); } // 0x4C61C75BEE8184C2 0x47DB08A9 b323
	// Simply loads the cutscene and doesn't do extra stuff that REQUEST_CUTSCENE does.
	// Full list of cutscene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/cutsceneNames.json
	inline void REQUEST_CUT_FILE(const char* cutsceneName) { _i<Void>(0x06A3524161C502BA, cutsceneName); } // 0x06A3524161C502BA 0x0D732CD6 b323
	// Simply checks if the cutscene has loaded and doesn't check via CutSceneManager as opposed to HAS_[THIS]_CUTSCENE_LOADED.
	// Full list of cutscene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/cutsceneNames.json
	inline BOOL HAS_CUT_FILE_LOADED(const char* cutsceneName) { return _i<BOOL>(0xA1C996C2A744262E, cutsceneName); } // 0xA1C996C2A744262E 0x56D5B144 b323
	// Simply unloads the cutscene and doesn't do extra stuff that REMOVE_CUTSCENE does.
	// Full list of cutscene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/cutsceneNames.json
	inline void REMOVE_CUT_FILE(const char* cutsceneName) { _i<Void>(0xD00D76A7DFC9D852, cutsceneName); } // 0xD00D76A7DFC9D852 0xB70D7C6D b323
	// Full list of cutscene names by DurtyFree https://github.com/DurtyFree/gta-v-data-dumps/blob/master/cutsceneNames.json
	inline int GET_CUT_FILE_CONCAT_COUNT(const char* cutsceneName) { return _i<int>(0x0ABC54DE641DC0FC, cutsceneName); } // 0x0ABC54DE641DC0FC 0xFD8B1AC2 b323
	// flags: Usually 0.
	inline void START_CUTSCENE(int flags) { _i<Void>(0x186D5CB5E7B0FF7B, flags); } // 0x186D5CB5E7B0FF7B 0x210106F6 b323
	// flags: Usually 0.
	inline void START_CUTSCENE_AT_COORDS(float x, float y, float z, int flags) { _i<Void>(0x1C9ADDA3244A1FBF, x, y, z, flags); } // 0x1C9ADDA3244A1FBF 0x58BEA436 b323
	inline void STOP_CUTSCENE(BOOL p0) { _i<Void>(0xC7272775B4DC786E, p0); } // 0xC7272775B4DC786E 0x5EE84DC7 b323
	inline void STOP_CUTSCENE_IMMEDIATELY() { _i<Void>(0xD220BDD222AC4A1E); } // 0xD220BDD222AC4A1E 0xF528A2AD b323
	// p3 could be heading. Needs more research.
	inline void SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) { _i<Void>(0xB812B3FD1C01CF27, x, y, z, p3, p4); } // 0xB812B3FD1C01CF27 0xB0AD7792 b323
	inline void SET_CUTSCENE_ORIGIN_AND_ORIENTATION(float x1, float y1, float z1, float x2, float y2, float z2, int p6) { _i<Void>(0x011883F41211432A, x1, y1, z1, x2, y2, z2, p6); } // 0x011883F41211432A b323
	inline int GET_CUTSCENE_TIME() { return _i<int>(0xE625BEABBAFFDAB9); } // 0xE625BEABBAFFDAB9 0x53F5B5AB b323
	inline int GET_CUTSCENE_TOTAL_DURATION() { return _i<int>(0xEE53B14A19E480D4); } // 0xEE53B14A19E480D4 0x0824EBE8 b323
	inline int GET_CUTSCENE_END_TIME() { return _i<int>(0x971D7B15BCDBEF99); } // 0x971D7B15BCDBEF99 b1734
	inline int GET_CUTSCENE_PLAY_DURATION() { return _i<int>(0x5D583F71C901F2A3); } // 0x5D583F71C901F2A3 b2802
	inline BOOL WAS_CUTSCENE_SKIPPED() { return _i<BOOL>(0x40C8656EDAEDD569); } // 0x40C8656EDAEDD569 0xC9B6949D b323
	inline BOOL HAS_CUTSCENE_FINISHED() { return _i<BOOL>(0x7C0A893088881D57); } // 0x7C0A893088881D57 0x5DED14B4 b323
	inline BOOL IS_CUTSCENE_ACTIVE() { return _i<BOOL>(0x991251AFC3981F84); } // 0x991251AFC3981F84 0xCCE2FE9D b323
	inline BOOL IS_CUTSCENE_PLAYING() { return _i<BOOL>(0xD3C2E180A40F031E); } // 0xD3C2E180A40F031E 0xA3A78392 b323
	inline int GET_CUTSCENE_SECTION_PLAYING() { return _i<int>(0x49010A6A396553D8); } // 0x49010A6A396553D8 0x1026F0D6 b323
	inline Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(const char* cutsceneEntName, Hash modelHash) { return _i<Entity>(0x0A2E9FDB9A8C62F6, cutsceneEntName, modelHash); } // 0x0A2E9FDB9A8C62F6 0x1D09ABC7 b323
	inline int GET_CUTSCENE_CONCAT_SECTION_PLAYING() { return _i<int>(0x583DF8E3D4AFBD98); } // 0x583DF8E3D4AFBD98 0x5AE68AE6 b323
	// This function is hard-coded to always return 1.
	inline BOOL IS_CUTSCENE_AUTHORIZED(const char* cutsceneName) { return _i<BOOL>(0x4CEBC1ED31E8925E, cutsceneName); } // 0x4CEBC1ED31E8925E b323
	inline int DOES_CUTSCENE_HANDLE_EXIST(int cutsceneHandle) { return _i<int>(0x4FCD976DA686580C, cutsceneHandle); } // 0x4FCD976DA686580C b1290
	inline void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4) { _i<Void>(0xE40C1C56DF95C2E8, cutscenePed, cutsceneEntName, p2, modelHash, p4); } // 0xE40C1C56DF95C2E8 0x7CBC3EC7 b323
	inline Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return _i<Entity>(0xC0741A26499654CD, cutsceneEntName, modelHash); } // 0xC0741A26499654CD 0x46D18755 b323
	// Full list of vehicles by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/vehicles.json
	inline void SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(Hash modelHash) { _i<Void>(0x7F96F23FA9B73327, modelHash); } // 0x7F96F23FA9B73327 b323
	// Only used twice in R* scripts
	inline void SET_CUTSCENE_TRIGGER_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { _i<Void>(0x9896CE4721BE84BA, x1, y1, z1, x2, y2, z2); } // 0x9896CE4721BE84BA 0x9D76D9DE b323
	// modelHash (p1) was always 0 in R* scripts
	inline BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return _i<BOOL>(0x645D0B458D8E17B5, cutsceneEntName, modelHash); } // 0x645D0B458D8E17B5 0x55C30B26 b323
	inline BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return _i<BOOL>(0x4C6A6451C79E4662, cutsceneEntName, modelHash); } // 0x4C6A6451C79E4662 0x8FF5D3C4 b323
	inline BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return _i<BOOL>(0xB2CBCD0930DFB420, p0); } // 0xB2CBCD0930DFB420 0xEDAE6C02 b323
	// Toggles a value (bool) for cutscenes.
	inline void SET_PAD_CAN_SHAKE_DURING_CUTSCENE(BOOL toggle) { _i<Void>(0xC61B86C9F61EB404, toggle); } // 0xC61B86C9F61EB404 0x35721A08 b323
	inline void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { _i<Void>(0x8093F23ABACCC7D4, p0, p1, p2, p3); } // 0x8093F23ABACCC7D4 0xD19EF0DD b323
	inline void SET_CUTSCENE_MULTIHEAD_FADE(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { _i<Void>(0x20746F7B1032A3C7, p0, p1, p2, p3); } // 0x20746F7B1032A3C7 b323
	inline void SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(BOOL p0) { _i<Void>(0x06EE9048FD080382, p0); } // 0x06EE9048FD080382 b323
	inline BOOL IS_MULTIHEAD_FADE_UP() { return _i<BOOL>(0xA0FE76168A189DDB); } // 0xA0FE76168A189DDB b323
	// Stops current cutscene with a fade transition
	// p0: always true in R* Scripts
	// You will need to manually fade the screen back in
	// SET_CUTSCENE_INPUTS_PARTIALLY_FADE?
	inline void NETWORK_SET_MOCAP_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { _i<Void>(0x2F137B508DE238F2, p0); } // 0x2F137B508DE238F2 0x8338DA1D b323
	inline void SET_CAR_GENERATORS_CAN_UPDATE_DURING_CUTSCENE(BOOL p0) { _i<Void>(0xE36A98D8AB3D3C66, p0); } // 0xE36A98D8AB3D3C66 0x04377C10 b323
	inline BOOL CAN_USE_MOBILE_PHONE_DURING_CUTSCENE() { return _i<BOOL>(0x5EDEF0CF8C1DAB3C); } // 0x5EDEF0CF8C1DAB3C 0xDBD88708 b323
	inline void SET_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { _i<Void>(0x41FAA8FB2ECE8720, p0); } // 0x41FAA8FB2ECE8720 0x28D54A7F b323
	inline void SET_CAN_DISPLAY_MINIMAP_DURING_CUTSCENE_THIS_UPDATE() { _i<Void>(0x2131046957F31B04); } // 0x2131046957F31B04 0xB60CFBB9 b323
	// Full list of ped components by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/pedComponentVariations.json
	inline void SET_CUTSCENE_PED_COMPONENT_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { _i<Void>(0xBA01E7B6DEEFBBC9, cutsceneEntName, componentId, drawableId, textureId, modelHash); } // 0xBA01E7B6DEEFBBC9 0x6AF994A1 b323
	inline void SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(const char* cutsceneEntName, Ped ped, Hash modelHash) { _i<Void>(0x2A56C06EBEF2B0D9, cutsceneEntName, ped, modelHash); } // 0x2A56C06EBEF2B0D9 0x1E7DA95E b323
	inline BOOL DOES_CUTSCENE_ENTITY_EXIST(const char* cutsceneEntName, Hash modelHash) { return _i<BOOL>(0x499EF20C5DB25C59, cutsceneEntName, modelHash); } // 0x499EF20C5DB25C59 0x58E67409 b323
	// Thanks R*! ;)
	// 
	// if ((l_161 == 0) || (l_161 == 2)) {
	//     sub_2ea27("Trying to set Jimmy prop variation");
	//     CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Jimmy_Boston", 1, 0, 0, 0);
	// }
	// 
	// Full list of ped components by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/pedComponentVariations.json
	inline void SET_CUTSCENE_PED_PROP_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { _i<Void>(0x0546524ADE2E9723, cutsceneEntName, componentId, drawableId, textureId, modelHash); } // 0x0546524ADE2E9723 0x22E9A9DE b323
	// Possibly HAS_CUTSCENE_CUT_THIS_FRAME, needs more research.
	inline BOOL HAS_CUTSCENE_CUT_THIS_FRAME() { return _i<BOOL>(0x708BDD8CD795B043); } // 0x708BDD8CD795B043 0x4315A7C5 b323
}

namespace DATAFILE
{
	inline void DATAFILE_WATCH_REQUEST_ID(int requestId) { _i<Void>(0xAD6875BBC0FC899C, requestId); } // 0xAD6875BBC0FC899C 0x621388FF b323
	inline void DATAFILE_CLEAR_WATCH_LIST() { _i<Void>(0x6CC86E78358D5119); } // 0x6CC86E78358D5119 0x5B39D0AC b323
	inline BOOL DATAFILE_IS_VALID_REQUEST_ID(int index) { return _i<BOOL>(0xFCCAE5B92A830878, index); } // 0xFCCAE5B92A830878 0x01393D16 b323
	inline BOOL DATAFILE_HAS_LOADED_FILE_DATA(int requestId) { return _i<BOOL>(0x15FF52B809DB2353, requestId); } // 0x15FF52B809DB2353 0x36FB8B3F b323
	inline BOOL DATAFILE_HAS_VALID_FILE_DATA(int requestId) { return _i<BOOL>(0xF8CC1EBE0B62E29F, requestId); } // 0xF8CC1EBE0B62E29F 0x2A9411DA b323
	inline BOOL DATAFILE_SELECT_ACTIVE_FILE(int requestId, Any p1) { return _i<BOOL>(0x22DA66936E0FFF37, requestId, p1); } // 0x22DA66936E0FFF37 0xB41064A4 b323
	inline BOOL DATAFILE_DELETE_REQUESTED_FILE(int requestId) { return _i<BOOL>(0x8F5EA1C01D65A100, requestId); } // 0x8F5EA1C01D65A100 0x9DB63CFF b323
	inline BOOL UGC_CREATE_CONTENT(Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p7) { return _i<BOOL>(0xC84527E235FCA219, data, dataCount, contentName, description, tagsCsv, contentTypeName, publish, p7); } // 0xC84527E235FCA219 0xF09157B0 b323
	inline BOOL UGC_CREATE_MISSION(const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p5) { return _i<BOOL>(0xA5EFC3E847D60507, contentName, description, tagsCsv, contentTypeName, publish, p5); } // 0xA5EFC3E847D60507 0xD96860FC b323
	inline BOOL UGC_UPDATE_CONTENT(const char* contentId, Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p7) { return _i<BOOL>(0x648E7A5434AF7969, contentId, data, dataCount, contentName, description, tagsCsv, contentTypeName, p7); } // 0x648E7A5434AF7969 0x459F2683 b323
	inline BOOL UGC_UPDATE_MISSION(const char* contentId, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p5) { return _i<BOOL>(0x4645DE9980999E93, contentId, contentName, description, tagsCsv, contentTypeName, p5); } // 0x4645DE9980999E93 0xDBB83E2B b323
	inline BOOL UGC_SET_PLAYER_DATA(const char* contentId, float rating, const char* contentTypeName, Any p3) { return _i<BOOL>(0x692D808C34A82143, contentId, rating, contentTypeName, p3); } // 0x692D808C34A82143 0xBB6321BD b323
	inline BOOL DATAFILE_SELECT_UGC_DATA(int p0, Any p1) { return _i<BOOL>(0xA69AC4ADE82B57A4, p0, p1); } // 0xA69AC4ADE82B57A4 0xE8D56DA2 b323
	inline BOOL DATAFILE_SELECT_UGC_STATS(int p0, BOOL p1, Any p2) { return _i<BOOL>(0x9CB0BFA7A9342C3D, p0, p1, p2); } // 0x9CB0BFA7A9342C3D 0xCB6A351E b323
	inline BOOL DATAFILE_SELECT_UGC_PLAYER_DATA(int p0, Any p1) { return _i<BOOL>(0x52818819057F2B40, p0, p1); } // 0x52818819057F2B40 0xA4D1B30E b323
	inline BOOL DATAFILE_SELECT_CREATOR_STATS(int p0, Any p1) { return _i<BOOL>(0x01095C95CD46B624, p0, p1); } // 0x01095C95CD46B624 0xB8515B2F b323
	// Loads a User-Generated Content (UGC) file. These files can be found in "[GTA5]\data\ugc" and "[GTA5]\common\patch\ugc". They seem to follow a naming convention, most likely of "[name]_[part].ugc". See example below for usage.
	// 
	// Returns whether or not the file was successfully loaded.
	// 
	// Example:
	// DATAFILE::DATAFILE_LOAD_OFFLINE_UGC("RockstarPlaylists") // loads "rockstarplaylists_00.ugc"
	inline BOOL DATAFILE_LOAD_OFFLINE_UGC(const char* filename, Any p1) { return _i<BOOL>(0xC5238C011AF405E4, filename, p1); } // 0xC5238C011AF405E4 0x660C468E b323
	inline void DATAFILE_CREATE(int p0) { _i<Void>(0xD27058A1CA2B13EE, p0); } // 0xD27058A1CA2B13EE 0x95F8A221 b323
	inline void DATAFILE_DELETE(int p0) { _i<Void>(0x9AB9C1CFC8862DFB, p0); } // 0x9AB9C1CFC8862DFB 0xDEF31B0A b323
	inline void DATAFILE_STORE_MISSION_HEADER(int p0) { _i<Void>(0x2ED61456317B8178, p0); } // 0x2ED61456317B8178 0x4E03F632 b323
	inline void DATAFILE_FLUSH_MISSION_HEADER() { _i<Void>(0xC55854C7D7274882); } // 0xC55854C7D7274882 0xF11F956F b323
	inline Any* DATAFILE_GET_FILE_DICT(int p0) { return _i<Any*>(0x906B778CA1DC72B6, p0); } // 0x906B778CA1DC72B6 0x86DDF9C2 b323
	inline BOOL DATAFILE_START_SAVE_TO_CLOUD(const char* filename, Any p1) { return _i<BOOL>(0x83BCCE3224735F05, filename, p1); } // 0x83BCCE3224735F05 0x768CBB35 b323
	inline BOOL DATAFILE_UPDATE_SAVE_TO_CLOUD(BOOL* p0) { return _i<BOOL>(0x4DFDD9EB705F8140, p0); } // 0x4DFDD9EB705F8140 0x0B4087F7 b323
	inline BOOL DATAFILE_IS_SAVE_PENDING() { return _i<BOOL>(0xBEDB96A7584AA8CF); } // 0xBEDB96A7584AA8CF 0x5DCD0796 b323
	inline BOOL DATAFILE_LOAD_OFFLINE_UGC_FOR_ADDITIONAL_DATA_FILE(Any p0, Any p1) { return _i<BOOL>(0xA6EEF01087181EDD, p0, p1); } // 0xA6EEF01087181EDD b2189
	inline void DATAFILE_DELETE_FOR_ADDITIONAL_DATA_FILE(Any p0) { _i<Void>(0x6AD0BD5E087866CB, p0); } // 0x6AD0BD5E087866CB b2189
	inline Any* DATAFILE_GET_FILE_DICT_FOR_ADDITIONAL_DATA_FILE(Any p0) { return _i<Any*>(0xDBF860CF1DB8E599, p0); } // 0xDBF860CF1DB8E599 b2189
	inline void DATADICT_SET_BOOL(Any* objectData, const char* key, BOOL value) { _i<Void>(0x35124302A556A325, objectData, key, value); } // 0x35124302A556A325 0x9B29D99B b323
	inline void DATADICT_SET_INT(Any* objectData, const char* key, int value) { _i<Void>(0xE7E035450A7948D5, objectData, key, value); } // 0xE7E035450A7948D5 0xEFCF554A b323
	inline void DATADICT_SET_FLOAT(Any* objectData, const char* key, float value) { _i<Void>(0xC27E1CC2D795105E, objectData, key, value); } // 0xC27E1CC2D795105E 0xE972CACF b323
	inline void DATADICT_SET_STRING(Any* objectData, const char* key, const char* value) { _i<Void>(0x8FF3847DADD8E30C, objectData, key, value); } // 0x8FF3847DADD8E30C 0xD437615C b323
	inline void DATADICT_SET_VECTOR(Any* objectData, const char* key, float valueX, float valueY, float valueZ) { _i<Void>(0x4CD49B76338C7DEE, objectData, key, valueX, valueY, valueZ); } // 0x4CD49B76338C7DEE 0x75FC6C3C b323
	inline Any* DATADICT_CREATE_DICT(Any* objectData, const char* key) { return _i<Any*>(0xA358F56F10732EE1, objectData, key); } // 0xA358F56F10732EE1 0x96A8E05F b323
	inline Any* DATADICT_CREATE_ARRAY(Any* objectData, const char* key) { return _i<Any*>(0x5B11728527CA6E5F, objectData, key); } // 0x5B11728527CA6E5F 0x03939B8D b323
	inline BOOL DATADICT_GET_BOOL(Any* objectData, const char* key) { return _i<BOOL>(0x1186940ED72FFEEC, objectData, key); } // 0x1186940ED72FFEEC 0x8876C872 b323
	inline int DATADICT_GET_INT(Any* objectData, const char* key) { return _i<int>(0x78F06F6B1FB5A80C, objectData, key); } // 0x78F06F6B1FB5A80C 0xA6C68693 b323
	inline float DATADICT_GET_FLOAT(Any* objectData, const char* key) { return _i<float>(0x06610343E73B9727, objectData, key); } // 0x06610343E73B9727 0xA92C1AF4 b323
	inline const char* DATADICT_GET_STRING(Any* objectData, const char* key) { return _i<const char*>(0x3D2FD9E763B24472, objectData, key); } // 0x3D2FD9E763B24472 0x942160EC b323
	inline Vector3 DATADICT_GET_VECTOR(Any* objectData, const char* key) { return _i<Vector3>(0x46CD3CB66E0825CC, objectData, key); } // 0x46CD3CB66E0825CC 0xE84A127A b323
	inline Any* DATADICT_GET_DICT(Any* objectData, const char* key) { return _i<Any*>(0xB6B9DDC412FCEEE2, objectData, key); } // 0xB6B9DDC412FCEEE2 0xC9C13D8D b323
	inline Any* DATADICT_GET_ARRAY(Any* objectData, const char* key) { return _i<Any*>(0x7A983AA9DA2659ED, objectData, key); } // 0x7A983AA9DA2659ED 0x1F2F7D00 b323
	// Types:
	// 1 = Boolean
	// 2 = Integer
	// 3 = Float
	// 4 = String
	// 5 = Vector3
	// 6 = Object
	// 7 = Array
	inline int DATADICT_GET_TYPE(Any* objectData, const char* key) { return _i<int>(0x031C55ED33227371, objectData, key); } // 0x031C55ED33227371 0x2678342A b323
	inline void DATAARRAY_ADD_BOOL(Any* arrayData, BOOL value) { _i<Void>(0xF8B0F5A43E928C76, arrayData, value); } // 0xF8B0F5A43E928C76 0x08174B90 b323
	inline void DATAARRAY_ADD_INT(Any* arrayData, int value) { _i<Void>(0xCABDB751D86FE93B, arrayData, value); } // 0xCABDB751D86FE93B 0xF29C0B36 b323
	inline void DATAARRAY_ADD_FLOAT(Any* arrayData, float value) { _i<Void>(0x57A995FD75D37F56, arrayData, value); } // 0x57A995FD75D37F56 0xE4302123 b323
	inline void DATAARRAY_ADD_STRING(Any* arrayData, const char* value) { _i<Void>(0x2F0661C155AEEEAA, arrayData, value); } // 0x2F0661C155AEEEAA 0xF3C01350 b323
	inline void DATAARRAY_ADD_VECTOR(Any* arrayData, float valueX, float valueY, float valueZ) { _i<Void>(0x407F8D034F70F0C2, arrayData, valueX, valueY, valueZ); } // 0x407F8D034F70F0C2 0x16F464B6 b323
	inline Any* DATAARRAY_ADD_DICT(Any* arrayData) { return _i<Any*>(0x6889498B3E19C797, arrayData); } // 0x6889498B3E19C797 0xC174C71B b323
	inline BOOL DATAARRAY_GET_BOOL(Any* arrayData, int arrayIndex) { return _i<BOOL>(0x50C1B2874E50C114, arrayData, arrayIndex); } // 0x50C1B2874E50C114 0xA2E5F921 b323
	inline int DATAARRAY_GET_INT(Any* arrayData, int arrayIndex) { return _i<int>(0x3E5AE19425CD74BE, arrayData, arrayIndex); } // 0x3E5AE19425CD74BE 0xBB120CFC b323
	inline float DATAARRAY_GET_FLOAT(Any* arrayData, int arrayIndex) { return _i<float>(0xC0C527B525D7CFB5, arrayData, arrayIndex); } // 0xC0C527B525D7CFB5 0x08AD2CC2 b323
	inline const char* DATAARRAY_GET_STRING(Any* arrayData, int arrayIndex) { return _i<const char*>(0xD3F2FFEB8D836F52, arrayData, arrayIndex); } // 0xD3F2FFEB8D836F52 0x93F985A6 b323
	inline Vector3 DATAARRAY_GET_VECTOR(Any* arrayData, int arrayIndex) { return _i<Vector3>(0x8D2064E5B64A628A, arrayData, arrayIndex); } // 0x8D2064E5B64A628A 0x80E3DA55 b323
	inline Any* DATAARRAY_GET_DICT(Any* arrayData, int arrayIndex) { return _i<Any*>(0x8B5FADCC4E3A145F, arrayData, arrayIndex); } // 0x8B5FADCC4E3A145F 0xECE81278 b323
	inline int DATAARRAY_GET_COUNT(Any* arrayData) { return _i<int>(0x065DB281590CEA2D, arrayData); } // 0x065DB281590CEA2D 0xA8A21766 b323
	// Types:
	// 1 = Boolean
	// 2 = Integer
	// 3 = Float
	// 4 = String
	// 5 = Vector3
	// 6 = Object
	// 7 = Array
	inline int DATAARRAY_GET_TYPE(Any* arrayData, int arrayIndex) { return _i<int>(0x3A0014ADB172A3C5, arrayData, arrayIndex); } // 0x3A0014ADB172A3C5 0xFA2402C8 b323
}

namespace DECORATOR
{
	inline BOOL DECOR_SET_TIME(Entity entity, const char* propertyName, int timestamp) { return _i<BOOL>(0x95AED7B8E39ECAA4, entity, propertyName, timestamp); } // 0x95AED7B8E39ECAA4 0xBBAEEF94 b323
	// This function sets metadata of type bool to specified entity.
	// 
	inline BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return _i<BOOL>(0x6B1E8E2ED1335B71, entity, propertyName, value); } // 0x6B1E8E2ED1335B71 0x8E101F5C b323
	inline BOOL DECOR_SET_FLOAT(Entity entity, const char* propertyName, float value) { return _i<BOOL>(0x211AB1DD8D0F363A, entity, propertyName, value); } // 0x211AB1DD8D0F363A 0xBC7BD5CB b323
	// Sets property to int.
	inline BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return _i<BOOL>(0x0CE3AA5E1CA19E10, entity, propertyName, value); } // 0x0CE3AA5E1CA19E10 0xDB718B21 b323
	inline BOOL DECOR_GET_BOOL(Entity entity, const char* propertyName) { return _i<BOOL>(0xDACE671663F2F5DB, entity, propertyName); } // 0xDACE671663F2F5DB 0xDBCE51E0 b323
	inline float DECOR_GET_FLOAT(Entity entity, const char* propertyName) { return _i<float>(0x6524A2F114706F43, entity, propertyName); } // 0x6524A2F114706F43 0x8DE5382F b323
	inline int DECOR_GET_INT(Entity entity, const char* propertyName) { return _i<int>(0xA06C969B02A97298, entity, propertyName); } // 0xA06C969B02A97298 0xDDDE59B5 b323
	// Returns whether or not the specified property is set for the entity.
	inline BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return _i<BOOL>(0x05661B80A8C9165F, entity, propertyName); } // 0x05661B80A8C9165F 0x74EF9C40 b323
	inline BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return _i<BOOL>(0x00EE9F297C738720, entity, propertyName); } // 0x00EE9F297C738720 0xE0E2640B b323
	// https://alloc8or.re/gta5/doc/enums/eDecorType.txt
	inline void DECOR_REGISTER(const char* propertyName, int type) { _i<Void>(0x9FD90732F56403CE, propertyName, type); } // 0x9FD90732F56403CE 0x68BD42A9 b323
	// type: see DECOR_REGISTER
	inline BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return _i<BOOL>(0x4F14F9F870D6FBC8, propertyName, type); } // 0x4F14F9F870D6FBC8 0x7CF0971D b323
	// Called after all decorator type initializations.
	inline void DECOR_REGISTER_LOCK() { _i<Void>(0xA9D14EEA259F9248); } // 0xA9D14EEA259F9248 0x7F3F1C02 b323
}

namespace DLC
{
	inline BOOL ARE_ANY_CCS_PENDING() { return _i<BOOL>(0x241FCA5B1AA14F75); } // 0x241FCA5B1AA14F75 0x0AF83036 b323
	// Returns true if the given DLC pack is present.
	inline BOOL IS_DLC_PRESENT(Hash dlcHash) { return _i<BOOL>(0x812595A0644CE1DE, dlcHash); } // 0x812595A0644CE1DE 0x1F321943 b323
	// This function is hard-coded to always return 1.
	inline BOOL DLC_CHECK_CLOUD_DATA_CORRECT() { return _i<BOOL>(0xF2E07819EF1A5289); } // 0xF2E07819EF1A5289 0x881B1FDB b323
	// This function is hard-coded to always return 0.
	inline int GET_EXTRACONTENT_CLOUD_RESULT() { return _i<int>(0x9489659372A81585); } // 0x9489659372A81585 0xC2169164 b323
	// This function is hard-coded to always return 1.
	inline BOOL DLC_CHECK_COMPAT_PACK_CONFIGURATION() { return _i<BOOL>(0xA213B11DFF526300); } // 0xA213B11DFF526300 0xF79A97F5 b323
	inline BOOL GET_EVER_HAD_BAD_PACK_ORDER() { return _i<BOOL>(0x8D30F648014A92B5); } // 0x8D30F648014A92B5 0xF69B729C b323
	inline BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return _i<BOOL>(0x10D0A8F259E93EC9); } // 0x10D0A8F259E93EC9 0x517B601B b323
	inline BOOL GET_IS_INITIAL_LOADING_SCREEN_ACTIVE() { return _i<BOOL>(0xC4637A6D03C24CC3); } // 0xC4637A6D03C24CC3 b1734
	// Sets the value of the specified variable to 0.
	// Always returns true.
	inline BOOL HAS_CLOUD_REQUESTS_FINISHED(BOOL* p0, int unused) { return _i<BOOL>(0x46E2B844905BC5F0, p0, unused); } // 0x46E2B844905BC5F0 0x6087C10C b323
	// Unloads GROUP_MAP (GTAO/MP) DLC data and loads GROUP_MAP_SP DLC. Neither are loaded by default, ON_ENTER_MP is a cognate to this function and loads MP DLC (and unloads SP DLC by extension).
	// Works in singleplayer.
	inline void ON_ENTER_SP() { _i<Void>(0xD7C10C4A637992C9); } // 0xD7C10C4A637992C9 0x8BF60FC3 b323
	// This loads the GTA:O dlc map parts (high end garages, apartments).
	// Works in singleplayer.
	// In order to use GTA:O heist IPL's you have to call this native with the following params: SET_INSTANCE_PRIORITY_MODE(1);
	inline void ON_ENTER_MP() { _i<Void>(0x0888C3502DBBEEF5); } // 0x0888C3502DBBEEF5 0xC65586A9 b323
}

namespace ENTITY
{
	// Checks whether an entity exists in the game world.
	inline BOOL DOES_ENTITY_EXIST(Entity entity) { return _i<BOOL>(0x7239B21A38F536BA, entity); } // 0x7239B21A38F536BA 0x3AC90869 b323
	inline BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return _i<BOOL>(0xDDE6DF5AE89981D2, entity, p1); } // 0xDDE6DF5AE89981D2 0xACFEB3F9 b323
	inline BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return _i<BOOL>(0x060D6E96F8B8E48D, entity); } // 0x060D6E96F8B8E48D 0xA5B33300 b323
	inline BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return _i<BOOL>(0xDA95EA3317CC5064, entity); } // 0xDA95EA3317CC5064 0x9BCD2979 b323
	inline BOOL DOES_ENTITY_HAVE_SKELETON(Entity entity) { return _i<BOOL>(0x764EB96874EFFDC1, entity); } // 0x764EB96874EFFDC1 b2699
	inline BOOL DOES_ENTITY_HAVE_ANIM_DIRECTOR(Entity entity) { return _i<BOOL>(0x2158E81A6AF65EA9, entity); } // 0x2158E81A6AF65EA9 b2699
	// P3 is always 3 as far as i cant tell
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) { return _i<BOOL>(0x20B711662962B472, entity, animDict, animName, p3); } // 0x20B711662962B472 0x1D9CAB92 b323
	inline BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return _i<BOOL>(0x95EB9964FF5C5C65, entity); } // 0x95EB9964FF5C5C65 0x6B74582E b323
	inline BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return _i<BOOL>(0x605F5A140F202491, entity); } // 0x605F5A140F202491 0x53FD4A25 b323
	inline BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return _i<BOOL>(0xDFD5033FDBA0A9C8, entity); } // 0xDFD5033FDBA0A9C8 0x878C2CE0 b323
	// Entity 1 = Victim
	// Entity 2 = Attacker
	// 
	// p2 seems to always be 1
	inline BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return _i<BOOL>(0xC86D67D52A707CF8, entity1, entity2, p2); } // 0xC86D67D52A707CF8 0x07FC77E0 b323
	// traceType is always 17 in the scripts.
	// 
	// There is other codes used for traceType:
	// 19 - in jewelry_prep1a
	// 126 - in am_hunt_the_beast
	// 256 & 287 - in fm_mission_controller
	inline BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return _i<BOOL>(0xFCDFF7B72D23A1AC, entity1, entity2, traceType); } // 0xFCDFF7B72D23A1AC 0x53576FA7 b323
	inline BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_ADJUST_FOR_COVER(Entity entity1, Entity entity2, int traceType) { return _i<BOOL>(0x394BDE2A7BBA031E, entity1, entity2, traceType); } // 0x394BDE2A7BBA031E b1868
	// Has the entity1 got a clear line of sight to the other entity2 from the direction entity1 is facing.
	// This is one of the most CPU demanding BOOL natives in the game; avoid calling this in things like nested for-loops
	inline BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return _i<BOOL>(0x0267D00AF114F17A, entity1, entity2); } // 0x0267D00AF114F17A 0x210D87C8 b323
	// Called on tick.
	// Tested with vehicles, returns true whenever the vehicle is touching any entity.
	// 
	// Note: for vehicles, the wheels can touch the ground and it will still return false, but if the body of the vehicle touches the ground, it will return true.
	inline BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return _i<BOOL>(0x8BAD02F0368D9E14, entity); } // 0x8BAD02F0368D9E14 0x662A2F41 b323
	inline Entity _GET_LAST_ENTITY_HIT_BY_ENTITY(Entity entity) { return _i<Entity>(0xA75EE4F689B85391, entity); } // 0xA75EE4F689B85391 b2802
	inline Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return _i<Hash>(0x5C3D0A935F535C4C, entity); } // 0x5C3D0A935F535C4C 0xC0E3AA47 b323
	inline Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return _i<Vector3>(0xE465D4AB7CA6AE72, entity); } // 0xE465D4AB7CA6AE72 0xAB415C07 b323
	// Based on carmod_shop script decompile this takes a vehicle parameter. It is called when repair is done on initial enter.
	inline void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { _i<Void>(0x40FDEDB72F8293B2, entity); } // 0x40FDEDB72F8293B2 0x58D9775F b323
	// Returns a float value representing animation's current playtime with respect to its total playtime. This value increasing in a range from [0 to 1] and wrap back to 0 when it reach 1.
	// 
	// Example:
	// 0.000000 - mark the starting of animation.
	// 0.500000 - mark the midpoint of the animation.
	// 1.000000 - mark the end of animation.
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return _i<float>(0x346D81500D088F42, entity, animDict, animName); } // 0x346D81500D088F42 0x83943F41 b323
	// Returns a float value representing animation's total playtime in milliseconds.
	// 
	// Example:
	// GET_ENTITY_ANIM_TOTAL_TIME(PLAYER_ID(),"amb@world_human_yoga@female@base","base_b") 
	// return 20800.000000
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, const char* animDict, const char* animName) { return _i<float>(0x50BD2730B191E360, entity, animDict, animName); } // 0x50BD2730B191E360 0x433A9D18 b323
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline float GET_ANIM_DURATION(const char* animDict, const char* animName) { return _i<float>(0xFEDDF04D62B8D790, animDict, animName); } // 0xFEDDF04D62B8D790 0x8B5E3E3D b323
	inline Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return _i<Entity>(0x48C2BED9180FE123, entity); } // 0x48C2BED9180FE123 0xFE1589F9 b323
	// Gets the current coordinates for a specified entity.
	// `entity` = The entity to get the coordinates from.
	// `alive` = Unused by the game, potentially used by debug builds of GTA in order to assert whether or not an entity was alive.
	inline Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return _i<Vector3>(0x3FEF770D40960D5A, entity, alive); } // 0x3FEF770D40960D5A 0x1647F1CB b323
	// Gets the entity's forward vector.
	inline Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return _i<Vector3>(0x0A794A5A57F8DF91, entity); } // 0x0A794A5A57F8DF91 0x84DCECBF b323
	// Gets the X-component of the entity's forward vector.
	inline float GET_ENTITY_FORWARD_X(Entity entity) { return _i<float>(0x8BB4EF4214E0E6D5, entity); } // 0x8BB4EF4214E0E6D5 0x49FAE914 b323
	// Gets the Y-component of the entity's forward vector.
	inline float GET_ENTITY_FORWARD_Y(Entity entity) { return _i<float>(0x866A4A5FAE349510, entity); } // 0x866A4A5FAE349510 0x9E2F917C b323
	// Returns the heading of the entity in degrees. Also know as the "Yaw" of an entity.
	inline float GET_ENTITY_HEADING(Entity entity) { return _i<float>(0xE83D4F9BA2A38914, entity); } // 0xE83D4F9BA2A38914 0x972CC383 b323
	// Gets the heading of the entity physics in degrees, which tends to be more accurate than just "GET_ENTITY_HEADING". This can be clearly seen while, for example, ragdolling a ped/player.
	// 
	// NOTE: The name and description of this native are based on independent research. If you find this native to be more suitable under a different name and/or described differently, please feel free to do so.
	inline float GET_ENTITY_HEADING_FROM_EULERS(Entity entity) { return _i<float>(0x846BF6291198A71E, entity); } // 0x846BF6291198A71E 0x9320E642 b323
	// Returns an integer value of entity's current health.
	// 
	// Example of range for ped:
	// - Player [0 to 200]
	// - Ped [100 to 200]
	// - Vehicle [0 to 1000]
	// - Object [0 to 1000]
	// 
	// Health is actually a float value but this native casts it to int.
	// In order to get the actual value, do:
	// float health = *(float *)(entityAddress + 0x280);
	inline int GET_ENTITY_HEALTH(Entity entity) { return _i<int>(0xEEF059FAD016D209, entity); } // 0xEEF059FAD016D209 0x8E3222B7 b323
	// Return an integer value of entity's maximum health.
	// 
	// Example:
	// - Player = 200
	// - Ped = 150
	inline int GET_ENTITY_MAX_HEALTH(Entity entity) { return _i<int>(0x15D757606D170C3C, entity); } // 0x15D757606D170C3C 0xC7AE6AA1 b323
	// For instance: ENTITY::SET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID(), 200); // director_mode.c4: 67849
	inline void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { _i<Void>(0x166E7CF68597D8B5, entity, value); } // 0x166E7CF68597D8B5 0x96F84DF8 b323
	inline float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return _i<float>(0x5A504562485944DD, entity, X, Y, Z, atTop, inWorldCoords); } // 0x5A504562485944DD 0xEE443481 b323
	// Return height (z-dimension) above ground. 
	// Example: The pilot in a titan plane is 1.844176 above ground.
	// 
	// How can i convert it to meters?
	// Everything seems to be in meters, probably this too.
	inline float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return _i<float>(0x1DD55701034110E5, entity); } // 0x1DD55701034110E5 0x57F56A4D b323
	inline void GET_ENTITY_MATRIX(Entity entity, Vector3* forwardVector, Vector3* rightVector, Vector3* upVector, Vector3* position) { _i<Void>(0xECB2FC7235A7D137, entity, forwardVector, rightVector, upVector, position); } // 0xECB2FC7235A7D137 0xEB9EB001 b323
	// Returns the model hash from the entity
	inline Hash GET_ENTITY_MODEL(Entity entity) { return _i<Hash>(0x9F47B058362C84B5, entity); } // 0x9F47B058362C84B5 0xDAFCB3EC b323
	// Converts world coords (posX - Z) to coords relative to the entity
	// 
	// Example:
	// posX is given as 50
	// entity's x coord is 40
	// the returned x coord will then be 10 or -10, not sure haven't used this in a while (think it is 10 though).
	inline Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return _i<Vector3>(0x2274BC1C4885E333, entity, posX, posY, posZ); } // 0x2274BC1C4885E333 0x6477EC9E b323
	// Offset values are relative to the entity.
	// 
	// x = left/right
	// y = forward/backward
	// z = up/down
	inline Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return _i<Vector3>(0x1899F328B0E12848, entity, offsetX, offsetY, offsetZ); } // 0x1899F328B0E12848 0xABCF043A b323
	inline float GET_ENTITY_PITCH(Entity entity) { return _i<float>(0xD45DC2893621E1FE, entity); } // 0xD45DC2893621E1FE 0xFCE6ECE5 b323
	// w is the correct parameter name!
	inline void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { _i<Void>(0x7B3703D2D32DFA18, entity, x, y, z, w); } // 0x7B3703D2D32DFA18 0x5154EC90 b323
	// Displays the current ROLL axis of the entity [-180.0000/180.0000+]
	// (Sideways Roll) such as a vehicle tipped on its side
	inline float GET_ENTITY_ROLL(Entity entity) { return _i<float>(0x831E0242595560DF, entity); } // 0x831E0242595560DF 0x36610842 b323
	// rotationOrder is the order yaw, pitch and roll is applied. Usually 2. Returns a vector where the Z coordinate is the yaw.
	// 
	// rotationOrder refers to the order yaw pitch roll is applied; value ranges from 0 to 5 and is usually *2* in scripts.
	// What you use for rotationOrder when getting must be the same as rotationOrder when setting the rotation.
	// 
	// What it returns is the yaw on the z part of the vector, which makes sense considering R* considers z as vertical. Here's a picture for those of you who don't understand pitch, yaw, and roll: www.allstar.fiu.edu/aero/images/pic5-1.gif
	// 
	// Rotation Orders:
	// 0: ZYX - Rotate around the z-axis, then the y-axis and finally the x-axis.
	// 1: YZX - Rotate around the y-axis, then the z-axis and finally the x-axis.
	// 2: ZXY - Rotate around the z-axis, then the x-axis and finally the y-axis.
	// 3: XZY - Rotate around the x-axis, then the z-axis and finally the y-axis.
	// 4: YXZ - Rotate around the y-axis, then the x-axis and finally the z-axis.
	// 5: XYZ - Rotate around the x-axis, then the y-axis and finally the z-axis.
	inline Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return _i<Vector3>(0xAFBD61CC738D9EB9, entity, rotationOrder); } // 0xAFBD61CC738D9EB9 0x8FF45B04 b323
	inline Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return _i<Vector3>(0x213B91045D09B983, entity); } // 0x213B91045D09B983 0x9BF8A73F b323
	// Returns the name of the script that owns/created the entity or nullptr. Second parameter is unused, can just be a nullptr.
	inline const char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return _i<const char*>(0xA6E9C38DB51D7748, entity, script); } // 0xA6E9C38DB51D7748 0xB7F70784 b323
	// result is in meters per second
	// 
	// ------------------------------------------------------------
	// So would the conversion to mph and km/h, be along the lines of this.
	// 
	// float speed = GET_ENTITY_SPEED(veh);
	// float kmh = (speed * 3.6);
	// float mph = (speed * 2.236936);
	// ------------------------------------------------------------
	inline float GET_ENTITY_SPEED(Entity entity) { return _i<float>(0xD5037BA82E12416F, entity); } // 0xD5037BA82E12416F 0x9E1E4798 b323
	// Relative can be used for getting speed relative to the frame of the vehicle, to determine for example, if you are going in reverse (-y speed) or not (+y speed). 
	inline Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return _i<Vector3>(0x9A8D700A51CB7B0D, entity, relative); } // 0x9A8D700A51CB7B0D 0x3ED2B997 b323
	inline float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return _i<float>(0x95EED5A694951F9F, entity); } // 0x95EED5A694951F9F 0xF4268190 b323
	inline Vector3 GET_ENTITY_VELOCITY(Entity entity) { return _i<Vector3>(0x4805D2B1D8CF94A9, entity); } // 0x4805D2B1D8CF94A9 0xC14C9B6B b323
	// Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).
	inline Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return _i<Object>(0xD7E3B9735C0F89D6, entity); } // 0xD7E3B9735C0F89D6 0xBC5A9C58 b323
	// Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).
	inline Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return _i<Ped>(0x04A2A40C73395041, entity); } // 0x04A2A40C73395041 0xC46F74AC b323
	// Simply returns whatever is passed to it (Regardless of whether the handle is valid or not).
	inline Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return _i<Vehicle>(0x4B53F92932ADFAC0, entity); } // 0x4B53F92932ADFAC0 0xC69CF43D b323
	// Returns the coordinates of an entity-bone.
	inline Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return _i<Vector3>(0x44A8FCB8ED227738, entity, boneIndex); } // 0x44A8FCB8ED227738 0x7C6339DF b323
	inline Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return _i<Player>(0x7196842CB375CDB3, entity); } // 0x7196842CB375CDB3 0xCE17FDEC b323
	inline Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return _i<Player>(0x4DC9A62F844D9337, entity, team); } // 0x4DC9A62F844D9337 0xB1808F56 b323
	inline int GET_NEAREST_PARTICIPANT_TO_ENTITY(Entity entity) { return _i<int>(0xFFBD7052D65BE0FF, entity); } // 0xFFBD7052D65BE0FF b2944
	// Returns:
	// 0 = no entity
	// 1 = ped
	// 2 = vehicle
	// 3 = object
	inline int GET_ENTITY_TYPE(Entity entity) { return _i<int>(0x8ACD366038D14505, entity); } // 0x8ACD366038D14505 0x0B1BD08D b323
	// A population type, from the following enum: https://alloc8or.re/gta5/doc/enums/ePopulationType.txt
	inline int GET_ENTITY_POPULATION_TYPE(Entity entity) { return _i<int>(0xF6F5161F4534EDFF, entity); } // 0xF6F5161F4534EDFF 0xFC30DDFF b323
	inline BOOL IS_AN_ENTITY(ScrHandle handle) { return _i<BOOL>(0x731EC8A916BD11A1, handle); } // 0x731EC8A916BD11A1 0xD4B9715A b323
	inline BOOL IS_ENTITY_A_PED(Entity entity) { return _i<BOOL>(0x524AC5ECEA15343E, entity); } // 0x524AC5ECEA15343E 0x55D33EAB b323
	inline BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return _i<BOOL>(0x0A7B270912999B3C, entity); } // 0x0A7B270912999B3C 0x2632E124 b323
	inline BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return _i<BOOL>(0x6AC7003FA6E5575E, entity); } // 0x6AC7003FA6E5575E 0xBE800B01 b323
	inline BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return _i<BOOL>(0x8D68C8FD0FACA94E, entity); } // 0x8D68C8FD0FACA94E 0x3F52E561 b323
	// Checks if entity is within x/y/zSize distance of x/y/z. 
	// 
	// Last three are unknown ints, almost always p7 = 0, p8 = 1, p9 = 0
	inline BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return _i<BOOL>(0x20B60995556D004F, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); } // 0x20B60995556D004F 0xD749B606 b323
	// Checks if entity1 is within the box defined by x/y/zSize of entity2.
	// 
	// Last three parameters are almost alwasy p5 = 0, p6 = 1, p7 = 0
	inline BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return _i<BOOL>(0x751B70C3D034E187, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); } // 0x751B70C3D034E187 0xDABDCB52 b323
	// Whether the entity is attached to any other entity.
	inline BOOL IS_ENTITY_ATTACHED(Entity entity) { return _i<BOOL>(0xB346476EF1A64897, entity); } // 0xB346476EF1A64897 0xEC1479D5 b323
	inline BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return _i<BOOL>(0xCF511840CEEDE0CC, entity); } // 0xCF511840CEEDE0CC 0x0B5DE340 b323
	inline BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return _i<BOOL>(0xB1632E9A5F988D11, entity); } // 0xB1632E9A5F988D11 0x9D7A609C b323
	inline BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return _i<BOOL>(0x26AA915AD89BFB4B, entity); } // 0x26AA915AD89BFB4B 0xDE5C995E b323
	inline BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return _i<BOOL>(0xEFBE71898A993728, from, to); } // 0xEFBE71898A993728 0xB0ABFEA8 b323
	inline BOOL IS_ENTITY_DEAD(Entity entity, BOOL p1) { return _i<BOOL>(0x5F9532F3B5CC2551, entity, p1); } // 0x5F9532F3B5CC2551 0xB6F7CBAC b323
	inline BOOL IS_ENTITY_IN_AIR(Entity entity) { return _i<BOOL>(0x886E37EC497200B6, entity); } // 0x886E37EC497200B6 0xA4157987 b323
	// `p8` is a debug flag invoking functions in the same path as ``DRAW_MARKER``
	// `p10` is some entity flag check, also used in `IS_ENTITY_AT_ENTITY`, `IS_ENTITY_IN_AREA`, and `IS_ENTITY_AT_COORD`.
	// See IS_POINT_IN_ANGLED_AREA for the definition of an angled area.
	inline BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ, Any p10) { return _i<BOOL>(0x51210CED3DA1C78A, entity, x1, y1, z1, x2, y2, z2, width, debug, includeZ, p10); } // 0x51210CED3DA1C78A 0x883622FA b323
	inline BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return _i<BOOL>(0x54736AA40E271165, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); } // 0x54736AA40E271165 0x8C2DFA9D b323
	// Full list of zones by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/zones.json
	inline BOOL IS_ENTITY_IN_ZONE(Entity entity, const char* zone) { return _i<BOOL>(0xB6463CF6AF527071, entity, zone); } // 0xB6463CF6AF527071 0x45C82B21 b323
	inline BOOL IS_ENTITY_IN_WATER(Entity entity) { return _i<BOOL>(0xCFB0A0D8EDD145A3, entity); } // 0xCFB0A0D8EDD145A3 0x4C3C2508 b323
	// Get how much of the entity is submerged.  1.0f is whole entity.
	inline float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return _i<float>(0xE81AFC1BC4CC41CE, entity); } // 0xE81AFC1BC4CC41CE 0x0170F68C b323
	inline void SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(Entity entity, BOOL toggle) { _i<Void>(0x694E00132F2823ED, entity, toggle); } // 0x694E00132F2823ED 0x40C84A74 b323
	// Returns true if the entity is in between the minimum and maximum values for the 2d screen coords. 
	// This means that it will return true even if the entity is behind a wall for example, as long as you're looking at their location. 
	// Chipping
	inline BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return _i<BOOL>(0xE659E47AF827484B, entity); } // 0xE659E47AF827484B 0xC1FEC5ED b323
	// See also PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM 0x6EC47A344923E1ED 0x3C30B447
	// 
	// Taken from ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3)
	// 
	// p4 is always 3 in the scripts.
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) { return _i<BOOL>(0x1F0B79228E461EC9, entity, animDict, animName, taskFlag); } // 0x1F0B79228E461EC9 0x0D130D34 b323
	// a static ped will not react to natives like "APPLY_FORCE_TO_ENTITY" or "SET_ENTITY_VELOCITY" and oftentimes will not react to task-natives like "TASK::TASK_COMBAT_PED". The only way I know of to make one of these peds react is to ragdoll them (or sometimes to use CLEAR_PED_TASKS_IMMEDIATELY(). Static peds include almost all far-away peds, beach-combers, peds in certain scenarios, peds crossing a crosswalk, peds walking to get back into their cars, and others. If anyone knows how to make a ped non-static without ragdolling them, please edit this with the solution.
	// 
	// how can I make an entity static???
	inline BOOL IS_ENTITY_STATIC(Entity entity) { return _i<BOOL>(0x1218E6886D3D8327, entity); } // 0x1218E6886D3D8327 0x928E12E9 b323
	inline BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return _i<BOOL>(0x17FFC1B2BA35A494, entity, targetEntity); } // 0x17FFC1B2BA35A494 0x6B931477 b323
	inline BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return _i<BOOL>(0x0F42323798A58C8C, entity, modelHash); } // 0x0F42323798A58C8C 0x307E7611 b323
	inline BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return _i<BOOL>(0x5333F526F6AB19AA, entity, angle); } // 0x5333F526F6AB19AA 0x3BCDF4E1 b323
	inline BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return _i<BOOL>(0x1DBD58820FA61D71, entity); } // 0x1DBD58820FA61D71 0x5ACAA48F b323
	inline BOOL IS_ENTITY_VISIBLE(Entity entity) { return _i<BOOL>(0x47D6F43D77935C75, entity); } // 0x47D6F43D77935C75 0x120B4ED5 b323
	inline BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return _i<BOOL>(0xD796CB5BA8F20E32, entity); } // 0xD796CB5BA8F20E32 0x5D240E9D b323
	inline BOOL IS_ENTITY_OCCLUDED(Entity entity) { return _i<BOOL>(0xE31C2C72B8692B64, entity); } // 0xE31C2C72B8692B64 0x46BC5B40 b323
	inline BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return _i<BOOL>(0xEE5D2A122E09EC42, entityModelHash, x, y, z, p4); } // 0xEE5D2A122E09EC42 0xEA127CBC b323
	inline BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return _i<BOOL>(0xD05BFF0C0A12C68F, entity); } // 0xD05BFF0C0A12C68F 0x00AB7A4A b323
	// Applies a force to the specified entity.
	// 
	// **List of force types (p1)**:
	// public enum ForceType
	// {
	//     MinForce = 0,
	//     MaxForceRot = 1,
	//     MinForce2 = 2,
	//     MaxForceRot2 = 3,
	//     ForceNoRot = 4,
	//     ForceRotPlusForce = 5
	// }
	// Research/documentation on the gtaforums can be found here https://gtaforums.com/topic/885669-precisely-define-object-physics/) and here https://gtaforums.com/topic/887362-apply-forces-and-momentums-to-entityobject/.
	// 
	// p6/relative - makes the xyz force not relative to world coords, but to something else
	// p7/highForce - setting false will make the force really low
	inline void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { _i<Void>(0x18FF00FC7EFF559E, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); } // 0x18FF00FC7EFF559E 0x28924E98 b323
	// Documented here:
	// gtaforums.com/topic/885669-precisely-define-object-physics/
	// gtaforums.com/topic/887362-apply-forces-and-momentums-to-entityobject/
	// 
	// forceFlags:
	// First bit (lowest): Strong force flag, factor 100
	// Second bit: Unkown flag
	// Third bit: Momentum flag=1 (vector (x,y,z) is a momentum, more research needed)
	// If higher bits are unequal 0 the function doesn't applay any forces at all.
	// (As integer possible values are 0-7)
	// 
	// 0: weak force
	// 1: strong force
	// 2: same as 0 (2nd bit?)
	// 3: same as 1
	// 4: weak momentum
	// 5: strong momentum
	// 6: same as 4
	// 7: same as 5
	// 
	// isLocal: vector defined in local (body-fixed) coordinate frame
	// isMassRel: if true the force gets multiplied with the objects mass (this is why it was known as highForce) and different objects will have the same acceleration.
	// 
	// p8 !!! Whenever I set this !=0, my script stopped.
	inline void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { _i<Void>(0xC5F68BE9613E2D18, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); } // 0xC5F68BE9613E2D18 0xC1C0855A b323
	// Attaches entity1 to bone (boneIndex) of entity2.
	// 
	// boneIndex - this is different to boneID, use GET_PED_BONE_INDEX to get the index from the ID. use the index for attaching to specific bones. entity1 will be attached to entity2's centre if bone index given doesn't correspond to bone indexes for that entity type.
	// 
	// useSoftPinning - if set to false attached entity will not detach when fixed
	// collision - controls collision between the two entities (FALSE disables collision).
	// isPed - pitch doesnt work when false and roll will only work on negative numbers (only peds)
	// vertexIndex - position of vertex
	// fixedRot - if false it ignores entity vector 
	// 
	inline void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, Any p15) { _i<Void>(0x6B9BBD38AB0796DF, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot, p15); } // 0x6B9BBD38AB0796DF 0xEC024237 b323
	inline void ATTACH_ENTITY_BONE_TO_ENTITY_BONE(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { _i<Void>(0x5C48B75732C8456C, entity1, entity2, boneIndex1, boneIndex2, p4, p5); } // 0x5C48B75732C8456C b791
	inline void ATTACH_ENTITY_BONE_TO_ENTITY_BONE_Y_FORWARD(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { _i<Void>(0xFD1695C5D3B05439, entity1, entity2, boneIndex1, boneIndex2, p4, p5); } // 0xFD1695C5D3B05439 b791
	// breakForce is the amount of force required to break the bond.
	// p14 - is always 1 in scripts
	// p15 - is 1 or 0 in scripts - unknoun what it does
	// p16 - controls collision between the two entities (FALSE disables collision).
	// p17 - do not teleport entity to be attached to the position of the bone Index of the target entity (if 1, entity will not be teleported to target bone)
	// p18 - is always 2 in scripts.
	// 
	// 
	inline void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { _i<Void>(0xC3675780C92F90F9, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); } // 0xC3675780C92F90F9 0x0547417F b323
	inline void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY_OVERRIDE_INVERSE_MASS(Entity firstEntityIndex, Entity secondEntityIndex, int firstEntityBoneIndex, int secondEntityBoneIndex, float secondEntityOffsetX, float secondEntityOffsetY, float secondEntityOffsetZ, float firstEntityOffsetX, float firstEntityOffsetY, float firstEntityOffsetZ, float vecRotationX, float vecRotationY, float vecRotationZ, float physicalStrength, BOOL constrainRotation, BOOL doInitialWarp, BOOL collideWithEntity, BOOL addInitialSeperation, int rotOrder, float invMassScaleA, float invMassScaleB) { _i<Void>(0x168A09D1B25B0BA4, firstEntityIndex, secondEntityIndex, firstEntityBoneIndex, secondEntityBoneIndex, secondEntityOffsetX, secondEntityOffsetY, secondEntityOffsetZ, firstEntityOffsetX, firstEntityOffsetY, firstEntityOffsetZ, vecRotationX, vecRotationY, vecRotationZ, physicalStrength, constrainRotation, doInitialWarp, collideWithEntity, addInitialSeperation, rotOrder, invMassScaleA, invMassScaleB); } // 0x168A09D1B25B0BA4 b2944
	// Called to update entity attachments.
	inline void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { _i<Void>(0xF4080490ADC51C6F, entity); } // 0xF4080490ADC51C6F 0x6909BA59 b323
	// Returns the index of the bone. If the bone was not found, -1 will be returned. 
	// 
	// list:
	// https://pastebin.com/D7JMnX1g
	// 
	// BoneNames:
	//   chassis,
	//   windscreen,
	//    seat_pside_r,
	//  seat_dside_r,
	//  bodyshell,
	//     suspension_lm,
	//     suspension_lr,
	//     platelight,
	//    attach_female,
	//     attach_male,
	//   bonnet,
	//    boot,
	//  chassis_dummy,  //Center of the dummy
	//  chassis_Control,    //Not found yet
	//    door_dside_f,   //Door left, front
	//     door_dside_r,   //Door left, back
	//  door_pside_f,   //Door right, front
	//    door_pside_r,   //Door right, back
	//     Gun_GripR,
	//     windscreen_f,
	//  platelight, //Position where the light above the numberplate is located
	//    VFX_Emitter,
	//   window_lf,  //Window left, front
	//   window_lr,  //Window left, back
	//    window_rf,  //Window right, front
	//  window_rr,  //Window right, back
	//   engine, //Position of the engine
	//   gun_ammo,
	//  ROPE_ATTATCH,   //Not misspelled. In script "finale_heist2b.c4".
	//     wheel_lf,   //Wheel left, front
	//    wheel_lr,   //Wheel left, back
	//     wheel_rf,   //Wheel right, front
	//   wheel_rr,   //Wheel right, back
	//    exhaust,    //Exhaust. shows only the position of the stock-exhaust
	//    overheat,   //A position on the engine(not exactly sure, how to name it)
	//   misc_e, //Not a car-bone.
	//  seat_dside_f,   //Driver-seat
	//  seat_pside_f,   //Seat next to driver
	//  Gun_Nuzzle,
	//    seat_r
	// 
	// I doubt that the function is case-sensitive, since I found a "Chassis" and a "chassis". - Just tested: Definitely not case-sensitive.
	// 
	// 
	inline int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) { return _i<int>(0xFB71170B7E76ACBA, entity, boneName); } // 0xFB71170B7E76ACBA 0xE4ECAC22 b323
	inline void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { _i<Void>(0xA72CD9CA74A5ECBA, entity); } // 0xA72CD9CA74A5ECBA 0x2B83F43B b323
	// Deletes the specified entity, then sets the handle pointed to by the pointer to NULL.
	inline void DELETE_ENTITY(Entity* entity) { _i<Void>(0xAE3CBE5BF394C9C9, entity); } // 0xAE3CBE5BF394C9C9 0xFAA3D236 b323
	// If `collision` is set to true, both entities won't collide with the other until the distance between them is above 4 meters.
	// Set `dynamic` to true to keep velocity after dettaching
	inline void DETACH_ENTITY(Entity entity, BOOL dynamic, BOOL collision) { _i<Void>(0x961AC54BF0613F5D, entity, dynamic, collision); } // 0x961AC54BF0613F5D 0xC8EFCB41 b323
	// Freezes or unfreezes an entity preventing its coordinates to change by the player if set to `true`. You can still change the entity position using SET_ENTITY_COORDS.
	inline void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { _i<Void>(0x428CA6DBD1094446, entity, toggle); } // 0x428CA6DBD1094446 0x65C16D57 b323
	// True means it can be deleted by the engine when switching lobbies/missions/etc, false means the script is expected to clean it up.
	// 
	// "Allow Freeze If No Collision"
	inline void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity entity, BOOL toggle) { _i<Void>(0x3910051CCECDB00C, entity, toggle); } // 0x3910051CCECDB00C 0xD3850671 b323
	// delta and bitset are guessed fields. They are based on the fact that most of the calls have 0 or nil field types passed in.
	// 
	// The only time bitset has a value is 0x4000 and the only time delta has a value is during stealth with usually <1.0f values.
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline BOOL PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return _i<BOOL>(0x7FB218262B810701, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); } // 0x7FB218262B810701 0x878753D5 b323
	// p4 and p7 are usually 1000.0f.
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int syncedScene, const char* animation, const char* propName, float p4, float p5, Any p6, float p7) { return _i<BOOL>(0xC77720A12FE14A86, entity, syncedScene, animation, propName, p4, p5, p6, p7); } // 0xC77720A12FE14A86 0x012760AA b323
	// p6,p7 probably animname and animdict
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2, const char* p6, const char* p7, float p8, float p9, Any p10, float p11) { return _i<BOOL>(0xB9C54555ED30FBC4, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9, p10, p11); } // 0xB9C54555ED30FBC4 0xEB4CBA74 b323
	inline BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2) { return _i<BOOL>(0x11E79CAB7183B6F5, x1, y1, z1, x2, y2, z2); } // 0x11E79CAB7183B6F5 0x7253D5B2 b323
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	// 
	// RAGEPluginHook list: docs.ragepluginhook.net/html/62951c37-a440-478c-b389-c471230ddfc5.htm
	inline BOOL STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) { return _i<BOOL>(0x28004F88151E03E0, entity, animation, animGroup, p3); } // 0x28004F88151E03E0 0xC4769830 b323
	// p1 sync task id?
	inline BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return _i<BOOL>(0x43D3807C077261E3, entity, p1, p2); } // 0x43D3807C077261E3 0xE27D2FC1 b323
	// if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("CreateObject")))
	inline BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return _i<BOOL>(0xEAF4CD9EA3E7E922, entity, actionHash); } // 0xEAF4CD9EA3E7E922 0x66571CA0 b323
	// In the script "player_scene_t_bbfight.c4":
	// "if (ENTITY::FIND_ANIM_EVENT_PHASE(&l_16E, &l_19F[v_4/*16*/], v_9, &v_A, &v_B))"
	// -- &l_16E (p0) is requested as an anim dictionary earlier in the script.
	// -- &l_19F[v_4/*16*/] (p1) is used in other natives in the script as the "animation" param.
	// -- v_9 (p2) is instantiated as "victim_fall"; I'm guessing that's another anim
	// --v_A and v_B (p3 & p4) are both set as -1.0, but v_A is used immediately after this native for: 
	// "if (v_A < ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(...))"
	// Both v_A and v_B are seemingly used to contain both Vector3's and floats, so I can't say what either really is other than that they are both output parameters. p4 looks more like a *Vector3 though
	// 
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline BOOL FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) { return _i<BOOL>(0x07F1BE2BCCAA27A7, animDictionary, animName, p2, p3, p4); } // 0x07F1BE2BCCAA27A7 0xC41DDA62 b323
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDictionary, const char* animName, float time) { _i<Void>(0x4487C259F0F70977, entity, animDictionary, animName, time); } // 0x4487C259F0F70977 0x99D90735 b323
	// Full list of animation dictionaries and anims by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animDictsCompact.json
	inline void SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier) { _i<Void>(0x28D1A16553C51776, entity, animDictionary, animName, speedMultiplier); } // 0x28D1A16553C51776 0x3990C90A b323
	// Makes the specified entity (ped, vehicle or object) persistent. Persistent entities will not automatically be removed by the engine.
	// 
	// p1 has no effect when either its on or off 
	// maybe a quick disassembly will tell us what it does
	// 
	// p2 has no effect when either its on or off 
	// maybe a quick disassembly will tell us what it does
	inline void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { _i<Void>(0xAD738C3085FE7E11, entity, p1, p2); } // 0xAD738C3085FE7E11 0x5D1F9E0F b323
	// Marks the specified entity (ped, vehicle or object) as no longer needed if its population type is set to the mission type.
	// If the entity is ped, it will also clear their tasks immediately just like when CLEAR_PED_TASKS_IMMEDIATELY is called.
	// Entities marked as no longer needed, will be deleted as the engine sees fit.
	// Use this if you just want to just let the game delete the ped:
	// void MarkPedAsAmbientPed(Ped ped) {
	//   auto addr = getScriptHandleBaseAddress(ped);
	// 
	//   if (!addr) {
	//     return;
	//   }
	// 
	//   //the game uses only lower 4 bits as entity population type 
	//   BYTE origValue = *(BYTE *)(addr + 0xDA);
	//   *(BYTE *)(addr + 0xDA) = ((origValue & 0xF0) | ePopulationType::POPTYPE_RANDOM_AMBIENT);
	// }
	inline void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { _i<Void>(0xB736A491E64A32CF, entity); } // 0xB736A491E64A32CF 0xADF2267C b323
	// This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.
	inline void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { _i<Void>(0x2595DD4236549CE3, ped); } // 0x2595DD4236549CE3 0x9A388380 b323
	// This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.
	inline void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { _i<Void>(0x629BFA74418D6239, vehicle); } // 0x629BFA74418D6239 0x9B0E10BE b323
	// This is an alias of SET_ENTITY_AS_NO_LONGER_NEEDED.
	inline void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { _i<Void>(0x3AE22DEB5BA5A3E6, object); } // 0x3AE22DEB5BA5A3E6 0x3F6B949F b323
	inline void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { _i<Void>(0x1760FFA8AB074D66, entity, toggle); } // 0x1760FFA8AB074D66 0x60B6E744 b323
	inline BOOL GET_ENTITY_CAN_BE_DAMAGED(Entity entity) { return _i<BOOL>(0xD95CC5D2AB15A09F, entity); } // 0xD95CC5D2AB15A09F 0xE4938B5D b757
	inline void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { _i<Void>(0xE22D8FDE858B8119, entity, bCanBeDamaged, relGroup); } // 0xE22D8FDE858B8119 0x34165B5D b323
	inline void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Entity entity, BOOL toggle) { _i<Void>(0x352E2B5CF420BF3B, entity, toggle); } // 0x352E2B5CF420BF3B b573
	// Sets whether the entity can be targeted without being in line-of-sight.
	inline void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { _i<Void>(0xD3997889736FD899, entity, toggle); } // 0xD3997889736FD899 0x3B13797C b323
	inline void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { _i<Void>(0x1A9205C1B9EE827F, entity, toggle, keepPhysics); } // 0x1A9205C1B9EE827F 0x139FD37D b323
	inline BOOL GET_ENTITY_COLLISION_DISABLED(Entity entity) { return _i<BOOL>(0xCCF1E97BEFDAE480, entity); } // 0xCCF1E97BEFDAE480 0xE8C0C629 b323
	inline void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { _i<Void>(0x9EBC85ED0FFFE51C, entity, toggle, keepPhysics); } // 0x9EBC85ED0FFFE51C 0xBD0D4831 b323
	// p7 is always 1 in the scripts. Set to 1, an area around the destination coords for the moved entity is cleared from other entities. 
	//  
	// Often ends with 1, 0, 0, 1); in the scripts. It works. 
	// 
	// Axis - Invert Axis Flags
	inline void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { _i<Void>(0x06843DA7060A026B, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); } // 0x06843DA7060A026B 0xDF70B41B b323
	inline void SET_ENTITY_COORDS_WITHOUT_PLANTS_RESET(Entity entity, float xPos, float yPos, float zPos, BOOL alive, BOOL deadFlag, BOOL ragdollFlag, BOOL clearArea) { _i<Void>(0x621873ECE1178967, entity, xPos, yPos, zPos, alive, deadFlag, ragdollFlag, clearArea); } // 0x621873ECE1178967 0x749B282E b323
	// Axis - Invert Axis Flags
	inline void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { _i<Void>(0x239A3351AC1DA385, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); } // 0x239A3351AC1DA385 0x4C83DE8D b323
	inline void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { _i<Void>(0x1718DE8E3F2823CA, entity, toggle); } // 0x1718DE8E3F2823CA 0x236F525B b323
	// Set the heading of an entity in degrees also known as "Yaw".
	inline void SET_ENTITY_HEADING(Entity entity, float heading) { _i<Void>(0x8E2530AA8ADA980E, entity, heading); } // 0x8E2530AA8ADA980E 0xE0FF064D b323
	// health >= 0
	// male ped ~= 100 - 200
	// female ped ~= 0 - 100
	inline void SET_ENTITY_HEALTH(Entity entity, int health, Entity instigator, Hash weaponType) { _i<Void>(0x6B76DC1F3AE6E6A3, entity, health, instigator, weaponType); } // 0x6B76DC1F3AE6E6A3 0xFBCD1831 b323
	// Sets a ped or an object totally invincible. It doesn't take any kind of damage. Peds will not ragdoll on explosions and the tazer animation won't apply either.
	// 
	// If you use this for a ped and you want Ragdoll to stay enabled, then do:
	// *(DWORD *)(pedAddress + 0x188) |= (1 << 9);
	// 
	// Use this if you want to get the invincibility status:
	//   bool IsPedInvincible(Ped ped)
	//  {
	//      auto addr = getScriptHandleBaseAddress(ped);    
	// 
	//         if (addr)
	//      {
	//          DWORD flag = *(DWORD *)(addr + 0x188);
	//             return ((flag & (1 << 8)) != 0) || ((flag & (1 << 9)) != 0);
	//       }
	// 
	//        return false;
	//  }
	inline void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { _i<Void>(0x3882114BDE571AD4, entity, toggle); } // 0x3882114BDE571AD4 0xC1213A21 b323
	inline void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { _i<Void>(0xEA02E132F5C68722, entity, p1, p2); } // 0xEA02E132F5C68722 0x9729EE32 b323
	inline void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { _i<Void>(0x7CFBA6A80BDF3874, entity, toggle); } // 0x7CFBA6A80BDF3874 0xE8FC85AF b323
	// Loads collision grid for an entity spawned outside of a player's loaded area. This allows peds to execute tasks rather than sit dormant because of a lack of a physics grid.
	// Certainly not the main usage of this native but when set to true for a Vehicle, it will prevent the vehicle to explode if it is spawned far away from the player.
	inline void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle, Any p2) { _i<Void>(0x0DC7CABAB1E9B67E, entity, toggle, p2); } // 0x0DC7CABAB1E9B67E 0xC52F295B b323
	inline BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return _i<BOOL>(0xE9676F61BC0B3321, entity); } // 0xE9676F61BC0B3321 0x851687F9 b323
	inline void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { _i<Void>(0x0E46A3FCBDE2A1B1, entity, speed); } // 0x0E46A3FCBDE2A1B1 0x46AFFED3 b323
	inline void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { _i<Void>(0x79F020FF9EDC0748, entity, toggle); } // 0x79F020FF9EDC0748 0x4B707F50 b323
	inline void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { _i<Void>(0x7022BD828FA0B082, entity, p1, p2); } // 0x7022BD828FA0B082 0x202237E2 b323
	// Enable / disable each type of damage.
	// 
	// waterProof is damage related to water not drowning
	// --------------
	// p7 is to to '1' in am_mp_property_ext/int: ENTITY::SET_ENTITY_PROOFS(uParam0->f_19, true, true, true, true, true, true, 1, true);
	// 
	inline void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL steamProof, BOOL p7, BOOL waterProof) { _i<Void>(0xFAEE099C6F890BB8, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, waterProof); } // 0xFAEE099C6F890BB8 0x7E9EAB66 b323
	inline BOOL GET_ENTITY_PROOFS(Entity entity, BOOL* bulletProof, BOOL* fireProof, BOOL* explosionProof, BOOL* collisionProof, BOOL* meleeProof, BOOL* steamProof, BOOL* p7, BOOL* drownProof) { return _i<BOOL>(0xBE8CD9BE829BBEBF, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, drownProof); } // 0xBE8CD9BE829BBEBF b1604
	// w is the correct parameter name!
	inline void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { _i<Void>(0x77B21BE7AC540F07, entity, x, y, z, w); } // 0x77B21BE7AC540F07 0x83B6046F b323
	inline void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { _i<Void>(0x0A50A1EEDAD01E65, entity, toggle); } // 0x0A50A1EEDAD01E65 0x6B189A1A b323
	// rotationOrder refers to the order yaw pitch roll is applied
	// value ranges from 0 to 5. What you use for rotationOrder when setting must be the same as rotationOrder when getting the rotation. 
	// Unsure what value corresponds to what rotation order, more testing will be needed for that.
	// For the most part R* uses 1 or 2 as the order.
	// p5 is usually set as true
	// 
	inline void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { _i<Void>(0x8524A8B0171D5E07, entity, pitch, roll, yaw, rotationOrder, p5); } // 0x8524A8B0171D5E07 0x0A345EFE b323
	// p2 is always 0.
	inline void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL p2) { _i<Void>(0xEA1C610A04DB6BBB, entity, toggle, p2); } // 0xEA1C610A04DB6BBB 0xD043E8E1 b323
	inline void SET_ENTITY_WATER_REFLECTION_FLAG(Entity entity, BOOL toggle) { _i<Void>(0xC34BC448DA29F5E9, entity, toggle); } // 0xC34BC448DA29F5E9 b573
	inline void SET_ENTITY_MIRROR_REFLECTION_FLAG(Entity entity, BOOL p1) { _i<Void>(0xE66377CDDADA4810, entity, p1); } // 0xE66377CDDADA4810 b1734
	// Note that the third parameter(denoted as z) is "up and down" with positive numbers encouraging upwards movement.
	inline void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { _i<Void>(0x1C99BB7B6E96D16F, entity, x, y, z); } // 0x1C99BB7B6E96D16F 0xFF5A1988 b323
	inline void SET_ENTITY_ANGULAR_VELOCITY(Entity entity, float x, float y, float z) { _i<Void>(0x8339643499D1222E, entity, x, y, z); } // 0x8339643499D1222E b2372
	inline void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { _i<Void>(0x4A4722448F18EEF5, entity, toggle); } // 0x4A4722448F18EEF5 0xE2F262BF b323
	// LOD distance can be 0 to 0xFFFF (higher values will result in 0xFFFF) as it is actually stored as a 16-bit value (aka uint16_t).
	inline void SET_ENTITY_LOD_DIST(Entity entity, int value) { _i<Void>(0x5927F96A78577363, entity, value); } // 0x5927F96A78577363 0xD7ACC7AD b323
	// Returns the LOD distance of an entity.
	inline int GET_ENTITY_LOD_DIST(Entity entity) { return _i<int>(0x4159C2762B5791D6, entity); } // 0x4159C2762B5791D6 0x4DA3D51F b323
	// skin - everything alpha except skin
	// Set entity alpha level. Ranging from 0 to 255 but chnages occur after every 20 percent (after every 51).
	inline void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { _i<Void>(0x44A0870B7E92D7C0, entity, alphaLevel, skin); } // 0x44A0870B7E92D7C0 0xAE667CB0 b323
	inline int GET_ENTITY_ALPHA(Entity entity) { return _i<int>(0x5A47B3B5E63E94C6, entity); } // 0x5A47B3B5E63E94C6 0x1560B017 b323
	inline void RESET_ENTITY_ALPHA(Entity entity) { _i<Void>(0x9B1E824FFBB7027A, entity); } // 0x9B1E824FFBB7027A 0x8A30761C b323
	// Similar to RESET_ENTITY_ALPHA
	inline void RESET_PICKUP_ENTITY_GLOW(Entity entity) { _i<Void>(0x490861B88F4FD846, entity); } // 0x490861B88F4FD846 b944
	inline void SET_PICKUP_COLLIDES_WITH_PROJECTILES(Any p0, Any p1) { _i<Void>(0xCEA7C8E1B48FF68C, p0, p1); } // 0xCEA7C8E1B48FF68C b678
	// Only called once in the scripts.
	// 
	// Related to weapon objects.
	// 
	inline void SET_ENTITY_SORT_BIAS(Entity entity, float p1) { _i<Void>(0x5C3B791D580E0BC2, entity, p1); } // 0x5C3B791D580E0BC2 b323
	inline void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { _i<Void>(0xACAD101E1FB66689, entity, toggle); } // 0xACAD101E1FB66689 0xD8FF798A b323
	inline void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { _i<Void>(0x730F5F8D3F0F2050, entity, toggle); } // 0x730F5F8D3F0F2050 0xAAC9317B b323
	// Example here: www.gtaforums.com/topic/830463-help-with-turning-lights-green-and-causing-peds-to-crash-into-each-other/#entry1068211340
	// 
	// 0 = green
	// 1 = red
	// 2 = yellow
	// 3 = reset changes
	// changing lights may not change the behavior of vehicles
	inline void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { _i<Void>(0x57C5DB656185EAC4, entity, state); } // 0x57C5DB656185EAC4 0xC47F5B91 b323
	inline void SET_ENTITY_IS_IN_VEHICLE(Entity entity) { _i<Void>(0x78E8E3A640178255, entity); } // 0x78E8E3A640178255 b323
	// Only works with objects!
	inline void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { _i<Void>(0x92C47782FDA8B2A3, x, y, z, radius, originalModel, newModel, p6); } // 0x92C47782FDA8B2A3 0x0BC12F9E b323
	inline void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { _i<Void>(0x033C0F9A64E229AE, x, y, z, radius, originalModel, newModel, p6); } // 0x033C0F9A64E229AE 0xCE0AA8BC b323
	// p5 = sets as true in scripts
	// Same as the comment for CREATE_MODEL_SWAP unless for some reason p5 affects it this only works with objects as well.
	// 
	// Network players do not see changes done with this.
	inline void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { _i<Void>(0x8A97BCA30A0CE478, x, y, z, radius, modelHash, p5); } // 0x8A97BCA30A0CE478 0x7BD5CF2F b323
	inline void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { _i<Void>(0x3A52AE588830BF7F, x, y, z, radius, modelHash, p5); } // 0x3A52AE588830BF7F 0x07AAF22C b323
	// This native makes entities visible that are hidden by the native CREATE_MODEL_HIDE.
	// p5 should be false, true does nothing
	inline void REMOVE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { _i<Void>(0xD9E3006FB3CBD765, x, y, z, radius, modelHash, p5); } // 0xD9E3006FB3CBD765 0x993DBC10 b323
	inline void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { _i<Void>(0x150E808B375A385A, x, y, z, p3, modelHash, p5); } // 0x150E808B375A385A 0x335190A2 b323
	inline void REMOVE_FORCED_OBJECT(float x, float y, float z, float p3, Hash modelHash) { _i<Void>(0x61B6775E83C0DB6F, x, y, z, p3, modelHash); } // 0x61B6775E83C0DB6F 0xAED73ADD b323
	// Calling this function disables collision between two entities.
	// The importance of the order for entity1 and entity2 is unclear.
	// The third parameter, `thisFrame`, decides whether the collision is to be disabled until it is turned back on, or if it's just this frame.
	inline void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL thisFrameOnly) { _i<Void>(0xA53ED5520C07654A, entity1, entity2, thisFrameOnly); } // 0xA53ED5520C07654A 0x1E11BFE9 b323
	inline void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { _i<Void>(0x295D82A8559F9150, entity, toggle); } // 0x295D82A8559F9150 0xE90005B8 b323
	// p1 always false.
	inline void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entity, BOOL toggle) { _i<Void>(0xE12ABE5E3A389A6C, entity, toggle); } // 0xE12ABE5E3A389A6C 0x44767B31 b323
	// p1 always false.
	inline void SET_CAN_CLIMB_ON_ENTITY(Entity entity, BOOL toggle) { _i<Void>(0xA80AE305E0A3044F, entity, toggle); } // 0xA80AE305E0A3044F 0xE224A6A5 b323
	// Only called within 1 script for x360. 'fm_mission_controller' and it used on an object. 
	// 
	// Ran after these 2 natives,
	// set_object_targettable(uParam0, 0);
	// set_entity_invincible(uParam0, 1);
	inline void SET_WAIT_FOR_COLLISIONS_BEFORE_PROBE(Entity entity, BOOL toggle) { _i<Void>(0xDC6F8601FAF2E893, entity, toggle); } // 0xDC6F8601FAF2E893 0xA0466A69 b323
	inline void SET_ENTITY_NOWEAPONDECALS(Entity entity, BOOL p1) { _i<Void>(0x2C2E3DC128F44309, entity, p1); } // 0x2C2E3DC128F44309 b323
	inline void SET_ENTITY_USE_MAX_DISTANCE_FOR_WATER_REFLECTION(Entity entity, BOOL p1) { _i<Void>(0x1A092BB0C3808B96, entity, p1); } // 0x1A092BB0C3808B96 b323
	// Gets the world rotation of the specified bone of the specified entity.
	inline Vector3 GET_ENTITY_BONE_ROTATION(Entity entity, int boneIndex) { return _i<Vector3>(0xCE6294A232D03786, entity, boneIndex); } // 0xCE6294A232D03786 b791
	// Gets the world position of the specified bone of the specified entity.
	inline Vector3 GET_ENTITY_BONE_POSTION(Entity entity, int boneIndex) { return _i<Vector3>(0x46F8696933A63C9B, entity, boneIndex); } // 0x46F8696933A63C9B b877
	// Gets the local rotation of the specified bone of the specified entity.
	inline Vector3 GET_ENTITY_BONE_OBJECT_ROTATION(Entity entity, int boneIndex) { return _i<Vector3>(0xBD8D32550E5CEBFE, entity, boneIndex); } // 0xBD8D32550E5CEBFE b1734
	inline Vector3 GET_ENTITY_BONE_OBJECT_POSTION(Entity entity, int boneIndex) { return _i<Vector3>(0xCF1247CC86961FD6, entity, boneIndex); } // 0xCF1247CC86961FD6 b2802
	inline int GET_ENTITY_BONE_COUNT(Entity entity) { return _i<int>(0xB328DCC3A3AA401B, entity); } // 0xB328DCC3A3AA401B b791
	inline void ENABLE_ENTITY_BULLET_COLLISION(Entity entity) { _i<Void>(0x6CE177D014502E8A, entity); } // 0x6CE177D014502E8A b877
	inline void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2) { _i<Void>(0xB17BC6453F6CF5AC, entity1, entity2); } // 0xB17BC6453F6CF5AC b944
	inline void SET_ENTITY_CANT_CAUSE_COLLISION_DAMAGED_ENTITY(Entity entity1, Entity entity2) { _i<Void>(0x68B562E124CC0AEF, entity1, entity2); } // 0x68B562E124CC0AEF b1180
	// p1 is always set to 1
	inline void SET_ALLOW_MIGRATE_TO_SPECTATOR(Entity entity, Any p1) { _i<Void>(0x36F32DE87082343E, entity, p1); } // 0x36F32DE87082343E b1011
	// Gets the handle of an entity with a specific model hash attached to another entity, such as an object attached to a ped.
	//  This native does not appear to have anything to do with pickups as in scripts it is used with objects.
	// 
	// Example from fm_mission_controller_2020.c:
	// 
	// iVar8 = ENTITY::GET_ENTITY_OF_TYPE_ATTACHED_TO_ENTITY(bParam0->f_9, joaat("p_cs_clipboard"));
	inline Entity GET_ENTITY_OF_TYPE_ATTACHED_TO_ENTITY(Entity entity, Hash modelHash) { return _i<Entity>(0x1F922734E259BD26, entity, modelHash); } // 0x1F922734E259BD26 b1180
	inline void SET_PICK_UP_BY_CARGOBOB_DISABLED(Entity entity, BOOL toggle) { _i<Void>(0xD7B80E7C3BEFC396, entity, toggle); } // 0xD7B80E7C3BEFC396 b1180
}

namespace EVENT
{
	inline void SET_DECISION_MAKER(Ped ped, Hash name) { _i<Void>(0xB604A2942ADED0EE, ped, name); } // 0xB604A2942ADED0EE 0x19CEAC9E b323
	// eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	inline void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int eventType) { _i<Void>(0x4FC9381A7AEE8968, name, eventType); } // 0x4FC9381A7AEE8968 0x07ABD94D b323
	// eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	// 
	// This is limited to 4 blocked events at a time.
	inline void BLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { _i<Void>(0xE42FCDFD0E4196F7, name, eventType); } // 0xE42FCDFD0E4196F7 0x57506EA6 b323
	// eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	inline void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { _i<Void>(0xD7CD9CF34F2C99E8, name, eventType); } // 0xD7CD9CF34F2C99E8 0x62A3161D b323
	// eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	inline int ADD_SHOCKING_EVENT_AT_POSITION(int eventType, float x, float y, float z, float duration) { return _i<int>(0xD9F8455409B525E9, eventType, x, y, z, duration); } // 0xD9F8455409B525E9 0x0B30F779 b323
	// eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	inline int ADD_SHOCKING_EVENT_FOR_ENTITY(int eventType, Entity entity, float duration) { return _i<int>(0x7FD8F3BE76F89422, eventType, entity, duration); } // 0x7FD8F3BE76F89422 0xA81B5B71 b323
	// eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	inline BOOL IS_SHOCKING_EVENT_IN_SPHERE(int eventType, float x, float y, float z, float radius) { return _i<BOOL>(0x1374ABB7C15BAB92, eventType, x, y, z, radius); } // 0x1374ABB7C15BAB92 0x2F98823E b323
	inline BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return _i<BOOL>(0x2CDA538C44C6CCE5, event); } // 0x2CDA538C44C6CCE5 0xF82D5A87 b323
	inline void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { _i<Void>(0xEAABE8FDFA21274C, p0); } // 0xEAABE8FDFA21274C 0x64DF6282 b323
	inline void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { _i<Void>(0x340F1415B68AEADE); } // 0x340F1415B68AEADE 0xA0CE89C8 b323
	inline void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { _i<Void>(0x2F9A292AD0A3BD89); } // 0x2F9A292AD0A3BD89 0x4CC674B5 b323
	// eventType: https://alloc8or.re/gta5/doc/enums/eEventType.txt
	inline void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int eventType) { _i<Void>(0x3FD2EC8BF1F1CF30, eventType); } // 0x3FD2EC8BF1F1CF30 0xA0FDCB82 b323
	inline void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { _i<Void>(0x5F3B7749C112D552); } // 0x5F3B7749C112D552 0x80340396 b323
}

namespace FILES
{
	// Character types:
	// 0 = Michael, 
	// 1 = Franklin, 
	// 2 = Trevor, 
	// 3 = MPMale, 
	// 4 = MPFemale
	inline int GET_NUM_TATTOO_SHOP_DLC_ITEMS(int character) { return _i<int>(0x278F76C3B0A8F109, character); } // 0x278F76C3B0A8F109 0x71D0CF3E b323
	// Character types:
	// 0 = Michael, 
	// 1 = Franklin, 
	// 2 = Trevor, 
	// 3 = MPMale, 
	// 4 = MPFemale
	// 
	// 
	// enum TattooZoneData
	// {  
	//     ZONE_TORSO = 0,  
	//     ZONE_HEAD = 1,  
	//     ZONE_LEFT_ARM = 2,  
	//     ZONE_RIGHT_ARM = 3,  
	//     ZONE_LEFT_LEG = 4,  
	//     ZONE_RIGHT_LEG = 5,  
	//     ZONE_UNKNOWN = 6,
	//     ZONE_NONE = 7,  
	// };
	// struct outComponent
	// {
	//     // these vars are suffixed with 4 bytes of padding each.
	//     uint unk;
	//     int unk2;
	//     uint tattooCollectionHash;
	//     uint tattooNameHash;
	//     int unk3;
	//     TattooZoneData zoneId;
	//     uint unk4;
	//     uint unk5;
	//     // maybe more, not sure exactly, decompiled scripts are very vague around this part.
	// }
	inline BOOL GET_TATTOO_SHOP_DLC_ITEM_DATA(int characterType, int decorationIndex, Any* outComponent) { return _i<BOOL>(0xFF56381874F82086, characterType, decorationIndex, outComponent); } // 0xFF56381874F82086 0x2E9D628C b323
	// Returns some sort of index/offset for overlays/decorations.
	// 
	// Character types:
	// 0 = Michael, 
	// 1 = Franklin, 
	// 2 = Trevor, 
	// 3 = MPMale, 
	// 4 = MPFemale
	inline int GET_TATTOO_SHOP_DLC_ITEM_INDEX(Hash overlayHash, Any p1, int character) { return _i<int>(0x10144267DD22866C, overlayHash, p1, character); } // 0x10144267DD22866C b2189
	inline void INIT_SHOP_PED_COMPONENT(Any* outComponent) { _i<Void>(0x1E8C308FD312C036, outComponent); } // 0x1E8C308FD312C036 0xB818C7FC b323
	inline void INIT_SHOP_PED_PROP(Any* outProp) { _i<Void>(0xEB0A2B758F7B850F, outProp); } // 0xEB0A2B758F7B850F 0xF5659E50 b323
	inline int SETUP_SHOP_PED_APPAREL_QUERY(int p0, int p1, int p2, int p3) { return _i<int>(0x50F457823CE6EB5F, p0, p1, p2, p3); } // 0x50F457823CE6EB5F 0xC937FF3D b323
	// character is 0 for Michael, 1 for Franklin, 2 for Trevor, 3 for freemode male, and 4 for freemode female.
	// 
	// componentId is between 0 and 11 and corresponds to the usual component slots.
	// 
	// p1 could be the outfit number; unsure.
	// 
	// p2 is usually -1; unknown function.
	// 
	// p3 appears to be for selecting between clothes and props; false is used with components/clothes, true is used with props.
	// 
	// p4 is usually -1; unknown function.
	// 
	// componentId is -1 when p3 is true in decompiled scripts.
	inline int SETUP_SHOP_PED_APPAREL_QUERY_TU(int character, int p1, int p2, BOOL p3, int p4, int componentId) { return _i<int>(0x9BDF59818B1E38C1, character, p1, p2, p3, p4, componentId); } // 0x9BDF59818B1E38C1 0x594E862C b323
	// See https://git.io/JtcRf for example and structs.
	inline void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { _i<Void>(0x249E310B2D920699, componentId, outComponent); } // 0x249E310B2D920699 0xC0718904 b323
	// Returns some sort of index/offset for components.
	// Needs _GET_NUM_PROPS_FROM_OUTFIT to be called with p3 = false and componentId with the drawable's component slot first, returns -1 otherwise.
	inline int GET_SHOP_PED_QUERY_COMPONENT_INDEX(Hash componentHash) { return _i<int>(0x96E2929292A4DB77, componentHash); } // 0x96E2929292A4DB77 b2189
	// More info here: https://gist.github.com/root-cause/3b80234367b0c856d60bf5cb4b826f86
	inline void GET_SHOP_PED_COMPONENT(Hash componentHash, Any* outComponent) { _i<Void>(0x74C0E2A57EC66760, componentHash, outComponent); } // 0x74C0E2A57EC66760 0xB39677C5 b323
	// See https://git.io/JtcRf for example and structs.
	inline void GET_SHOP_PED_QUERY_PROP(int componentId, Any* outProp) { _i<Void>(0xDE44A00999B2837D, componentId, outProp); } // 0xDE44A00999B2837D 0x1D3C1466 b323
	// Returns some sort of index/offset for props.
	// Needs _GET_NUM_PROPS_FROM_OUTFIT to be called with p3 = true and componentId = -1 first, returns -1 otherwise.
	inline int GET_SHOP_PED_QUERY_PROP_INDEX(Hash componentHash) { return _i<int>(0x6CEBE002E58DEE97, componentHash); } // 0x6CEBE002E58DEE97 b2189
	// More info here: https://gist.github.com/root-cause/3b80234367b0c856d60bf5cb4b826f86
	inline void GET_SHOP_PED_PROP(Hash componentHash, Any* outProp) { _i<Void>(0x5D5CAFF661DDF6FC, componentHash, outProp); } // 0x5D5CAFF661DDF6FC 0xDB0A7A58 b323
	inline Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return _i<Hash>(0x0368B3A838070348, entity, componentId, drawableVariant, textureVariant); } // 0x0368B3A838070348 0xC8A4BF12 b323
	inline Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return _i<Hash>(0x5D6160275CAEC8DD, entity, componentId, propIndex, propTextureIndex); } // 0x5D6160275CAEC8DD 0x7D876DC0 b323
	inline int GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Hash componentHash) { return _i<int>(0xC17AD0E5752BECDA, componentHash); } // 0xC17AD0E5752BECDA 0x159751B4 b323
	// `propHash`: Ped helmet prop hash?
	// This native returns 1 when the player helmet has a visor (there is another prop index for the same helmet with closed/opened visor variant) that can be toggled. 0 if there's no alternative version with a visor for this helmet prop.
	inline int GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Hash propHash) { return _i<int>(0xD40AAC51E8E4C663, propHash); } // 0xD40AAC51E8E4C663 b791
	inline void GET_VARIANT_COMPONENT(Hash componentHash, int variantComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { _i<Void>(0x6E11F282F11863B6, componentHash, variantComponentIndex, nameHash, enumValue, componentType); } // 0x6E11F282F11863B6 0xE4FF7103 b323
	inline void GET_VARIANT_PROP(Hash componentHash, int variantPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { _i<Void>(0xD81B7F27BC773E66, componentHash, variantPropIndex, nameHash, enumValue, anchorPoint); } // 0xD81B7F27BC773E66 b791
	// Returns number of possible values of the forcedComponentIndex argument of GET_FORCED_COMPONENT.
	inline int GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(Hash componentHash) { return _i<int>(0xC6B9DB42C04DD8C3, componentHash); } // 0xC6B9DB42C04DD8C3 0xCE70F183 b323
	// Returns number of possible values of the forcedPropIndex argument of GET_FORCED_PROP.
	inline int GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(Hash componentHash) { return _i<int>(0x017568A8182D98A6, componentHash); } // 0x017568A8182D98A6 0xC560D7C0 b323
	inline void GET_FORCED_COMPONENT(Hash componentHash, int forcedComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { _i<Void>(0x6C93ED8C2F74859B, componentHash, forcedComponentIndex, nameHash, enumValue, componentType); } // 0x6C93ED8C2F74859B 0x382C70BE b323
	inline void GET_FORCED_PROP(Hash componentHash, int forcedPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { _i<Void>(0xE1CA84EBF72E691D, componentHash, forcedPropIndex, nameHash, enumValue, anchorPoint); } // 0xE1CA84EBF72E691D 0x22DAE257 b323
	// Full list of restriction tags by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/pedApparelRestrictionTags.json
	// 
	// componentId/last parameter seems to be unused.
	inline BOOL DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Hash componentHash, Hash restrictionTagHash, int componentId) { return _i<BOOL>(0x341DE7ED1D2A1BFD, componentHash, restrictionTagHash, componentId); } // 0x341DE7ED1D2A1BFD 0x8E2C7FD5 b323
	inline BOOL DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return _i<BOOL>(0x7796B21B76221BC5, ped, componentId, restrictionTagHash); } // 0x7796B21B76221BC5 b2612
	inline BOOL DOES_CURRENT_PED_PROP_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return _i<BOOL>(0xD726BAB4554DA580, ped, componentId, restrictionTagHash); } // 0xD726BAB4554DA580 b2612
	// characters
	// 
	// 0: Michael
	// 1: Franklin
	// 2: Trevor
	// 3: MPMale
	// 4: MPFemale
	inline int SETUP_SHOP_PED_OUTFIT_QUERY(int character, BOOL p1) { return _i<int>(0xF3FBE2D50A6A8C28, character, p1); } // 0xF3FBE2D50A6A8C28 0x1ECD23E7 b323
	// outfitIndex: from 0 to SETUP_SHOP_PED_OUTFIT_QUERY(characterIndex, false) - 1.
	// See https://git.io/JtcB8 for example and outfit struct.
	inline void GET_SHOP_PED_QUERY_OUTFIT(int outfitIndex, Any* outfit) { _i<Void>(0x6D793F03A631FE56, outfitIndex, outfit); } // 0x6D793F03A631FE56 0x2F8013A1 b323
	inline void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { _i<Void>(0xB7952076E444979D, p0, p1); } // 0xB7952076E444979D 0xCAFE9209 b323
	inline int GET_SHOP_PED_OUTFIT_LOCATE(Any p0) { return _i<int>(0x073CA26B079F956E, p0); } // 0x073CA26B079F956E 0x2798F56F b323
	// See https://git.io/JtcBH for example and structs.
	inline BOOL GET_SHOP_PED_OUTFIT_PROP_VARIANT(Hash outfitHash, int variantIndex, Any* outPropVariant) { return _i<BOOL>(0xA9F9C2E0FDE11CBB, outfitHash, variantIndex, outPropVariant); } // 0xA9F9C2E0FDE11CBB 0x6641A864 b323
	// See https://git.io/JtcBH for example and structs.
	inline BOOL GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Hash outfitHash, int variantIndex, Any* outComponentVariant) { return _i<BOOL>(0x19F2A026EDF0013F, outfitHash, variantIndex, outComponentVariant); } // 0x19F2A026EDF0013F 0x818534AC b323
	inline int GET_NUM_DLC_VEHICLES() { return _i<int>(0xA7A866D21CD2329B); } // 0xA7A866D21CD2329B 0x8EAF9CF6 b323
	// dlcVehicleIndex is 0 to GET_NUM_DLC_VEHICLS() - 1
	inline Hash GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) { return _i<Hash>(0xECC01B7C5763333C, dlcVehicleIndex); } // 0xECC01B7C5763333C 0xA2201E09 b323
	// dlcVehicleIndex takes a number from 0 - GET_NUM_DLC_VEHICLES() - 1.
	// outData is a struct of 3 8-byte items.
	// The Second item in the struct *(Hash *)(outData + 1) is the vehicle hash.
	inline BOOL GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, Any* outData) { return _i<BOOL>(0x33468EDC08E371F6, dlcVehicleIndex, outData); } // 0x33468EDC08E371F6 0xCF428FA4 b323
	inline int GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) { return _i<int>(0x5549EE11FA22FCF2, dlcVehicleIndex); } // 0x5549EE11FA22FCF2 0xAB12738C b323
	// Returns the total number of DLC weapons.
	inline int GET_NUM_DLC_WEAPONS() { return _i<int>(0xEE47635F352DA367); } // 0xEE47635F352DA367 0x2B757E6C b323
	// Returns the total number of DLC weapons that are available in SP (availableInSP field in shop_weapon.meta).
	inline int GET_NUM_DLC_WEAPONS_SP() { return _i<int>(0x4160B65AE085B5A9); } // 0x4160B65AE085B5A9 b2060
	// 
	// dlcWeaponIndex takes a number from 0 - GET_NUM_DLC_WEAPONS() - 1.
	// struct DlcWeaponData
	// {
	// int emptyCheck; //use DLC1::IS_CONTENT_ITEM_LOCKED on this
	// int padding1;
	// int weaponHash;
	// int padding2;
	// int unk;
	// int padding3;
	// int weaponCost;
	// int padding4;
	// int ammoCost;
	// int padding5;
	// int ammoType;
	// int padding6;
	// int defaultClipSize;
	// int padding7;
	// char nameLabel[64];
	// char descLabel[64];
	// char desc2Label[64]; // usually "the" + name
	// char upperCaseNameLabel[64];
	// };
	inline BOOL GET_DLC_WEAPON_DATA(int dlcWeaponIndex, Any* outData) { return _i<BOOL>(0x79923CD21BECE14E, dlcWeaponIndex, outData); } // 0x79923CD21BECE14E 0xD88EC8EA b323
	// Same as GET_DLC_WEAPON_DATA but only works for DLC weapons that are available in SP.
	inline BOOL GET_DLC_WEAPON_DATA_SP(int dlcWeaponIndex, Any* outData) { return _i<BOOL>(0x310836EE7129BA33, dlcWeaponIndex, outData); } // 0x310836EE7129BA33 b2060
	// Returns the total number of DLC weapon components.
	inline int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return _i<int>(0x405425358A7D61FE, dlcWeaponIndex); } // 0x405425358A7D61FE 0x476B23A9 b323
	// Returns the total number of DLC weapon components that are available in SP.
	inline int GET_NUM_DLC_WEAPON_COMPONENTS_SP(int dlcWeaponIndex) { return _i<int>(0xAD2A7A6DFF55841B, dlcWeaponIndex); } // 0xAD2A7A6DFF55841B b2060
	// p0 seems to be the weapon index
	// p1 seems to be the weapon component index
	// struct DlcComponentData{
	// int attachBone;
	// int padding1;
	// int bActiveByDefault;
	// int padding2;
	// int unk;
	// int padding3;
	// int componentHash;
	// int padding4;
	// int unk2;
	// int padding5;
	// int componentCost;
	// int padding6;
	// char nameLabel[64];
	// char descLabel[64];
	// };
	// 
	inline BOOL GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return _i<BOOL>(0x6CF598A2957C2BF8, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); } // 0x6CF598A2957C2BF8 0x4B83FCAF b323
	// Same as GET_DLC_WEAPON_COMPONENT_DATA but only works for DLC components that are available in SP.
	inline BOOL GET_DLC_WEAPON_COMPONENT_DATA_SP(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return _i<BOOL>(0x31D5E073B6F93CDC, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); } // 0x31D5E073B6F93CDC b2060
	inline BOOL IS_CONTENT_ITEM_LOCKED(Hash itemHash) { return _i<BOOL>(0xD4D7B033C3AA243C, itemHash); } // 0xD4D7B033C3AA243C 0x06396058 b323
	inline BOOL IS_DLC_VEHICLE_MOD(Hash hash) { return _i<BOOL>(0x0564B9FF9631B82C, hash); } // 0x0564B9FF9631B82C 0x35BCA844 b323
	inline Hash GET_DLC_VEHICLE_MOD_LOCK_HASH(Hash hash) { return _i<Hash>(0xC098810437312FFF, hash); } // 0xC098810437312FFF 0x59352658 b323
	// From fm_deathmatch_creator and fm_race_creator:
	// 
	// FILES::REVERT_CONTENT_CHANGESET_GROUP_FOR_ALL(joaat("GROUP_MAP_SP"));
	// FILES::EXECUTE_CONTENT_CHANGESET_GROUP_FOR_ALL(joaat("GROUP_MAP"));
	inline void EXECUTE_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { _i<Void>(0x6BEDF5769AC2DC07, hash); } // 0x6BEDF5769AC2DC07 b1604
	// From fm_deathmatch_creator and fm_race_creator:
	// 
	// FILES::REVERT_CONTENT_CHANGESET_GROUP_FOR_ALL(joaat("GROUP_MAP_SP"));
	// FILES::EXECUTE_CONTENT_CHANGESET_GROUP_FOR_ALL(joaat("GROUP_MAP"));
	inline void REVERT_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { _i<Void>(0x3C1978285B036B25, hash); } // 0x3C1978285B036B25 b1604
}

namespace FIRE
{
	// Starts a fire:
	// 
	// xyz: Location of fire
	// maxChildren: The max amount of times a fire can spread to other objects. Must be 25 or less, or the function will do nothing.
	// isGasFire: Whether or not the fire is powered by gasoline.
	inline FireId START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return _i<FireId>(0x6B83617E04503888, X, Y, Z, maxChildren, isGasFire); } // 0x6B83617E04503888 0xE7529357 b323
	inline void REMOVE_SCRIPT_FIRE(FireId fireHandle) { _i<Void>(0x7FF548385680673F, fireHandle); } // 0x7FF548385680673F 0x6B21FE26 b323
	inline FireId START_ENTITY_FIRE(Entity entity) { return _i<FireId>(0xF6A9D9708F6F23DF, entity); } // 0xF6A9D9708F6F23DF 0x8928428E b323
	inline void STOP_ENTITY_FIRE(Entity entity) { _i<Void>(0x7F0DD2EBBB651AFF, entity); } // 0x7F0DD2EBBB651AFF 0xCE8C9066 b323
	inline BOOL IS_ENTITY_ON_FIRE(Entity entity) { return _i<BOOL>(0x28D3FED7190D3A0B, entity); } // 0x28D3FED7190D3A0B 0x8C73E64F b323
	inline int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return _i<int>(0x50CAD495A460B305, x, y, z, radius); } // 0x50CAD495A460B305 0x654D93B7 b323
	inline void SET_FLAMMABILITY_MULTIPLIER(float p0) { _i<Void>(0x8F390AC4155099BA, p0); } // 0x8F390AC4155099BA b1734
	inline void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { _i<Void>(0x056A8A219B8E829F, x, y, z, radius); } // 0x056A8A219B8E829F 0x725C7205 b323
	// Returns TRUE if it found something. FALSE if not.
	inline BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return _i<BOOL>(0x352A9F6BCF90081F, outPosition, x, y, z); } // 0x352A9F6BCF90081F 0xC4977B47 b323
	// BOOL isAudible = If explosion makes a sound.
	// BOOL isInvisible = If the explosion is invisible or not.
	// 
	// explosionType: https://alloc8or.re/gta5/doc/enums/eExplosionTag.txt
	inline void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake, BOOL noDamage) { _i<Void>(0xE3AD2BDBAEE269AC, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake, noDamage); } // 0xE3AD2BDBAEE269AC 0x10AF5258 b323
	// isAudible: If explosion makes a sound.
	// isInvisible: If the explosion is invisible or not.
	// explosionType: See ADD_EXPLOSION.
	inline void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { _i<Void>(0x172AA1B624FA1013, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); } // 0x172AA1B624FA1013 0x27EE0D67 b323
	// isAudible: If explosion makes a sound.
	// isInvisible: If the explosion is invisible or not.
	// explosionType: See ADD_EXPLOSION.
	inline void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { _i<Void>(0x36DD3FE58B5E5212, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); } // 0x36DD3FE58B5E5212 0xCF358946 b323
	// explosionType: See ADD_EXPLOSION.
	inline BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return _i<BOOL>(0x2E2EBA0EE7CED0E0, explosionType, x1, y1, z1, x2, y2, z2); } // 0x2E2EBA0EE7CED0E0 0xFB40075B b323
	// explosionType: See ADD_EXPLOSION.
	inline BOOL IS_EXPLOSION_ACTIVE_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return _i<BOOL>(0x6070104B699B2EF4, explosionType, x1, y1, z1, x2, y2, z2); } // 0x6070104B699B2EF4 0x37C388DB b323
	// explosionType: See ADD_EXPLOSION.
	inline BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return _i<BOOL>(0xAB0F816885B0E483, explosionType, x, y, z, radius); } // 0xAB0F816885B0E483 0xD455A7F3 b323
	// explosionType: See ADD_EXPLOSION.
	inline Entity GET_OWNER_OF_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return _i<Entity>(0xB3CD51E3DB86F176, explosionType, x, y, z, radius); } // 0xB3CD51E3DB86F176 b1290
	// explosionType: See ADD_EXPLOSION, -1 for any explosion type
	// 
	inline BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float width) { return _i<BOOL>(0xA079A6C51525DC4B, explosionType, x1, y1, z1, x2, y2, z2, width); } // 0xA079A6C51525DC4B 0x0128FED9 b323
	// Returns a handle to the first entity within the a circle spawned inside the 2 points from a radius.
	// 
	// explosionType: See ADD_EXPLOSION.
	inline Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return _i<Entity>(0x14BA4BA137AF6CEC, explosionType, x1, y1, z1, x2, y2, z2, radius); } // 0x14BA4BA137AF6CEC 0xAEC0D176 b323
}

namespace GRAPHICS
{
	inline static void DrawSprite_(const char* Type, const char* IconType, float X, float Y, float Z, float width, float height, int RED, int GREEN, int BLUE, int Alpha) { _i<Void>(0xE7FFAE5EBF23D890, Type, IconType, X, Y, Z, width, height, RED, GREEN, BLUE, Alpha); } // 0x1FEC16B0
	// NOTE: Debugging functions are not present in the retail version of the game.
	inline void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { _i<Void>(0x175B6BFC15CDD0C5, enabled); } // 0x175B6BFC15CDD0C5 0x1418CA37 b323
	inline void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { _i<Void>(0x7FDFADE676AA3CB0, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x7FDFADE676AA3CB0 0xABF783AB b323
	// NOTE: Debugging functions are not present in the retail version of the game.
	inline void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { _i<Void>(0xD8B9A8AC5608FF94, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); } // 0xD8B9A8AC5608FF94 0xE8BFF632 b323
	// NOTE: Debugging functions are not present in the retail version of the game.
	inline void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { _i<Void>(0xAAD68E1AB39DA632, x, y, z, radius, red, green, blue, alpha); } // 0xAAD68E1AB39DA632 0x304D0EEF b323
	inline void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { _i<Void>(0x083A2CA4F2E573BD, x1, y1, z1, x2, y2, z2, r, g, b, alpha); } // 0x083A2CA4F2E573BD 0x8524A848 b323
	// NOTE: Debugging functions are not present in the retail version of the game.
	inline void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) { _i<Void>(0x73B1189623049839, x, y, z, size, red, green, blue, alpha); } // 0x73B1189623049839 0xB6DF3709 b323
	// NOTE: Debugging functions are not present in the retail version of the game.
	inline void DRAW_DEBUG_TEXT(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { _i<Void>(0x3903E216620488E8, text, x, y, z, red, green, blue, alpha); } // 0x3903E216620488E8 0x269B006F b323
	// NOTE: Debugging functions are not present in the retail version of the game.
	inline void DRAW_DEBUG_TEXT_2D(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { _i<Void>(0xA3BB2E9555C05A8F, text, x, y, z, red, green, blue, alpha); } // 0xA3BB2E9555C05A8F 0x528B973B b323
	// Draws a depth-tested line from one point to another.
	// ----------------
	// x1, y1, z1 : Coordinates for the first point
	// x2, y2, z2 : Coordinates for the second point
	// r, g, b, alpha : Color with RGBA-Values
	// I recommend using a predefined function to call this.
	// [VB.NET]
	// Public Sub DrawLine(from As Vector3, [to] As Vector3, col As Color)
	//     [Function].Call(Hash.DRAW_LINE, from.X, from.Y, from.Z, [to].X, [to].Y, [to].Z, col.R, col.G, col.B, col.A)
	// End Sub
	// 
	// [C#]
	// public void DrawLine(Vector3 from, Vector3 to, Color col)
	// {
	//     Function.Call(Hash.DRAW_LINE, from.X, from.Y, from.Z, to.X, to.Y, to.Z, col.R, col.G, col.B, col.A);
	// }
	inline void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { _i<Void>(0x6B7256074AE34680, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0x6B7256074AE34680 0xB3426BCC b323
	// x/y/z - Location of a vertex (in world coords), presumably.
	// ----------------
	// x1, y1, z1     : Coordinates for the first point
	// x2, y2, z2     : Coordinates for the second point
	// x3, y3, z3     : Coordinates for the third point
	// r, g, b, alpha : Color with RGBA-Values
	// 
	// Keep in mind that only one side of the drawn triangle is visible: It's the side, in which the vector-product of the vectors heads to: (b-a)x(c-a) Or (b-a)x(c-b).
	// But be aware: The function seems to work somehow differently. I have trouble having them drawn in rotated orientation. Try it yourself and if you somehow succeed, please edit this and post your solution.
	// I recommend using a predefined function to call this.
	// [VB.NET]
	// Public Sub DrawPoly(a As Vector3, b As Vector3, c As Vector3, col As Color)
	//     [Function].Call(Hash.DRAW_POLY, a.X, a.Y, a.Z, b.X, b.Y, b.Z, c.X, c.Y, c.Z, col.R, col.G, col.B, col.A)
	// End Sub
	// 
	// [C#]
	// public void DrawPoly(Vector3 a, Vector3 b, Vector3 c, Color col)
	// {
	//     Function.Call(Hash.DRAW_POLY, a.X, a.Y, a.Z, b.X, b.Y, b.Z, c.X, c.Y, c.Z, col.R, col.G, col.B, col.A);
	// }
	// BTW: Intersecting triangles are not supported: They overlap in the order they were called.
	inline void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) { _i<Void>(0xAC26716048436851, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha); } // 0xAC26716048436851 0xABD19253 b323
	// Used for drawling Deadline trailing lights, see deadline.ytd
	// 
	// p15 through p23 are values that appear to be related to illiumation, scaling, and rotation; more testing required.
	// For UVW mapping (u,v,w parameters), reference your favourite internet resource for more details.
	inline void DRAW_TEXTURED_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { _i<Void>(0x29280002282F1928, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); } // 0x29280002282F1928 b877
	// Used for drawling Deadline trailing lights, see deadline.ytd
	// 
	// Each vertex has its own colour that is blended/illuminated on the texture. Additionally, the R, G, and B components are floats that are int-casted internally.
	// For UVW mapping (u,v,w parameters), reference your favourite internet resource for more details.
	inline void DRAW_TEXTURED_POLY_WITH_THREE_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float red1, float green1, float blue1, int alpha1, float red2, float green2, float blue2, int alpha2, float red3, float green3, float blue3, int alpha3, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { _i<Void>(0x736D7AA1B750856B, x1, y1, z1, x2, y2, z2, x3, y3, z3, red1, green1, blue1, alpha1, red2, green2, blue2, alpha2, red3, green3, blue3, alpha3, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); } // 0x736D7AA1B750856B b877
	// x,y,z = start pos
	// x2,y2,z2 = end pos
	// 
	// Draw's a 3D Box between the two x,y,z coords.
	// --------------
	// Keep in mind that the edges of the box do only align to the worlds base-vectors. Therefore something like rotation cannot be applied. That means this function is pretty much useless, unless you want a static unicolor box somewhere.
	// I recommend using a predefined function to call this.
	// [VB.NET]
	// Public Sub DrawBox(a As Vector3, b As Vector3, col As Color)
	//     [Function].Call(Hash.DRAW_BOX,a.X, a.Y, a.Z,b.X, b.Y, b.Z,col.R, col.G, col.B, col.A)
	// End Sub
	// 
	// [C#]
	// public void DrawBox(Vector3 a, Vector3 b, Color col)
	// {
	//     Function.Call(Hash.DRAW_BOX,a.X, a.Y, a.Z,b.X, b.Y, b.Z,col.R, col.G, col.B, col.A);
	// }
	inline void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { _i<Void>(0xD3A9971CADAC7252, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); } // 0xD3A9971CADAC7252 0xCD4D9DD5 b323
	inline void SET_BACKFACECULLING(BOOL toggle) { _i<Void>(0x23BA6B0C2AD7B0D3, toggle); } // 0x23BA6B0C2AD7B0D3 0xC44C2F44 b323
	inline void SET_DEPTHWRITING(BOOL toggle) { _i<Void>(0xC5C8F970D4EDFF71, toggle); } // 0xC5C8F970D4EDFF71 b877
	inline BOOL BEGIN_TAKE_MISSION_CREATOR_PHOTO() { return _i<BOOL>(0x1DD2139A9A20DCE8); } // 0x1DD2139A9A20DCE8 0xBA9AD458 b323
	inline int GET_STATUS_OF_TAKE_MISSION_CREATOR_PHOTO() { return _i<int>(0x90A78ECAA4E78453); } // 0x90A78ECAA4E78453 0xADBBA287 b323
	inline void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO() { _i<Void>(0x0A46AF8A78DC5E0A); } // 0x0A46AF8A78DC5E0A 0x9E553002 b323
	inline BOOL LOAD_MISSION_CREATOR_PHOTO(Any* p0, Any p1, Any p2, Any p3) { return _i<BOOL>(0x4862437A486F91B0, p0, p1, p2, p3); } // 0x4862437A486F91B0 0x56C1E488 b323
	inline int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(Any* p0) { return _i<int>(0x1670F8D05056F257, p0); } // 0x1670F8D05056F257 0x226B08EA b323
	inline BOOL BEGIN_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return _i<BOOL>(0x7FA5D82B8F58EC06); } // 0x7FA5D82B8F58EC06 0x1F3CADB0 b323
	inline int GET_STATUS_OF_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return _i<int>(0x5B0316762AFD4A64); } // 0x5B0316762AFD4A64 0xA9DC8558 b323
	inline void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO_PREVIEW() { _i<Void>(0x346EF3ECAAAB149E); } // 0x346EF3ECAAAB149E 0x88EAF398 b323
	inline BOOL BEGIN_TAKE_HIGH_QUALITY_PHOTO() { return _i<BOOL>(0xA67C35C56EB1BD9D); } // 0xA67C35C56EB1BD9D 0x47B0C137 b323
	inline int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() { return _i<int>(0x0D6CA79EEEBD8CA3); } // 0x0D6CA79EEEBD8CA3 0x65376C9B b323
	inline void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO() { _i<Void>(0xD801CC02177FA3F1); } // 0xD801CC02177FA3F1 0x9CBA682A b323
	inline void SET_TAKEN_PHOTO_IS_MUGSHOT(BOOL toggle) { _i<Void>(0x1BBC135A4D25EDDE, toggle); } // 0x1BBC135A4D25EDDE b323
	inline void SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(Any p0, int p1) { _i<Void>(0xF3F776ADA161E47D, p0, p1); } // 0xF3F776ADA161E47D b1604
	inline void SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(Any p0) { _i<Void>(0xADD6627C4D325458, p0); } // 0xADD6627C4D325458 b2189
	// 1 match in 1 script. cellphone_controller.
	// p0 is -1 in scripts.
	inline BOOL SAVE_HIGH_QUALITY_PHOTO(int unused) { return _i<BOOL>(0x3DEC726C25A11BAC, unused); } // 0x3DEC726C25A11BAC 0x3B15D33C b323
	inline int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() { return _i<int>(0x0C0C4E81E1AC60A0); } // 0x0C0C4E81E1AC60A0 0xEC5D0317 b323
	inline BOOL BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(Any p0) { return _i<BOOL>(0x759650634F07B6B4, p0); } // 0x759650634F07B6B4 0x25D569EB b323
	inline int GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int p0) { return _i<int>(0xCB82A0BF0E3E3265, p0); } // 0xCB82A0BF0E3E3265 0xCFCDC518 b323
	inline void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO() { _i<Void>(0x6A12D88881435DCA); } // 0x6A12D88881435DCA 0x108F36CC b323
	inline void DRAW_LOW_QUALITY_PHOTO_TO_PHONE(BOOL p0, BOOL p1) { _i<Void>(0x1072F115DAB0717E, p0, p1); } // 0x1072F115DAB0717E 0xE9F2B68F b323
	// This function is hard-coded to always return 0.
	inline int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return _i<int>(0x34D23450F028B0BF); } // 0x34D23450F028B0BF 0x727AA63F b323
	// This function is hard-coded to always return 96.
	inline int GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS() { return _i<int>(0xDC54A7AF8B3A14EF); } // 0xDC54A7AF8B3A14EF 0x239272BD b323
	inline int GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS() { return _i<int>(0x473151EBC762C6DA); } // 0x473151EBC762C6DA 0x21DBF0C9 b323
	// 2 matches across 2 scripts. Only showed in appcamera & appmedia. Both were 0.
	inline BOOL QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(Any p0) { return _i<BOOL>(0x2A893980E96B659A, p0); } // 0x2A893980E96B659A 0x199FABF0 b323
	// 3 matches across 3 scripts. First 2 were 0, 3rd was 1. Possibly a bool.
	// appcamera, appmedia, and cellphone_controller.
	inline int GET_STATUS_OF_SORTED_LIST_OPERATION(Any p0) { return _i<int>(0xF5BED327CEA362B1, p0); } // 0xF5BED327CEA362B1 0x596B900D b323
	inline void CLEAR_STATUS_OF_SORTED_LIST_OPERATION() { _i<Void>(0x4AF92ACD3141D96C); } // 0x4AF92ACD3141D96C 0xC9EF81ED b323
	// This function is hard-coded to always return 0.
	inline BOOL DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(Any p0) { return _i<BOOL>(0xE791DF1F73ED2C8B, p0); } // 0xE791DF1F73ED2C8B 0x9D84554C b323
	// This function is hard-coded to always return 0.
	inline BOOL LOAD_HIGH_QUALITY_PHOTO(Any p0) { return _i<BOOL>(0xEC72C258667BE5EA, p0); } // 0xEC72C258667BE5EA 0x9C106AD9 b323
	// Hardcoded to always return 2.
	inline int GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(int p0) { return _i<int>(0x40AFB081F8ADD4EE, p0); } // 0x40AFB081F8ADD4EE 0x762E5C5F b323
	inline void DRAW_LIGHT_WITH_RANGEEX(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { _i<Void>(0xF49E9A9716A04595, x, y, z, r, g, b, range, intensity, shadow); } // 0xF49E9A9716A04595 b323
	inline void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { _i<Void>(0xF2A1B2771A01DBD4, posX, posY, posZ, colorR, colorG, colorB, range, intensity); } // 0xF2A1B2771A01DBD4 0x6A396E9A b323
	// Parameters:
	// * pos - coordinate where the spotlight is located
	// * dir - the direction vector the spotlight should aim at from its current position
	// * r,g,b - color of the spotlight
	// * distance - the maximum distance the light can reach
	// * brightness - the brightness of the light
	// * roundness - "smoothness" of the circle edge
	// * radius - the radius size of the spotlight
	// * falloff - the falloff size of the light's edge (example: www.i.imgur.com/DemAWeO.jpg)
	// 
	// Example in C# (spotlight aims at the closest vehicle):
	// Vector3 myPos = Game.Player.Character.Position;
	// Vehicle nearest = World.GetClosestVehicle(myPos , 1000f);
	// Vector3 destinationCoords = nearest.Position;
	// Vector3 dirVector = destinationCoords - myPos;
	// dirVector.Normalize();
	// Function.Call(Hash.DRAW_SPOT_LIGHT, pos.X, pos.Y, pos.Z, dirVector.X, dirVector.Y, dirVector.Z, 255, 255, 255, 100.0f, 1f, 0.0f, 13.0f, 1f);
	inline void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { _i<Void>(0xD0F64B265C8C8B33, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); } // 0xD0F64B265C8C8B33 0xBDBC410C b323
	inline void DRAW_SHADOWED_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) { _i<Void>(0x5BCA583A583194DB, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadowId); } // 0x5BCA583A583194DB 0x32BF9598 b323
	inline void FADE_UP_PED_LIGHT(float p0) { _i<Void>(0xC9B18B4619F48F7B, p0); } // 0xC9B18B4619F48F7B 0x93628786 b323
	inline void UPDATE_LIGHTS_ON_ENTITY(Entity entity) { _i<Void>(0xDEADC0DEDEADC0DE, entity); } // 0xDEADC0DEDEADC0DE 0xC12AC47A b323
	inline void SET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE(Any p0) { _i<Void>(0x9641588DAB93B4B5, p0); } // 0x9641588DAB93B4B5 b877
	inline float GET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE() { return _i<float>(0x393BD2275CEB7793); } // 0x393BD2275CEB7793 b1103
	// enum MarkerTypes
	// {
	//     MarkerTypeUpsideDownCone = 0,
	//  MarkerTypeVerticalCylinder = 1,
	//    MarkerTypeThickChevronUp = 2,
	//  MarkerTypeThinChevronUp = 3,
	//   MarkerTypeCheckeredFlagRect = 4,
	//   MarkerTypeCheckeredFlagCircle = 5,
	//     MarkerTypeVerticleCircle = 6,
	//  MarkerTypePlaneModel = 7,
	//  MarkerTypeLostMCDark = 8,
	//  MarkerTypeLostMCLight = 9,
	//     MarkerTypeNumber0 = 10,
	//    MarkerTypeNumber1 = 11,
	//    MarkerTypeNumber2 = 12,
	//    MarkerTypeNumber3 = 13,
	//    MarkerTypeNumber4 = 14,
	//    MarkerTypeNumber5 = 15,
	//    MarkerTypeNumber6 = 16,
	//    MarkerTypeNumber7 = 17,
	//    MarkerTypeNumber8 = 18,
	//    MarkerTypeNumber9 = 19,
	//    MarkerTypeChevronUpx1 = 20,
	//    MarkerTypeChevronUpx2 = 21,
	//    MarkerTypeChevronUpx3 = 22,
	//    MarkerTypeHorizontalCircleFat = 23,
	//    MarkerTypeReplayIcon = 24,
	//     MarkerTypeHorizontalCircleSkinny = 25,
	//     MarkerTypeHorizontalCircleSkinny_Arrow = 26,
	//   MarkerTypeHorizontalSplitArrowCircle = 27,
	//     MarkerTypeDebugSphere = 28,
	//    MarkerTypeDallorSign = 29,
	//     MarkerTypeHorizontalBars = 30,
	//     MarkerTypeWolfHead = 31
	// };
	// 
	// dirX/Y/Z represent a heading on each axis in which the marker should face, alternatively you can rotate each axis independently with rotX/Y/Z (and set dirX/Y/Z all to 0).
	// 
	// faceCamera - Rotates only the y-axis (the heading) towards the camera
	// 
	// p19 - no effect, default value in script is 2
	// 
	// rotate - Rotates only on the y-axis (the heading)
	// 
	// textureDict - Name of texture dictionary to load texture from (e.g. "GolfPutting")
	// 
	// textureName - Name of texture inside dictionary to load (e.g. "PuttingMarker")
	// 
	// drawOnEnts - Draws the marker onto any entities that intersect it
	// 
	// basically what he said, except textureDict and textureName are totally not const char*, or if so, then they are always set to 0/NULL/nullptr in every script I checked, eg:
	// 
	// bj.c: graphics::draw_marker(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, false);
	// 
	// his is what I used to draw an amber downward pointing chevron "V", has to be redrawn every frame.  The 180 is for 180 degrees rotation around the Y axis, the 50 is alpha, assuming max is 100, but it will accept 255.
	// 
	// GRAPHICS::DRAW_MARKER(2, v.x, v.y, v.z + 2, 0, 0, 0, 0, 180, 0, 2, 2, 2, 255, 128, 0, 50, 0, 1, 1, 0, 0, 0, 0);
	// 
	// 
	inline void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { _i<Void>(0x28477EC23D892089, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); } // 0x28477EC23D892089 0x48D84A02 b323
	inline void DRAW_MARKER_EX(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, Any p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts, BOOL p24, BOOL p25) { _i<Void>(0xE82728F0DE75D13A, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts, p24, p25); } // 0xE82728F0DE75D13A b573
	// Draws a 3D sphere, typically seen in the GTA:O freemode event "Penned In".
	// Example https://imgur.com/nCbtS4H
	// 
	// alpha - The alpha for the sphere. Goes from 0.0 to 1.0.
	inline void DRAW_MARKER_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, float alpha) { _i<Void>(0x799017F9E3B10112, x, y, z, radius, red, green, blue, alpha); } // 0x799017F9E3B10112 b463
	// Creates a checkpoint. Returns the handle of the checkpoint.
	// 
	// 20/03/17 : Attention, checkpoints are already handled by the game itself, so you must not loop it like markers.
	// 
	// Parameters:
	// * type - The type of checkpoint to create. See below for a list of checkpoint types.
	// * pos1 - The position of the checkpoint.
	// * pos2 - The position of the next checkpoint to point to.
	// * radius - The radius of the checkpoint.
	// * color - The color of the checkpoint.
	// * reserved - Special parameter, see below for details. Usually set to 0 in the scripts.
	// 
	// Checkpoint types:
	// 0-4---------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker
	// 5-9---------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker
	// 10-14-------Ring: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker
	// 15-19-------1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker      
	// 20-24-------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker 
	// 25-29-------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker    
	// 30-34-------Cylinder: 1 arrow, 2 arrow, 3 arrows, CycleArrow, Checker 
	// 35-38-------Ring: Airplane Up, Left, Right, UpsideDown
	// 39----------?
	// 40----------Ring: just a ring
	// 41----------?
	// 42-44-------Cylinder w/ number (uses 'reserved' parameter)
	// 45-47-------Cylinder no arrow or number
	// 
	// If using type 42-44, reserved sets number / number and shape to display
	// 
	// 0-99------------Just numbers (0-99)
	// 100-109-----------------Arrow (0-9)
	// 110-119------------Two arrows (0-9)
	// 120-129----------Three arrows (0-9)
	// 130-139----------------Circle (0-9)
	// 140-149------------CycleArrow (0-9)
	// 150-159----------------Circle (0-9)
	// 160-169----Circle  w/ pointer (0-9)
	// 170-179-------Perforated ring (0-9)
	// 180-189----------------Sphere (0-9)
	inline int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float diameter, int red, int green, int blue, int alpha, int reserved) { return _i<int>(0x0134F0835AB6BFCB, type, posX1, posY1, posZ1, posX2, posY2, posZ2, diameter, red, green, blue, alpha, reserved); } // 0x0134F0835AB6BFCB 0xF541B690 b323
	inline void SET_CHECKPOINT_INSIDE_CYLINDER_HEIGHT_SCALE(int checkpoint, float scale) { _i<Void>(0x4B5B4DA5D79F1943, checkpoint, scale); } // 0x4B5B4DA5D79F1943 0x80151CCF b323
	inline void SET_CHECKPOINT_INSIDE_CYLINDER_SCALE(int checkpoint, float scale) { _i<Void>(0x44621483FF966526, checkpoint, scale); } // 0x44621483FF966526 b877
	// Sets the cylinder height of the checkpoint.
	// 
	// Parameters:
	// * nearHeight - The height of the checkpoint when inside of the radius.
	// * farHeight - The height of the checkpoint when outside of the radius.
	// * radius - The radius of the checkpoint.
	inline void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { _i<Void>(0x2707AAE9D9297D89, checkpoint, nearHeight, farHeight, radius); } // 0x2707AAE9D9297D89 0xFF0F9B22 b323
	// Sets the checkpoint color.
	inline void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { _i<Void>(0x7167371E8AD747F7, checkpoint, red, green, blue, alpha); } // 0x7167371E8AD747F7 0xEF9C8CB3 b323
	// Sets the checkpoint icon color.
	inline void SET_CHECKPOINT_RGBA2(int checkpoint, int red, int green, int blue, int alpha) { _i<Void>(0xB9EA40907C680580, checkpoint, red, green, blue, alpha); } // 0xB9EA40907C680580 0xA5456DBB b323
	// This does not move an existing checkpoint... so wtf.
	inline void SET_CHECKPOINT_CLIPPLANE_WITH_POS_NORM(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { _i<Void>(0xF51D36185993515D, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); } // 0xF51D36185993515D 0x20EABD0F b323
	inline void SET_CHECKPOINT_FORCE_OLD_ARROW_POINTING(int checkpoint) { _i<Void>(0xFCF6788FC4860CD4, checkpoint); } // 0xFCF6788FC4860CD4 b1734
	// Unknown. Called after creating a checkpoint (type: 51) in the creators.
	inline void SET_CHECKPOINT_DECAL_ROT_ALIGNED_TO_CAMERA_ROT(int checkpoint) { _i<Void>(0x615D3925E87A3B26, checkpoint); } // 0x615D3925E87A3B26 0x1E3A3126 b323
	inline void SET_CHECKPOINT_FORCE_DIRECTION(int checkpoint) { _i<Void>(0xDB1EA9411C8911EC, checkpoint); } // 0xDB1EA9411C8911EC b1180
	inline void SET_CHECKPOINT_DIRECTION(int checkpoint, float posX, float posY, float posZ) { _i<Void>(0x3C788E7F6438754D, checkpoint, posX, posY, posZ); } // 0x3C788E7F6438754D b1180
	inline void DELETE_CHECKPOINT(int checkpoint) { _i<Void>(0xF5ED37F54CD4D52E, checkpoint); } // 0xF5ED37F54CD4D52E 0xB66CF3CA b323
	inline void DONT_RENDER_IN_GAME_UI(BOOL p0) { _i<Void>(0x22A249A53034450A, p0); } // 0x22A249A53034450A 0x932FDB81 b323
	inline void FORCE_RENDER_IN_GAME_UI(BOOL toggle) { _i<Void>(0xDC459CFA0CCE245B, toggle); } // 0xDC459CFA0CCE245B 0x7E946E87 b323
	// This function can requests texture dictonaries from following RPFs:
	// scaleform_generic.rpf
	// scaleform_minigames.rpf
	// scaleform_minimap.rpf
	// scaleform_web.rpf
	// 
	// last param isnt a toggle
	inline void REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL p1) { _i<Void>(0xDFA2EF8E04127DD5, textureDict, p1); } // 0xDFA2EF8E04127DD5 0x4C9B035F b323
	inline BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) { return _i<BOOL>(0x0145F696AAAAD2E4, textureDict); } // 0x0145F696AAAAD2E4 0x3F436EEF b323
	inline void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) { _i<Void>(0xBE2CACCF5A8AA805, textureDict); } // 0xBE2CACCF5A8AA805 0xF07DDA38 b323
	// Draws a rectangle on the screen.
	// 
	// -x: The relative X point of the center of the rectangle. (0.0-1.0, 0.0 is the left edge of the screen, 1.0 is the right edge of the screen)
	// 
	// -y: The relative Y point of the center of the rectangle. (0.0-1.0, 0.0 is the top edge of the screen, 1.0 is the bottom edge of the screen)
	// 
	// -width: The relative width of the rectangle. (0.0-1.0, 1.0 means the whole screen width)
	// 
	// -height: The relative height of the rectangle. (0.0-1.0, 1.0 means the whole screen height)
	// 
	// -R: Red part of the color. (0-255)
	// 
	// -G: Green part of the color. (0-255)
	// 
	// -B: Blue part of the color. (0-255)
	// 
	// -A: Alpha part of the color. (0-255, 0 means totally transparent, 255 means totally opaque)
	// 
	// The total number of rectangles to be drawn in one frame is apparently limited to 399.
	// 
	inline void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a, BOOL p8) { _i<Void>(0x3A618A217E5154F0, x, y, width, height, r, g, b, a, p8); } // 0x3A618A217E5154F0 0xDD2BFC77 b323
	// Sets a flag defining whether or not script draw commands should continue being drawn behind the pause menu. This is usually used for TV channels and other draw commands that are used with a world render target.
	inline void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL toggle) { _i<Void>(0xC6372ECD45D73BCD, toggle); } // 0xC6372ECD45D73BCD 0xF8FBCC25 b323
	// Sets the draw order for script draw commands.
	// 
	// Examples from decompiled scripts:
	// GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	// GRAPHICS::DRAW_RECT(0.5, 0.5, 3.0, 3.0, v_4, v_5, v_6, a_0._f172, 0);
	// 
	// GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	// GRAPHICS::DRAW_RECT(0.5, 0.5, 1.5, 1.5, 0, 0, 0, 255, 0);
	inline void SET_SCRIPT_GFX_DRAW_ORDER(int drawOrder) { _i<Void>(0x61BB1D9B3A95D802, drawOrder); } // 0x61BB1D9B3A95D802 0xADF81D24 b323
	// horizontalAlign: The horizontal alignment. This can be 67 ('C'), 76 ('L'), or 82 ('R').
	// verticalAlign: The vertical alignment. This can be 67 ('C'), 66 ('B'), or 84 ('T').
	// 
	// This function anchors script draws to a side of the safe zone. This needs to be called to make the interface independent of the player's safe zone configuration.
	// 
	// These values are equivalent to alignX and alignY in common:/data/ui/frontend.xml, which can be used as a baseline for default alignment.
	// 
	// Using any other value (including 0) will result in the safe zone not being taken into account for this draw. The canonical value for this is 'I' (73).
	// 
	// For example, you can use SET_SCRIPT_GFX_ALIGN(0, 84) to only scale on the Y axis (to the top), but not change the X axis.
	// 
	// To reset the value, use RESET_SCRIPT_GFX_ALIGN.
	inline void SET_SCRIPT_GFX_ALIGN(int horizontalAlign, int verticalAlign) { _i<Void>(0xB8A850F20A067EB6, horizontalAlign, verticalAlign); } // 0xB8A850F20A067EB6 0x228A2598 b323
	// This function resets the alignment set using SET_SCRIPT_GFX_ALIGN and SET_SCRIPT_GFX_ALIGN_PARAMS to the default values ('I', 'I'; 0, 0, 0, 0).
	// This should be used after having used the aforementioned functions in order to not affect any other scripts attempting to draw.
	inline void RESET_SCRIPT_GFX_ALIGN() { _i<Void>(0xE3A3DB414A373DAB); } // 0xE3A3DB414A373DAB 0x3FE33BD6 b323
	// Sets the draw offset/calculated size for SET_SCRIPT_GFX_ALIGN. If using any alignment other than left/top, the game expects the width/height to be configured using this native in order to get a proper starting position for the draw command.
	inline void SET_SCRIPT_GFX_ALIGN_PARAMS(float x, float y, float w, float h) { _i<Void>(0xF5A2C681787E579D, x, y, w, h); } // 0xF5A2C681787E579D 0x76C641E4 b323
	// Calculates the effective X/Y fractions when applying the values set by SET_SCRIPT_GFX_ALIGN and SET_SCRIPT_GFX_ALIGN_PARAMS
	inline void GET_SCRIPT_GFX_ALIGN_POSITION(float x, float y, float* calculatedX, float* calculatedY) { _i<Void>(0x6DD8F5AA635EB4B2, x, y, calculatedX, calculatedY); } // 0x6DD8F5AA635EB4B2 b323
	// Gets the scale of safe zone. if the safe zone size scale is max, it will return 1.0.
	inline float GET_SAFE_ZONE_SIZE() { return _i<float>(0xBAF107B6BB2C97F0); } // 0xBAF107B6BB2C97F0 0x3F0D1A6F b323
	// Draws a 2D sprite on the screen.
	// 
	// Parameters:
	// textureDict - Name of texture dictionary to load texture from (e.g. "CommonMenu", "MPWeaponsCommon", etc.)
	// 
	// textureName - Name of texture to load from texture dictionary (e.g. "last_team_standing_icon", "tennis_icon", etc.)
	// 
	// screenX/Y - Screen offset (0.5 = center)
	// scaleX/Y - Texture scaling. Negative values can be used to flip the texture on that axis. (0.5 = half)
	// 
	// heading - Texture rotation in degrees (default = 0.0) positive is clockwise, measured in degrees
	// 
	// red,green,blue - Sprite color (default = 255/255/255)
	// 
	// alpha - opacity level
	inline void DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, BOOL p11, Any p12) { _i<Void>(0xE7FFAE5EBF23D890, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11, p12); } // 0xE7FFAE5EBF23D890 0x1FEC16B0 b323
	// Used in arcade games and Beam hack minigame in Doomsday Heist. I will most certainly dive into this to try replicate arcade games.
	// x position must be between 0.0 and 1.0 (1.0 being the most right side of the screen)
	// y position must be between 0.0 and 1.0 (1.0 being the most bottom side of the screen)
	// width 0.0 - 1.0 is the reasonable amount generally
	// height 0.0 - 1.0 is the reasonable amount generally
	// p6 almost always 0.0
	// p11 seems to be unknown but almost always 0 int
	inline void DRAW_SPRITE_ARX(const char* textureDict, const char* textureName, float x, float y, float width, float height, float p6, int red, int green, int blue, int alpha, Any p11, Any p12) { _i<Void>(0x2D3B147AFAD49DE0, textureDict, textureName, x, y, width, height, p6, red, green, blue, alpha, p11, p12); } // 0x2D3B147AFAD49DE0 b1290
	// Similar to _DRAW_SPRITE, but seems to be some kind of "interactive" sprite, at least used by render targets.
	// These seem to be the only dicts ever requested by this native:
	// 
	// prop_screen_biker_laptop
	// Prop_Screen_GR_Disruption
	// Prop_Screen_TaleOfUs
	// prop_screen_nightclub
	// Prop_Screen_IE_Adhawk
	// prop_screen_sm_free_trade_shipping
	// prop_screen_hacker_truck
	// MPDesktop
	// Prop_Screen_Nightclub
	// And a few others
	// 
	inline void DRAW_SPRITE_NAMED_RENDERTARGET(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, Any p11) { _i<Void>(0x2BC54A8188768488, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11); } // 0x2BC54A8188768488 b877
	// Similar to DRAW_SPRITE, but allows to specify the texture coordinates used to draw the sprite.
	// 
	// u1, v1 - texture coordinates for the top-left corner
	// u2, v2 - texture coordinates for the bottom-right corner
	inline void DRAW_SPRITE_ARX_WITH_UV(const char* textureDict, const char* textureName, float x, float y, float width, float height, float u1, float v1, float u2, float v2, float heading, int red, int green, int blue, int alpha, Any p15) { _i<Void>(0x95812F9B26074726, textureDict, textureName, x, y, width, height, u1, v1, u2, v2, heading, red, green, blue, alpha, p15); } // 0x95812F9B26074726 b1868
	// Example:
	// GRAPHICS::ADD_ENTITY_ICON(a_0, "MP_Arrow");
	// 
	// I tried this and nothing happened...
	inline int ADD_ENTITY_ICON(Entity entity, const char* icon) { return _i<int>(0x9CD43EEE12BF4DD0, entity, icon); } // 0x9CD43EEE12BF4DD0 0xF3027D21 b323
	inline void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { _i<Void>(0xE0E8BEECCA96BA31, entity, toggle); } // 0xE0E8BEECCA96BA31 0xD1D2FD52 b323
	inline void SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) { _i<Void>(0x1D5F595CCAE2E238, entity, red, green, blue, alpha); } // 0x1D5F595CCAE2E238 0x6EE1E946 b323
	// Sets the on-screen drawing origin for draw-functions (which is normally x=0,y=0 in the upper left corner of the screen) to a world coordinate.
	// From now on, the screen coordinate which displays the given world coordinate on the screen is seen as x=0,y=0.
	// 
	// Example in C#:
	// Vector3 boneCoord = somePed.GetBoneCoord(Bone.SKEL_Head);
	// Function.Call(Hash.SET_DRAW_ORIGIN, boneCoord.X, boneCoord.Y, boneCoord.Z, 0);
	// Function.Call(Hash.DRAW_SPRITE, "helicopterhud", "hud_corner", -0.01, -0.015, 0.013, 0.013, 0.0, 255, 0, 0, 200);
	// Function.Call(Hash.DRAW_SPRITE, "helicopterhud", "hud_corner", 0.01, -0.015, 0.013, 0.013, 90.0, 255, 0, 0, 200);
	// Function.Call(Hash.DRAW_SPRITE, "helicopterhud", "hud_corner", -0.01, 0.015, 0.013, 0.013, 270.0, 255, 0, 0, 200);
	// Function.Call(Hash.DRAW_SPRITE, "helicopterhud", "hud_corner", 0.01, 0.015, 0.013, 0.013, 180.0, 255, 0, 0, 200);
	// Function.Call(Hash.CLEAR_DRAW_ORIGIN);
	// 
	// Result: www11.pic-upload.de/19.06.15/bkqohvil2uao.jpg
	// If the pedestrian starts walking around now, the sprites are always around her head, no matter where the head is displayed on the screen.
	// 
	// This function also effects the drawing of texts and other UI-elements.
	// The effect can be reset by calling GRAPHICS::CLEAR_DRAW_ORIGIN().
	inline void SET_DRAW_ORIGIN(float x, float y, float z, BOOL p3) { _i<Void>(0xAA0008F3BBB8F416, x, y, z, p3); } // 0xAA0008F3BBB8F416 0xE10198D5 b323
	// Resets the screen's draw-origin which was changed by the function GRAPHICS::SET_DRAW_ORIGIN(...) back to x=0,y=0.
	// 
	// See GRAPHICS::SET_DRAW_ORIGIN(...) for further information.
	inline void CLEAR_DRAW_ORIGIN() { _i<Void>(0xFF0B610F6BE0D7AF); } // 0xFF0B610F6BE0D7AF 0xDD76B263 b323
	inline int SET_BINK_MOVIE(const char* name) { return _i<int>(0x338D9F609FD632DB, name); } // 0x338D9F609FD632DB b1290
	inline void PLAY_BINK_MOVIE(int binkMovie) { _i<Void>(0x70D2CC8A542A973C, binkMovie); } // 0x70D2CC8A542A973C b1290
	inline void STOP_BINK_MOVIE(int binkMovie) { _i<Void>(0x63606A61DE68898A, binkMovie); } // 0x63606A61DE68898A b1290
	inline void RELEASE_BINK_MOVIE(int binkMovie) { _i<Void>(0x04D950EEFA4EED8C, binkMovie); } // 0x04D950EEFA4EED8C b1290
	inline void DRAW_BINK_MOVIE(int binkMovie, float p1, float p2, float p3, float p4, float p5, int r, int g, int b, int a) { _i<Void>(0x7118E83EEB9F7238, binkMovie, p1, p2, p3, p4, p5, r, g, b, a); } // 0x7118E83EEB9F7238 b1290
	// In percentage: 0.0 - 100.0
	inline void SET_BINK_MOVIE_TIME(int binkMovie, float progress) { _i<Void>(0x0CB6B3446855B57A, binkMovie, progress); } // 0x0CB6B3446855B57A b1290
	// In percentage: 0.0 - 100.0
	inline float GET_BINK_MOVIE_TIME(int binkMovie) { return _i<float>(0x8E17DDD6B9D5BF29, binkMovie); } // 0x8E17DDD6B9D5BF29 b1734
	// binkMovie: Is return value from _SET_BINK_MOVIE. Has something to do with bink volume? (audRequestedSettings::SetVolumeCurveScale)
	inline void SET_BINK_MOVIE_VOLUME(int binkMovie, float value) { _i<Void>(0xAFF33B1178172223, binkMovie, value); } // 0xAFF33B1178172223 b1290
	// Might be more appropriate in AUDIO?
	inline void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { _i<Void>(0x845BAD77CC770633, entity); } // 0x845BAD77CC770633 0x784944DB b323
	inline void SET_BINK_MOVIE_AUDIO_FRONTEND(int binkMovie, BOOL p1) { _i<Void>(0xF816F2933752322D, binkMovie, p1); } // 0xF816F2933752322D b1868
	// Probably changes tvs from being a 3d audio to being "global" audio
	inline void SET_TV_AUDIO_FRONTEND(BOOL toggle) { _i<Void>(0x113D2C5DC57E1774, toggle); } // 0x113D2C5DC57E1774 0x2E0DFA35 b323
	inline void SET_BINK_SHOULD_SKIP(int binkMovie, BOOL bShouldSkip) { _i<Void>(0x6805D58CAA427B72, binkMovie, bShouldSkip); } // 0x6805D58CAA427B72 b1290
	inline int LOAD_MOVIE_MESH_SET(const char* movieMeshSetName) { return _i<int>(0xB66064452270E8F1, movieMeshSetName); } // 0xB66064452270E8F1 0x9627905C b323
	inline void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { _i<Void>(0xEB119AA014E89183, movieMeshSet); } // 0xEB119AA014E89183 0x4FA5501D b323
	inline int QUERY_MOVIE_MESH_SET_STATE(Any p0) { return _i<int>(0x9B6E70C5CEEF4EEB, p0); } // 0x9B6E70C5CEEF4EEB 0x9D5D9B38 b323
	// int screenresx,screenresy;
	// GET_SCREEN_RESOLUTION(&screenresx,&screenresy);
	inline void GET_SCREEN_RESOLUTION(int* x, int* y) { _i<Void>(0x888D57E407E63624, x, y); } // 0x888D57E407E63624 0x29F3572F b323
	// Returns current screen resolution.
	inline void GET_ACTUAL_SCREEN_RESOLUTION(int* x, int* y) { _i<Void>(0x873C9F3104101DD3, x, y); } // 0x873C9F3104101DD3 b323
	inline float GET_ASPECT_RATIO(BOOL b) { return _i<float>(0xF1307EF624A80D87, b); } // 0xF1307EF624A80D87 b323
	inline float GET_SCREEN_ASPECT_RATIO() { return _i<float>(0xB2EBE8CBC58B90E9); } // 0xB2EBE8CBC58B90E9 b323
	// Setting Aspect Ratio Manually in game will return:
	// 
	// false - for Narrow format Aspect Ratios (3:2, 4:3, 5:4, etc. )
	// true - for Wide format Aspect Ratios (5:3, 16:9, 16:10, etc. )
	// 
	// Setting Aspect Ratio to "Auto" in game will return "false" or "true" based on the actual set Resolution Ratio.
	inline BOOL GET_IS_WIDESCREEN() { return _i<BOOL>(0x30CF4BDA4FCB1905); } // 0x30CF4BDA4FCB1905 0xEC717AEF b323
	// false = Any resolution < 1280x720
	// true = Any resolution >= 1280x720
	inline BOOL GET_IS_HIDEF() { return _i<BOOL>(0x84ED31191CC5D2C9); } // 0x84ED31191CC5D2C9 0x1C340359 b323
	inline void ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9() { _i<Void>(0xEFABC7722293DA7C); } // 0xEFABC7722293DA7C b323
	// Enables Night Vision.
	// 
	// Example:
	// C#: Function.Call(Hash.SET_NIGHTVISION, true);
	// C++: GRAPHICS::SET_NIGHTVISION(true);
	// 
	// BOOL toggle:
	// true = turns night vision on for your player.
	// false = turns night vision off for your player.
	inline void SET_NIGHTVISION(BOOL toggle) { _i<Void>(0x18F621F7A5B1F85D, toggle); } // 0x18F621F7A5B1F85D 0xD1E5565F b323
	inline BOOL GET_REQUESTINGNIGHTVISION() { return _i<BOOL>(0x35FB78DC42B7BD21); } // 0x35FB78DC42B7BD21 0xF3A6309E b323
	inline BOOL GET_USINGNIGHTVISION() { return _i<BOOL>(0x2202A3F42C8E5F79); } // 0x2202A3F42C8E5F79 0x62619061 b323
	inline void SET_EXPOSURETWEAK(BOOL toggle) { _i<Void>(0xEF398BEEE4EF45F9, toggle); } // 0xEF398BEEE4EF45F9 b323
	inline void FORCE_EXPOSURE_READBACK(BOOL toggle) { _i<Void>(0x814AF7DCAACC597B, toggle); } // 0x814AF7DCAACC597B b372
	inline void OVERRIDE_NIGHTVISION_LIGHT_RANGE(float p0) { _i<Void>(0x43FA7CBE20DAB219, p0); } // 0x43FA7CBE20DAB219 b1290
	inline void SET_NOISEOVERIDE(BOOL toggle) { _i<Void>(0xE787BF1C5CF823C9, toggle); } // 0xE787BF1C5CF823C9 0xD576F5DD b323
	inline void SET_NOISINESSOVERIDE(float value) { _i<Void>(0xCB6A7C3BB17A0C67, value); } // 0xCB6A7C3BB17A0C67 0x046B62D9 b323
	// Convert a world coordinate into its relative screen coordinate.  (WorldToScreen)
	// 
	// Returns a boolean; whether or not the operation was successful. It will return false if the coordinates given are not visible to the rendering camera.
	// 
	// 
	// For .NET users...
	// 
	// VB:
	// Public Shared Function World3DToScreen2d(pos as vector3) As Vector2
	// 
	//         Dim x2dp, y2dp As New Native.OutputArgument
	// 
	//         Native.Function.Call(Of Boolean)(Native.Hash.GET_SCREEN_COORD_FROM_WORLD_COORD , pos.x, pos.y, pos.z, x2dp, y2dp)
	//         Return New Vector2(x2dp.GetResult(Of Single), y2dp.GetResult(Of Single))
	//       
	//     End Function
	// 
	// C#:
	// Vector2 World3DToScreen2d(Vector3 pos)
	//     {
	//         var x2dp = new OutputArgument();
	//         var y2dp = new OutputArgument();
	// 
	//         Function.Call<bool>(Hash.GET_SCREEN_COORD_FROM_WORLD_COORD , pos.X, pos.Y, pos.Z, x2dp, y2dp);
	//         return new Vector2(x2dp.GetResult<float>(), y2dp.GetResult<float>());
	//     }
	// //USE VERY SMALL VALUES FOR THE SCALE OF RECTS/TEXT because it is dramatically larger on screen than in 3D, e.g '0.05' small.
	// 
	// Used to be called _WORLD3D_TO_SCREEN2D
	// 
	// I thought we lost you from the scene forever. It does seem however that calling SET_DRAW_ORIGIN then your natives, then ending it. Seems to work better for certain things such as keeping boxes around people for a predator missile e.g.
	inline BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return _i<BOOL>(0x34E82F05DF2974F5, worldX, worldY, worldZ, screenX, screenY); } // 0x34E82F05DF2974F5 0x1F950E4B b323
	// Returns the texture resolution of the passed texture dict+name.
	// 
	// Note: Most texture resolutions are doubled compared to the console version of the game.
	inline Vector3 GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) { return _i<Vector3>(0x35736EE65BD00C11, textureDict, textureName); } // 0x35736EE65BD00C11 0x096DAA4D b323
	// Overriding ped badge texture to a passed texture. It's synced between players (even custom textures!), don't forget to request used dict on *all* clients to make it sync properly. Can be removed by passing empty strings.
	inline BOOL OVERRIDE_PED_CREW_LOGO_TEXTURE(Ped ped, const char* txd, const char* txn) { return _i<BOOL>(0x95EB5E34F821BABE, ped, txd, txn); } // 0x95EB5E34F821BABE b877
	inline void SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(float p0) { _i<Void>(0xE2892E7E55D7073A, p0); } // 0xE2892E7E55D7073A 0x455F1084 b323
	// Purpose of p0 and p1 unknown.
	inline void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { _i<Void>(0x0AB84296FED9CFC6, p0, p1, fadeIn, duration, fadeOut); } // 0x0AB84296FED9CFC6 0x7E55A1EE b323
	inline void DISABLE_OCCLUSION_THIS_FRAME() { _i<Void>(0x3669F1B198DCAA4F); } // 0x3669F1B198DCAA4F 0x0DCC0B8B b323
	// Does not affect weapons, particles, fire/explosions, flashlights or the sun.
	// When set to true, all emissive textures (including ped components that have light effects), street lights, building lights, vehicle lights, etc will all be turned off.
	// 
	// Used in Humane Labs Heist for EMP.
	// 
	// state: True turns off all artificial light sources in the map: buildings, street lights, car lights, etc. False turns them back on.
	inline void SET_ARTIFICIAL_LIGHTS_STATE(BOOL state) { _i<Void>(0x1268615ACE24D504, state); } // 0x1268615ACE24D504 0xAA2A0EAF b323
	// If "blackout" is enabled, this native allows you to ignore "blackout" for vehicles.
	inline void SET_ARTIFICIAL_VEHICLE_LIGHTS_STATE(BOOL toggle) { _i<Void>(0xE2B187C0939B3D32, toggle); } // 0xE2B187C0939B3D32 b2060
	inline void DISABLE_HDTEX_THIS_FRAME() { _i<Void>(0xC35A6D07C93802B2); } // 0xC35A6D07C93802B2 b323
	// Creates a tracked point, useful for checking the visibility of a 3D point on screen.
	inline int CREATE_TRACKED_POINT() { return _i<int>(0xE2C9439ED45DEA60); } // 0xE2C9439ED45DEA60 0x3129C31A b323
	inline void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { _i<Void>(0x164ECBB3CF750CB0, point, x, y, z, radius); } // 0x164ECBB3CF750CB0 0x28689AA4 b323
	inline BOOL IS_TRACKED_POINT_VISIBLE(int point) { return _i<BOOL>(0xC45CCDAAC9221CA8, point); } // 0xC45CCDAAC9221CA8 0x0BFC4F64 b323
	inline void DESTROY_TRACKED_POINT(int point) { _i<Void>(0xB25DC90BAD56CA42, point); } // 0xB25DC90BAD56CA42 0x14AC675F b323
	// This function is hard-coded to always return 0.
	inline int SET_GRASS_CULL_SPHERE(float p0, float p1, float p2, float p3) { return _i<int>(0xBE197EAA669238F4, p0, p1, p2, p3); } // 0xBE197EAA669238F4 b323
	// This native does absolutely nothing, just a nullsub
	inline void REMOVE_GRASS_CULL_SPHERE(int handle) { _i<Void>(0x61F95E5BB3E0A8C6, handle); } // 0x61F95E5BB3E0A8C6 b323
	inline void PROCGRASS_ENABLE_CULLSPHERE(int handle, float x, float y, float z, float scale) { _i<Void>(0xAE51BC858F32BA66, handle, x, y, z, scale); } // 0xAE51BC858F32BA66 b323
	inline void PROCGRASS_DISABLE_CULLSPHERE(int handle) { _i<Void>(0x649C97D52332341A, handle); } // 0x649C97D52332341A b323
	inline BOOL PROCGRASS_IS_CULLSPHERE_ENABLED(int handle) { return _i<BOOL>(0x2C42340F916C5930, handle); } // 0x2C42340F916C5930 b323
	inline void PROCGRASS_ENABLE_AMBSCALESCAN() { _i<Void>(0x14FC5833464340A8); } // 0x14FC5833464340A8 b323
	inline void PROCGRASS_DISABLE_AMBSCALESCAN() { _i<Void>(0x0218BA067D249DEA); } // 0x0218BA067D249DEA b323
	inline void DISABLE_PROCOBJ_CREATION() { _i<Void>(0x1612C45F9E3E0D44); } // 0x1612C45F9E3E0D44 b323
	inline void ENABLE_PROCOBJ_CREATION() { _i<Void>(0x5DEBD9C4DC995692); } // 0x5DEBD9C4DC995692 b323
	inline void GRASSBATCH_ENABLE_FLATTENING_EXT_IN_SPHERE(float x, float y, float z, Any p3, float p4, float p5, float p6, float scale) { _i<Void>(0xAAE9BE70EC7C69AB, x, y, z, p3, p4, p5, p6, scale); } // 0xAAE9BE70EC7C69AB b1290
	// Wraps 0xAAE9BE70EC7C69AB with FLT_MAX as p7, Jenkins: 0x73E96210?
	inline void GRASSBATCH_ENABLE_FLATTENING_IN_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6) { _i<Void>(0x6D955F6A9E0295B1, x, y, z, radius, p4, p5, p6); } // 0x6D955F6A9E0295B1 b323
	inline void GRASSBATCH_DISABLE_FLATTENING() { _i<Void>(0x302C91AB2D477F7E); } // 0x302C91AB2D477F7E b323
	inline void CASCADE_SHADOWS_INIT_SESSION() { _i<Void>(0x03FC694AE06C5A20); } // 0x03FC694AE06C5A20 0x48F16186 b323
	inline void CASCADE_SHADOWS_SET_CASCADE_BOUNDS(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { _i<Void>(0xD2936CAB8B58FCBD, p0, p1, p2, p3, p4, p5, p6, p7); } // 0xD2936CAB8B58FCBD 0x84F05943 b323
	inline void CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(float p0) { _i<Void>(0x5F0F3F56635809EF, p0); } // 0x5F0F3F56635809EF 0x13D4ABC0 b323
	inline void CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(float p0) { _i<Void>(0x5E9DAF5A20F15908, p0); } // 0x5E9DAF5A20F15908 0xD2157428 b323
	inline void CASCADE_SHADOWS_SET_SPLIT_Z_EXP_WEIGHT(float p0) { _i<Void>(0x36F6626459D91457, p0); } // 0x36F6626459D91457 0xC07C64C9 b323
	inline void CASCADE_SHADOWS_SET_BOUND_POSITION(Any p0) { _i<Void>(0x259BA6D4E6F808F1, p0); } // 0x259BA6D4E6F808F1 b1011
	// When this is set to ON, shadows only draw as you get nearer.
	// 
	// When OFF, they draw from a further distance.
	inline void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(BOOL toggle) { _i<Void>(0x80ECBC0C856D3B0B, toggle); } // 0x80ECBC0C856D3B0B 0xFE903D0F b323
	inline void CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(BOOL p0) { _i<Void>(0x25FC3E33A31AD0C9, p0); } // 0x25FC3E33A31AD0C9 b323
	// Possible values:
	// "CSM_ST_POINT"
	// "CSM_ST_LINEAR"
	// "CSM_ST_TWOTAP"
	// "CSM_ST_BOX3x3"
	// "CSM_ST_BOX4x4"
	// "CSM_ST_DITHER2_LINEAR"
	// "CSM_ST_CUBIC"
	// "CSM_ST_DITHER4"
	// "CSM_ST_DITHER16"
	// "CSM_ST_SOFT16"
	// "CSM_ST_DITHER16_RPDB"
	// "CSM_ST_POISSON16_RPDB_GNORM"
	// "CSM_ST_HIGHRES_BOX4x4"
	// "CSM_ST_CLOUDS_SIMPLE"
	// "CSM_ST_CLOUDS_LINEAR"
	// "CSM_ST_CLOUDS_TWOTAP"
	// "CSM_ST_CLOUDS_BOX3x3"
	// "CSM_ST_CLOUDS_BOX4x4"
	// "CSM_ST_CLOUDS_DITHER2_LINEAR"
	// "CSM_ST_CLOUDS_SOFT16"
	// "CSM_ST_CLOUDS_DITHER16_RPDB"
	// "CSM_ST_CLOUDS_POISSON16_RPDB_GNORM"
	inline void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(const char* type) { _i<Void>(0xB11D94BC55F41932, type); } // 0xB11D94BC55F41932 0xDE10BA1F b323
	inline void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE() { _i<Void>(0x27CB772218215325); } // 0x27CB772218215325 b323
	inline void CASCADE_SHADOWS_SET_AIRCRAFT_MODE(BOOL p0) { _i<Void>(0x6DDBF9DFFC4AC080, p0); } // 0x6DDBF9DFFC4AC080 0x9F470BE3 b323
	inline void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(BOOL p0) { _i<Void>(0xD39D13C9FEBF0511, p0); } // 0xD39D13C9FEBF0511 0x4A124267 b323
	inline void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(float p0) { _i<Void>(0x02AC28F3A01FA04A, p0); } // 0x02AC28F3A01FA04A 0xB19B2764 b323
	inline void CASCADE_SHADOWS_ENABLE_FREEZER(BOOL p0) { _i<Void>(0x0AE73D8DF3A762B2, p0); } // 0x0AE73D8DF3A762B2 0x342FA2B4 b323
	inline void WATER_REFLECTION_SET_SCRIPT_OBJECT_VISIBILITY(Any p0) { _i<Void>(0xCA465D9CC0D231BA, p0); } // 0xCA465D9CC0D231BA b1011
	inline void GOLF_TRAIL_SET_ENABLED(BOOL toggle) { _i<Void>(0xA51C4B86B71652AE, toggle); } // 0xA51C4B86B71652AE 0x5D3BFFC9 b323
	// p8 seems to always be false.
	inline void GOLF_TRAIL_SET_PATH(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { _i<Void>(0x312342E1A4874F3F, p0, p1, p2, p3, p4, p5, p6, p7, p8); } // 0x312342E1A4874F3F 0xD9653728 b323
	inline void GOLF_TRAIL_SET_RADIUS(float p0, float p1, float p2) { _i<Void>(0x2485D34E50A22E84, p0, p1, p2); } // 0x2485D34E50A22E84 0x72BA8A14 b323
	inline void GOLF_TRAIL_SET_COLOUR(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { _i<Void>(0x12995F2E53FFA601, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); } // 0x12995F2E53FFA601 0x804F444C b323
	inline void GOLF_TRAIL_SET_TESSELLATION(int p0, int p1) { _i<Void>(0xDBAA5EC848BA2D46, p0, p1); } // 0xDBAA5EC848BA2D46 0xBB1A1294 b323
	inline void GOLF_TRAIL_SET_FIXED_CONTROL_POINT_ENABLE(BOOL p0) { _i<Void>(0xC0416B061F2B7E5E, p0); } // 0xC0416B061F2B7E5E 0x1A1A72EF b323
	// 12 matches across 4 scripts. All 4 scripts were job creators.
	// 
	// type ranged from 0 - 2.
	// p4 was always 0.2f. Likely scale.
	// assuming p5 - p8 is RGBA, the graphic is always yellow (255, 255, 0, 255).
	// 
	// Tested but noticed nothing.
	inline void GOLF_TRAIL_SET_FIXED_CONTROL_POINT(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) { _i<Void>(0xB1BB03742917A5D6, type, xPos, yPos, zPos, p4, red, green, blue, alpha); } // 0xB1BB03742917A5D6 0x3BB12B75 b323
	// Only appeared in Golf & Golf_mp. Parameters were all ptrs
	inline void GOLF_TRAIL_SET_SHADER_PARAMS(float p0, float p1, float p2, float p3, float p4) { _i<Void>(0x9CFDD90B2B844BF7, p0, p1, p2, p3, p4); } // 0x9CFDD90B2B844BF7 0x4EA70FB4 b323
	inline void GOLF_TRAIL_SET_FACING(BOOL p0) { _i<Void>(0x06F761EA47C1D3ED, p0); } // 0x06F761EA47C1D3ED 0x0D830DC7 b323
	inline float GOLF_TRAIL_GET_MAX_HEIGHT() { return _i<float>(0xA4819F5E23E2FFAD); } // 0xA4819F5E23E2FFAD 0xA08B46AD b323
	inline Vector3 GOLF_TRAIL_GET_VISUAL_CONTROL_POINT(int p0) { return _i<Vector3>(0xA4664972A9B8F8BA, p0); } // 0xA4664972A9B8F8BA 0xECD470F0 b323
	// Toggles Heatvision on/off.
	inline void SET_SEETHROUGH(BOOL toggle) { _i<Void>(0x7E08924259E08CE0, toggle); } // 0x7E08924259E08CE0 0x74D4995C b323
	inline BOOL GET_USINGSEETHROUGH() { return _i<BOOL>(0x44B80ABAB9D80BD3); } // 0x44B80ABAB9D80BD3 0x1FE547F2 b323
	inline void SEETHROUGH_RESET() { _i<Void>(0x70A64C0234EF522C); } // 0x70A64C0234EF522C 0x310E9B67 b323
	inline void SEETHROUGH_SET_FADE_STARTDISTANCE(float distance) { _i<Void>(0xA78DE25577300BA1, distance); } // 0xA78DE25577300BA1 b573
	inline void SEETHROUGH_SET_FADE_ENDDISTANCE(float distance) { _i<Void>(0x9D75795B9DC6EBBF, distance); } // 0x9D75795B9DC6EBBF b573
	inline float SEETHROUGH_GET_MAX_THICKNESS() { return _i<float>(0x43DBAE39626CE83F); } // 0x43DBAE39626CE83F b1290
	// 0.0 = you will not be able to see people behind the walls. 50.0 and more = you will see everyone through the walls. More value is "better" view. See https://gfycat.com/FirmFlippantGourami
	// min: 1.0
	// max: 10000.0
	inline void SEETHROUGH_SET_MAX_THICKNESS(float thickness) { _i<Void>(0x0C8FAC83902A62DF, thickness); } // 0x0C8FAC83902A62DF b573
	inline void SEETHROUGH_SET_NOISE_MIN(float amount) { _i<Void>(0xFF5992E1C9E65D05, amount); } // 0xFF5992E1C9E65D05 b573
	inline void SEETHROUGH_SET_NOISE_MAX(float amount) { _i<Void>(0xFEBFBFDFB66039DE, amount); } // 0xFEBFBFDFB66039DE b573
	inline void SEETHROUGH_SET_HILIGHT_INTENSITY(float intensity) { _i<Void>(0x19E50EB6E33E1D28, intensity); } // 0x19E50EB6E33E1D28 b573
	inline void SEETHROUGH_SET_HIGHLIGHT_NOISE(float noise) { _i<Void>(0x1636D7FC127B10D2, noise); } // 0x1636D7FC127B10D2 b573
	// min: 0.0
	// max: 0.75
	inline void SEETHROUGH_SET_HEATSCALE(int index, float heatScale) { _i<Void>(0xD7D0B00177485411, index, heatScale); } // 0xD7D0B00177485411 0x654F0287 b323
	inline void SEETHROUGH_SET_COLOR_NEAR(int red, int green, int blue) { _i<Void>(0x1086127B3A63505E, red, green, blue); } // 0x1086127B3A63505E 0x5B2A67A8 b573
	// Setter for GET_MOTIONBLUR_MAX_VEL_SCALER
	inline void SET_MOTIONBLUR_MAX_VEL_SCALER(float p0) { _i<Void>(0xB3C641F3630BF6DA, p0); } // 0xB3C641F3630BF6DA 0xF6B837F0 b323
	// Getter for SET_MOTIONBLUR_MAX_VEL_SCALER
	inline float GET_MOTIONBLUR_MAX_VEL_SCALER() { return _i<float>(0xE59343E9E96529E7); } // 0xE59343E9E96529E7 0xD906A3A9 b323
	inline void SET_FORCE_MOTIONBLUR(BOOL toggle) { _i<Void>(0x6A51F78772175A51, toggle); } // 0x6A51F78772175A51 b1011
	inline void TOGGLE_PLAYER_DAMAGE_OVERLAY(BOOL toggle) { _i<Void>(0xE63D7C6EECECB66B, toggle); } // 0xE63D7C6EECECB66B 0xD34A6CBA b323
	// Sets an value related to timecycles.
	inline void RESET_ADAPTATION(int p0) { _i<Void>(0xE3E2C1B4C59DBC77, p0); } // 0xE3E2C1B4C59DBC77 0xD8CC7221 b323
	// time in ms to transition to fully blurred screen
	inline BOOL TRIGGER_SCREENBLUR_FADE_IN(float transitionTime) { return _i<BOOL>(0xA328A24AAA6B7FDC, transitionTime); } // 0xA328A24AAA6B7FDC 0x5604B890 b323
	// time in ms to transition from fully blurred to normal
	inline BOOL TRIGGER_SCREENBLUR_FADE_OUT(float transitionTime) { return _i<BOOL>(0xEFACC8AEF94430D5, transitionTime); } // 0xEFACC8AEF94430D5 0x46617502 b323
	inline void DISABLE_SCREENBLUR_FADE() { _i<Void>(0xDE81239437E8C5A8); } // 0xDE81239437E8C5A8 0xDB7AECDA b323
	inline float GET_SCREENBLUR_FADE_CURRENT_TIME() { return _i<float>(0x5CCABFFCA31DDE33); } // 0x5CCABFFCA31DDE33 0xEA432A94 b323
	// Returns whether screen transition to blur/from blur is running.
	inline BOOL IS_SCREENBLUR_FADE_RUNNING() { return _i<BOOL>(0x7B226C785A52A0A9); } // 0x7B226C785A52A0A9 0x926B8734 b323
	inline void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { _i<Void>(0xDFC252D8A3E15AB7, toggle); } // 0xDFC252D8A3E15AB7 0x30ADE541 b323
	inline BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return _i<BOOL>(0xEB3DAC2C86001E5E); } // 0xEB3DAC2C86001E5E 0xD4F5D07D b323
	inline void RESET_PAUSED_RENDERPHASES() { _i<Void>(0xE1C8709406F2C41C); } // 0xE1C8709406F2C41C 0x0113EAE4 b323
	inline void GRAB_PAUSEMENU_OWNERSHIP() { _i<Void>(0x851CD923176EBA7C); } // 0x851CD923176EBA7C 0xDCBA251B b323
	inline void SET_HIDOF_OVERRIDE(BOOL p0, BOOL p1, float nearplaneOut, float nearplaneIn, float farplaneOut, float farplaneIn) { _i<Void>(0xBA3D65906822BED5, p0, p1, nearplaneOut, nearplaneIn, farplaneOut, farplaneIn); } // 0xBA3D65906822BED5 0x513D444B b323
	inline void SET_LOCK_ADAPTIVE_DOF_DISTANCE(BOOL p0) { _i<Void>(0xB569F41F3E7E83A4, p0); } // 0xB569F41F3E7E83A4 b1103
	inline BOOL PHONEPHOTOEDITOR_TOGGLE(BOOL p0) { return _i<BOOL>(0x7AC24EAB6D74118D, p0); } // 0x7AC24EAB6D74118D 0xB2410EAB b323
	inline BOOL PHONEPHOTOEDITOR_IS_ACTIVE() { return _i<BOOL>(0xBCEDB009461DA156); } // 0xBCEDB009461DA156 0x5AB94128 b323
	inline BOOL PHONEPHOTOEDITOR_SET_FRAME_TXD(const char* textureDict, BOOL p1) { return _i<BOOL>(0x27FEB5254759CDE3, textureDict, p1); } // 0x27FEB5254759CDE3 0xD63FCB3E b323
	// GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_paleto_roof_impact", -140.8576f, 6420.789f, 41.1391f, 0f, 0f, 267.3957f, 0x3F800000, 0, 0, 0);
	// 
	// Axis - Invert Axis Flags
	// 
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	// 
	// 
	// -------------------------------------------------------------------
	// C#
	// 
	// Function.Call<int>(Hash.START_PARTICLE_FX_NON_LOOPED_AT_COORD, = you are calling this function.
	// 
	// char *effectname = This is an in-game effect name, for e.g. "scr_fbi4_trucks_crash" is used to give the effects when truck crashes etc
	// 
	// float x, y, z pos = this one is Simple, you just have to declare, where do you want this effect to take place at, so declare the ordinates
	// 
	// float xrot, yrot, zrot = Again simple? just mention the value in case if you want the effect to rotate.
	// 
	// float scale = is declare the scale of the effect, this may vary as per the effects for e.g 1.0f
	// 
	// bool xaxis, yaxis, zaxis = To bool the axis values.
	// 
	// example:
	// Function.Call<int>(Hash.START_PARTICLE_FX_NON_LOOPED_AT_COORD, "scr_fbi4_trucks_crash", GTA.Game.Player.Character.Position.X, GTA.Game.Player.Character.Position.Y, GTA.Game.Player.Character.Position.Z + 4f, 0, 0, 0, 5.5f, 0, 0, 0);
	inline BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return _i<BOOL>(0x25129531F77B9ED3, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x25129531F77B9ED3 0xDD79D679 b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return _i<BOOL>(0xF56B8137DF10135D, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0xF56B8137DF10135D 0x633F8C48 b323
	// GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE("scr_sh_bong_smoke", PLAYER::PLAYER_PED_ID(), -0.025f, 0.13f, 0f, 0f, 0f, 0f, 31086, 0x3F800000, 0, 0, 0);
	// 
	// Axis - Invert Axis Flags
	// 
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return _i<BOOL>(0x0E7E72961BA18619, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x0E7E72961BA18619 0x53DAEF4E b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return _i<BOOL>(0xA41B6A43642AC2CF, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0xA41B6A43642AC2CF 0x161780C1 b323
	// Starts a particle effect on an entity for example your player.
	// 
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	// 
	// Example:
	// C#:
	// Function.Call(Hash.REQUEST_NAMED_PTFX_ASSET, "scr_rcbarry2");                     Function.Call(Hash.USE_PARTICLE_FX_ASSET, "scr_rcbarry2");                             Function.Call(Hash.START_PARTICLE_FX_NON_LOOPED_ON_ENTITY, "scr_clown_appears", Game.Player.Character, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 1.0, false, false, false);
	// 
	// Internally this calls the same function as GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE
	// however it uses -1 for the specified bone index, so it should be possible to start a non looped fx on an entity bone using that native
	// 
	// -can confirm START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE does NOT work on vehicle bones.
	inline BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return _i<BOOL>(0x0D53A3B8DA0809D2, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0x0D53A3B8DA0809D2 0x9604DAD4 b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return _i<BOOL>(0xC95EB1DB6E92113D, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); } // 0xC95EB1DB6E92113D 0x469A2B4A b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return _i<BOOL>(0x02B1F2A72E0F5325, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); } // 0x02B1F2A72E0F5325 b2189
	// only works on some fx's, not networked
	inline void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { _i<Void>(0x26143A59EF48B262, r, g, b); } // 0x26143A59EF48B262 0x7B689E20 b323
	// Usage example for C#:
	// 
	// Function.Call(Hash.SET_PARTICLE_FX_NON_LOOPED_ALPHA, new InputArgument[] { 0.1f });
	// 
	// Note: the argument alpha ranges from 0.0f-1.0f !
	inline void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { _i<Void>(0x77168D722C58B2FC, alpha); } // 0x77168D722C58B2FC 0x497EAFF2 b323
	inline void SET_PARTICLE_FX_NON_LOOPED_SCALE(float scale) { _i<Void>(0xB7EF5850C39FABCA, scale); } // 0xB7EF5850C39FABCA b2802
	inline void SET_PARTICLE_FX_NON_LOOPED_EMITTER_SIZE(float p0, float p1, float scale) { _i<Void>(0x1E2E01C00837D26E, p0, p1, scale); } // 0x1E2E01C00837D26E b2699
	// Used only once in the scripts (taxi_clowncar)
	inline void SET_PARTICLE_FX_FORCE_VEHICLE_INTERIOR(BOOL toggle) { _i<Void>(0x8CDE909A0370BB3A, toggle); } // 0x8CDE909A0370BB3A b323
	// GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_fbi_falling_debris", 93.7743f, -749.4572f, 70.86904f, 0f, 0f, 0f, 0x3F800000, 0, 0, 0, 0)
	// 
	// 
	// p11 seems to be always 0
	// 
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline int START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return _i<int>(0xE184F4F0DC5910E7, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); } // 0xE184F4F0DC5910E7 0xD348E3E6 b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return _i<int>(0xF28DA9F38CD1787C, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xF28DA9F38CD1787C 0xF8FC196F b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return _i<int>(0x1AE42C1660FD6517, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); } // 0x1AE42C1660FD6517 0x0D06FF62 b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return _i<int>(0xC6EB449E33977F0B, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); } // 0xC6EB449E33977F0B 0x23BF0F9B b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return _i<int>(0x6F60E89A7B64EE1D, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, r, g, b, a); } // 0x6F60E89A7B64EE1D 0x110752B2 b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return _i<int>(0xDDE23F30CC5A0F03, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis, r, g, b, a); } // 0xDDE23F30CC5A0F03 0xF478EFCF b323
	// p1 is always 0 in the native scripts
	inline void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { _i<Void>(0x8F75998877616996, ptfxHandle, p1); } // 0x8F75998877616996 0xD245455B b323
	inline void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { _i<Void>(0xC401503DFE8D53CF, ptfxHandle, p1); } // 0xC401503DFE8D53CF 0x6BA48C7E b323
	inline void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { _i<Void>(0xB8FEAEEBCC127425, entity); } // 0xB8FEAEEBCC127425 0xCEDE52E9 b323
	inline void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { _i<Void>(0xDD19FA1C6D657305, X, Y, Z, radius); } // 0xDD19FA1C6D657305 0x7EB8F275 b323
	inline void FORCE_PARTICLE_FX_IN_VEHICLE_INTERIOR(Any p0, Any p1) { _i<Void>(0xBA0127DA25FD54C9, p0, p1); } // 0xBA0127DA25FD54C9 b372
	inline BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return _i<BOOL>(0x74AFEF0D2E1E409B, ptfxHandle); } // 0x74AFEF0D2E1E409B 0xCBF91D2A b323
	inline void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { _i<Void>(0xF7DDEBEC43483C43, ptfxHandle, x, y, z, rotX, rotY, rotZ); } // 0xF7DDEBEC43483C43 0x641F7790 b323
	inline void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork) { _i<Void>(0x5F0C4B5B1C393BE2, ptfxHandle, propertyName, amount, noNetwork); } // 0x5F0C4B5B1C393BE2 0x1CBC1373 b323
	// only works on some fx's
	// 
	// p4 = 0
	inline void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { _i<Void>(0x7F8F65877F88783B, ptfxHandle, r, g, b, p4); } // 0x7F8F65877F88783B 0x5219D530 b323
	inline void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { _i<Void>(0x726845132380142E, ptfxHandle, alpha); } // 0x726845132380142E 0x5ED49BE1 b323
	inline void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { _i<Void>(0xB44250AAA456492D, ptfxHandle, scale); } // 0xB44250AAA456492D 0x099B8B49 b323
	inline void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float range) { _i<Void>(0xDCB194B85EF7B541, ptfxHandle, range); } // 0xDCB194B85EF7B541 0x233DE879 b323
	inline void _SET_PARTICLE_FX_LOOPED_CAMERA_BIAS(int ptfxHandle, float p1) { _i<Void>(0x4100BF0346A8D2C3, ptfxHandle, p1); } // 0x4100BF0346A8D2C3 b3095
	inline void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { _i<Void>(0xEEC4047028426510, p0); } // 0xEEC4047028426510 0x19EC0001 b323
	inline void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Vehicle vehicle, BOOL p1) { _i<Void>(0xACEE6F360FC1F6B6, vehicle, p1); } // 0xACEE6F360FC1F6B6 0x6B125A02 b323
	inline void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { _i<Void>(0x96EF97DAEB89BEF5, p0); } // 0x96EF97DAEB89BEF5 0xD938DEE0 b323
	inline void CLEAR_PARTICLE_FX_SHOOTOUT_BOAT() { _i<Void>(0x2A251AA48B2B46DB); } // 0x2A251AA48B2B46DB b323
	inline void SET_PARTICLE_FX_BLOOD_SCALE(Any p0) { _i<Void>(0x908311265D42A820, p0); } // 0x908311265D42A820 b323
	inline void DISABLE_IN_WATER_PTFX(BOOL toggle) { _i<Void>(0xCFD16F0DB5A3535C, toggle); } // 0xCFD16F0DB5A3535C b2060
	inline void DISABLE_DOWNWASH_PTFX(BOOL toggle) { _i<Void>(0x5F6DF3D92271E8A1, toggle); } // 0x5F6DF3D92271E8A1 b323
	inline void SET_PARTICLE_FX_SLIPSTREAM_LODRANGE_SCALE(float scale) { _i<Void>(0x2B40A97646381508, scale); } // 0x2B40A97646381508 b1011
	// Creates cartoon effect when Michel smokes the weed
	inline void ENABLE_CLOWN_BLOOD_VFX(BOOL toggle) { _i<Void>(0xD821490579791273, toggle); } // 0xD821490579791273 0xC61C75E9 b323
	// Creates a motion-blur sort of effect, this native does not seem to work, however by using the `START_SCREEN_EFFECT` native with `DrugsMichaelAliensFight` as the effect parameter, you should be able to get the effect.
	inline void ENABLE_ALIEN_BLOOD_VFX(BOOL toggle) { _i<Void>(0x9DCE1F0F78260875, toggle); } // 0x9DCE1F0F78260875 0xCE8B8748 b323
	inline void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { _i<Void>(0x27E32866E9A5C416, scale); } // 0x27E32866E9A5C416 0xC1AD5DDF b323
	inline void SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(float p0) { _i<Void>(0xBB90E12CAC1DAB25, p0); } // 0xBB90E12CAC1DAB25 0x3968E915 b323
	inline void SET_PARTICLE_FX_BULLET_TRACE_NO_ANGLE_REJECT(BOOL p0) { _i<Void>(0xCA4AE345A153D573, p0); } // 0xCA4AE345A153D573 0x64BA4648 b323
	inline void SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(float p0) { _i<Void>(0x54E22EA2C1956A8D, p0); } // 0x54E22EA2C1956A8D 0x8BE3D47F b323
	inline void SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(float p0) { _i<Void>(0x949F397A288B28B3, p0); } // 0x949F397A288B28B3 0xE3880F5A b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline void SET_PARTICLE_FX_FOOT_OVERRIDE_NAME(const char* p0) { _i<Void>(0xBA3D194057C79A7B, p0); } // 0xBA3D194057C79A7B b877
	inline void SET_SKIDMARK_RANGE_SCALE(float scale) { _i<Void>(0x5DBF05DB5926D089, scale); } // 0x5DBF05DB5926D089 b1011
	inline void SET_PTFX_FORCE_VEHICLE_INTERIOR_FLAG(Any p0) { _i<Void>(0xC6730E0D14E50703, p0); } // 0xC6730E0D14E50703 b2545
	inline void REGISTER_POSTFX_BULLET_IMPACT(float weaponWorldPosX, float weaponWorldPosY, float weaponWorldPosZ, float intensity) { _i<Void>(0x170911F37F646F29, weaponWorldPosX, weaponWorldPosY, weaponWorldPosZ, intensity); } // 0x170911F37F646F29 b2802
	inline void FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(BOOL p0) { _i<Void>(0x9B079E5221D984D3, p0); } // 0x9B079E5221D984D3 b323
	// From the b678d decompiled scripts:
	// 
	//  GRAPHICS::USE_PARTICLE_FX_ASSET("FM_Mission_Controler");
	//  GRAPHICS::USE_PARTICLE_FX_ASSET("scr_apartment_mp");
	//  GRAPHICS::USE_PARTICLE_FX_ASSET("scr_indep_fireworks");
	//  GRAPHICS::USE_PARTICLE_FX_ASSET("scr_mp_cig_plane");
	//  GRAPHICS::USE_PARTICLE_FX_ASSET("scr_mp_creator");
	//  GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ornate_heist");
	//  GRAPHICS::USE_PARTICLE_FX_ASSET("scr_prison_break_heist_station");
	// 
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline void USE_PARTICLE_FX_ASSET(const char* name) { _i<Void>(0x6C38AF3693A69A91, name); } // 0x6C38AF3693A69A91 0x9C720B61 b323
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline void SET_PARTICLE_FX_OVERRIDE(const char* oldAsset, const char* newAsset) { _i<Void>(0xEA1E2D93F6F75ED9, oldAsset, newAsset); } // 0xEA1E2D93F6F75ED9 0xC92719A7 b323
	// Resets the effect of SET_PARTICLE_FX_OVERRIDE
	// 
	// Full list of particle effect dictionaries and effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/particleEffectsCompact.json
	inline void RESET_PARTICLE_FX_OVERRIDE(const char* name) { _i<Void>(0x89C8553DD3274AAE, name); } // 0x89C8553DD3274AAE 0x9E8D8B72 b323
	// Returns ptfxHandle
	// effectName: scr_sv_drag_burnout
	inline int _START_VEHICLE_PARTICLE_FX_LOOPED(Vehicle vehicle, const char* effectName, BOOL frontBack, BOOL leftRight, BOOL localOnly) { return _i<int>(0xDF269BE2909E181A, vehicle, effectName, frontBack, leftRight, localOnly); } // 0xDF269BE2909E181A b3095
	inline void SET_WEATHER_PTFX_USE_OVERRIDE_SETTINGS(BOOL p0) { _i<Void>(0xA46B73FAA3460AE1, p0); } // 0xA46B73FAA3460AE1 b323
	inline void SET_WEATHER_PTFX_OVERRIDE_CURR_LEVEL(float p0) { _i<Void>(0xF78B803082D4386F, p0); } // 0xF78B803082D4386F b323
	inline void WASH_DECALS_IN_RANGE(float x, float y, float z, float range, float p4) { _i<Void>(0x9C30613D50A6ADEF, x, y, z, range, p4); } // 0x9C30613D50A6ADEF 0xDEECBC57 b323
	inline void WASH_DECALS_FROM_VEHICLE(Vehicle vehicle, float p1) { _i<Void>(0x5B712761429DBC14, vehicle, p1); } // 0x5B712761429DBC14 0x2929F11A b323
	// Fades nearby decals within the range specified
	inline void FADE_DECALS_IN_RANGE(float x, float y, float z, float p3, float p4) { _i<Void>(0xD77EDADB0420E6E0, x, y, z, p3, p4); } // 0xD77EDADB0420E6E0 0xF81E884A b323
	// Removes all decals in range from a position, it includes the bullet holes, blood pools, petrol...
	inline void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { _i<Void>(0x5D6B2D4830A67C62, x, y, z, range); } // 0x5D6B2D4830A67C62 0x06A619A0 b323
	inline void REMOVE_DECALS_FROM_OBJECT(Object obj) { _i<Void>(0xCCF71CBDDF5B6CB9, obj); } // 0xCCF71CBDDF5B6CB9 0x8B67DCA7 b323
	inline void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { _i<Void>(0xA6F6F70FDC6D144C, obj, x, y, z); } // 0xA6F6F70FDC6D144C 0xF4999A55 b323
	inline void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { _i<Void>(0xE91F1B65F2B48D57, vehicle); } // 0xE91F1B65F2B48D57 0x831D06CA b323
	// decal types:
	// 
	// public enum DecalTypes
	// {
	//     splatters_blood = 1010,
	//     splatters_blood_dir = 1015,
	//     splatters_blood_mist = 1017,
	//     splatters_mud = 1020,
	//     splatters_paint = 1030,
	//     splatters_water = 1040,
	//     splatters_water_hydrant = 1050,
	//     splatters_blood2 = 1110,
	//     weapImpact_metal = 4010,
	//     weapImpact_concrete = 4020,
	//     weapImpact_mattress = 4030,
	//     weapImpact_mud = 4032,
	//     weapImpact_wood = 4050,
	//     weapImpact_sand = 4053,
	//     weapImpact_cardboard = 4040,
	//     weapImpact_melee_glass = 4100,
	//     weapImpact_glass_blood = 4102,
	//     weapImpact_glass_blood2 = 4104,
	//     weapImpact_shotgun_paper = 4200,
	//     weapImpact_shotgun_mattress,
	//     weapImpact_shotgun_metal,
	//     weapImpact_shotgun_wood,
	//     weapImpact_shotgun_dirt,
	//     weapImpact_shotgun_tvscreen,
	//     weapImpact_shotgun_tvscreen2,
	//     weapImpact_shotgun_tvscreen3,
	//     weapImpact_melee_concrete = 4310,
	//     weapImpact_melee_wood = 4312,
	//     weapImpact_melee_metal = 4314,
	//     burn1 = 4421,
	//     burn2,
	//     burn3,
	//     burn4,
	//     burn5,
	//     bang_concrete_bang = 5000,
	//     bang_concrete_bang2,
	//     bang_bullet_bang,
	//     bang_bullet_bang2 = 5004,
	//     bang_glass = 5031,
	//     bang_glass2,
	//     solidPool_water = 9000,
	//     solidPool_blood,
	//     solidPool_oil,
	//     solidPool_petrol,
	//     solidPool_mud,
	//     porousPool_water,
	//     porousPool_blood,
	//     porousPool_oil,
	//     porousPool_petrol,
	//     porousPool_mud,
	//     porousPool_water_ped_drip,
	//     liquidTrail_water = 9050
	// }
	inline int ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) { return _i<int>(0xB302244A1839BDAD, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); } // 0xB302244A1839BDAD 0xEAD0C412 b323
	inline int ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return _i<int>(0x4F5212C7AD880DF8, x, y, z, groundLvl, width, transparency); } // 0x4F5212C7AD880DF8 0x1259DF42 b323
	inline int ADD_OIL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return _i<int>(0x126D7F89FE859A5E, x, y, z, groundLvl, width, transparency); } // 0x126D7F89FE859A5E b2699
	inline void START_PETROL_TRAIL_DECALS(float p0) { _i<Void>(0x99AC7F0D8B9C893D, p0); } // 0x99AC7F0D8B9C893D 0xE3938B0B b323
	inline void ADD_PETROL_TRAIL_DECAL_INFO(float x, float y, float z, float p3) { _i<Void>(0x967278682CB6967A, x, y, z, p3); } // 0x967278682CB6967A 0xBAEC6ADD b323
	inline void END_PETROL_TRAIL_DECALS() { _i<Void>(0x0A123435A26C36CD); } // 0x0A123435A26C36CD 0xCCCA6855 b323
	inline void REMOVE_DECAL(int decal) { _i<Void>(0xED3F346429CCD659, decal); } // 0xED3F346429CCD659 0xA4363188 b323
	inline BOOL IS_DECAL_ALIVE(int decal) { return _i<BOOL>(0xC694D74949CAFD0C, decal); } // 0xC694D74949CAFD0C 0xCDD4A61A b323
	inline float GET_DECAL_WASH_LEVEL(int decal) { return _i<float>(0x323F647679A09103, decal); } // 0x323F647679A09103 0x054448EF b323
	inline void SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME() { _i<Void>(0xD9454B5752C857DC); } // 0xD9454B5752C857DC 0xEAB6417C b323
	inline void SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME() { _i<Void>(0x27CFB1B1E078CB2D); } // 0x27CFB1B1E078CB2D 0xC2703B88 b323
	inline void SET_DISABLE_DECAL_RENDERING_THIS_FRAME() { _i<Void>(0x4B5CFC83122DF602); } // 0x4B5CFC83122DF602 0xA706E84D b323
	inline BOOL GET_IS_PETROL_DECAL_IN_RANGE(float xCoord, float yCoord, float zCoord, float radius) { return _i<BOOL>(0x2F09F7976C512404, xCoord, yCoord, zCoord, radius); } // 0x2F09F7976C512404 0x242C6A04 b323
	inline void PATCH_DECAL_DIFFUSE_MAP(int decalType, const char* textureDict, const char* textureName) { _i<Void>(0x8A35C742130C6080, decalType, textureDict, textureName); } // 0x8A35C742130C6080 0x335695CF b323
	inline void UNPATCH_DECAL_DIFFUSE_MAP(int decalType) { _i<Void>(0xB7ED70C49521A61D, decalType); } // 0xB7ED70C49521A61D 0x7B786555 b323
	inline void MOVE_VEHICLE_DECALS(Any p0, Any p1) { _i<Void>(0x84C8D7C2D30D3280, p0, p1); } // 0x84C8D7C2D30D3280 0xCE9E6CF2 b323
	// boneIndex is always chassis_dummy in the scripts. The x/y/z params are location relative to the chassis bone.
	inline BOOL ADD_VEHICLE_CREW_EMBLEM(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return _i<BOOL>(0x428BDCB9DA58DA53, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); } // 0x428BDCB9DA58DA53 0x12077738 b323
	inline BOOL ABORT_VEHICLE_CREW_EMBLEM_REQUEST(int* p0) { return _i<BOOL>(0x82ACC484FFA3B05F, p0); } // 0x82ACC484FFA3B05F b372
	inline void REMOVE_VEHICLE_CREW_EMBLEM(Vehicle vehicle, int p1) { _i<Void>(0xD2300034310557E4, vehicle, p1); } // 0xD2300034310557E4 0x667046A8 b323
	inline int GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(Vehicle vehicle, int p1) { return _i<int>(0xFE26117A5841B2FF, vehicle, p1); } // 0xFE26117A5841B2FF 0x4F4D76E8 b323
	inline BOOL DOES_VEHICLE_HAVE_CREW_EMBLEM(Vehicle vehicle, int p1) { return _i<BOOL>(0x060D935D3981A275, vehicle, p1); } // 0x060D935D3981A275 0x6D58F73B b323
	inline void DISABLE_COMPOSITE_SHOTGUN_DECALS(BOOL toggle) { _i<Void>(0x0E4299C549F0D1F1, toggle); } // 0x0E4299C549F0D1F1 0x9BABCBA4 b323
	inline void DISABLE_SCUFF_DECALS(BOOL toggle) { _i<Void>(0x02369D5C8A51FDCF, toggle); } // 0x02369D5C8A51FDCF 0xFDF6D8DA b323
	inline void SET_DECAL_BULLET_IMPACT_RANGE_SCALE(float p0) { _i<Void>(0x46D1A61A21F566FC, p0); } // 0x46D1A61A21F566FC 0x2056A015 b323
	inline void OVERRIDE_INTERIOR_SMOKE_NAME(const char* name) { _i<Void>(0x2A2A52824DB96700, name); } // 0x2A2A52824DB96700 0x0F486429 b323
	inline void OVERRIDE_INTERIOR_SMOKE_LEVEL(float level) { _i<Void>(0x1600FD8CF72EBC12, level); } // 0x1600FD8CF72EBC12 0xD87CC710 b323
	inline void OVERRIDE_INTERIOR_SMOKE_END() { _i<Void>(0xEFB55E7C25D3B3BE); } // 0xEFB55E7C25D3B3BE 0xE29EE145 b323
	// Used with 'NG_filmnoir_BW{01,02}' timecycles and the "NOIR_FILTER_SOUNDS" audioref.
	inline void REGISTER_NOIR_LENS_EFFECT() { _i<Void>(0xA44FF770DFBC5DAE); } // 0xA44FF770DFBC5DAE b323
	inline void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { _i<Void>(0xC9F98AC1884E73A2, toggle); } // 0xC9F98AC1884E73A2 0x7CFAE36F b323
	inline void RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(BOOL p0) { _i<Void>(0x03300B57FCAC6DDB, p0); } // 0x03300B57FCAC6DDB 0x60F72371 b323
	inline void REQUEST_EARLY_LIGHT_CHECK() { _i<Void>(0x98EDF76A7271E4F2); } // 0x98EDF76A7271E4F2 b323
	// Forces footstep tracks on all surfaces.
	inline void USE_SNOW_FOOT_VFX_WHEN_UNSHELTERED(BOOL toggle) { _i<Void>(0xAEEDAD1420C65CC0, toggle); } // 0xAEEDAD1420C65CC0 0xC53576CA b323
	inline void _FORCE_ALLOW_SNOW_FOOT_VFX_ON_ICE(BOOL toggle) { _i<Void>(0xA342A3763B3AFB6C, toggle); } // 0xA342A3763B3AFB6C b3095
	// Forces vehicle trails on all surfaces.
	inline void USE_SNOW_WHEEL_VFX_WHEN_UNSHELTERED(BOOL toggle) { _i<Void>(0x4CC7F0FEA5283FE0, toggle); } // 0x4CC7F0FEA5283FE0 0x7158B1EA b323
	inline void DISABLE_REGION_VFX(Any p0) { _i<Void>(0xEFD97FF47B745B8D, p0); } // 0xEFD97FF47B745B8D b791
	inline void _FORCE_GROUND_SNOW_PASS(BOOL toggle) { _i<Void>(0x6E9EF3A33C8899F8, toggle); } // 0x6E9EF3A33C8899F8 b3095
	// Only one match in the scripts:
	// 
	// GRAPHICS::PRESET_INTERIOR_AMBIENT_CACHE("int_carrier_hanger");
	inline void PRESET_INTERIOR_AMBIENT_CACHE(const char* timecycleModifierName) { _i<Void>(0xD7021272EB0A451E, timecycleModifierName); } // 0xD7021272EB0A451E 0x137E3E24 b323
	// Loads the specified timecycle modifier. Modifiers are defined separately in another file (e.g. "timecycle_mods_1.xml")
	// 
	// Parameters:
	// modifierName - The modifier to load (e.g. "V_FIB_IT3", "scanline_cam", etc.)
	// 
	// Full list of timecycle modifiers by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/timecycleModifiers.json
	inline void SET_TIMECYCLE_MODIFIER(const char* modifierName) { _i<Void>(0x2C933ABF17A1DF41, modifierName); } // 0x2C933ABF17A1DF41 0xA81F3638 b323
	inline void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { _i<Void>(0x82E7FFCD5B2326B3, strength); } // 0x82E7FFCD5B2326B3 0x458F4F45 b323
	// Full list of timecycle modifiers by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/timecycleModifiers.json
	inline void SET_TRANSITION_TIMECYCLE_MODIFIER(const char* modifierName, float transition) { _i<Void>(0x3BCF567485E1971C, modifierName, transition); } // 0x3BCF567485E1971C 0xBB2BA72A b323
	inline void SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(float strength) { _i<Void>(0x1CBA05AE7BD7EE05, strength); } // 0x1CBA05AE7BD7EE05 0x56345F6B b323
	inline void CLEAR_TIMECYCLE_MODIFIER() { _i<Void>(0x0F07E7745A236711); } // 0x0F07E7745A236711 0x8D8DF8EE b323
	// Only use for this in the PC scripts is:
	// 
	// if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
	inline int GET_TIMECYCLE_MODIFIER_INDEX() { return _i<int>(0xFDF3D97C674AFB66); } // 0xFDF3D97C674AFB66 0x594FEEC4 b323
	inline int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return _i<int>(0x459FD2C8D0AB78BC); } // 0x459FD2C8D0AB78BC 0x03C44E4B b323
	inline BOOL GET_IS_TIMECYCLE_TRANSITIONING_OUT() { return _i<BOOL>(0x98D18905BF723B99); } // 0x98D18905BF723B99 b1493
	inline void PUSH_TIMECYCLE_MODIFIER() { _i<Void>(0x58F735290861E6B4); } // 0x58F735290861E6B4 0x7E082045 b323
	inline void POP_TIMECYCLE_MODIFIER() { _i<Void>(0x3C8938D7D872211E); } // 0x3C8938D7D872211E 0x79D7D235 b323
	inline void SET_CURRENT_PLAYER_TCMODIFIER(const char* modifierName) { _i<Void>(0xBBF327DED94E4DEB, modifierName); } // 0xBBF327DED94E4DEB 0x85BA15A4 b323
	inline void SET_PLAYER_TCMODIFIER_TRANSITION(float value) { _i<Void>(0xBDEB86F4D5809204, value); } // 0xBDEB86F4D5809204 0x9559BB38 b323
	inline void SET_NEXT_PLAYER_TCMODIFIER(const char* modifierName) { _i<Void>(0xBF59707B3E5ED531, modifierName); } // 0xBF59707B3E5ED531 0x554BA16E b323
	inline void ADD_TCMODIFIER_OVERRIDE(const char* modifierName1, const char* modifierName2) { _i<Void>(0x1A8E2C8B9CF4549C, modifierName1, modifierName2); } // 0x1A8E2C8B9CF4549C 0xE8F538B5 b323
	inline void CLEAR_ALL_TCMODIFIER_OVERRIDES(const char* p0) { _i<Void>(0x15E33297C3E8DC60, p0); } // 0x15E33297C3E8DC60 b323
	// Full list of timecycle modifiers by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/timecycleModifiers.json
	inline void SET_EXTRA_TCMODIFIER(const char* modifierName) { _i<Void>(0x5096FD9CCB49056D, modifierName); } // 0x5096FD9CCB49056D b323
	// Clears the secondary timecycle modifier usually set with _SET_EXTRA_TIMECYCLE_MODIFIER
	inline void CLEAR_EXTRA_TCMODIFIER() { _i<Void>(0x92CCC17A7A2285DA); } // 0x92CCC17A7A2285DA b323
	// See GET_TIMECYCLE_MODIFIER_INDEX for use, works the same just for the secondary timecycle modifier.
	// Returns an integer representing the Timecycle modifier
	inline int GET_EXTRA_TCMODIFIER() { return _i<int>(0xBB0527EC6341496D); } // 0xBB0527EC6341496D b323
	// The same as SET_TIMECYCLE_MODIFIER_STRENGTH but for the secondary timecycle modifier.
	inline void ENABLE_MOON_CYCLE_OVERRIDE(float strength) { _i<Void>(0x2C328AF17210F009, strength); } // 0x2C328AF17210F009 b323
	// Resets the extra timecycle modifier strength normally set with 0x2C328AF17210F009
	inline void DISABLE_MOON_CYCLE_OVERRIDE() { _i<Void>(0x2BF72AD5B41AA739); } // 0x2BF72AD5B41AA739 b323
	inline int REQUEST_SCALEFORM_MOVIE(const char* scaleformName) { return _i<int>(0x11FE353CF9733E6F, scaleformName); } // 0x11FE353CF9733E6F 0xC67E3DCB b323
	// Another REQUEST_SCALEFORM_MOVIE equivalent.
	inline int REQUEST_SCALEFORM_MOVIE_WITH_IGNORE_SUPER_WIDESCREEN(const char* scaleformName) { return _i<int>(0x65E7E78842E74CDB, scaleformName); } // 0x65E7E78842E74CDB b372
	inline int REQUEST_SCALEFORM_MOVIE_INSTANCE(const char* scaleformName) { return _i<int>(0xC514489CFB8AF806, scaleformName); } // 0xC514489CFB8AF806 0x7CC8057D b323
	// Similar to REQUEST_SCALEFORM_MOVIE, but seems to be some kind of "interactive" scaleform movie?
	// 
	// These seem to be the only scaleforms ever requested by this native:
	// "breaking_news"
	// "desktop_pc"
	// "ECG_MONITOR"
	// "Hacking_PC"
	// "TEETH_PULLING"
	// 
	// Note: Unless this hash is out-of-order, this native is next-gen only.
	// 
	inline int REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED(const char* scaleformName) { return _i<int>(0xBD06C611BB9048C2, scaleformName); } // 0xBD06C611BB9048C2 b323
	inline BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return _i<BOOL>(0x85F01B8D5B90570E, scaleformHandle); } // 0x85F01B8D5B90570E 0xDDFB6448 b323
	// val is 1-20 (0 will return false)
	inline BOOL IS_ACTIVE_SCALEFORM_MOVIE_DELETING(int val) { return _i<BOOL>(0x2FCB133CA50A49EB, val); } // 0x2FCB133CA50A49EB b1290
	// val is 1-20. Return is related to INSTRUCTIONAL_BUTTONS, COLOUR_SWITCHER_02, etc?
	inline BOOL IS_SCALEFORM_MOVIE_DELETING(int val) { return _i<BOOL>(0x86255B1FC929E33E, val); } // 0x86255B1FC929E33E b1290
	// Only values used in the scripts are:
	// 
	// "heist_mp"
	// "heistmap_mp"
	// "instructional_buttons"
	// "heist_pre"
	inline BOOL HAS_SCALEFORM_MOVIE_FILENAME_LOADED(const char* scaleformName) { return _i<BOOL>(0x0C1C5D756FB5F337, scaleformName); } // 0x0C1C5D756FB5F337 0x494A9E50 b323
	inline BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return _i<BOOL>(0x8217150E1217EBFD, scaleformHandle); } // 0x8217150E1217EBFD 0x1DFE8D8A b323
	inline void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { _i<Void>(0x1D132D614DD86811, scaleformHandle); } // 0x1D132D614DD86811 0x5FED3BA1 b323
	inline void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { _i<Void>(0x6D8EB211944DCE08, scaleform, toggle); } // 0x6D8EB211944DCE08 0x18C9DE8D b323
	inline void SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(int scaleformHandle, BOOL toggle) { _i<Void>(0x32F34FF7F617643B, scaleformHandle, toggle); } // 0x32F34FF7F617643B b573
	// This native is used in some casino scripts to fit the scaleform in the rendertarget.
	inline void SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(int scaleformHandle, BOOL toggle) { _i<Void>(0xE6A9F00D4240B519, scaleformHandle, toggle); } // 0xE6A9F00D4240B519 b877
	inline void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int p9) { _i<Void>(0x54972ADAF0294A93, scaleformHandle, x, y, width, height, red, green, blue, alpha, p9); } // 0x54972ADAF0294A93 0x48DA6A58 b323
	// unk is not used so no need
	inline void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int p5) { _i<Void>(0x0DF606929C105BE1, scaleform, red, green, blue, alpha, p5); } // 0x0DF606929C105BE1 0x7B48E696 b323
	inline void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { _i<Void>(0xCF537FDE4FBD4CE5, scaleform1, scaleform2, red, green, blue, alpha); } // 0xCF537FDE4FBD4CE5 0x9C59FC06 b323
	inline void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { _i<Void>(0x87D51D72255D4E78, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); } // 0x87D51D72255D4E78 0xC4F63A89 b323
	inline void DRAW_SCALEFORM_MOVIE_3D_SOLID(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { _i<Void>(0x1CE592FDC749D6F5, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); } // 0x1CE592FDC749D6F5 0x899933C8 b323
	// Calls the Scaleform function.
	inline void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, const char* method) { _i<Void>(0xFBD96D87AC96D533, scaleform, method); } // 0xFBD96D87AC96D533 0x7AB77B57 b323
	// Calls the Scaleform function and passes the parameters as floats.
	// 
	// The number of parameters passed to the function varies, so the end of the parameter list is represented by -1.0.
	inline void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(int scaleform, const char* methodName, float param1, float param2, float param3, float param4, float param5) { _i<Void>(0xD0837058AE2E4BEE, scaleform, methodName, param1, param2, param3, param4, param5); } // 0xD0837058AE2E4BEE 0x557EDA1D b323
	// Calls the Scaleform function and passes the parameters as strings.
	// 
	// The number of parameters passed to the function varies, so the end of the parameter list is represented by 0 (NULL).
	inline void CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(int scaleform, const char* methodName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5) { _i<Void>(0x51BC1ED3CC44E8F7, scaleform, methodName, param1, param2, param3, param4, param5); } // 0x51BC1ED3CC44E8F7 0x91A7FCEB b323
	// Calls the Scaleform function and passes both float and string parameters (in their respective order).
	// 
	// The number of parameters passed to the function varies, so the end of the float parameters is represented by -1.0, and the end of the string parameters is represented by 0 (NULL).
	// 
	// NOTE: The order of parameters in the function prototype is important! All float parameters must come first, followed by the string parameters.
	// 
	// Examples:
	// // function MY_FUNCTION(floatParam1, floatParam2, stringParam)
	// GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(scaleform, "MY_FUNCTION", 10.0, 20.0, -1.0, -1.0, -1.0, "String param", 0, 0, 0, 0);
	// 
	// // function MY_FUNCTION_2(floatParam, stringParam1, stringParam2)
	// GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(scaleform, "MY_FUNCTION_2", 10.0, -1.0, -1.0, -1.0, -1.0, "String param #1", "String param #2", 0, 0, 0);
	inline void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(int scaleform, const char* methodName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5) { _i<Void>(0xEF662D8D57E290B1, scaleform, methodName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); } // 0xEF662D8D57E290B1 0x6EAF56DE b323
	// Pushes a function from the Hud component Scaleform onto the stack. Same behavior as GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD, just a hud component id instead of a Scaleform.
	// 
	// Known components:
	// 19 - MP_RANK_BAR
	// 20 - HUD_DIRECTOR_MODE
	// 
	// This native requires more research - all information can be found inside of 'hud.gfx'. Using a decompiler, the different components are located under "scripts\__Packages\com\rockstargames\gtav\hud\hudComponents" and "scripts\__Packages\com\rockstargames\gtav\Multiplayer".
	inline BOOL BEGIN_SCALEFORM_SCRIPT_HUD_MOVIE_METHOD(int hudComponent, const char* methodName) { return _i<BOOL>(0x98C494FD5BDFBFD5, hudComponent, methodName); } // 0x98C494FD5BDFBFD5 0x5D66CE1E b323
	// Push a function from the Scaleform onto the stack
	// 
	inline BOOL BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, const char* methodName) { return _i<BOOL>(0xF6E48914C7A8694E, scaleform, methodName); } // 0xF6E48914C7A8694E 0x215ABBE8 b323
	// Starts frontend (pause menu) scaleform movie methods.
	// This can be used when you want to make custom frontend menus, and customize things like images or text in the menus etc.
	// Use `BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER` for header scaleform functions.
	inline BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(const char* methodName) { return _i<BOOL>(0xAB58C27C2E6123C6, methodName); } // 0xAB58C27C2E6123C6 0xF6015178 b323
	// Starts frontend (pause menu) scaleform movie methods for header options.
	// Use `BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND` to customize the content inside the frontend menus.
	inline BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER(const char* methodName) { return _i<BOOL>(0xB9449845F73F5E9C, methodName); } // 0xB9449845F73F5E9C 0x5E219B67 b323
	// Pops and calls the Scaleform function on the stack
	inline void END_SCALEFORM_MOVIE_METHOD() { _i<Void>(0xC6796A8FFA375E53); } // 0xC6796A8FFA375E53 0x02DBF2D7 b323
	inline int END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE() { return _i<int>(0xC50AA39A577AF886); } // 0xC50AA39A577AF886 0x2F38B526 b323
	// methodReturn: The return value of this native: END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE
	// Returns true if the return value of a scaleform function is ready to be collected (using GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING or GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT).
	inline BOOL IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(int methodReturn) { return _i<BOOL>(0x768FF8961BA904D6, methodReturn); } // 0x768FF8961BA904D6 0x5CD7C3C0 b323
	// methodReturn: The return value of this native: END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE
	// Used to get a return value from a scaleform function. Returns an int in the same way GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING returns a string.
	inline int GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(int methodReturn) { return _i<int>(0x2DE7EFA66B906036, methodReturn); } // 0x2DE7EFA66B906036 0x2CFB0E6D b323
	// methodReturn: The return value of this native: END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE
	inline BOOL GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(int methodReturn) { return _i<BOOL>(0xD80A80346A45D761, methodReturn); } // 0xD80A80346A45D761 b757
	// methodReturn: The return value of this native: END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE
	// Used to get a return value from a scaleform function. Returns a string in the same way GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT returns an int.
	inline const char* GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING(int methodReturn) { return _i<const char*>(0xE1E258829A885245, methodReturn); } // 0xE1E258829A885245 0x516862EB b323
	// Pushes an integer for the Scaleform function onto the stack.
	inline void SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(int value) { _i<Void>(0xC3D0841A0CC546A6, value); } // 0xC3D0841A0CC546A6 0x716777CB b323
	// Pushes a float for the Scaleform function onto the stack.
	inline void SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(float value) { _i<Void>(0xD69736AAE04DB51A, value); } // 0xD69736AAE04DB51A 0x9A01FFDA b323
	// Pushes a boolean for the Scaleform function onto the stack.
	inline void SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(BOOL value) { _i<Void>(0xC58424BA936EB458, value); } // 0xC58424BA936EB458 0x0D4AE8CB b323
	// Called prior to adding a text component to the UI. After doing so, GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING is called.
	// 
	// Examples:
	// GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
	// HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(a_1));
	// GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	// 
	// GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	// HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(a_2);
	// GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	// 
	// GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM2");
	// HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(v_3);
	// HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(v_4);
	// GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	// 
	// GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRTNM1");
	// HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(v_3);
	// GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	inline void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(const char* componentType) { _i<Void>(0x80338406F3475E55, componentType); } // 0x80338406F3475E55 0x3AC9CB55 b323
	inline void END_TEXT_COMMAND_SCALEFORM_STRING() { _i<Void>(0x362E2D3FE93A9959); } // 0x362E2D3FE93A9959 0x386CE0B8 b323
	// Same as END_TEXT_COMMAND_SCALEFORM_STRING but does not perform HTML conversion for text tokens.
	// 
	// END_TEXT_COMMAND_VIA_SPECIAL_MODIFIABLE_STRING?
	inline void END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING() { _i<Void>(0xAE4E8157D9ECF087); } // 0xAE4E8157D9ECF087 0x2E80DB52 b323
	// Same as SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING
	// Both SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING / _SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2 works, but _SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2 is usually used for "name" (organisation, players..).
	inline void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(const char* string) { _i<Void>(0x77FE3402004CD1B0, string); } // 0x77FE3402004CD1B0 b573
	inline void SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(const char* string) { _i<Void>(0xBA7148484BD90365, string); } // 0xBA7148484BD90365 0x4DAAD55B b323
	inline void SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(const char* string) { _i<Void>(0xE83A3E3557A56640, string); } // 0xE83A3E3557A56640 0xCCBF0334 b323
	inline BOOL DOES_LATEST_BRIEF_STRING_EXIST(int p0) { return _i<BOOL>(0x5E657EF1099EDD65, p0); } // 0x5E657EF1099EDD65 0x91A081A1 b323
	inline void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(int value) { _i<Void>(0xEC52C631A1831C03, value); } // 0xEC52C631A1831C03 0x83A9811D b323
	inline void REQUEST_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { _i<Void>(0x9304881D6F6537EA, hudComponent); } // 0x9304881D6F6537EA 0x7AF85862 b323
	inline BOOL HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED(int hudComponent) { return _i<BOOL>(0xDF6E5987D2B4D140, hudComponent); } // 0xDF6E5987D2B4D140 0x79B43255 b323
	inline void REMOVE_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { _i<Void>(0xF44A5456AC3F4F97, hudComponent); } // 0xF44A5456AC3F4F97 0x03D87600 b323
	inline BOOL PASS_KEYBOARD_INPUT_TO_SCALEFORM(int scaleformHandle) { return _i<BOOL>(0xD1C7CB175E012964, scaleformHandle); } // 0xD1C7CB175E012964 0xE9183D3A b323
	inline void SET_TV_CHANNEL(int channel) { _i<Void>(0xBAABBB23EB6E484E, channel); } // 0xBAABBB23EB6E484E 0x41A8A627 b323
	inline int GET_TV_CHANNEL() { return _i<int>(0xFC1E275A90D39995); } // 0xFC1E275A90D39995 0x6B96145A b323
	inline void SET_TV_VOLUME(float volume) { _i<Void>(0x2982BF73F66E9DDC, volume); } // 0x2982BF73F66E9DDC 0xF3504F4D b323
	inline float GET_TV_VOLUME() { return _i<float>(0x2170813D3DD8661B); } // 0x2170813D3DD8661B 0x39555CF0 b323
	// All calls to this native are preceded by calls to GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER and GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU, respectively.
	// 
	// "act_cinema.ysc", line 1483:
	// HUD::SET_HUD_COMPONENT_POSITION(15, 0.0, -0.0375);
	// HUD::SET_TEXT_RENDER_ID(l_AE);
	// GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	// GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	// if (GRAPHICS::IS_TVSHOW_CURRENTLY_PLAYING(${movie_arthouse})) {
	//     GRAPHICS::DRAW_TV_CHANNEL(0.5, 0.5, 0.7375, 1.0, 0.0, 255, 255, 255, 255);
	// } else { 
	//     GRAPHICS::DRAW_TV_CHANNEL(0.5, 0.5, 1.0, 1.0, 0.0, 255, 255, 255, 255);
	// }
	// 
	// "am_mp_property_int.ysc", line 102545:
	// if (ENTITY::DOES_ENTITY_EXIST(a_2._f3)) {
	//     if (HUD::IS_NAMED_RENDERTARGET_LINKED(ENTITY::GET_ENTITY_MODEL(a_2._f3))) {
	//         HUD::SET_TEXT_RENDER_ID(a_2._f1);
	//         GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	//         GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	//         GRAPHICS::DRAW_TV_CHANNEL(0.5, 0.5, 1.0, 1.0, 0.0, 255, 255, 255, 255);
	//         if (GRAPHICS::GET_TV_CHANNEL() == -1) {
	//             sub_a8fa5(a_2, 1);
	//         } else { 
	//             sub_a8fa5(a_2, 1);
	//             GRAPHICS::ATTACH_TV_AUDIO_TO_ENTITY(a_2._f3);
	//         }
	//         HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
	//     }
	// }
	// 
	inline void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { _i<Void>(0xFDDC2B4ED3C69DF0, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); } // 0xFDDC2B4ED3C69DF0 0x8129EF89 b323
	// Loads specified video sequence into the TV Channel
	// TV_Channel ranges from 0-2
	// VideoSequence can be any of the following:
	// "PL_STD_CNT" CNT Standard Channel
	// "PL_STD_WZL" Weazel Standard Channel
	// "PL_LO_CNT"
	// "PL_LO_WZL"
	// "PL_SP_WORKOUT"
	// "PL_SP_INV" - Jay Norris Assassination Mission Fail
	// "PL_SP_INV_EXP" - Jay Norris Assassination Mission Success
	// "PL_LO_RS" - Righteous Slaughter Ad
	// "PL_LO_RS_CUTSCENE" - Righteous Slaughter Cut-scene
	// "PL_SP_PLSH1_INTRO"
	// "PL_LES1_FAME_OR_SHAME"
	// "PL_STD_WZL_FOS_EP2"
	// "PL_MP_WEAZEL" - Weazel Logo on loop
	// "PL_MP_CCTV" - Generic CCTV loop
	// 
	// Restart:
	// 0=video sequence continues as normal
	// 1=sequence restarts from beginning every time that channel is selected
	// 
	// 
	// The above playlists work as intended, and are commonly used, but there are many more playlists, as seen in `tvplaylists.xml`. A pastebin below outlines all playlists, they will be surronded by the name tag I.E. (<Name>PL_STD_CNT</Name> = PL_STD_CNT).
	// https://pastebin.com/zUzGB6h7
	inline void SET_TV_CHANNEL_PLAYLIST(int tvChannel, const char* playlistName, BOOL restart) { _i<Void>(0xF7B38B8305F1FE8B, tvChannel, playlistName, restart); } // 0xF7B38B8305F1FE8B 0xB262DE67 b323
	inline void SET_TV_CHANNEL_PLAYLIST_AT_HOUR(int tvChannel, const char* playlistName, int hour) { _i<Void>(0x2201C576FACAEBE8, tvChannel, playlistName, hour); } // 0x2201C576FACAEBE8 0x78C4DCBE b323
	inline void _SET_TV_CHANNEL_PLAYLIST_DIRTY(int tvChannel, BOOL p1) { _i<Void>(0xEE831F15A8D0D94A, tvChannel, p1); } // 0xEE831F15A8D0D94A b3095
	inline void CLEAR_TV_CHANNEL_PLAYLIST(int tvChannel) { _i<Void>(0xBEB3D46BB7F043C0, tvChannel); } // 0xBEB3D46BB7F043C0 0xCBE7068F b323
	inline BOOL IS_PLAYLIST_ON_CHANNEL(int tvChannel, Any p1) { return _i<BOOL>(0x1F710BFF7DAE6261, tvChannel, p1); } // 0x1F710BFF7DAE6261 b1604
	inline BOOL IS_TVSHOW_CURRENTLY_PLAYING(Hash videoCliphash) { return _i<BOOL>(0x0AD973CA1E077B60, videoCliphash); } // 0x0AD973CA1E077B60 0x4D1EB0FB b323
	inline void ENABLE_MOVIE_KEYFRAME_WAIT(BOOL toggle) { _i<Void>(0x74C180030FDE4B69, toggle); } // 0x74C180030FDE4B69 0x796DE696 b323
	inline void SET_TV_PLAYER_WATCHING_THIS_FRAME(Any p0) { _i<Void>(0xD1C55B110E4DF534, p0); } // 0xD1C55B110E4DF534 0xD99EC000 b323
	inline Hash GET_CURRENT_TV_CLIP_NAMEHASH() { return _i<Hash>(0x30432A0118736E00); } // 0x30432A0118736E00 b1493
	inline void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { _i<Void>(0x873FA65C778AD970, toggle); } // 0x873FA65C778AD970 0xC2DEBA3D b323
	inline BOOL UI3DSCENE_IS_AVAILABLE() { return _i<BOOL>(0xD3A10FC7FD8D98CD); } // 0xD3A10FC7FD8D98CD 0xE40A0F1A b323
	// All presets can be found in common\data\ui\uiscenes.meta
	inline BOOL UI3DSCENE_PUSH_PRESET(const char* presetName) { return _i<BOOL>(0xF1CEA8A4198D8E9A, presetName); } // 0xF1CEA8A4198D8E9A 0x2E7D9B98 b323
	// It's called after UI3DSCENE_IS_AVAILABLE and UI3DSCENE_PUSH_PRESET
	// 
	// presetName was always "CELEBRATION_WINNER"
	// All presets can be found in common\data\ui\uiscenes.meta
	inline BOOL UI3DSCENE_ASSIGN_PED_TO_SLOT(const char* presetName, Ped ped, int slot, float posX, float posY, float posZ) { return _i<BOOL>(0x98C4FE6EC34154CA, presetName, ped, slot, posX, posY, posZ); } // 0x98C4FE6EC34154CA 0x9A0E3BFE b323
	inline void UI3DSCENE_CLEAR_PATCHED_DATA() { _i<Void>(0x7A42B2E236E71415); } // 0x7A42B2E236E71415 0x431AA036 b323
	inline void UI3DSCENE_MAKE_PUSHED_PRESET_PERSISTENT(BOOL toggle) { _i<Void>(0x108BE26959A9D9BB, toggle); } // 0x108BE26959A9D9BB 0x24A7A7F6 b323
	// This native enables/disables the gold putting grid display (https://i.imgur.com/TC6cku6.png).
	// This requires these two natives to be called as well to configure the grid: `TERRAINGRID_SET_PARAMS` and `TERRAINGRID_SET_COLOURS`.
	inline void TERRAINGRID_ACTIVATE(BOOL toggle) { _i<Void>(0xA356990E161C9E65, toggle); } // 0xA356990E161C9E65 0xA1CB6C94 b323
	// This native is used along with these two natives: `TERRAINGRID_ACTIVATE` and `TERRAINGRID_SET_COLOURS`.
	// This native configures the location, size, rotation, normal height, and the difference ratio between min, normal and max.
	// 
	// All those natives combined they will output something like this: https://i.imgur.com/TC6cku6.png
	// 
	// This native renders a box at the given position, with a special shader that renders a grid on world geometry behind it. This box does not have backface culling.
	// The forward args here are a direction vector, something similar to what's returned by GET_ENTITY_FORWARD_VECTOR.
	// normalHeight and heightDiff are used for positioning the color gradient of the grid, colors specified via TERRAINGRID_SET_COLOURS.
	// 
	// Example with box superimposed on the image to demonstrate: https://i.imgur.com/wdqskxd.jpg
	inline void TERRAINGRID_SET_PARAMS(float x, float y, float z, float forwardX, float forwardY, float forwardZ, float sizeX, float sizeY, float sizeZ, float gridScale, float glowIntensity, float normalHeight, float heightDiff) { _i<Void>(0x1C4FC5752BCD8E48, x, y, z, forwardX, forwardY, forwardZ, sizeX, sizeY, sizeZ, gridScale, glowIntensity, normalHeight, heightDiff); } // 0x1C4FC5752BCD8E48 0x3B637AA7 b323
	// This native is used along with these two natives: `TERRAINGRID_ACTIVATE` and `TERRAINGRID_SET_PARAMS`.
	// This native sets the colors for the golf putting grid. the 'min...' values are for the lower areas that the grid covers, the 'max...' values are for the higher areas that the grid covers, all remaining values are for the 'normal' ground height.
	// All those natives combined they will output something like this: https://i.imgur.com/TC6cku6.png
	inline void TERRAINGRID_SET_COLOURS(int lowR, int lowG, int lowB, int lowAlpha, int r, int g, int b, int alpha, int highR, int highG, int highB, int highAlpha) { _i<Void>(0x5CE62918F8D703C7, lowR, lowG, lowB, lowAlpha, r, g, b, alpha, highR, highG, highB, highAlpha); } // 0x5CE62918F8D703C7 0xDF552973 b323
	// duration - is how long to play the effect for in milliseconds. If 0, it plays the default length
	// if loop is true, the effect won't stop until you call ANIMPOSTFX_STOP on it. (only loopable effects)
	// 
	// Full list of animpostFX / screen effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animPostFxNamesCompact.json
	inline void ANIMPOSTFX_PLAY(const char* effectName, int duration, BOOL looped) { _i<Void>(0x2206BF9A37B7F724, effectName, duration, looped); } // 0x2206BF9A37B7F724 0x1D980479 b323
	// See ANIMPOSTFX_PLAY
	// 
	// Full list of animpostFX / screen effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animPostFxNamesCompact.json
	inline void ANIMPOSTFX_STOP(const char* effectName) { _i<Void>(0x068E835A1D0DC0E3, effectName); } // 0x068E835A1D0DC0E3 0x06BB5CDA b323
	// See ANIMPOSTFX_PLAY
	// 
	// Full list of animpostFX / screen effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animPostFxNamesCompact.json
	inline float ANIMPOSTFX_GET_CURRENT_TIME(const char* effectName) { return _i<float>(0xE35B38A27E8E7179, effectName); } // 0xE35B38A27E8E7179 b877
	// Returns whether the specified effect is active.
	// See ANIMPOSTFX_PLAY
	// 
	// Full list of animpostFX / screen effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animPostFxNamesCompact.json
	inline BOOL ANIMPOSTFX_IS_RUNNING(const char* effectName) { return _i<BOOL>(0x36AD3E690DA5ACEB, effectName); } // 0x36AD3E690DA5ACEB 0x089D5921 b323
	// Stops ALL currently playing effects.
	inline void ANIMPOSTFX_STOP_ALL() { _i<Void>(0xB4EDDC19532BFB85); } // 0xB4EDDC19532BFB85 0x4E6D875B b323
	// Stops the effect and sets a value (bool) in its data (+0x199) to false.
	// See ANIMPOSTFX_PLAY
	// 
	// Full list of animpostFX / screen effects by DurtyFree: https://github.com/DurtyFree/gta-v-data-dumps/blob/master/animPostFxNamesCompact.json
	inline void ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS(const char* effectName) { _i<Void>(0xD2209BE128B5418C, effectName); } // 0xD2209BE128B5418C b323
}

namespace HUD
{
	inline Void ActivateFrontendMenu(Hash menuhash, bool Toggle_Pause, int component) { return _i<Void>(0xEF01D36B9C9D0C7B, menuhash, Toggle_Pause, component); }
	inline Any _0xCE5D0E5E315DB238(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Any>(0xCE5D0E5E315DB238, p0, p1, p2, p3, p4); }
	inline Blip AddBlipForCoord(float x, float y, float z) { return _i<Blip>(0x5A039BB0BCA604B6, x, y, z); }
	inline Blip AddBlipForEntity(Entity entity) { return _i<Blip>(0x5CDE92C702A8FCE7, entity); }
	inline Blip AddBlipForPickup(Pickup pickup) { return _i<Blip>(0xBE339365C863BD36, pickup); }
	inline Blip AddBlipForRadius(float posX, float posY, float posZ, float radius) { return _i<Blip>(0x46818D79B1F7499A, posX, posY, posZ, radius); }
	inline Void AddNextMessageToPreviousBriefs(bool p0) { return _i<Void>(0x60296AF4BA14ABC5, p0); }
	inline Void _0x311438A071DD9B1A(Any p0, Any p1, Any p2) { return _i<Void>(0x311438A071DD9B1A, p0, p1, p2); }
	inline Void _0xA905192A6781C41B(float x, float y, float z) { return _i<Void>(0xA905192A6781C41B, x, y, z); }
	inline Void AddTextComponentFloat(float value, int decimalPlaces) { return _i<Void>(0xE7DCB5B874BCD96E, value, decimalPlaces); }
	inline Void AddTextComponentFormattedInteger(int value, bool commaSeparated) { return _i<Void>(0x0E4C749FF9DE9CC4, value, commaSeparated); }
	inline Void AddTextComponentInteger(int value) { return _i<Void>(0x03B504CF259931BC, value); }
	inline Void AddTextComponentSubstringBlipName(Blip blip) { return _i<Void>(0x80EAD8E2E1D5D52E, blip); }
	inline Void AddTextComponentSubstringPlayerName(String text) { return _i<Void>(0x6C188BE134E074AA, text); }
	inline Void AddTextComponentSubstringWebsite(String website) { return _i<Void>(0x94CF4AC034C9C986, website); }
	inline Void _AddTextComponentScaleform(String p0) { return _i<Void>(0x5F68520888E69014, p0); }
	inline Void _AddTextComponentAppTitle(String p0, int p1) { return _i<Void>(0x761B77454205A61D, p0, p1); }
	inline Void AddTextComponentSubstringTextLabel(String labelName) { return _i<Void>(0xC63CD5D2920ACBE7, labelName); }
	inline Void AddTextComponentSubstringTextLabelHashKey(Hash gxtEntryHash) { return _i<Void>(0x17299B63C7683A2B, gxtEntryHash); }
	inline Void AddTextComponentSubstringTime(int timestamp, int flags) { return _i<Void>(0x1115F16B8AB9E8BF, timestamp, flags); }
	inline Void _0xE67C6DFD386EA5E7(bool p0) { return _i<Void>(0xE67C6DFD386EA5E7, p0); }
	inline Void _0xCC3FDDED67BCFC63() { return _i<Void>(0xCC3FDDED67BCFC63); }
	inline Void _0x60734CC207C9833C(bool p0) { return _i<Void>(0x60734CC207C9833C, p0); }
	inline Any _0xF13FE2A80C05C561() { return _i<Any>(0xF13FE2A80C05C561); }
	inline Void _BeginTextCommandObjective(String p0) { return _i<Void>(0x23D69E0465570028, p0); }
	inline Void _SetLoadingPromptTextEntry(String string) { return _i<Void>(0xABA17D7CE615ADBF, string); }
	inline Void BeginTextCommandClearPrint(String text) { return _i<Void>(0xE124FA80A759019C, text); }
	inline Void BeginTextCommandDisplayHelp(String inputType) { return _i<Void>(0x8509B634FBE7DA11, inputType); }
	inline Void BeginTextCommandDisplayText(String text) { return _i<Void>(0x25FBB336DF1804CB, text); }
	inline Void _BeginTextCommandLineCount(String entry) { return _i<Void>(0x521FB041D93DD0E4, entry); }
	inline Void _BeginTextCommandWidth(String text) { return _i<Void>(0x54CE8AC98E120CAB, text); }
	inline Void BeginTextCommandIsMessageDisplayed(String text) { return _i<Void>(0x853648FD1063A213, text); }
	inline Void BeginTextCommandIsThisHelpMessageBeingDisplayed(String labelName) { return _i<Void>(0x0A24DA3A41B718F5, labelName); }
	inline Void _BeginTextCommandTimer(String p0) { return _i<Void>(0x8F9EE5687F8EECCD, p0); }
	inline Void BeginTextCommandPrint(String GxtEntry) { return _i<Void>(0xB87A37EEB7FAA67D, GxtEntry); }
	inline Void BeginTextCommandSetBlipName(String gxtentry) { return _i<Void>(0xF9113A30DE5C6670, gxtentry); }
	inline Void _SetNotificationTextEntry(String type) { return _i<Void>(0x202709F4C58A0424, type); }
	inline Any _0xB2A592B04648A9CB() { return _i<Any>(0xB2A592B04648A9CB); }
	inline bool _IsLoadingPromptBeingDisplayed() { return _i<bool>(0xD422FCC5F239A915); }
	inline Void _RemoveLoadingPrompt() { return _i<Void>(0x10D373323E5B9C0D); }
	inline Void _SetPlayerCashChange(int cash, int bank) { return _i<Void>(0x0772DF77852C2E30, cash, bank); }
	inline Void ClearAdditionalText(int p0, bool p1) { return _i<Void>(0x2A179DF17CCF04CD, p0, p1); }
	inline Void _0xD12882D3FF82BF11() { return _i<Void>(0xD12882D3FF82BF11); }
	inline Void ClearAllHelpMessages() { return _i<Void>(0x6178F68A87A4D3A0); }
	inline Void ClearBrief() { return _i<Void>(0x9D292F73ADBD9313); }
	inline Void _0x7792424AA0EAC32E() { return _i<Void>(0x7792424AA0EAC32E); }
	inline Void ClearFloatingHelp(Any p0, bool p1) { return _i<Void>(0x50085246ABD3FEFA, p0, p1); }
	inline Void _0xE6DE0561D9232A64() { return _i<Void>(0xE6DE0561D9232A64); }
	inline Void ClearGpsFlags() { return _i<Void>(0x21986729D6A3A830); }
	inline Void _0x67EEDEA1B9BAFD94() { return _i<Void>(0x67EEDEA1B9BAFD94); }
	inline Void ClearGpsPlayerWaypoint() { return _i<Void>(0xFF4FB7C8CDFA3DA7); }
	inline Void ClearGpsRaceTrack() { return _i<Void>(0x7AA5B4CE533C858B); }
	inline Void ClearHelp(bool toggle) { return _i<Void>(0x8DFCED7A656F8802, toggle); }
	inline Void ClearPedInPauseMenu() { return _i<Void>(0x5E62BE5DC58E9E06); }
	inline Void ClearPrints() { return _i<Void>(0xCC33FA791322B9D9); }
	inline Void ClearSmallPrints() { return _i<Void>(0x2CEA2839313C09AC); }
	inline Void ClearThisPrint(String p0) { return _i<Void>(0xCF708001E1E536DD, p0); }
	inline Void _AbortTextChat() { return _i<Void>(0x1AC8F4AD40E22127); }
	inline Void _0xD2B32BE3FC1626C6() { return _i<Void>(0xD2B32BE3FC1626C6); }
	inline Any _0x66E7CB63C97B7D20() { return _i<Any>(0x66E7CB63C97B7D20); }
	inline int _CreateMpGamerTag(Ped ped, String username, bool pointedClanTag, bool isRockstarClan, String clanTag, Any p5) { return _i<int>(0xBFEFE3321A3F5015, ped, username, pointedClanTag, isRockstarClan, clanTag, p5); }
	inline Void _SetMpGamerTagColor(int headDisplayId, String username, bool pointedClanTag, bool isRockstarClan, String clanTag, Any p5, int r, int g, int b) { return _i<Void>(0x6DD05E9D83EFA4C9, headDisplayId, username, pointedClanTag, isRockstarClan, clanTag, p5, r, g, b); }
	inline Void _0x2708FC083123F9FF() { return _i<Void>(0x2708FC083123F9FF); }
	inline Any _0x551DF99658DB6EE8(float p0, float p1, float p2) { return _i<Any>(0x551DF99658DB6EE8, p0, p1, p2); }
	inline Void _SetMapFullScreen(bool toggle) { return _i<Void>(0x5354C5BA2EA868A4, toggle); }
	inline Void _0x1EAE6DD17B7A5EFA(Any p0) { return _i<Void>(0x1EAE6DD17B7A5EFA, p0); }
	inline Void _0xD8E694757BCEA8E9() { return _i<Void>(0xD8E694757BCEA8E9); }
	inline Void DisableFrontendThisFrame() { return _i<Void>(0x6D3465A73092F0E6); }
	inline Void _0x9245E81072704B8A(bool p0) { return _i<Void>(0x9245E81072704B8A, p0); }
	inline Void DisplayAmmoThisFrame(bool display) { return _i<Void>(0xA5E78BA2B1331C55, display); }
	inline Void DisplayAreaName(bool toggle) { return _i<Void>(0x276B6CE369C33678, toggle); }
	inline Void DisplayCash(bool toggle) { return _i<Void>(0x96DEC8D5430208B7, toggle); }
	inline Void DisplayHelpTextThisFrame(String message, bool p1) { return _i<Void>(0x960C9FF8F616E41C, message, p1); }
	inline Void DisplayHud(bool toggle) { return _i<Void>(0xA6294919E56FF02A, toggle); }
	inline Void _0x7669F9E39DC17063() { return _i<Void>(0x7669F9E39DC17063); }
	inline Void _0x402F9ED62087E898() { return _i<Void>(0x402F9ED62087E898); }
	inline Void _0x82CEDC33687E1F50(bool p0) { return _i<Void>(0x82CEDC33687E1F50, p0); }
	inline Void DisplayRadar(bool Toggle) { return _i<Void>(0xA0EBB943C300E693, Toggle); }
	inline Void DisplaySniperScopeThisFrame() { return _i<Void>(0x73115226F4814E62); }
	inline bool DoesBlipExist(Blip blip) { return _i<bool>(0xA6DB27D19ECBB7DA, blip); }
	inline bool _0xDD2238F57B977751(Any p0) { return _i<bool>(0xDD2238F57B977751, p0); }
	inline bool DoesPedHaveAiBlip(Ped ped) { return _i<bool>(0x15B8ECF844EE67ED, ped); }
	inline bool DoesTextBlockExist(String gxt) { return _i<bool>(0x1C7302E725259789, gxt); }
	inline bool DoesTextLabelExist(String gxt) { return _i<bool>(0xAC09CA973C564252, gxt); }
	inline Void _CenterPlayerOnRadarThisFrame() { return _i<Void>(0x6D14BFDC33B34F55); }
	inline Void _0x55F5A5F07134DE60() { return _i<Void>(0x55F5A5F07134DE60); }
	inline Void _0xBF4F34A85CA2970C() { return _i<Void>(0xBF4F34A85CA2970C); }
	inline Void _EndTextCommandObjective(bool p0) { return _i<Void>(0xCFDBDF5AE59BA0F4, p0); }
	inline Void _ShowLoadingPrompt(int busySpinnerType) { return _i<Void>(0xBD12F8228410D9B4, busySpinnerType); }
	inline Void EndTextCommandClearPrint() { return _i<Void>(0xFCC75460ABA29378); }
	inline Void EndTextCommandDisplayHelp(Any p0, bool loop, bool beep, int shape) { return _i<Void>(0x238FFE5C7B0498A6, p0, loop, beep, shape); }
	inline Void EndTextCommandDisplayText(float x, float y, Any p2) { return _i<Void>(0xCD015E5BB0D96A57, x, y, p2); }
	inline int _EndTextCommandGetLineCount(float x, float y) { return _i<int>(0x9040DFB09BE75706, x, y); }
	inline float _EndTextCommandGetWidth(int font) { return _i<float>(0x85F061DA64ED2F67, font); }
	inline bool EndTextCommandIsMessageDisplayed() { return _i<bool>(0x8A9BA1AB3E237613); }
	inline bool EndTextCommandIsThisHelpMessageBeingDisplayed(int p0) { return _i<bool>(0x10BDDBFC529428DD, p0); }
	inline Void _EndTextCommandTimer(bool p0) { return _i<Void>(0xA86911979638106F, p0); }
	inline Void EndTextCommandPrint(int duration, bool drawImmediately) { return _i<Void>(0x9D77056A530643F6, duration, drawImmediately); }
	inline Void EndTextCommandSetBlipName(Blip blip) { return _i<Void>(0xBC38B49BCB83BC9B, blip); }
	inline int _DrawNotificationAward(String p0, String p1, int p2, int p3, String p4) { return _i<int>(0xAA295B6F28BD587D, p0, p1, p2, p3, p4); }
	inline int _DrawNotificationApartmentInvite(bool p0, bool p1, int* p2, int p3, bool isLeader, bool unk0, int clanDesc, int R, int G, int B) { return _i<int>(0x97C9E4E7024A8F2C, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); }
	inline int _DrawNotificationClanInvite(bool p0, bool p1, int* p2, int p3, bool isLeader, bool unk0, int clanDesc, String playerName, int R, int G, int B) { return _i<int>(0x137BC35589E34E1E, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); }
	inline Any _0x8EFCCF6EC66D85E4(Any* p0, Any* p1, Any* p2, bool p3, bool p4) { return _i<Any>(0x8EFCCF6EC66D85E4, p0, p1, p2, p3, p4); }
	inline int _SetNotificationMessage2(String picName1, String picName2, bool flash, int iconType, String sender, String subject) { return _i<int>(0x1CCD9A37359072CF, picName1, picName2, flash, iconType, sender, subject); }
	inline int _SetNotificationMessage3(String picName1, String picName2, bool p2, Any p3, String p4, String p5) { return _i<int>(0xC6F580E4C94926AC, picName1, picName2, p2, p3, p4, p5); }
	inline int _SetNotificationMessage4(String picName1, String picName2, bool flash, int iconType, String sender, String subject, float duration) { return _i<int>(0x1E6611149DB3DB6B, picName1, picName2, flash, iconType, sender, subject, duration); }
	inline int _SetNotificationMessageClanTag(String picName1, String picName2, bool flash, int iconType, String sender, String subject, float duration, String clanTag) { return _i<int>(0x5CBF7BADE20DB93E, picName1, picName2, flash, iconType, sender, subject, duration, clanTag); }
	inline int _SetNotificationMessageClanTag2(String picName1, String picName2, bool flash, int iconType1, String sender, String subject, float duration, String clanTag, int iconType2, int p9) { return _i<int>(0x531B84E7DA981FB6, picName1, picName2, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); }
	inline int _DrawNotificationWithIcon(int type, int image, String text) { return _i<int>(0xD202B92CBF1D816F, type, image, text); }
	inline int _DrawNotificationWithButton(int type, String button, String text) { return _i<int>(0xDD6CB2CCE7C2735C, type, button, text); }
	inline int _SetNotificationMessage(String p0, int p1, int p2, int p3, bool p4, String picName1, String picName2) { return _i<int>(0x2B7E9A4EAAA93C89, p0, p1, p2, p3, p4, picName1, picName2); }
	inline int _DrawNotification(bool blink, bool p1) { return _i<int>(0x2ED7843F8F801023, blink, p1); }
	inline int _DrawNotification4(bool blink, bool p1) { return _i<int>(0xF020C96915705B3A, blink, p1); }
	inline int _DrawNotification2(bool blink, bool p1) { return _i<int>(0x44FA03975424A0EE, blink, p1); }
	inline int _DrawNotification3(bool blink, bool p1) { return _i<int>(0x378E809BF61EC840, blink, p1); }
	inline Any _0x33EE12743CCD6343(Any p0, Any p1, Any p2) { return _i<Any>(0x33EE12743CCD6343, p0, p1, p2); }
	inline Any _0xC8F3AAF93D0600BF(Any p0, Any p1, Any p2, Any p3) { return _i<Any>(0xC8F3AAF93D0600BF, p0, p1, p2, p3); }
	inline Any _0x7AE0589093A2E088(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Any>(0x7AE0589093A2E088, p0, p1, p2, p3, p4, p5); }
	inline Any _0xB6871B0555B02996(Any* p0, Any* p1, Any p2, Any* p3, Any* p4, Any p5, Any p6, Any p7) { return _i<Any>(0xB6871B0555B02996, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline Void _0xCEF214315D276FD1(bool p0) { return _i<Void>(0xCEF214315D276FD1, p0); }
	inline Void FlashAbilityBar(bool toggle) { return _i<Void>(0x02CFBA0C9E9275CE, toggle); }
	inline Void FlashMinimapDisplay() { return _i<Void>(0xF2DD778C22B15BDA); }
	inline Void _0x6B1DE27EE78E6A19(Any p0) { return _i<Void>(0x6B1DE27EE78E6A19, p0); }
	inline Void FlashWantedDisplay(bool p0) { return _i<Void>(0xA18AFB39081B6A1F, p0); }
	inline Void _0xEE4C0E6DBC6F2C6F() { return _i<Void>(0xEE4C0E6DBC6F2C6F); }
	inline Void _0x8817605C2BA76200() { return _i<Void>(0x8817605C2BA76200); }
	inline Void _0x57D760D55F54E071(bool p0) { return _i<Void>(0x57D760D55F54E071, p0); }
	inline Void _0xBA8D65C1C65702E5(bool p0) { return _i<Void>(0xBA8D65C1C65702E5, p0); }
	inline Any _0x1121BFA1A1A522A8() { return _i<Any>(0x1121BFA1A1A522A8); }
	inline Blip* _0x7CD934010E115C2C(Ped ped) { return _i<Blip*>(0x7CD934010E115C2C, ped); }
	inline Blip _0x56176892826A4FE8(Ped ped) { return _i<Blip>(0x56176892826A4FE8, ped); }
	inline int GetBlipAlpha(Blip blip) { return _i<int>(0x970F608F0EE6C885, blip); }
	inline int GetBlipColour(Blip blip) { return _i<int>(0xDF729E8D20CF7327, blip); }
	inline Any _0x2C173AE2BDB9385E(Any p0) { return _i<Any>(0x2C173AE2BDB9385E, p0); }
	inline Blip GetBlipFromEntity(Entity entity) { return _i<Blip>(0xBC8DBDCA2436F7E8, entity); }
	inline int GetBlipHudColour(Blip blip) { return _i<int>(0x729B5F1EFBC0AAEE, blip); }
	inline Vector3 GetBlipInfoIdCoord(Blip blip) { return _i<Vector3>(0xFA7C7F0AADF25D09, blip); }
	inline Vector3 GetBlipCoords(Blip blip) { return _i<Vector3>(0x586AFE3FF72D996E, blip); }
	inline int GetBlipInfoIdDisplay(Blip blip) { return _i<int>(0x1E314167F701DC3B, blip); }
	inline Entity GetBlipInfoIdEntityIndex(Blip blip) { return _i<Entity>(0x4BA4E2553AFEDC2C, blip); }
	inline int GetBlipInfoIdType(Blip blip) { return _i<int>(0xBE9B0959FFD0779B, blip); }
	inline int GetBlipSprite(Blip blip) { return _i<int>(0x1FC877464A04FC4F, blip); }
	inline String _GetTextSubstring(String text, int position, int length) { return _i<String>(0x169BD9382084C8C0, text, position, length); }
	inline String _GetTextSubstringSlice(String text, int startPosition, int endPosition) { return _i<String>(0xCE94AEBA5D82908A, text, startPosition, endPosition); }
	inline String _GetTextSubstringSafe(String text, int position, int length, int maxLength) { return _i<String>(0xB2798643312205C5, text, position, length, maxLength); }
	inline bool _0x8F08017F9D7C47BD(Any p0, Any* p1, Any p2) { return _i<bool>(0x8F08017F9D7C47BD, p0, p1, p2); }
	inline bool _0xCA6B2F7CE32AB653(Any p0, Any* p1, Any p2) { return _i<bool>(0xCA6B2F7CE32AB653, p0, p1, p2); }
	inline bool _0x24A49BEAF468DC90(Any p0, Any* p1, Any p2, Any p3, Any p4) { return _i<bool>(0x24A49BEAF468DC90, p0, p1, p2, p3, p4); }
	inline Any _0xD484BF71050CA1EE(Any p0) { return _i<Any>(0xD484BF71050CA1EE, p0); }
	inline Hash _GetCurrentFrontendMenu() { return _i<Hash>(0x2309595AD6145265); }
	inline Any _0x01A358D9128B7A86() { return _i<Any>(0x01A358D9128B7A86); }
	inline int GetCurrentWebsiteId() { return _i<int>(0x97D47996FC48CBAD); }
	inline Any _0xC2D2AD9EAAE265B8() { return _i<Any>(0xC2D2AD9EAAE265B8); }
	inline String _GetLabelText(String labelName) { return _i<String>(0x7B5280EBA9840C72, labelName); }
	inline Blip GetFirstBlipInfoId(int blipSprite) { return _i<Blip>(0x1BEDE233E6CD2A1F, blipSprite); }
	inline Any _0x98C3CF913D895111(Any p0, Any p1) { return _i<Any>(0x98C3CF913D895111, p0, p1); }
	inline Any _0xE3B05614DCE1D014(Any p0) { return _i<Any>(0xE3B05614DCE1D014, p0); }
	inline Void GetHudColour(int hudColorIndex, int* r, int* g, int* b, int* a) { return _i<Void>(0x7C9C91AB74A0360F, hudColorIndex, r, g, b, a); }
	inline Vector3 GetHudComponentPosition(int id) { return _i<Vector3>(0x223CA69A8C4417FD, id); }
	inline bool _GetScreenCoordFromWorldCoord(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return _i<bool>(0xF9904D11F1ACBEC3, worldX, worldY, worldZ, screenX, screenY); }
	inline int GetLengthOfLiteralString(String string) { return _i<int>(0xF030907CCBB8A9FD, string); }
	inline int _GetLengthOfString(String STRING) { return _i<int>(0x43E4111189E54F0E, STRING); }
	inline int GetLengthOfStringWithThisTextLabel(String gxt) { return _i<int>(0x801BD273D3A23F74, gxt); }
	inline Blip GetMainPlayerBlipId() { return _i<Blip>(0xDCD4EC3F419D02FA); }
	inline Void _0x7E17BE53E1AAABAF(Any* p0, Any* p1, Any* p2) { return _i<Void>(0x7E17BE53E1AAABAF, p0, p1, p2); }
	inline bool _0x052991E59076E4E4(Hash p0, Any* p1) { return _i<bool>(0x052991E59076E4E4, p0, p1); }
	inline bool _0x5FBD7095FE7AE57F(Any p0, float* p1) { return _i<bool>(0x5FBD7095FE7AE57F, p0, p1); }
	inline bool SetUseridsUihidden(Any p0, Any* p1) { return _i<bool>(0xEF4CED81CEBEDC6D, p0, p1); }
	inline bool _0x90A6526CF0381030(Any p0, Any* p1, Any p2, Any p3) { return _i<bool>(0x90A6526CF0381030, p0, p1, p2, p3); }
	inline Void _0x36C1451A88A09630(Any* p0, Any* p1) { return _i<Void>(0x36C1451A88A09630, p0, p1); }
	inline bool _IsMinimapAreaRevealed(float x, float y, float radius) { return _i<bool>(0x6E31B91145873922, x, y, radius); }
	inline float _0xE0130B41D3CF4574() { return _i<float>(0xE0130B41D3CF4574); }
	inline bool _0x632B2940C67F4EA9(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return _i<bool>(0x632B2940C67F4EA9, scaleformHandle, p1, p2, p3); }
	inline Any GetNamedRendertargetRenderId(String p0) { return _i<Any>(0x1A6478B61C6BDC3B, p0); }
	inline Blip DisableBlipNameForVar() { return _i<Blip>(0x5C90988E7C8E1AF4); }
	inline Blip GetNextBlipInfoId(int blipSprite) { return _i<Blip>(0x14F96AA50D6FBEA7, blipSprite); }
	inline Any _0x3F0CF9CB7E589B88() { return _i<Any>(0x3F0CF9CB7E589B88); }
	inline int GetNumberOfActiveBlips() { return _i<int>(0x9A3FF3DE163034E8); }
	inline Vector3 _0x5BFF36D6ED83E0AE() { return _i<Vector3>(0x5BFF36D6ED83E0AE); }
	inline int GetPauseMenuState() { return _i<int>(0x272ACD84970869C5); }
	inline bool _0xA238192F33110615(int* p0, int* p1, int* p2) { return _i<bool>(0xA238192F33110615, p0, p1, p2); }
	inline float _GetTextScaleHeight(float size, int font) { return _i<float>(0xDB88A37483346780, size, font); }
	inline Any _0x593FEAE1F73392D4() { return _i<Any>(0x593FEAE1F73392D4); }
	inline String GetStreetNameFromHashKey(Hash hash) { return _i<String>(0xD0EF8A959B8A4CB9, hash); }
	inline int _GetBlipInfoIdIterator() { return _i<int>(0x186E5D252FA50E7D); }
	inline Void GivePedToPauseMenu(Ped ped, int p1) { return _i<Void>(0xAC0BFBDC3BE00E14, ped, p1); }
	inline bool HasAdditionalTextLoaded(int slot) { return _i<bool>(0x02245FE4BED318B8, slot); }
	inline Any _0xA277800A9EAE340E() { return _i<Any>(0xA277800A9EAE340E); }
	inline Any _0x2E22FEFA0100275E() { return _i<Any>(0x2E22FEFA0100275E); }
	inline Any _0xF284AC67940C6812() { return _i<Any>(0xF284AC67940C6812); }
	inline bool IsScriptedHudComponentActive(int id) { return _i<bool>(0xDD100EB17A94FF65, id); }
	inline bool _0x214CD562A939246A() { return _i<bool>(0x214CD562A939246A); }
	inline bool HasThisAdditionalTextLoaded(String gxt, int slot) { return _i<bool>(0xADBF060E2B30C5BC, gxt, slot); }
	inline int GetDefaultScriptRendertargetRenderId() { return _i<int>(0x52F0982D7FD156B6); }
	inline bool _0x4A9923385BDB9DAD() { return _i<bool>(0x4A9923385BDB9DAD); }
	inline Void HideHelpTextThisFrame() { return _i<Void>(0xD46923FC481CA285); }
	inline Void HideHudAndRadarThisFrame() { return _i<Void>(0x719FF505F097FD20); }
	inline Void HideHudComponentThisFrame(int id) { return _i<Void>(0x6806C51AD12B83B8, id); }
	inline Void HideLoadingOnFadeThisFrame() { return _i<Void>(0x4B0311D3CDC4648F); }
	inline Void _DisableRadarThisFrame() { return _i<Void>(0x5FBAE526203990C9); }
	inline Void _0x20FE7FDFEEAD38C0() { return _i<Void>(0x20FE7FDFEEAD38C0); }
	inline Void HideNumberOnBlip(Blip blip) { return _i<Void>(0x532CFF637EF80148, blip); }
	inline Void HideScriptedHudComponentThisFrame(int id) { return _i<Void>(0xE374C498D8BADC14, id); }
	inline Void _0xA4DEDE28B1814289() { return _i<Void>(0xA4DEDE28B1814289); }
	inline Void _0x488043841BBE156F() { return _i<Void>(0x488043841BBE156F); }
	inline Void _ShowWeaponWheel(bool forcedShow) { return _i<Void>(0xEB354E5376BC81A7, forcedShow); }
	inline Hash _0xA48931185F0536FE() { return _i<Hash>(0xA48931185F0536FE); }
	inline Any _0xA13E93403F26C812(Any p0) { return _i<Any>(0xA13E93403F26C812, p0); }
	inline Void _0x72C1056D678BB7D8(Hash weaponHash) { return _i<Void>(0x72C1056D678BB7D8, weaponHash); }
	inline Void _0x14C9FDCC41F81F63(bool p0) { return _i<Void>(0x14C9FDCC41F81F63, p0); }
	inline Void _0x0AFC4AF510774B47() { return _i<Void>(0x0AFC4AF510774B47); }
	inline bool IsBlipFlashing(Blip blip) { return _i<bool>(0xA5E41FD83AD6CEF0, blip); }
	inline bool IsBlipOnMinimap(Blip blip) { return _i<bool>(0xE41CA53051197A27, blip); }
	inline bool IsBlipShortRange(Blip blip) { return _i<bool>(0xDA5F8727EB75B926, blip); }
	inline bool _0x2432784ACA090DA4(Any p0) { return _i<bool>(0x2432784ACA090DA4, p0); }
	inline Any _0x3BAB9A4E4F2FF5C7() { return _i<Any>(0x3BAB9A4E4F2FF5C7); }
	inline bool IsHelpMessageBeingDisplayed() { return _i<bool>(0x4D79439A6B55AC67); }
	inline bool IsHelpMessageFadingOut() { return _i<bool>(0x327EDEEEAC55C369); }
	inline bool IsHelpMessageOnScreen() { return _i<bool>(0xDAD37F45428801AE); }
	inline bool _0x4167EFE0527D706E() { return _i<bool>(0x4167EFE0527D706E); }
	inline bool IsHudComponentActive(int id) { return _i<bool>(0xBC4C9EA5391ECC0D, id); }
	inline bool IsHudHidden() { return _i<bool>(0xA86478C6958735C5); }
	inline bool IsHudPreferenceSwitchedOn() { return _i<bool>(0x1930DFA731813EC4); }
	inline Any _0x801879A9B4F4B2FB() { return _i<Any>(0x801879A9B4F4B2FB); }
	inline bool IsMessageBeingDisplayed() { return _i<bool>(0x7984C03AA5CC2F41); }
	inline bool _IsRadarEnabled() { return _i<bool>(0xAF754F20EB5CD51A); }
	inline bool IsMissionCreatorBlip(Blip blip) { return _i<bool>(0x26F49BF3381D933D, blip); }
	inline Any _0x3D9ACB1EB139E702() { return _i<Any>(0x3D9ACB1EB139E702); }
	inline bool IsMpGamerTagActive(int gamerTagId) { return _i<bool>(0x4E929E7A5796FD26, gamerTagId); }
	inline bool AddTrevorRandomModifier(int gamerTagId) { return _i<bool>(0x595B5178E412E199, gamerTagId); }
	inline bool _HasMpGamerTag() { return _i<bool>(0x6E0EB3EB47C8D7AA); }
	inline bool _IsTextChatActive() { return _i<bool>(0xB118AF58B5F332A1); }
	inline bool IsNamedRendertargetLinked(Hash hash) { return _i<bool>(0x113750538FA31298, hash); }
	inline bool IsNamedRendertargetRegistered(String p0) { return _i<bool>(0x78DCDC15C9F116B4, p0); }
	inline Any _0x4E3CD0EF8A489541() { return _i<Any>(0x4E3CD0EF8A489541); }
	inline int _0x6F72CD94F7B5B68C() { return _i<int>(0x6F72CD94F7B5B68C); }
	inline bool IsSocialClubActive() { return _i<bool>(0xC406BE343FC4B9AF); }
	inline Any _0x9049FE339D5F6F6F() { return _i<Any>(0x9049FE339D5F6F6F); }
	inline bool IsPauseMenuActive() { return _i<bool>(0xB0034A223497FFCB); }
	inline bool IsPauseMenuRestarting() { return _i<bool>(0x1C491717107431C7); }
	inline bool IsRadarHidden() { return _i<bool>(0x157F93B036700462); }
	inline bool IsRadarPreferenceSwitchedOn() { return _i<bool>(0x9EB6522EA68F22FE); }
	inline Any _0x9135584D09A3437E() { return _i<Any>(0x9135584D09A3437E); }
	inline bool _0x09C0403ED9A751C2(Any p0) { return _i<bool>(0x09C0403ED9A751C2, p0); }
	inline Any _0x2F057596F2BD0061() { return _i<Any>(0x2F057596F2BD0061); }
	inline bool IsStreamingAdditionalText(int p0) { return _i<bool>(0x8B6817B71B85EBF0, p0); }
	inline bool IsSubtitlePreferenceSwitchedOn() { return _i<bool>(0xAD6DACA4BA53E0A4); }
	inline bool _HasMpGamerTag2(int gamerTagId) { return _i<bool>(0xEB709A36958ABE0D, gamerTagId); }
	inline bool IsWarningMessageActive() { return _i<bool>(0xE18B138FABC53103); }
	inline Any _0xAF42195A42C63BBA() { return _i<Any>(0xAF42195A42C63BBA); }
	inline bool IsWaypointActive() { return _i<bool>(0x1DD1F58F493F1DA5); }
	inline Void LinkNamedRendertarget(Hash hash) { return _i<Void>(0xF6C09E276AEB3F2D, hash); }
	inline Void LockMinimapAngle(int angle) { return _i<Void>(0x299FAEBB108AE05B, angle); }
	inline Void LockMinimapPosition(float x, float y) { return _i<Void>(0x1279E861A329E73F, x, y); }
	inline Void _SetTextChatUnk(bool p0) { return _i<Void>(0x1DB21A44B09E8BA3, p0); }
	inline Void _0x7C226D5346D4D10A(Any p0) { return _i<Void>(0x7C226D5346D4D10A, p0); }
	inline Void _ShowSocialClubLegalScreen() { return _i<Void>(0x805D7CBB36FD6C4C); }
	inline Void _0x523A590C1A3CC0D3() { return _i<Void>(0x523A590C1A3CC0D3); }
	inline Void _0x75D3691713C3B05A() { return _i<Void>(0x75D3691713C3B05A); }
	inline Void _0xF47E567B3630DD12(Any p0, Any p1) { return _i<Void>(0xF47E567B3630DD12, p0, p1); }
	inline Void _0x6A1738B4323FE2D9(Any p0) { return _i<Void>(0x6A1738B4323FE2D9, p0); }
	inline Void _0x77F16B447824DA6C(Any p0) { return _i<Void>(0x77F16B447824DA6C, p0); }
	inline Void _0xCDCA26E80FAECB8F() { return _i<Void>(0xCDCA26E80FAECB8F); }
	inline Void _AddFrontendMenuContext(Hash hash) { return _i<Void>(0xDD564BDD0472C936, hash); }
	inline Void ObjectDecalToggle(Hash hash) { return _i<Void>(0x444D8CF241EC25C5, hash); }
	inline Any _0xDE03620F8703A9DF() { return _i<Any>(0xDE03620F8703A9DF); }
	inline bool _0xC8E1071177A23BE5(Any* p0, Any* p1, Any* p2) { return _i<bool>(0xC8E1071177A23BE5, p0, p1, p2); }
	inline Any _0x359AF31A4B52F5ED() { return _i<Any>(0x359AF31A4B52F5ED); }
	inline Any _0x13C4B962653A5280() { return _i<Any>(0x13C4B962653A5280); }
	inline bool _0x84698AB38D0C6636(Hash hash) { return _i<bool>(0x84698AB38D0C6636, hash); }
	inline Any _0x2A25ADC48F87841F() { return _i<Any>(0x2A25ADC48F87841F); }
	inline Void EnableDeathbloodSeethrough(bool p0) { return _i<Void>(0x4895BDEA16E7C080, p0); }
	inline Void _0xC78E239AC5B2DDB9(bool p0, Any p1, Any p2) { return _i<Void>(0xC78E239AC5B2DDB9, p0, p1, p2); }
	inline Void _0xF06EBB91A81E09E3(bool p0) { return _i<Void>(0xF06EBB91A81E09E3, p0); }
	inline Void _0x2DE6C5E2E996F178(Any p0) { return _i<Void>(0x2DE6C5E2E996F178, p0); }
	inline Void _0xC65AB383CD91DF98() { return _i<Void>(0xC65AB383CD91DF98); }
	inline Void PulseBlip(Blip blip) { return _i<Void>(0x742D6FD43115AF73, blip); }
	inline Void RefreshWaypoint() { return _i<Void>(0x81FA173F170560D1); }
	inline bool RegisterNamedRendertarget(String p0, bool p1) { return _i<bool>(0x57D9C12635E25CE3, p0, p1); }
	inline Void _0x14621BB1DF14E2B2() { return _i<Void>(0x14621BB1DF14E2B2); }
	inline bool ReleaseNamedRendertarget(Any* p0) { return _i<bool>(0xE9F6FFE837354DD4, p0); }
	inline Void _0x2916A928514C9827() { return _i<Void>(0x2916A928514C9827); }
	inline Void RemoveBlip(Blip* blip) { return _i<Void>(0x86A652570E5F25DD, blip); }
	inline Void _0xC594B315EDF2D4AF(Ped ped) { return _i<Void>(0xC594B315EDF2D4AF, ped); }
	inline Void RemoveMpGamerTag(int gamerTagId) { return _i<Void>(0x31698AA80E0223F8, gamerTagId); }
	inline Void RemoveMultiplayerBankCash() { return _i<Void>(0xC7C6789AA1CFEDD0); }
	inline Void RemoveMultiplayerHudCash() { return _i<Void>(0x968F270E39141ECA); }
	inline Void _0x95CF81BD06EE1887() { return _i<Void>(0x95CF81BD06EE1887); }
	inline Void _0x6EF54AB721DC6242() { return _i<Void>(0x6EF54AB721DC6242); }
	inline Void _SetHudColoursSwitch(int hudColorIndex, int hudColorIndex2) { return _i<Void>(0x1CCC708F0F850613, hudColorIndex, hudColorIndex2); }
	inline Void _SetHudColour(int hudColorIndex, int r, int g, int b, int a) { return _i<Void>(0xF314CF4F0211894E, hudColorIndex, r, g, b, a); }
	inline Void RequestAdditionalText(String gxt, int slot) { return _i<Void>(0x71A78003C8E71424, gxt, slot); }
	inline Void _RequestAdditionalText2(String gxt, int slot) { return _i<Void>(0x6009F9F1AE90D8A6, gxt, slot); }
	inline Void _0xB99C4E4D9499DF29(bool p0) { return _i<Void>(0xB99C4E4D9499DF29, p0); }
	inline Void ResetHudComponentValues(int id) { return _i<Void>(0x450930E616475D0D, id); }
	inline Void ResetReticuleValues() { return _i<Void>(0x12782CE0A636E9F0); }
	inline Void RestartFrontendMenu(Hash menuHash, int p1) { return _i<Void>(0x10706DC6AD2D49C0, menuHash, p1); }
	inline Void SetAbilityBarValue(float p0, float p1) { return _i<Void>(0x9969599CCFF5D85E, p0, p1); }
	inline Void _0x577599CCED639CA2(Any p0) { return _i<Void>(0x577599CCED639CA2, p0); }
	inline Void _0xEE76FF7E6A0166B0(int headDisplayId, bool p1) { return _i<Void>(0xEE76FF7E6A0166B0, headDisplayId, p1); }
	inline Void _SetRadarBigmapEnabled(bool toggleBigMap, bool showFullMap) { return _i<Void>(0x231C8F89D0539D8F, toggleBigMap, showFullMap); }
	inline Void SetBlipAlpha(Blip blip, int alpha) { return _i<Void>(0x45FF974EEE1C8734, blip, alpha); }
	inline Void SetBlipAsFriendly(Blip blip, bool toggle) { return _i<Void>(0x6F6F290102C02AB4, blip, toggle); }
	inline Void _SetBlipShrink(Blip blip, bool toggle) { return _i<Void>(0x2B6D467DAB714E8D, blip, toggle); }
	inline Void SetBlipAsMissionCreatorBlip(Blip blip, bool toggle) { return _i<Void>(0x24AC0137444F9FD5, blip, toggle); }
	inline Void SetBlipAsShortRange(Blip blip, bool toggle) { return _i<Void>(0xBE8BE4FE60E27B72, blip, toggle); }
	inline Void SetBlipBright(Blip blip, bool toggle) { return _i<Void>(0xB203913733F27884, blip, toggle); }
	inline Void SetBlipCategory(Blip blip, int index) { return _i<Void>(0x234CDD44D996FD9A, blip, index); }
	inline Void SetBlipColour(Blip blip, int color) { return _i<Void>(0x03D7FB09E75D6B7E, blip, color); }
	inline Void SetBlipCoords(Blip blip, float posX, float posY, float posZ) { return _i<Void>(0xAE2AF67E9D9AF65D, blip, posX, posY, posZ); }
	inline Void SetBlipDisplay(Blip blip, int displayId) { return _i<Void>(0x9029B2F3DA924928, blip, displayId); }
	inline Void _0xC4278F70131BAA6D(Any p0, bool p1) { return _i<Void>(0xC4278F70131BAA6D, p0, p1); }
	inline Void SetBlipFade(Blip blip, int opacity, int duration) { return _i<Void>(0x2AEE8F8390D2298C, blip, opacity, duration); }
	inline Void SetBlipFlashes(Blip blip, bool toggle) { return _i<Void>(0xB14552383D39CE3E, blip, toggle); }
	inline Void SetBlipFlashesAlternate(Blip blip, bool toggle) { return _i<Void>(0x2E8D9498C56DD0D1, blip, toggle); }
	inline Void SetBlipFlashInterval(Blip blip, Any p1) { return _i<Void>(0xAA51DB313C010A7E, blip, p1); }
	inline Void SetBlipFlashTimer(Blip blip, int duration) { return _i<Void>(0xD3CD6FD297AE87CC, blip, duration); }
	inline Void _0x54318C915D27E4CE(Any p0, bool p1) { return _i<Void>(0x54318C915D27E4CE, p0, p1); }
	inline Void SetBlipHighDetail(Blip blip, bool toggle) { return _i<Void>(0xE2590BC29220CEBB, blip, toggle); }
	inline Void _0xB552929B85FC27EC(Any p0, Any p1) { return _i<Void>(0xB552929B85FC27EC, p0, p1); }
	inline Void SetBlipNameFromTextFile(Blip blip, String gxtEntry) { return _i<Void>(0xEAA0FFE120D92784, blip, gxtEntry); }
	inline Void SetBlipNameToPlayerName(Blip blip, Player player) { return _i<Void>(0x127DE7B20C60A6A3, blip, player); }
	inline Void SetBlipPriority(Blip blip, int priority) { return _i<Void>(0xAE9FC9EF6A9FAC79, blip, priority); }
	inline Void SetBlipRotation(Blip blip, int rotation) { return _i<Void>(0xF87683CDF73C3F6E, blip, rotation); }
	inline Void _0xA8B6AFDAC320AC87(Any p0, Any p1) { return _i<Void>(0xA8B6AFDAC320AC87, p0, p1); }
	inline Void SetBlipRoute(Blip blip, bool enabled) { return _i<Void>(0x4F7D8A9BFB0B43E9, blip, enabled); }
	inline Void SetBlipRouteColour(Blip blip, int colour) { return _i<Void>(0x837155CD2F63DA09, blip, colour); }
	inline Void SetBlipScale(Blip blip, float scale) { return _i<Void>(0xD38744167B2FA257, blip, scale); }
	inline Void SetBlipSecondaryColour(Blip blip, float r, float g, float b) { return _i<Void>(0x14892474891E09EB, blip, r, g, b); }
	inline Void _0x4B5B620C9B59ED34(Any p0, Any p1) { return _i<Void>(0x4B5B620C9B59ED34, p0, p1); }
	inline Void SetBlipShowCone(Blip blip, bool toggle) { return _i<Void>(0x13127EC3665E8EE1, blip, toggle); }
	inline Void SetBlipSprite(Blip blip, int spriteId) { return _i<Void>(0xDF735600A4696DAF, blip, spriteId); }
	inline Void _0x2C9F302398E13141(Any p0, Any p1) { return _i<Void>(0x2C9F302398E13141, p0, p1); }
	inline Void _0xD1942374085C8469(Any p0) { return _i<Void>(0xD1942374085C8469, p0); }
	inline Void _SetNotificationColorNext(int hudIndex) { return _i<Void>(0x39BBF623FC803EAC, hudIndex); }
	inline Void _0x817B86108EB94E51(bool p0, Any* p1, Any* p2, Any* p3, Any* p4, Any* p5, Any* p6, Any* p7, Any* p8) { return _i<Void>(0x817B86108EB94E51, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline Void _0x04655F9D075D0AE5(bool p0) { return _i<Void>(0x04655F9D075D0AE5, p0); }
	inline Void _0x2632482FD6B9AB87() { return _i<Void>(0x2632482FD6B9AB87); }
	inline Void _0xA17784FCA9548D15(Any p0, Any p1, Any p2) { return _i<Void>(0xA17784FCA9548D15, p0, p1, p2); }
	inline Void _SetMinimapAttitudeIndicatorLevel(float altitude, bool p1) { return _i<Void>(0xD201F3FF917A506D, altitude, p1); }
	inline Void _SetPlayerBlipPositionThisFrame(float x, float y) { return _i<Void>(0x77E2DD177910E1CF, x, y); }
	inline Void _0xCD74233600C4EA6B(Any p0) { return _i<Void>(0xCD74233600C4EA6B, p0); }
	inline Void _0x7679CC1BCEBE3D4C(Any p0, float p1, float p2) { return _i<Void>(0x7679CC1BCEBE3D4C, p0, p1, p2); }
	inline Void _0x788E7FD431BD67F1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Void>(0x788E7FD431BD67F1, p0, p1, p2, p3, p4, p5); }
	inline Void _0xB094BC1DB4018240(Any p0, Any p1, float p2, float p3) { return _i<Void>(0xB094BC1DB4018240, p0, p1, p2, p3); }
	inline Void _0x784BA7E0ECEB4178(Any p0, float x, float y, float z) { return _i<Void>(0x784BA7E0ECEB4178, p0, x, y, z); }
	inline Void _0x2790F4B17D098E26(Any p0) { return _i<Void>(0x2790F4B17D098E26, p0); }
	inline Void SetFrontendActive(bool active) { return _i<Void>(0x745711A75AB09277, active); }
	inline Void _0x900086F371220B6F(bool p0, Any p1, Any p2) { return _i<Void>(0x900086F371220B6F, p0, p1, p2); }
	inline Void SetGpsFlags(int p0, float p1) { return _i<Void>(0x5B440763A4C8D15B, p0, p1); }
	inline Void SetGpsFlashes(bool toggle) { return _i<Void>(0x320D0E0D936A0E9B, toggle); }
	inline Void _0x3DDA37128DD1ACA8(bool p0) { return _i<Void>(0x3DDA37128DD1ACA8, p0); }
	inline Void _0x3F5CC444DCAAA8F2(Any p0, Any p1, bool p2) { return _i<Void>(0x3F5CC444DCAAA8F2, p0, p1, p2); }
	inline Void _0xB9C362BABECDDC7A(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0xB9C362BABECDDC7A, p0, p1, p2, p3, p4); }
	inline Void SetHudComponentPosition(int id, float x, float y) { return _i<Void>(0xAABB1F56E2A17CED, id, x, y); }
	inline Void _0x06A320535F5F0248(Any p0) { return _i<Void>(0x06A320535F5F0248, p0); }
	inline Void _0x975D66A0BC17064C(Any p0) { return _i<Void>(0x975D66A0BC17064C, p0); }
	inline Void SetMinimapBlockWaypoint(bool toggle) { return _i<Void>(0x58FADDED207897DC, toggle); }
	inline Any SetMinimapComponent(int p0, bool p1, int p2) { return _i<Any>(0x75A9A10948D1DEA6, p0, p1, p2); }
	inline Void _0x62E849B7EB28E770(bool p0) { return _i<Void>(0x62E849B7EB28E770, p0); }
	inline Void _0x0923DBF87DFF735E(float x, float y, float z) { return _i<Void>(0x0923DBF87DFF735E, x, y, z); }
	inline Void _0x71BDB63DBAF8DA59(Any p0) { return _i<Void>(0x71BDB63DBAF8DA59, p0); }
	inline Void _0x35EDD5B2E3FF01C0() { return _i<Void>(0x35EDD5B2E3FF01C0); }
	inline Void _SetMinimapRevealed(bool toggle) { return _i<Void>(0xF8DEE0A5600CBB93, toggle); }
	inline Void _SetNorthYanktonMap(bool toggle) { return _i<Void>(0x9133955F1A2DA957, toggle); }
	inline Void KeyHudColour(bool p0, Any p1) { return _i<Void>(0x1A5CD7752DD28CD3, p0, p1); }
	inline Void SetMissionName(bool p0, String name) { return _i<Void>(0x5F28ECF5FC84772F, p0, name); }
	inline Void _0xE45087D85F468BC2(bool p0, Any* p1) { return _i<Void>(0xE45087D85F468BC2, p0, p1); }
	inline Void _SetCursorSprite(int spriteId) { return _i<Void>(0x8DB8CFFD58B62552, spriteId); }
	inline Void _ShowCursorThisFrame() { return _i<Void>(0xAAE7CE1D63167423); }
	inline Void _0x98215325A695E78A(bool p0) { return _i<Void>(0x98215325A695E78A, p0); }
	inline Void _SetMpGamerTagIcons(int headDisplayId, bool p1) { return _i<Void>(0xA67F9C46D612B6F1, headDisplayId, p1); }
	inline Void SetMpGamerTagAlpha(int gamerTagId, int component, int alpha) { return _i<Void>(0xD48FE545CD46F857, gamerTagId, component, alpha); }
	inline Void _SetMpGamerTagChatting(int gamerTagId, String string) { return _i<Void>(0x7B7723747CCB55B6, gamerTagId, string); }
	inline Void SetMpGamerTagColour(int gamerTagId, int flag, int color) { return _i<Void>(0x613ED644950626AE, gamerTagId, flag, color); }
	inline Void SetMpGamerTagHealthBarColour(int headDisplayId, int color) { return _i<Void>(0x3158C77A7E888AB4, headDisplayId, color); }
	inline Void SetMpGamerTagName(int gamerTagId, String string) { return _i<Void>(0xDEA2B8283BAA3944, gamerTagId, string); }
	inline Void _0x9C16459B2324B2CF(Any p0, Any p1) { return _i<Void>(0x9C16459B2324B2CF, p0, p1); }
	inline Void SetMpGamerTagVisibility(int gamerTagId, int component, bool toggle, Any p3) { return _i<Void>(0x63BB75ABEDC1F6A0, gamerTagId, component, toggle, p3); }
	inline Void SetMpGamerTagWantedLevel(int gamerTagId, int wantedlvl) { return _i<Void>(0xCF228E2AA03099C3, gamerTagId, wantedlvl); }
	inline Void SetMultiplayerBankCash() { return _i<Void>(0xDD21B55DF695CD0A); }
	inline Void _0xC2D15BEF167E27BC() { return _i<Void>(0xC2D15BEF167E27BC); }
	inline Void SetNewWaypoint(float x, float y) { return _i<Void>(0xFE43368D2AA4F2FC, x, y); }
	inline Void SetPauseMenuActive(bool toggle) { return _i<Void>(0xDF47FC56C71569CF, toggle); }
	inline Void _0x3CA6050692BC61B0(bool p0) { return _i<Void>(0x3CA6050692BC61B0, p0); }
	inline Void _0xECF128344E9FF9F1(bool p0) { return _i<Void>(0xECF128344E9FF9F1, p0); }
	inline Void _0x0C4BBF625CA98C4E(Ped ped, bool p1) { return _i<Void>(0x0C4BBF625CA98C4E, ped, p1); }
	inline Void _0xE52B8E7F85D39A08(Ped ped, int unk) { return _i<Void>(0xE52B8E7F85D39A08, ped, unk); }
	inline Void HideSpecialAbilityLockonOperation(Any p0, bool p1) { return _i<Void>(0x3EED80DFF7325CAA, p0, p1); }
	inline Void _SetAiBlipMaxDistance(Ped ped, float distance) { return _i<Void>(0x97C65887D4B37FA9, ped, distance); }
	inline Void _0xFCFACD0DB9D7A57D(Any p0, Any p1) { return _i<Void>(0xFCFACD0DB9D7A57D, p0, p1); }
	inline Void _SetPedEnemyAiBlip(int pedHandle, bool showViewCones) { return _i<Void>(0xD30C50DF888D58B5, pedHandle, showViewCones); }
	inline Void _0xB13DCB4C6FAAD238(Any p0, Any p1, Any p2) { return _i<Void>(0xB13DCB4C6FAAD238, p0, p1, p2); }
	inline Void _0x7B21E0BB01E8224A(Any p0) { return _i<Void>(0x7B21E0BB01E8224A, p0); }
	inline Void _SetDirectorMode(bool toggle) { return _i<Void>(0x808519373FD336A3, toggle); }
	inline Void _0x41350B4FC28E3941(bool p0) { return _i<Void>(0x41350B4FC28E3941, p0); }
	inline Void _0x1EAC5F91BCBC5073(bool p0) { return _i<Void>(0x1EAC5F91BCBC5073, p0); }
	inline Void SetRadarAsExteriorThisFrame() { return _i<Void>(0xE81B7D2A3DAB2D81); }
	inline Void SetRadarAsInteriorThisFrame(Hash interior, float x, float y, int z, int zoom) { return _i<Void>(0x59E727A1C9D3E31A, interior, x, y, z, zoom); }
	inline Void SetRadarZoom(int zoomLevel) { return _i<Void>(0x096EF57A0C999BBA, zoomLevel); }
	inline Void RespondingAsTemp(float p0) { return _i<Void>(0xBD12C5EEE184C337, p0); }
	inline Void _0xF98E4B3E56AFC7B1(Any p0, float p1) { return _i<Void>(0xF98E4B3E56AFC7B1, p0, p1); }
	inline Void _SetRadarZoomLevelThisFrame(float zoomLevel) { return _i<Void>(0xCB7CC0D58405AD41, zoomLevel); }
	inline Void _0x25615540D894B814(Any p0, bool p1) { return _i<Void>(0x25615540D894B814, p0, p1); }
	inline Void _0x0CF54F20DE43879C(Any p0) { return _i<Void>(0x0CF54F20DE43879C, p0); }
	inline Void _0xD68A5FF8A3A89874(int r, int g, int b, int a) { return _i<Void>(0xD68A5FF8A3A89874, r, g, b, a); }
	inline Void _0x16A304E6CB2BFAB9(int r, int g, int b, int a) { return _i<Void>(0x16A304E6CB2BFAB9, r, g, b, a); }
	inline Void _0x9E778248D6685FE0(String p0) { return _i<Void>(0x9E778248D6685FE0, p0); }
	inline Void SetTextCentre(bool align) { return _i<Void>(0xC02F4DBFB51D988B, align); }
	inline Void SetTextColour(int red, int green, int blue, int alpha) { return _i<Void>(0xBE6B23FFA53FB442, red, green, blue, alpha); }
	inline Void SetTextDropshadow(int distance, int r, int g, int b, int a) { return _i<Void>(0x465C84BC39F1C351, distance, r, g, b, a); }
	inline Void SetTextDropShadow() { return _i<Void>(0x1CA3E9EAC9D93E5E); }
	inline Void SetTextFont(int fontType) { return _i<Void>(0x66E0276CC5F6B9DA, fontType); }
	inline Void _0x1185A8087587322C(bool p0) { return _i<Void>(0x1185A8087587322C, p0); }
	inline Void SetTextJustification(int justifyType) { return _i<Void>(0x4E096588B13FFECA, justifyType); }
	inline Void SetTextLeading(bool p0) { return _i<Void>(0xA50ABC31E3CDFAFF, p0); }
	inline Void SetTextOutline() { return _i<Void>(0x2513DFB0FB8400FE); }
	inline Void SetTextRenderId(int renderId) { return _i<Void>(0x5F15302936E07111, renderId); }
	inline Void SetTextRightJustify(bool toggle) { return _i<Void>(0x6B3C4650BC8BEE47, toggle); }
	inline Void SetTextScale(float p0, float size) { return _i<Void>(0x07C837F9A01C34C9, p0, size); }
	inline Void SetTextWrap(float start, float end) { return _i<Void>(0x63145D9C883A1A70, start, end); }
	inline Void _0x6CDD58146A436083(Any p0) { return _i<Void>(0x6CDD58146A436083, p0); }
	inline Void SetWarningMessage(String entryLine1, int instructionalKey, String entryLine2, bool p3, Any p4, Any* p5, Any* p6, bool background) { return _i<Void>(0x7B1776B3B53F8D74, entryLine1, instructionalKey, entryLine2, p3, p4, p5, p6, background); }
	inline bool _0xDAF87174BE7454FF(Any p0) { return _i<bool>(0xDAF87174BE7454FF, p0); }
	inline bool _0x0C5A80A9E096D529(Any p0, Any* p1, Any p2, Any p3, Any p4, Any p5) { return _i<bool>(0x0C5A80A9E096D529, p0, p1, p2, p3, p4, p5); }
	inline Void _SetWarningMessage2(String entryHeader, String entryLine1, int instructionalKey, String entryLine2, bool p4, Any p5, Any* p6, Any* p7, bool background) { return _i<Void>(0xDC38CC1E35B6A5D7, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, background); }
	inline Void _SetWarningMessage3(String entryHeader, String entryLine1, Any instructionalKey, String entryLine2, bool p4, Any p5, Any p6, Any* p7, Any* p8, bool p9) { return _i<Void>(0x701919482C74B5AB, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, p6, p7, p8, p9); }
	inline Void _0x15803FEC3B9A872B(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return _i<Void>(0x15803FEC3B9A872B, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	inline Void SetWaypointOff() { return _i<Void>(0xA7E4E2D361C2627F); }
	inline Void SetWidescreenFormat(Any p0) { return _i<Void>(0xC3B07BA00A83B0F1, p0); }
	inline Void _0x60E892BA4F5BDCA4() { return _i<Void>(0x60E892BA4F5BDCA4); }
	inline Void _0xDCFB5D4DB8BF367E(Any p0, bool p1) { return _i<Void>(0xDCFB5D4DB8BF367E, p0, p1); }
	inline Void _SetBlipFriend(Blip blip, bool toggle) { return _i<Void>(0x23C3EB807312F01A, blip, toggle); }
	inline Void ShowHeadingIndicatorOnBlip(Blip blip, bool toggle) { return _i<Void>(0x5FBCA48327B914DF, blip, toggle); }
	inline Void _0x75A16C3DA34F1245(Any p0, bool p1) { return _i<Void>(0x75A16C3DA34F1245, p0, p1); }
	inline Void ShowHudComponentThisFrame(int id) { return _i<Void>(0x0B4DF1FA60C0E664, id); }
	inline Void ShowNumberOnBlip(Blip blip, int number) { return _i<Void>(0xA3C0B359DCB848B6, blip, number); }
	inline Void _SetBlipFriendly(Blip blip, bool toggle) { return _i<Void>(0xB81656BC81FE24D1, blip, toggle); }
	inline Void _0xF1A6C18B35BCADE6(bool p0) { return _i<Void>(0xF1A6C18B35BCADE6, p0); }
	inline Void _SetBlipChecked(Blip blip, bool toggle) { return _i<Void>(0x74513EA3E505181E, blip, toggle); }
	inline Void _0xDB34E8D56FC13B08(Any p0, bool p1, bool p2) { return _i<Void>(0xDB34E8D56FC13B08, p0, p1, p2); }
	inline Void _0x3D3D15AF7BCAAF83(Any p0, bool p1, bool p2) { return _i<Void>(0x3D3D15AF7BCAAF83, p0, p1, p2); }
	inline Void _0xBA751764F0821256() { return _i<Void>(0xBA751764F0821256); }
	inline Void _0xEC9264727EEC0F28() { return _i<Void>(0xEC9264727EEC0F28); }
	inline Void _0xADED7F5748ACAFE6() { return _i<Void>(0xADED7F5748ACAFE6); }
	inline Void _0x56C8B608CFD49854() { return _i<Void>(0x56C8B608CFD49854); }
	inline Void _0x80FE4F3AB4E1B62A() { return _i<Void>(0x80FE4F3AB4E1B62A); }
	inline Void _0xA8FDB297A8D25FBA() { return _i<Void>(0xA8FDB297A8D25FBA); }
	inline Void _0x583049884A2EEE3C() { return _i<Void>(0x583049884A2EEE3C); }
	inline Void _0xA13C11E1B5C06BFC() { return _i<Void>(0xA13C11E1B5C06BFC); }
	inline Void _0xFDEC055AB549E328() { return _i<Void>(0xFDEC055AB549E328); }
	inline int _GetCurrentNotification() { return _i<int>(0x82352748437638CA); }
	inline Void _0x32888337579A5970() { return _i<Void>(0x32888337579A5970); }
	inline Void _0x25F87B30C382FCA7() { return _i<Void>(0x25F87B30C382FCA7); }
	inline Any _0xA9CBFD40B3FA3010() { return _i<Any>(0xA9CBFD40B3FA3010); }
	inline Void _0x6F1554B0CC2089FA(bool p0) { return _i<Void>(0x6F1554B0CC2089FA, p0); }
	inline Void _0xFDB423997FA30340() { return _i<Void>(0xFDB423997FA30340); }
	inline Void _RemoveNotification(int notificationId) { return _i<Void>(0xBE4390CB40B3E627, notificationId); }
	inline Void _0xB695E2CD0A2DA9EE() { return _i<Void>(0xB695E2CD0A2DA9EE); }
	inline Void _0xD4438C0564490E63() { return _i<Void>(0xD4438C0564490E63); }
	inline Void _0xFDD85225B2DEA55E() { return _i<Void>(0xFDD85225B2DEA55E); }
	inline Void _0xE1CD1E48E025E661() { return _i<Void>(0xE1CD1E48E025E661); }
	inline Void _SetNotificationBackgroundColor(int hudIndex) { return _i<Void>(0x92F0DA1E27DB96DC, hudIndex); }
	inline Void _0x17AD8C9706BDD88A(Any p0) { return _i<Void>(0x17AD8C9706BDD88A, p0); }
	inline Void _SetNotificationFlashColor(int red, int green, int blue, int alpha) { return _i<Void>(0x17430B918701C342, red, green, blue, alpha); }
	inline Void _ClearNotificationsPos(float pos) { return _i<Void>(0x55598D21339CB998, pos); }
	inline Void _0xBAE4F9B97CD43B30(bool p0) { return _i<Void>(0xBAE4F9B97CD43B30, p0); }
	inline Void _0x4A0C7C9BB10ABB36(bool p0) { return _i<Void>(0x4A0C7C9BB10ABB36, p0); }
	inline Void _0x15CFA549788D35EF() { return _i<Void>(0x15CFA549788D35EF); }
	inline Void _0x317EBA71D7543F52(Any* p0, Any* p1, Any* p2, Any* p3) { return _i<Void>(0x317EBA71D7543F52, p0, p1, p2, p3); }
	inline Void ToggleStealthRadar(bool toggle) { return _i<Void>(0x6AFDFB93754950C7, toggle); }
	inline Void _0x72DD432F3CDFC0EE(float posX, float posY, float posZ, float radius, int p4) { return _i<Void>(0x72DD432F3CDFC0EE, posX, posY, posZ, radius, p4); }
	inline Void UnlockMinimapAngle() { return _i<Void>(0x8183455E16C42E3A); }
	inline Void UnlockMinimapPosition() { return _i<Void>(0x3E93E06DB8EF1F30); }
	inline Void _0x170F541E1CADD1DE(bool p0) { return _i<Void>(0x170F541E1CADD1DE, p0); }
	inline Void _0x0C698D8F099174C7(Any p0) { return _i<Void>(0x0C698D8F099174C7, p0); }
	inline Pickup GetBlipInfoIdPickupIndex(Blip blip) { return _i<Pickup>(0x9B6786E4C03DD382, blip); }
	inline Void _0xD2049635DEB9C375() { return _i<Void>(0xD2049635DEB9C375); }
	inline Void SetTextProportional(bool p0) { return _i<Void>(0x038C1F517D7FDCF8, p0); }
	inline Void SetTextEdge(int p0, int r, int g, int b, int a) { return _i<Void>(0x441603240D202FA6, p0, r, g, b, a); }
	inline Void SetMultiplayerHudCash(int p0, int p1) { return _i<Void>(0xFD1D220394BCB824, p0, p1); }
	inline Void ClearReminderMessage() { return _i<Void>(0xB57D8DD645CFA2CF); }
	inline Void _0x211C4EF450086857() { return _i<Void>(0x211C4EF450086857); }
	inline Void _LogDebugInfo(String p0) { return _i<Void>(0x2162C446DFDF38FD, p0); }
}

namespace INTERIOR
{
	inline Void _EnableInteriorProp(int interiorID, String propName) { return _i<Void>(0x55E86AF2712B36A1, interiorID, propName); }
	inline Void _0x483ACA1176CA93F1() { return _i<Void>(0x483ACA1176CA93F1); }
	inline Void AddPickupToInteriorRoomByName(Pickup pickup, String roomName) { return _i<Void>(0x3F6167F351168730, pickup, roomName); }
	inline Void CapInterior(int interiorID, bool toggle) { return _i<Void>(0xD9175F941610DB54, interiorID, toggle); }
	inline Void ClearRoomForEntity(Entity entity) { return _i<Void>(0xB365FC0C4E27FFA7, entity); }
	inline Void _0x23B59D8912F94246() { return _i<Void>(0x23B59D8912F94246); }
	inline Void _DisableInteriorProp(int interiorID, String propName) { return _i<Void>(0x420BD37289EEE162, interiorID, propName); }
	inline Void DisableInterior(int interiorID, bool toggle) { return _i<Void>(0x6170941419D7D8EC, interiorID, toggle); }
	inline Void _0x9E6542F0CE8E70A3(bool toggle) { return _i<Void>(0x9E6542F0CE8E70A3, toggle); }
	inline Void _HideMapObjectThisFrame(Hash mapObjectHash) { return _i<Void>(0xA97F257D0151A6AB, mapObjectHash); }
	inline Void _0x50C375537449F369(Any p0) { return _i<Void>(0x50C375537449F369, p0); }
	inline Void ForceRoomForEntity(Entity entity, int interiorID, Hash roomHashKey) { return _i<Void>(0x52923C4710DD9907, entity, interiorID, roomHashKey); }
	inline Void _0x920D853F3E17F1DA(int interiorID, Hash roomHashKey) { return _i<Void>(0x920D853F3E17F1DA, interiorID, roomHashKey); }
	inline int GetInteriorAtCoords(float x, float y, float z) { return _i<int>(0xB0F7F8663821D9C3, x, y, z); }
	inline int GetInteriorAtCoordsWithType(float x, float y, float z, String interiorType) { return _i<int>(0x05B7A89BD78797FC, x, y, z, interiorType); }
	inline int _UnkGetInteriorAtCoords(float x, float y, float z, int unk) { return _i<int>(0xF0F77ADB9F67E79D, x, y, z, unk); }
	inline int GetInteriorFromCollision(float x, float y, float z) { return _i<int>(0xEC4CF9FCB29A4424, x, y, z); }
	inline int GetInteriorFromEntity(Entity entity) { return _i<int>(0x2107BA504071A6BB, entity); }
	inline int GetInteriorGroupId(int interiorID) { return _i<int>(0xE4A84ABF135EF91A, interiorID); }
	inline Hash GetKeyForEntityInRoom(Entity entity) { return _i<Hash>(0x399685DB942336BC, entity); }
	inline Vector3 GetOffsetFromInteriorInWorldCoords(int interiorID, float x, float y, float z) { return _i<Vector3>(0x9E3B3E6D66F6E22F, interiorID, x, y, z); }
	inline Hash _GetRoomKeyFromGameplayCam() { return _i<Hash>(0xA6575914D2A0B450); }
	inline Hash GetRoomKeyFromEntity(Entity entity) { return _i<Hash>(0x47C2A06D4F5F424B, entity); }
	inline bool _AreCoordsCollidingWithExterior(float x, float y, float z) { return _i<bool>(0xEEA5AC2EDA7C33E8, x, y, z); }
	inline bool IsInteriorCapped(int interiorID) { return _i<bool>(0x92BAC8ACF88CEC26, interiorID); }
	inline bool IsInteriorDisabled(int interiorID) { return _i<bool>(0xBC5115A5A939DD15, interiorID); }
	inline bool _IsInteriorPropEnabled(int interiorID, String propName) { return _i<bool>(0x35F7DD45E8C0A16D, interiorID, propName); }
	inline bool IsInteriorReady(int interiorID) { return _i<bool>(0x6726BDCCC1932F0E, interiorID); }
	inline bool IsInteriorScene() { return _i<bool>(0xBC72B5D7A1CBD54D); }
	inline bool IsValidInterior(int interiorID) { return _i<bool>(0x26B0E73D7EAAF4D3, interiorID); }
	inline Void _LoadInterior(int interiorID) { return _i<Void>(0x2CA429C029CCF247, interiorID); }
	inline Void RefreshInterior(int interiorID) { return _i<Void>(0x41F37C3427C75AE0, interiorID); }
	inline Void _0x82EBB79E258FA2B7(Entity entity, int interiorID) { return _i<Void>(0x82EBB79E258FA2B7, entity, interiorID); }
	inline Void _SetInteriorPropColor(int interiorID, String propName, int color) { return _i<Void>(0xC1F1920BAF281317, interiorID, propName, color); }
	inline Any _0x4C2330E61D3DEB56(int interiorID) { return _i<Any>(0x4C2330E61D3DEB56, interiorID); }
	inline Void _0x7241CCB7D020DB69(Any p0, Any p1) { return _i<Void>(0x7241CCB7D020DB69, p0, p1); }
	inline Void _0x405DC2AEF6AF95B9(Hash roomHashKey) { return _i<Void>(0x405DC2AEF6AF95B9, roomHashKey); }
	inline Void _0xAF348AFCB575A441(String roomName) { return _i<Void>(0xAF348AFCB575A441, roomName); }
	inline Void UnpinInterior(int interiorID) { return _i<Void>(0x261CCE7EED010641, interiorID); }
}

namespace ITEMSET
{
	inline bool AddToItemset(Any p0, Any p1) { return _i<bool>(0xE3945201F14637DD, p0, p1); }
	inline Void CleanItemset(Any p0) { return _i<Void>(0x41BC0D722FC04221, p0); }
	inline Any CreateItemset(Vector3* distri) { return _i<Any>(0x35AD299F50D91B24, distri); }
	inline Void DestroyItemset(Any p0) { return _i<Void>(0xDE18220B1C183EDA, p0); }
	inline Any GetIndexedItemInItemset(Any p0, Any p1) { return _i<Any>(0x7A197E2521EE2BAB, p0, p1); }
	inline Any GetItemsetSize(Any p0) { return _i<Any>(0xD9127E83ABF7C631, p0); }
	inline bool IsInItemset(Any p0, Any p1) { return _i<bool>(0x2D0FC594D1E9C107, p0, p1); }
	inline bool IsItemsetValid(Any p0) { return _i<bool>(0xB1B1EA596344DFAB, p0); }
	inline Void RemoveFromItemset(Any p0, Any p1) { return _i<Void>(0x25E68244B0177686, p0, p1); }
}

namespace LOADING
{
	inline Any _0x8AA464D4E0F6ACCD() { return _i<Any>(0x8AA464D4E0F6ACCD); }
	inline bool _0xEF7D17BC6C85264C() { return _i<bool>(0xEF7D17BC6C85264C); }
	inline bool _IsUiLoadingMultiplayer() { return _i<bool>(0xC6DC823253FBB366); }
	inline Void _0xC7E7181C09F33B69(bool p0) { return _i<Void>(0xC7E7181C09F33B69, p0); }
	inline Void _0xB0C56BD3D808D863(bool p0) { return _i<Void>(0xB0C56BD3D808D863, p0); }
	inline Void _IsInLoadingScreen(bool p0) { return _i<Void>(0xFC309E94546FCDB5, p0); }
	inline Void _0xFA1E0E893D915215(bool p0) { return _i<Void>(0xFA1E0E893D915215, p0); }
	inline int _0xF2CA003F167E21D2() { return _i<int>(0xF2CA003F167E21D2); }
}

namespace LOCALE
{
	inline int _GetCurrentLanguageId() { return _i<int>(0x2BDD44CC428A7EAE); }
	inline int _GetUserLanguageId() { return _i<int>(0xA8AE43AEC1A61314); }
	inline Any _0x497420E022796B3F() { return _i<Any>(0x497420E022796B3F); }
}

namespace MISC
{
	inline float Absf(float value) { return _i<float>(0x73D57CFFDD12C355, value); }
	inline int Absi(int value) { return _i<int>(0xF0D31AD191A74F87, value); }
	inline float Acos(float p0) { return _i<float>(0x1D08B970013C34B6, p0); }
	inline Void _0xA6A12939F16D85BE(Hash hash, bool p1) { return _i<Void>(0xA6A12939F16D85BE, hash, p1); }
	inline Any _0x918C7B2D2FF3928B(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return _i<Any>(0x918C7B2D2FF3928B, p0, p1, p2, p3, p4, p5, p6); }
	inline Any _0x2D4259F1FEB81DA9(float p0, float p1, float p2, float p3) { return _i<Any>(0x2D4259F1FEB81DA9, p0, p1, p2, p3); }
	inline int AddHospitalRestart(float x, float y, float z, float p3, Any p4) { return _i<int>(0x1F464EF988465A81, x, y, z, p3, p4); }
	inline Any AddPoliceRestart(float p0, float p1, float p2, float p3, Any p4) { return _i<Any>(0x452736765B31FC4B, p0, p1, p2, p3, p4); }
	inline Any _0x67F6413D3220E18D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return _i<Any>(0x67F6413D3220E18D, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Any _0x32C7A7E8C43A1F80(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7) { return _i<Any>(0x32C7A7E8C43A1F80, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline Void _0x69FE6DC87BD2A5E9(Any p0) { return _i<Void>(0x69FE6DC87BD2A5E9, p0); }
	inline int AddStuntJump(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, Any p15, Any p16, Any p17) { return _i<int>(0x1A992DA297A4630C, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17); }
	inline int AddStuntJumpAngled(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13, float p14, float p15, float p16, Any p17, Any p18, Any p19) { return _i<int>(0xBBE5D803A5360CBF, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, p19); }
	inline Void _0xB8721407EE9C3FF6(Any p0, Any p1, Any p2) { return _i<Void>(0xB8721407EE9C3FF6, p0, p1, p2); }
	inline Void _0xDEA36202FC3382DF(bool p0) { return _i<Void>(0xDEA36202FC3382DF, p0); }
	inline Any _0x5AA3BEFA29F03AD4() { return _i<Any>(0x5AA3BEFA29F03AD4); }
	inline bool AreStringsEqual(String string1, String string2) { return _i<bool>(0x0C515FAB3FF9EA92, string1, string2); }
	inline float Asin(float p0) { return _i<float>(0xC843060B5765DCE7, p0); }
	inline float Atan2(float p0, float p1) { return _i<float>(0x8927CBF9D22261A4, p0, p1); }
	inline float Atan(float p0) { return _i<float>(0xA9D1795CD5043663, p0); }
	inline Void BeginReplayStats(Any p0, Any p1) { return _i<Void>(0xE0E500246FF73D66, p0, p1); }
	inline Void _0x9B2BD3773123EA2F(int type, bool toggle) { return _i<Void>(0x9B2BD3773123EA2F, type, toggle); }
	inline Void _0x58A39BE597CE99CD() { return _i<Void>(0x58A39BE597CE99CD); }
	inline Void CancelStuntJump() { return _i<Void>(0xE6B7B0ACD4E4B75E); }
	inline Void _0xC79AE21974B01FB2() { return _i<Void>(0xC79AE21974B01FB2); }
	inline Void ClearAngledAreaOfVehicles(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, bool p8, bool p9, bool p10, bool p11, Any p12) { return _i<Void>(0x11DB3500F042A8AA, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	inline Void ClearArea(float X, float Y, float Z, float radius, bool p4, bool ignoreCopCars, bool ignoreObjects, bool p7) { return _i<Void>(0xA56F01F3765B93A0, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); }
	inline Void _ClearAreaOfEverything(float x, float y, float z, float radius, bool p4, bool p5, bool p6, bool p7) { return _i<Void>(0x957838AAF91BD12D, x, y, z, radius, p4, p5, p6, p7); }
	inline Void ClearAreaOfCops(float x, float y, float z, float radius, int flags) { return _i<Void>(0x04F8FC8FCF58F88D, x, y, z, radius, flags); }
	inline Void ClearAreaOfObjects(float x, float y, float z, float radius, int flags) { return _i<Void>(0xDD9B9B385AAC7F5B, x, y, z, radius, flags); }
	inline Void ClearAreaOfPeds(float x, float y, float z, float radius, int flags) { return _i<Void>(0xBE31FD6CE464AC59, x, y, z, radius, flags); }
	inline Void ClearAreaOfProjectiles(float x, float y, float z, float radius, int flags) { return _i<Void>(0x0A1CB9094635D1A6, x, y, z, radius, flags); }
	inline Void ClearAreaOfVehicles(float x, float y, float z, float radius, bool p4, bool p5, bool p6, bool p7, bool p8, Any p9) { return _i<Void>(0x01C7B9B38428AEB6, x, y, z, radius, p4, p5, p6, p7, p8, p9); }
	inline Void ClearBit(int* address, int offset) { return _i<Void>(0xE80492A9AC099A93, address, offset); }
	inline Void _0x06462A961E94B67C() { return _i<Void>(0x06462A961E94B67C); }
	inline Void ClearOverrideWeather() { return _i<Void>(0x338D2E3477711050); }
	inline Void ClearReplayStats() { return _i<Void>(0x1B1AB132A16FDA55); }
	inline Void _SetNextRespawnToCustom() { return _i<Void>(0xA2716D40842EAF79); }
	inline Void _0x7EC6F9A478A6A512() { return _i<Void>(0x7EC6F9A478A6A512); }
	inline Void _0xB3CD58CCA6CDA852() { return _i<Void>(0xB3CD58CCA6CDA852); }
	inline Void _0x0CF97F497FE7D048(Any p0) { return _i<Void>(0x0CF97F497FE7D048, p0); }
	inline Void ClearWeatherTypePersist() { return _i<Void>(0xCCC39339BEF76CF5); }
	inline int CompareStrings(String str1, String str2, bool matchCase, int maxLength) { return _i<int>(0x1E34710ECD4AB0EB, str1, str2, matchCase, maxLength); }
	inline Void _0x213AEB2B90CBA7AC(Any p0, Any p1, Any p2) { return _i<Void>(0x213AEB2B90CBA7AC, p0, p1, p2); }
	inline bool CreateIncident(int incidentType, float x, float y, float z, int p5, float radius, int* outIncidentID, Any p7) { return _i<bool>(0x3F892CAF67444AE7, incidentType, x, y, z, p5, radius, outIncidentID, p7); }
	inline bool CreateIncidentWithEntity(int incidentType, Ped ped, int amountOfPeople, float radius, int* outIncidentID, Any p5) { return _i<bool>(0x05983472F0494E60, incidentType, ped, amountOfPeople, radius, outIncidentID, p5); }
	inline Void DeleteIncident(int test) { return _i<Void>(0x556C1AA270D5A207, test); }
	inline Void DeleteStuntJump(int p0) { return _i<Void>(0xDC518000E39DAE1F, p0); }
	inline Void DisableHospitalRestart(int hospitalIndex, bool toggle) { return _i<Void>(0xC8535819C450EBA8, hospitalIndex, toggle); }
	inline Void DisablePoliceRestart(int policeIndex, bool toggle) { return _i<Void>(0x23285DED6EBD7EA3, policeIndex, toggle); }
	inline Void DisableStuntJumpSet(int p0) { return _i<Void>(0xA5272EBEDD4747F6, p0); }
	inline Void DisplayOnscreenKeyboard(int p0, String windowTitle, String p2, String defaultText, String defaultConcat1, String defaultConcat2, String defaultConcat3, int maxInputLength) { return _i<Void>(0x00DC833F2568DBF6, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); }
	inline Void _DisplayOnscreenKeyboard2(int p0, String windowTitle, Any* p2, String defaultText, String defaultConcat1, String defaultConcat2, String defaultConcat3, String defaultConcat4, String defaultConcat5, String defaultConcat6, String defaultConcat7, int maxInputLength) { return _i<Void>(0xCA78CFA0366592FE, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); }
	inline bool _0x1327E2FE9746BAEE(Any p0) { return _i<bool>(0x1327E2FE9746BAEE, p0); }
	inline Any _0x171BAFB3C60389F4(Any p0) { return _i<Any>(0x171BAFB3C60389F4, p0); }
	inline Void DoAutoSave() { return _i<Void>(0x50EEAAD86232EE55); }
	inline Void EnableDispatchService(int dispatchService, bool toggle) { return _i<Void>(0xDC0F817884CDD856, dispatchService, toggle); }
	inline Void EnableStuntJumpSet(int p0) { return _i<Void>(0xE369A5783B866016, p0); }
	inline Void EnableTennisMode(Ped ped, bool toggle, bool p2) { return _i<Void>(0x28A04B411933F8A6, ped, toggle, p2); }
	inline Void EndReplayStats() { return _i<Void>(0xA23E821FBDF8A5F2); }
	inline bool FindSpawnPointInDirection(float x1, float y1, float z1, float x2, float y2, float z2, float distance, Vector3* spawnPoint) { return _i<bool>(0x6874E2190B0C1972, x1, y1, z1, x2, y2, z2, distance, spawnPoint); }
	inline Void _ResetLocalplayerState() { return _i<Void>(0xC0AA53F866B3134D); }
	inline Void _CreateLightningThunder() { return _i<Void>(0xF6062E089251C898); }
	inline int GetAllocatedStackSize() { return _i<int>(0x8B3CA62B1EF19B62); }
	inline float GetAngleBetween2DVectors(float x1, float y1, float x2, float y2) { return _i<float>(0x186FC4BE848E1C92, x1, y1, x2, y2); }
	inline bool _0xB335F761606DB47C(Any* p0, Any* p1, Any p2, bool p3) { return _i<bool>(0xB335F761606DB47C, p0, p1, p2, p3); }
	inline Any _0x4750FC27570311EC() { return _i<Any>(0x4750FC27570311EC); }
	inline Any _0x1B2366C3F2A5C8DF() { return _i<Any>(0x1B2366C3F2A5C8DF); }
	inline int GetBitsInRange(int var, int rangeStart, int rangeEnd) { return _i<int>(0x53158863FCC0893A, var, rangeStart, rangeEnd); }
	inline Any _0xD10282B6E3751BA0() { return _i<Any>(0xD10282B6E3751BA0); }
	inline Vector3 _0x21C235BC64831E5A(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9) { return _i<Vector3>(0x21C235BC64831E5A, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline float _GetCloudHatOpacity() { return _i<float>(0x20AC25E781AE4A84); }
	inline String _GetGlobalCharBuffer() { return _i<String>(0x24DA7D7667FD7B09); }
	inline Any _0x8D7A43EC6A5FEA45(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return _i<Any>(0x8D7A43EC6A5FEA45, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline bool _0xDFB4138EEFED7B81(Ped ped, Hash weaponHash, float radius, Entity* entity, bool p4) { return _i<bool>(0xDFB4138EEFED7B81, ped, weaponHash, radius, entity, p4); }
	inline Void _GetWeatherTypeTransition(Any* p0, Any* p1, float* progress_or_time) { return _i<Void>(0xF3BBE884A14BB413, p0, p1, progress_or_time); }
	inline float GetDistanceBetweenCoords(float x1, float y1, float z1, float x2, float y2, float z2, bool useZ) { return _i<float>(0xF1B760881820C952, x1, y1, z1, x2, y2, z2, useZ); }
	inline int GetFakeWantedLevel() { return _i<int>(0x4C9296CBCD1B971E); }
	inline int GetFrameCount() { return _i<int>(0xFC8202EFC642E6F2); }
	inline float GetFrameTime() { return _i<float>(0x15C40837039FFAF7); }
	inline int GetGameTimer() { return _i<int>(0x9CD27B0045628463); }
	inline bool _GetGroundCoordsWhileInAir(float x, float y, float z, float* p3, Vector3* p4) { return _i<bool>(0x8BDC7BFC57A81E76, x, y, z, p3, p4); }
	inline Any _0x9E82F0F362881B29(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Any>(0x9E82F0F362881B29, p0, p1, p2, p3, p4); }
	inline bool GetGroundZFor3DCoord(float x, float y, float z, float* groundZ, bool unk) { return _i<bool>(0xC906A7DAB05C8D2B, x, y, z, groundZ, unk); }
	inline Hash GetHashKey(String model) { return _i<Hash>(0xD24D37CC275948CC, model); }
	inline Hash GetHashKey2(Hash model) { return _i<Hash>(0xD24D37CC275948CC, model); }
	inline float GetHeadingFromVector2D(float dx, float dy) { return _i<float>(0x2FFB6B224F4B2926, dx, dy); }
	inline int GetIndexOfCurrentLevel() { return _i<int>(0xCBAD6729F7B1F4FC); }
	inline Any _0x6E04F06094C87047() { return _i<Any>(0x6E04F06094C87047); }
	inline bool _0x9689123E3F213AA5() { return _i<bool>(0x9689123E3F213AA5); }
	inline bool _0xF56DFB7B61BE7276(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, Any* p12) { return _i<bool>(0xF56DFB7B61BE7276, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	inline bool GetMissionFlag() { return _i<bool>(0xA33CDCCDA663159E); }
	inline Void GetModelDimensions(Hash modelHash, Vector3* minimum, Vector3* maximum) { return _i<Void>(0x03E8D3D5F549087A, modelHash, minimum, maximum); }
	inline Hash GetNextWeatherTypeHashName() { return _i<Hash>(0x711327CD09C8F162); }
	inline int _GetFreeStackSlotsCount(int stackSize) { return _i<int>(0xFEAD16FC8F9DFC0F, stackSize); }
	inline int _GetNumberOfDispatchedUnitsForPlayer(int dispatchService) { return _i<int>(0xEB4A0C2D56441717, dispatchService); }
	inline Any _0x996DD1E1E02F1008() { return _i<Any>(0x996DD1E1E02F1008); }
	inline String GetOnscreenKeyboardResult() { return _i<String>(0x8362B09B91893647); }
	inline Hash GetPrevWeatherTypeHashName() { return _i<Hash>(0x564B884A05EC45A3); }
	inline int GetProfileSetting(int profileSetting) { return _i<int>(0xC488FF2356EA7791, profileSetting); }
	inline Any _0x82FDE6A57EE4EE44(Ped ped, Hash weaponhash, float p2, float p3, float p4, bool p5) { return _i<Any>(0x82FDE6A57EE4EE44, ped, weaponhash, p2, p3, p4, p5); }
	inline Any GetRainLevel() { return _i<Any>(0x96695E368AD855F3); }
	inline Any GetRandomEventFlag() { return _i<Any>(0xD2D57F1D764117B1); }
	inline float GetRandomFloatInRange(float startRange, float endRange) { return _i<float>(0x313CE5879CEB6FCD, startRange, endRange); }
	inline int GetRandomIntInRange(int startRange, int endRange) { return _i<int>(0xD53343AA4FB7DD28, startRange, endRange); }
	inline float _0x7F8F6405F4777AF6(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9) { return _i<float>(0x7F8F6405F4777AF6, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Any _0x8098C8D6597AAE18(Any p0) { return _i<Any>(0x8098C8D6597AAE18, p0); }
	inline Any _0xDC9274A7EF6B2867() { return _i<Any>(0xDC9274A7EF6B2867); }
	inline Any _0x5B1F2E327B6B6FE1() { return _i<Any>(0x5B1F2E327B6B6FE1); }
	inline Any _0x2B626A0150E4D449() { return _i<Any>(0x2B626A0150E4D449); }
	inline Any _0xA4A0065E39C9F25C(Any p0, Any p1, Any p2, Any p3) { return _i<Any>(0xA4A0065E39C9F25C, p0, p1, p2, p3); }
	inline Any _0xA09F896CE912481F(bool p0) { return _i<Any>(0xA09F896CE912481F, p0); }
	inline Any GetSnowLevel() { return _i<Any>(0xC5868A966E5BE3AE); }
	inline int _0x397BAA01068BAA96() { return _i<int>(0x397BAA01068BAA96); }
	inline Any _0x2B5E102E4A42F2BF() { return _i<Any>(0x2B5E102E4A42F2BF); }
	inline float _0xE599A503B3837E1B() { return _i<float>(0xE599A503B3837E1B); }
	inline bool _0x19BFED045C647C49(Any p0) { return _i<bool>(0x19BFED045C647C49, p0); }
	inline bool _0x17DF68D720AA77F8(Any p0) { return _i<bool>(0x17DF68D720AA77F8, p0); }
	inline bool _0xE95B0C7D5BA3B96B(Any p0) { return _i<bool>(0xE95B0C7D5BA3B96B, p0); }
	inline Any _0x6856EC3D35C81EA4() { return _i<Any>(0x6856EC3D35C81EA4); }
	inline Vector3 GetWindDirection() { return _i<Vector3>(0x1F400FEF721170DA); }
	inline float GetWindSpeed() { return _i<float>(0xA8CF1CC0AFCD3F12); }
	inline Any _0x14832BF2ABA53FC5() { return _i<Any>(0x14832BF2ABA53FC5); }
	inline bool HasBulletImpactedInArea(float x, float y, float z, float p3, bool p4, bool p5) { return _i<bool>(0x9870ACFB89A90995, x, y, z, p3, p4, p5); }
	inline bool HasBulletImpactedInBox(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7) { return _i<bool>(0xDC8C5D7CFEAB8394, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline bool _HasButtonCombinationJustBeenEntered(Hash hash, int amount) { return _i<bool>(0x071E2A839DE82D90, hash, amount); }
	inline Any _0x2107A3773771186D() { return _i<Any>(0x2107A3773771186D); }
	inline bool _0x6FDDF453C0C756EC() { return _i<bool>(0x6FDDF453C0C756EC); }
	inline bool _HasCheatStringJustBeenEntered(Hash hash) { return _i<bool>(0x557E43C447E700A8, hash); }
	inline Any _0xE8B9C0EC9E183F35() { return _i<Any>(0xE8B9C0EC9E183F35); }
	inline bool IsPcVersion() { return _i<bool>(0x48AF36444B965238); }
	inline Any _0x075F1D57402C93BA() { return _i<Any>(0x075F1D57402C93BA); }
	inline Any _0xD642319C54AADEB6() { return _i<Any>(0xD642319C54AADEB6); }
	inline Void IgnoreNextRestart(bool toggle) { return _i<Void>(0x21FFB63D8C615361, toggle); }
	inline Void _0x8D74E26F54B4E5C3(String p0) { return _i<Void>(0x8D74E26F54B4E5C3, p0); }
	inline bool IsAreaOccupied(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7, bool p8, bool p9, bool p10, Any p11, bool p12) { return _i<bool>(0xA61B4DF533DCB56E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	inline bool IsAutoSaveInProgress() { return _i<bool>(0x69240733738C19A0); }
	inline bool IsBitSet(int address, int offset) { return _i<bool>(0xA921AA820C25702F, address, offset); }
	inline bool IsBulletInAngledArea(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7) { return _i<bool>(0x1A8B5F3C01E2B477, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline bool IsBulletInArea(float p0, float p1, float p2, float p3, bool p4) { return _i<bool>(0x3F2023999AD51C1F, p0, p1, p2, p3, p4); }
	inline bool IsBulletInBox(float p0, float p1, float p2, float p3, float p4, float p5, bool p6) { return _i<bool>(0xDE0F6D7450D37351, p0, p1, p2, p3, p4, p5, p6); }
	inline Any _0xA049A5BE0F04F2F8() { return _i<Any>(0xA049A5BE0F04F2F8); }
	inline bool IsIncidentValid(int incidentId) { return _i<bool>(0xC8BC6461E629BEAA, incidentId); }
	inline bool IsMemoryCardInUse() { return _i<bool>(0x8A75CE2956274ADD); }
	inline bool IsMinigameInProgress() { return _i<bool>(0x2B4A15E44DE0F478); }
	inline bool IsNextWeatherType(String weatherType) { return _i<bool>(0x2FAA3A30BEC0F25D, weatherType); }
	inline bool IsPointObscuredByAMissionEntity(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return _i<bool>(0xE54E209C35FFA18D, p0, p1, p2, p3, p4, p5, p6); }
	inline bool IsPositionOccupied(float x, float y, float z, float range, bool p4, bool p5, bool p6, bool p7, bool p8, Any p9, bool p10) { return _i<bool>(0xADCDE75E1C60F32D, x, y, z, range, p4, p5, p6, p7, p8, p9, p10); }
	inline bool IsPrevWeatherType(String weatherType) { return _i<bool>(0x44F28F86433B10A9, weatherType); }
	inline bool IsProjectileInArea(float x1, float y1, float z1, float x2, float y2, float z2, bool ownedByPlayer) { return _i<bool>(0x5270A8FBC098C3F8, x1, y1, z1, x2, y2, z2, ownedByPlayer); }
	inline bool IsProjectileTypeInAngledArea(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, bool p8) { return _i<bool>(0xF0BC12401061DEA0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline bool IsProjectileTypeInArea(float x1, float y1, float z1, float x2, float y2, float z2, int type, bool p7) { return _i<bool>(0x2E0DC353342C4A6D, x1, y1, z1, x2, y2, z2, type, p7); }
	inline bool _0x34318593248C8FB2(float p0, float p1, float p2, Any p3, float p4, bool p5) { return _i<bool>(0x34318593248C8FB2, p0, p1, p2, p3, p4, p5); }
	inline bool IsSniperBulletInArea(float x1, float y1, float z1, float x2, float y2, float z2) { return _i<bool>(0xFEFCF11B01287125, x1, y1, z1, x2, y2, z2); }
	inline bool IsStringNull(String string) { return _i<bool>(0xF22B6C47C6EAB066, string); }
	inline bool IsStringNullOrEmpty(String string) { return _i<bool>(0xCA042B6957743895, string); }
	inline bool IsStuntJumpInProgress() { return _i<bool>(0x7A3F19700A4D0525); }
	inline bool IsStuntJumpMessageShowing() { return _i<bool>(0x2272B0A1343129F4); }
	inline bool IsTennisMode(Ped ped) { return _i<bool>(0x5D5479D115290C3F, ped); }
	inline bool IsThisAMinigameScript() { return _i<bool>(0x7B30F65D7B710098); }
	inline Any _0x3BBBD13E5041A79E() { return _i<Any>(0x3BBBD13E5041A79E); }
	inline Void _SetCloudHatTransition(String type, float transitionTime) { return _i<Void>(0xFC4842A34657BFCB, type, transitionTime); }
	inline Void NetworkSetScriptIsSafeForNetworkGame() { return _i<Void>(0x9243BAC96D64C050); }
	inline Void _0x3ED1438C1F5C6612(int p0) { return _i<Void>(0x3ED1438C1F5C6612, p0); }
	inline bool OverrideSaveHouse(bool p0, float p1, float p2, float p3, float p4, bool p5, float p6, float p7) { return _i<bool>(0x1162EA8AE9D24EEA, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline Void _DisableAutomaticRespawn(bool disableRespawn) { return _i<Void>(0x2C2B3493FBF51C71, disableRespawn); }
	inline Void _0x8FA9C42FC5D7C64B(Any p0, Any p1, float p2, float p3, float p4, bool p5) { return _i<Void>(0x8FA9C42FC5D7C64B, p0, p1, p2, p3, p4, p5); }
	inline Void _0xE266ED23311F24D4(Any p0, Any* p1, Any* p2, float p3, float p4, bool p5) { return _i<Void>(0xE266ED23311F24D4, p0, p1, p2, p3, p4, p5); }
	inline Any _0xABB2FA71C83A1B72() { return _i<Any>(0xABB2FA71C83A1B72); }
	inline bool _0x684A41975F077262() { return _i<bool>(0x684A41975F077262); }
	inline Void PopulateNow() { return _i<Void>(0x7472BB270D7B4F3E); }
	inline Void _0x11B56FBBF7224868(String p0) { return _i<Void>(0x11B56FBBF7224868, p0); }
	inline Void _0xE3D969D2785FFB5E() { return _i<Void>(0xE3D969D2785FFB5E); }
	inline Any _0x72DE52178C291CB5() { return _i<Any>(0x72DE52178C291CB5); }
	inline Any _0x44A0BDC559B35F6E() { return _i<Any>(0x44A0BDC559B35F6E); }
	inline Any _0xEB2104E905C6F2E9() { return _i<Any>(0xEB2104E905C6F2E9); }
	inline Void _ForceSocialClubUpdate() { return _i<Void>(0xEB6891F03362FB12); }
	inline Void RegisterFloatToSave(Any* p0, String name) { return _i<Void>(0x7CAEC29ECB5DFEBB, p0, name); }
	inline Void _0xA735353C77334EA0(Any* p0, Any* p1) { return _i<Void>(0xA735353C77334EA0, p0, p1); }
	inline Void RegisterIntToSave(Any* p0, String name) { return _i<Void>(0x34C9EE5986258415, p0, name); }
	inline Void RegisterEnumToSave(Any* p0, String name) { return _i<Void>(0x10C2FA78D0E128A1, p0, name); }
	inline Void RegisterBoolToSave(Any* p0, String name) { return _i<Void>(0xC8F4131414C835A1, p0, name); }
	inline Any RegisterSaveHouse(float p0, float p1, float p2, float p3, Any* p4, Any p5, Any p6) { return _i<Any>(0xC0714D0A7EEECA54, p0, p1, p2, p3, p4, p5, p6); }
	inline Void RegisterTextLabelToSave(Any* p0, String name) { return _i<Void>(0xEDB1232C5BEAE62F, p0, name); }
	inline Void _0x6F7794F28C6B2535(Any* p0, String name) { return _i<Void>(0x6F7794F28C6B2535, p0, name); }
	inline Void _0x48F069265A0E4BEC(Any* p0, String name) { return _i<Void>(0x48F069265A0E4BEC, p0, name); }
	inline Void _0x8269816F6CFD40F8(Any* p0, String name) { return _i<Void>(0x8269816F6CFD40F8, p0, name); }
	inline Void _0xFAA457EF263E8763(Any* p0, String name) { return _i<Void>(0xFAA457EF263E8763, p0, name); }
	inline Void RemoveDispatchSpawnBlockingArea(Any p0) { return _i<Void>(0x264AC28B01B353A5, p0); }
	inline Void _0xB129E447A2EDA4BF(Any p0, bool p1) { return _i<Void>(0xB129E447A2EDA4BF, p0, p1); }
	inline Void _0xE6869BECDD8F2403(Any p0, bool p1) { return _i<Void>(0xE6869BECDD8F2403, p0, p1); }
	inline Void ResetDispatchIdealSpawnDistance() { return _i<Void>(0x77A84429DD9F0A15); }
	inline Void ResetDispatchSpawnBlockingAreas() { return _i<Void>(0xAC7BFD5C1D83EA75); }
	inline Void _0xEB2DB0CAD13154B3(Any p0) { return _i<Void>(0xEB2DB0CAD13154B3, p0); }
	inline Void _0x437138B6A830166A() { return _i<Void>(0x437138B6A830166A); }
	inline Void _0xD9F692D349249528() { return _i<Void>(0xD9F692D349249528); }
	inline Void _0xE574A662ACAEFBB1() { return _i<Void>(0xE574A662ACAEFBB1); }
	inline Void _0x37DEB0AA183FB6D8() { return _i<Void>(0x37DEB0AA183FB6D8); }
	inline bool _0x8EF5573A1F801A5C(Any p0, Any* p1, Any* p2) { return _i<bool>(0x8EF5573A1F801A5C, p0, p1, p2); }
	inline Void _0x0A60017F841A54F2(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x0A60017F841A54F2, p0, p1, p2, p3); }
	inline Void _0x1BB299305C3E8C13(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x1BB299305C3E8C13, p0, p1, p2, p3); }
	inline Void _0x1FF6BF9A63E5757F() { return _i<Void>(0x1FF6BF9A63E5757F); }
	inline Void _0x438822C279B73B93(Any p0) { return _i<Void>(0x438822C279B73B93, p0); }
	inline Void SetBit(int* address, int offset) { return _i<Void>(0x933D6A9EEC1BACD0, address, offset); }
	inline Void SetBitsInRange(int* var, int rangeStart, int rangeEnd, int p3) { return _i<Void>(0x8EF07E15701D61ED, var, rangeStart, rangeEnd, p3); }
	inline Void _SetCloudHatOpacity(float opacity) { return _i<Void>(0xF36199225D6D8C86, opacity); }
	inline Void _0x02DEAAC8F8EA7FE7(String p0) { return _i<Void>(0x02DEAAC8F8EA7FE7, p0); }
	inline Void SetCreditsActive(bool toggle) { return _i<Void>(0xB938B7E6D3C0620C, toggle); }
	inline Void _0xB51B9AB9EF81868C(bool toggle) { return _i<Void>(0xB51B9AB9EF81868C, toggle); }
	inline Void _SetWeatherTypeTransition(Hash weatherType1, Hash weatherType2, float percentWeather2) { return _i<Void>(0x578C752848ECFA0C, weatherType1, weatherType2, percentWeather2); }
	inline Void SetDispatchIdealSpawnDistance(float p0) { return _i<Void>(0x6FE601A64180D423, p0); }
	inline Void _0xD10F442036302D50(Any p0, Any p1, Any p2) { return _i<Void>(0xD10F442036302D50, p0, p1, p2); }
	inline Void SetDispatchTimeBetweenSpawnAttempts(Any p0, float p1) { return _i<Void>(0x44F7CBC1BEB3327D, p0, p1); }
	inline Void SetDispatchTimeBetweenSpawnAttemptsMultiplier(Any p0, float p1) { return _i<Void>(0x48838ED9937A15D1, p0, p1); }
	inline Void SetExplosiveAmmoThisFrame(Player player) { return _i<Void>(0xA66C71C98D5F2CFB, player); }
	inline Void SetExplosiveMeleeThisFrame(Player player) { return _i<Void>(0xFF1BED81BFDC0FE0, player); }
	inline Void SetFadeInAfterDeathArrest(bool toggle) { return _i<Void>(0xDA66D2796BA33F12, toggle); }
	inline Void SetFadeInAfterLoad(bool toggle) { return _i<Void>(0xF3D78F59DFE18D79, toggle); }
	inline Void SetFadeOutAfterArrest(bool toggle) { return _i<Void>(0x1E0B4DC0D990A4E7, toggle); }
	inline Void SetFadeOutAfterDeath(bool toggle) { return _i<Void>(0x4A18E01DF2C87B86, toggle); }
	inline Void SetFakeWantedLevel(int fakeWantedLevel) { return _i<Void>(0x1454F2448DE30163, fakeWantedLevel); }
	inline Void SetFireAmmoThisFrame(Player player) { return _i<Void>(0x11879CDD803D30F4, player); }
	inline Void _0xA1183BCFEE0F93D1(Any p0) { return _i<Void>(0xA1183BCFEE0F93D1, p0); }
	inline Void SetGamePaused(bool toggle) { return _i<Void>(0x577D1284D6873711, toggle); }
	inline Void SetGravityLevel(int level) { return _i<Void>(0x740E14FAD5842351, level); }
	inline Void _0xD261BA3E7E998072(Any p0, float p1) { return _i<Void>(0xD261BA3E7E998072, p0, p1); }
	inline Void _0xB08B85D860E7BA3C(Any p0, Any p1, Any p2) { return _i<Void>(0xB08B85D860E7BA3C, p0, p1, p2); }
	inline Void _SetUnkMapFlag(int flag) { return _i<Void>(0xC5F0A8EBD3F361CE, flag); }
	inline Void _UseFreemodeMapBehavior(bool toggle) { return _i<Void>(0x9BAE5AD2508DF078, toggle); }
	inline Void SetMinigameInProgress(bool toggle) { return _i<Void>(0x19E00D7322C6F85B, toggle); }
	inline Void SetMissionFlag(bool toggle) { return _i<Void>(0xC4301E5121A0ED73, toggle); }
	inline Void SetOverrideWeather(String weatherType) { return _i<Void>(0xA43D5C6FE51ADBEF, weatherType); }
	inline Void _ShowPedInPauseMenu(bool toggle) { return _i<Void>(0x4EBB7E87AA0DBED4, toggle); }
	inline Void _0x9D8D44ADBBA61EF2(bool p0) { return _i<Void>(0x9D8D44ADBBA61EF2, p0); }
	inline Void _SetRainFxIntensity(float intensity) { return _i<Void>(0x643E26EA6E024D92, intensity); }
	inline Void SetRandomEventFlag(bool p0) { return _i<Void>(0x971927086CFD2158, p0); }
	inline Void SetRandomSeed(int time) { return _i<Void>(0x444D98F98C11F3EC, time); }
	inline Void SetRandomWeatherType() { return _i<Void>(0x8B05F884CF7E8020); }
	inline Void _SetCustomRespawnPosition(float x, float y, float z, float heading) { return _i<Void>(0x706B5EDCAA7FA663, x, y, z, heading); }
	inline Void _0x2587A48BC88DFADF(bool p0) { return _i<Void>(0x2587A48BC88DFADF, p0); }
	inline Void SetSaveHouse(Any p0, bool p1, bool p2) { return _i<Void>(0x4F548CABEAE553BC, p0, p1, p2); }
	inline Void SetSaveMenuActive(bool unk) { return _i<Void>(0xC9BF75D28165FF77, unk); }
	inline Void _0x65D2EBB47E1CEC21(bool p0) { return _i<Void>(0x65D2EBB47E1CEC21, p0); }
	inline Void _0xD79185689F8FD5DF(bool p0) { return _i<Void>(0xD79185689F8FD5DF, p0); }
	inline Void SetSuperJumpThisFrame(Player player) { return _i<Void>(0x57FFF03E423A4C0B, player); }
	inline Void _0x54F157E0336A3822(Any p0, String p1, float p2) { return _i<Void>(0x54F157E0336A3822, p0, p1, p2); }
	inline Void _0x6F2135B6129620C1(bool p0) { return _i<Void>(0x6F2135B6129620C1, p0); }
	inline Void SetThisScriptCanBePaused(bool toggle) { return _i<Void>(0xAA391C728106F7AF, toggle); }
	inline Void SetThisScriptCanRemoveBlipsCreatedByAnyScript(bool toggle) { return _i<Void>(0xB98236CAAECEF897, toggle); }
	inline Void _0xFB00CA71DA386228() { return _i<Void>(0xFB00CA71DA386228); }
	inline Void SetTimeScale(float time) { return _i<Void>(0x1D408577D440E81E, time); }
	inline Void _0xE532EC1A63231B4F(Any p0, Any p1) { return _i<Void>(0xE532EC1A63231B4F, p0, p1); }
	inline Void SetWeatherTypeNow(String weatherType) { return _i<Void>(0x29B487C359E19889, weatherType); }
	inline Void SetWeatherTypeNowPersist(String weatherType) { return _i<Void>(0xED712CA327900C8A, weatherType); }
	inline Void _SetWeatherTypeOverTime(String weatherType, float time) { return _i<Void>(0xFB5045B7C42B75BF, weatherType, time); }
	inline Void SetWeatherTypePersist(String weatherType) { return _i<Void>(0x704983DF373B198F, weatherType); }
	inline Void SetWind(float speed) { return _i<Void>(0xAC3A74E8384A9919, speed); }
	inline Void SetWindDirection(float direction) { return _i<Void>(0xEB0F4468467B4528, direction); }
	inline Void SetWindSpeed(float speed) { return _i<Void>(0xEE09ECEDBABE47FC, speed); }
	inline Void ShootSingleBulletBetweenCoords(float x1, float y1, float z1, float x2, float y2, float z2, int damage, bool p7, Hash weaponHash, Ped ownerPed, bool isAudible, bool isInvisible, float speed) { return _i<Void>(0x867654CBC7606F2C, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); }
	inline Void _ShootSingleVehicleBulletBetweenCoords(float x1, float y1, float z1, float x2, float y2, float z2, int damage, bool p7, Hash weaponHash, Ped ownerPed, bool isAudible, bool isInvisible, float speed, Entity entity, Any p14) { return _i<Void>(0xE3A7742E0B7A2F8B, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14); }
	inline Void _ShootSingleAirstrikeBulletBetweenCoords(float x1, float y1, float z1, float x2, float y2, float z2, int damage, bool p7, Hash weaponHash, Ped ownerPed, bool isAudible, bool isInvisible, float speed, Entity entity, bool p14, bool p15, bool p16, bool p17, Any p18, Any p19) { return _i<Void>(0xBFE5756E7407064A, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, p16, p17, p18, p19); }
	inline Any _0xD3D15555431AB793() { return _i<Any>(0xD3D15555431AB793); }
	inline Void _0xF2F6A2FA49278625(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any* p9, Any* p10, Any* p11, Any* p12) { return _i<Void>(0xF2F6A2FA49278625, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	inline Void _0x92790862E36C2ADA() { return _i<Void>(0x92790862E36C2ADA); }
	inline Void _StartSaveArray(Any* p0, int p1, String arrayName) { return _i<Void>(0x60FE567DF1B1AF9D, p0, p1, arrayName); }
	inline Void StartSaveData(Any* p0, Any p1, bool p2) { return _i<Void>(0xA9575F812C6A7997, p0, p1, p2); }
	inline Void _StartSaveStruct(Any* p0, int p1, String structName) { return _i<Void>(0xBF737600CDDBEADD, p0, p1, structName); }
	inline Void _0xC7DB36C24634F52B() { return _i<Void>(0xC7DB36C24634F52B); }
	inline Void StopSaveData() { return _i<Void>(0x74E20C9145FB66FD); }
	inline Void StopSaveStruct() { return _i<Void>(0xEB1774DF12BB9F12); }
	inline Void StopSaveArray() { return _i<Void>(0x04456F95153C6BE4); }
	inline bool StringToInt(String string, int* outInteger) { return _i<bool>(0x5A5F40FE637EB584, string, outInteger); }
	inline Void _0x1EAE0A6E978894A2(int p0, bool p1) { return _i<Void>(0x1EAE0A6E978894A2, p0, p1); }
	inline float Tan(float p0) { return _i<float>(0x632106CC96E82E91, p0); }
	inline Void TerminateAllScriptsWithThisName(String scriptName) { return _i<Void>(0x9DC711BC69C548DF, scriptName); }
	inline Void _0xFB80AB299D2EE1BD(Any p0) { return _i<Void>(0xFB80AB299D2EE1BD, p0); }
	inline Any _0xEA2F2061875EED90() { return _i<Any>(0xEA2F2061875EED90); }
	inline Void _ClearCloudHat() { return _i<Void>(0x957E790EA1727B64); }
	inline Void _0xA74802FB8D0B7814(String p0, float p1) { return _i<Void>(0xA74802FB8D0B7814, p0, p1); }
	inline int UpdateOnscreenKeyboard() { return _i<int>(0x0CF2B696BBF945AE); }
	inline Void _0x693478ACBD7F18E7() { return _i<Void>(0x693478ACBD7F18E7); }
	inline Void UsingMissionCreator(bool toggle) { return _i<Void>(0xF14878FC50BEC6EE, toggle); }
	inline Void _0xA8434F1DFF41D6E7(float p0) { return _i<Void>(0xA8434F1DFF41D6E7, p0); }
	inline Void _0xC3C221ADDDE31A11(float p0) { return _i<Void>(0xC3C221ADDDE31A11, p0); }
	inline Void _0x31727907B2C43C55(float p0) { return _i<Void>(0x31727907B2C43C55, p0); }
	inline Void _0x405591EC8FD9096D(float p0) { return _i<Void>(0x405591EC8FD9096D, p0); }
	inline Void _0xB3E6360DDE733E82(float p0) { return _i<Void>(0xB3E6360DDE733E82, p0); }
	inline Void _0xF751B16FB32ABC1D(float p0) { return _i<Void>(0xF751B16FB32ABC1D, p0); }
	inline Void _0x7C9C0B1EEB1F9072(float p0) { return _i<Void>(0x7C9C0B1EEB1F9072, p0); }
	inline Void _0xB9854DFDE0D833D6(float p0) { return _i<Void>(0xB9854DFDE0D833D6, p0); }
	inline Void _0x9F5E6BB6B34540DA(float p0) { return _i<Void>(0x9F5E6BB6B34540DA, p0); }
	inline Void _0x6216B116083A7CB4(float p0) { return _i<Void>(0x6216B116083A7CB4, p0); }
	inline Void _0xB8F87EAD7533B176(float p0) { return _i<Void>(0xB8F87EAD7533B176, p0); }
	inline Void _0xA7A1127490312C36(float p0) { return _i<Void>(0xA7A1127490312C36, p0); }
	inline Void _0xC3EAD29AB273ECE8(float p0) { return _i<Void>(0xC3EAD29AB273ECE8, p0); }
	inline Void _0xC54A08C85AE4D410(float p0) { return _i<Void>(0xC54A08C85AE4D410, p0); }
	inline bool IsSniperInverted() { return _i<bool>(0x61A23B7EDA9BDA24); }
	inline bool IsOrbisVersion() { return _i<bool>(0xA72BC0B675B1519E); }
	inline bool IsDurangoVersion() { return _i<bool>(0x4D982ADB1978442D); }
	inline bool IsXbox360Version() { return _i<bool>(0xF6201B4DAF662A9D); }
	inline bool IsPs3Version() { return _i<bool>(0xCCA1072C29D096C2); }
	inline bool IsAussieVersion() { return _i<bool>(0x9F1935CA1F724008); }
	inline bool IsFrontendFading() { return _i<bool>(0x7EA2B6AF97ECA6ED); }
	inline Void _0x4DCDF92BF64236CD(Any p0, Any p1) { return _i<Void>(0x4DCDF92BF64236CD, p0, p1); }
	inline Void _0x31125FD509D9043F(Any p0) { return _i<Void>(0x31125FD509D9043F, p0); }
	inline Void _0xEBD3205A207939ED(Any p0) { return _i<Void>(0xEBD3205A207939ED, p0); }
	inline Void _0x97E7E2C04245115B(Any p0) { return _i<Void>(0x97E7E2C04245115B, p0); }
	inline Void _0xEB078CA2B5E82ADD(Any p0, Any p1) { return _i<Void>(0xEB078CA2B5E82ADD, p0, p1); }
	inline Void _0x703CC7F60CBB2B57(Any p0) { return _i<Void>(0x703CC7F60CBB2B57, p0); }
	inline Void _0x8951EB9C6906D3C8() { return _i<Void>(0x8951EB9C6906D3C8); }
	inline Void _0xBA4B8D83BDC75551(Any p0) { return _i<Void>(0xBA4B8D83BDC75551, p0); }
	inline Void _0x23227DF0B2115469() { return _i<Void>(0x23227DF0B2115469); }
}

namespace NETCASH
{
	inline Any _0x9777734DAD16992F() { return _i<Any>(0x9777734DAD16992F); }
	inline bool _0xE260E0BB9CD995AC(Any p0) { return _i<bool>(0xE260E0BB9CD995AC, p0); }
	inline Any _0xE154B48B68EF72BC(Any p0) { return _i<Any>(0xE154B48B68EF72BC, p0); }
	inline Any _0x6FCF8DDEA146C45B(Any p0) { return _i<Any>(0x6FCF8DDEA146C45B, p0); }
	inline Void NetworkBuyAirstrike(int cost, bool p1, bool p2) { return _i<Void>(0x763B4BD305338F19, cost, p1, p2); }
	inline Any _0xA3EDDAA42411D3B9() { return _i<Any>(0xA3EDDAA42411D3B9); }
	inline Void NetworkBuyBounty(int amount, Player victim, bool p2, bool p3) { return _i<Void>(0x7B718E197453F2D9, amount, victim, p2, p3); }
	inline Void _0x30FD873ECE50E9F6(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x30FD873ECE50E9F6, p0, p1, p2, p3, p4); }
	inline Void NetworkBuyFairgroundRide(int amountSpent, Any p1, bool p2, bool p3) { return _i<Void>(0x8A7B3952DD64D2B5, amountSpent, p1, p2, p3); }
	inline Void NetworkBuyHealthcare(int cost, bool p1, bool p2) { return _i<Void>(0xD9B067E55253E3DD, cost, p1, p2); }
	inline Void NetworkBuyHeliStrike(int cost, bool p1, bool p2) { return _i<Void>(0x81AA4610E3FD3A69, cost, p1, p2); }
	inline Void NetworkBuyItem(Ped player, Hash item, Any p2, Any p3, bool p4, String item_name, Any p6, Any p7, Any p8, bool p9) { return _i<Void>(0xF0077C797F66A355, player, item, p2, p3, p4, item_name, p6, p7, p8, p9); }
	inline Any _0xD987F2489969668C() { return _i<Any>(0xD987F2489969668C); }
	inline Void NetworkBuyProperty(float propertyCost, Hash propertyName, bool p2, bool p3) { return _i<Void>(0x650A08A280870AF6, propertyCost, propertyName, p2, p3); }
	inline Any _0x75AF80E61248EEBD() { return _i<Any>(0x75AF80E61248EEBD); }
	inline bool NetworkCanBet(Any p0) { return _i<bool>(0x3A54E33660DED67F, p0); }
	inline Any _0xC62DD18375C99130() { return _i<Any>(0xC62DD18375C99130); }
	inline bool NetworkCanReceivePlayerCash(Any p0, Any p1, Any p2, Any p3) { return _i<bool>(0x5D17BE59D2123284, p0, p1, p2, p3); }
	inline Any _0x1C2473301B1C66BA() { return _i<Any>(0x1C2473301B1C66BA); }
	inline bool _0x7303E27CC6532080(Any p0, bool p1, bool p2, bool p3, Any* p4, Any p5) { return _i<bool>(0x7303E27CC6532080, p0, p1, p2, p3, p4, p5); }
	inline bool NetworkCanSpendMoney(Any p0, bool p1, bool p2, bool p3, Any p4) { return _i<bool>(0xAB3CAA6B422164DA, p0, p1, p2, p3, p4); }
	inline Void NetworkClearCharacterWallet(Any p0) { return _i<Void>(0xA921DED15FDF28F5, p0); }
	inline Any _0x18B7AE224B087E26() { return _i<Any>(0x18B7AE224B087E26); }
	inline Void NetworkDeleteCharacter(int characterIndex, bool p1, bool p2) { return _i<Void>(0x05A50AF38947EB8D, characterIndex, p1, p2); }
	inline Void _0x0CB1BE0633C024A8(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x0CB1BE0633C024A8, p0, p1, p2, p3); }
	inline Void _0x08B0CA7A6AB3AC32(Any p0, Any p1, Any p2) { return _i<Void>(0x08B0CA7A6AB3AC32, p0, p1, p2); }
	inline Void NetworkEarnFromAiTargetKill(Any p0, Any p1) { return _i<Void>(0x515B4A22E4D3C6D7, p0, p1); }
	inline Void NetworkEarnFromAmbientJob(int p0, String p1, Any* p2) { return _i<Void>(0xFB6DB092FBAE29E6, p0, p1, p2); }
	inline Void NetworkEarnFromBendJob(int amount, String heistHash) { return _i<Void>(0x61326EE6DF15B0CA, amount, heistHash); }
	inline Void NetworkEarnFromBetting(int amount, String p1) { return _i<Void>(0x827A5BA1A44ACA6D, amount, p1); }
	inline Void NetworkEarnFromBounty(int amount, int* networkHandle, Any* p2, Any p3) { return _i<Void>(0x131BB5DA15453ACF, amount, networkHandle, p2, p3); }
	inline Void _0x8586789730B10CAF(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x8586789730B10CAF, p0, p1, p2, p3); }
	inline Void NetworkEarnFromChallengeWin(Any p0, Any* p1, bool p2) { return _i<Void>(0x2B171E6B2F64D8DF, p0, p1, p2); }
	inline Void _0xECA658CE2A4E5A72(Any p0, Any p1) { return _i<Void>(0xECA658CE2A4E5A72, p0, p1); }
	inline Void NetworkEarnFromCrateDrop(int amount) { return _i<Void>(0xB1CC1B9EC3007A2A, amount); }
	inline Void NetworkEarnFromDailyObjectives(int p0, String p1, int p2) { return _i<Void>(0x6EA318C91C1A8786, p0, p1, p2); }
	inline Void _0x84C0116D012E8FC2(Any p0) { return _i<Void>(0x84C0116D012E8FC2, p0); }
	inline Void NetworkEarnFromGangattackPickup(int amount) { return _i<Void>(0xA03D4ACE0A3284CE, amount); }
	inline Void _0x31BA138F6304FB9F(Any p0, Any p1) { return _i<Void>(0x31BA138F6304FB9F, p0, p1); }
	inline Void NetworkEarnFromHoldups(int amount) { return _i<Void>(0x45B8154E077D9E4D, amount); }
	inline Void NetworkEarnFromImportExport(Any p0, Any p1) { return _i<Void>(0xF92A014A634442D6, p0, p1); }
	inline Void NetworkEarnFromJob(int amount, String p1) { return _i<Void>(0xB2CC4836834E8A98, amount, p1); }
	inline Void NetworkEarnFromJobBonus(Any p0, Any* p1, Any* p2) { return _i<Void>(0x6816FB4416760775, p0, p1, p2); }
	inline Void NetworkEarnFromNotBadsport(int amount) { return _i<Void>(0x4337511FA8221D36, amount); }
	inline Void NetworkEarnFromPersonalVehicle(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return _i<Void>(0x3F4D00167E41E0AD, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline Void NetworkEarnFromPickup(int amount) { return _i<Void>(0xED1517D3AF17C698, amount); }
	inline Void _0xC8407624CEF2354B(Any p0, Any p1) { return _i<Void>(0xC8407624CEF2354B, p0, p1); }
	inline Void NetworkEarnFromProperty(int amount, Hash propertyName) { return _i<Void>(0x849648349D77F5C5, amount, propertyName); }
	inline Void _NetworkEarnFromArmourTruck(int amount) { return _i<Void>(0xF514621E8EA463D0, amount); }
	inline Void NetworkEarnFromRockstar(int amount) { return _i<Void>(0x02CE1D6AC0FC73EA, amount); }
	inline Void _0x9251B6ABF2D0A5B4(Any p0, Any p1) { return _i<Void>(0x9251B6ABF2D0A5B4, p0, p1); }
	inline Void _0x6B7E4FB50D5F3D65(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x6B7E4FB50D5F3D65, p0, p1, p2, p3, p4); }
	inline Void NetworkEarnFromVehicle(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return _i<Void>(0xB539BD8A4C1EECF8, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline Void _0xEDEAD9A91EC768B3(Any p0, Any p1, Any p2) { return _i<Void>(0xEDEAD9A91EC768B3, p0, p1, p2); }
	inline Any _0x3E4ADAFF1830F146() { return _i<Any>(0x3E4ADAFF1830F146); }
	inline Void _0xCDA1C62BE2777802(Any p0, Any p1, Any p2) { return _i<Void>(0xCDA1C62BE2777802, p0, p1, p2); }
	inline Void _0x55A1E095DB052FA5(Any p0, Any p1) { return _i<Void>(0x55A1E095DB052FA5, p0, p1); }
	inline Void _0xDEE612F2D71B0308(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xDEE612F2D71B0308, p0, p1, p2, p3); }
	inline Void _0x35F8DA0E8A31EF1B(Any p0) { return _i<Void>(0x35F8DA0E8A31EF1B, p0); }
	inline Void _0x005ACA7100BD101D(Any p0) { return _i<Void>(0x005ACA7100BD101D, p0); }
	inline bool _0x7C4FCCD2E4DEB394() { return _i<bool>(0x7C4FCCD2E4DEB394); }
	inline Any _0xA31FD6A0865B6D14() { return _i<Any>(0xA31FD6A0865B6D14); }
	inline bool _0xDC18531D7019A535(Any p0, Any p1) { return _i<bool>(0xDC18531D7019A535, p0, p1); }
	inline Any _0xED5AB8860415BABA() { return _i<Any>(0xED5AB8860415BABA); }
	inline Any _0x08E8EEADFD0DC4A0() { return _i<Any>(0x08E8EEADFD0DC4A0); }
	inline Any _0x5D1E75F91C07DEE5() { return _i<Any>(0x5D1E75F91C07DEE5); }
	inline Any _0xFB2456B2040A6A67() { return _i<Any>(0xFB2456B2040A6A67); }
	inline Any _0x4F54F3B6C202FB4E() { return _i<Any>(0x4F54F3B6C202FB4E); }
	inline Any _0x13A8DE2FD77D04F3() { return _i<Any>(0x13A8DE2FD77D04F3); }
	inline Any _0xEA560AC9EEB1E19B() { return _i<Any>(0xEA560AC9EEB1E19B); }
	inline String _NetworkGetBankBalanceString() { return _i<String>(0xA6FA3979BED01B81); }
	inline Any _0x700AF71AE615E6DD() { return _i<Any>(0x700AF71AE615E6DD); }
	inline Any _0xF9B10B529DCFB33B() { return _i<Any>(0xF9B10B529DCFB33B); }
	inline int64_t NetworkGetVcBalance() { return _i<int>(0x5CBAD97E059E1B94); }
	inline int64_t NetworkGetVcBankBalance() { return _i<int>(0x76EF28DA05EA395A); }
	inline int64_t NetworkGetVcWalletBalance(int character) { return _i<int>(0xA40F9C2623F6A8B5, character); }
	inline Void NetworkGivePlayerJobshareCash(int amount, int* networkHandle) { return _i<Void>(0xFB18DF9CB95E0105, amount, networkHandle); }
	inline Void NetworkInitializeCash(int p0, int p1) { return _i<Void>(0x3DA5ECD1A56CBA6D, p0, p1); }
	inline Void _0x821418C727FCACD7(Any p0) { return _i<Void>(0x821418C727FCACD7, p0); }
	inline bool NetworkMoneyCanBet(Any p0, bool p1, bool p2) { return _i<bool>(0x81404F3DC124FE5B, p0, p1, p2); }
	inline Void NetworkPayEmployeeWage(Any p0, bool p1, bool p2) { return _i<Void>(0x5FD5ED82CBBE9989, p0, p1, p2); }
	inline Void NetworkPayMatchEntryFee(int value, int* p1, bool p2, bool p3) { return _i<Void>(0x9346E14F2AF74D46, value, p1, p2, p3); }
	inline Void NetworkPayUtilityBill(Any p0, bool p1, bool p2) { return _i<Void>(0xAFE08B35EC0C9EAE, p0, p1, p2); }
	inline Void NetworkReceivePlayerJobshareCash(int value, int* networkHandle) { return _i<Void>(0x56A3B51944C50598, value, networkHandle); }
	inline Void NetworkRefundCash(int index, String context, String reason, bool unk) { return _i<Void>(0xF9C812CD7C46E817, index, context, reason, unk); }
	inline Void _0x08A1B82B91900682(Any p0, Any p1, Any p2) { return _i<Void>(0x08A1B82B91900682, p0, p1, p2); }
	inline Void _0xDBC966A01C02BCA7(Any p0, Any p1, Any p2) { return _i<Void>(0xDBC966A01C02BCA7, p0, p1, p2); }
	inline Void NetworkSpentAmmoDrop(Any p0, bool p1, bool p2) { return _i<Void>(0xB162DC95C0A3317B, p0, p1, p2); }
	inline Void NetworkSpentArrestBail(Any p0, bool p1, bool p2) { return _i<Void>(0x812F5488B1B2A299, p0, p1, p2); }
	inline Void _0x5D97630A8A0EF123(Any p0, Any p1, Any p2) { return _i<Void>(0x5D97630A8A0EF123, p0, p1, p2); }
	inline Any NetworkSpentBankInterest() { return _i<Any>(0xCA230C9682556CF1); }
	inline Void NetworkSpentBetting(Any p0, Any p1, Any* p2, bool p3, bool p4) { return _i<Void>(0x1C436FD11FFA692F, p0, p1, p2, p3, p4); }
	inline Void NetworkSpentBoatPickup(Any p0, bool p1, bool p2) { return _i<Void>(0x524EE43A37232C00, p0, p1, p2); }
	inline Any _0xFFBE02CD385356BD() { return _i<Any>(0xFFBE02CD385356BD); }
	inline Void NetworkSpentBounty(Any p0, bool p1, bool p2) { return _i<Void>(0x29B260B84947DFCC, p0, p1, p2); }
	inline Void NetworkSpentBullShark(Any p0, bool p1, bool p2) { return _i<Void>(0xA6DD8458CE24012C, p0, p1, p2); }
	inline Void _0x12D148D26538D0F9(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x12D148D26538D0F9, p0, p1, p2, p3); }
	inline Void NetworkSpentBuyOfftheradar(Any p0, bool p1, bool p2) { return _i<Void>(0xA628A745E2275C5D, p0, p1, p2); }
	inline Void NetworkSpentBuyPassiveMode(Any p0, bool p1, bool p2) { return _i<Void>(0x6D3A430D1A809179, p0, p1, p2); }
	inline Void NetworkSpentBuyRevealPlayers(Any p0, bool p1, bool p2) { return _i<Void>(0x6E176F1B18BC0637, p0, p1, p2); }
	inline Void _0xAC272C0AE01B4BD8(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xAC272C0AE01B4BD8, p0, p1, p2, p3); }
	inline Void NetworkSpentBuyWantedlevel(Any p0, Any* p1, bool p2, bool p3) { return _i<Void>(0xE1B13771A843C4F6, p0, p1, p2, p3); }
	inline Void NetworkSpentCallPlayer(Any p0, Any* p1, bool p2, bool p3) { return _i<Void>(0xACDE7185B374177C, p0, p1, p2, p3); }
	inline Void NetworkSpentCarwash(Any p0, Any p1, Any p2, bool p3, bool p4) { return _i<Void>(0xEC03C719DB2F4306, p0, p1, p2, p3, p4); }
	inline Void NetworkSpentCashDrop(int amount, bool p1, bool p2) { return _i<Void>(0x289016EC778D60E0, amount, p1, p2); }
	inline Void _0x5F456788B05FAEAC(Any p0, Any p1, Any p2) { return _i<Void>(0x5F456788B05FAEAC, p0, p1, p2); }
	inline Void NetworkSpentCinema(Any p0, Any p1, bool p2, bool p3) { return _i<Void>(0x6B38ECB05A63A685, p0, p1, p2, p3); }
	inline Void _0x5182A339A3474510(Any p0, Any p1, Any p2) { return _i<Void>(0x5182A339A3474510, p0, p1, p2); }
	inline Void NetworkSpentFromRockstar(int bank, bool p1, bool p2) { return _i<Void>(0x6A445B64ED7ABEB5, bank, p1, p2); }
	inline Any _0xB1F1346FD57685D7() { return _i<Any>(0xB1F1346FD57685D7); }
	inline Any _0xB18AC2ECBB15CB6A() { return _i<Any>(0xB18AC2ECBB15CB6A); }
	inline Void NetworkSpentHeliPickup(Any p0, bool p1, bool p2) { return _i<Void>(0x7BF1D73DB2ECA492, p0, p1, p2); }
	inline Void NetworkSpentHireMercenary(Any p0, bool p1, bool p2) { return _i<Void>(0xE7B80E2BF9D80BD6, p0, p1, p2); }
	inline Void NetworkSpentHireMugger(Any p0, bool p1, bool p2) { return _i<Void>(0xE404BFB981665BF0, p0, p1, p2); }
	inline Void NetworkSpentHoldups(Any p0, bool p1, bool p2) { return _i<Void>(0xD9B86B9872039763, p0, p1, p2); }
	inline Void _0xC1952F3773BA18FE(Any p0, Any p1, Any p2) { return _i<Void>(0xC1952F3773BA18FE, p0, p1, p2); }
	inline Void NetworkSpentInStripclub(Any p0, bool p1, Any p2, bool p3) { return _i<Void>(0xEE99784E4467689C, p0, p1, p2, p3); }
	inline Any _0x28F174A67B8D0C2F() { return _i<Any>(0x28F174A67B8D0C2F); }
	inline Void _0x5BCDE0F640C773D2(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x5BCDE0F640C773D2, p0, p1, p2, p3); }
	inline Void _0xD7CCCBA28C4ECAF0(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0xD7CCCBA28C4ECAF0, p0, p1, p2, p3, p4); }
	inline Void _0xE7DF4E0545DFB56E(Any p0, Any p1, Any p2) { return _i<Void>(0xE7DF4E0545DFB56E, p0, p1, p2); }
	inline Void NetworkSpentNoCops(Any p0, bool p1, bool p2) { return _i<Void>(0xD5BB406F4E04019F, p0, p1, p2); }
	inline Void _0xE8B0B270B6E7C76E(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xE8B0B270B6E7C76E, p0, p1, p2, p3); }
	inline Void _0x05F04155A226FBBF(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x05F04155A226FBBF, p0, p1, p2, p3); }
	inline Void _0x0035BB914316F1E3(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x0035BB914316F1E3, p0, p1, p2, p3); }
	inline Void NetworkSpentPayVehicleInsurancePremium(int amount, Hash vehicleModel, int* networkHandle, bool notBankrupt, bool hasTheMoney) { return _i<Void>(0x9FF28D88C766E3E8, amount, vehicleModel, networkHandle, notBankrupt, hasTheMoney); }
	inline Void _0x0FE8E1FCD2B86B33(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x0FE8E1FCD2B86B33, p0, p1, p2, p3); }
	inline Void _0xB49ECA122467D05F(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xB49ECA122467D05F, p0, p1, p2, p3); }
	inline Void _0x112209CE0290C03A(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x112209CE0290C03A, p0, p1, p2, p3); }
	inline Void _0xE23ADC6FCB1F29AE(Any p0, Any p1, Any p2) { return _i<Void>(0xE23ADC6FCB1F29AE, p0, p1, p2); }
	inline Void _0x0D30EB83668E63C5(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x0D30EB83668E63C5, p0, p1, p2, p3); }
	inline Void _0xED5FD7AF10F5E262(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xED5FD7AF10F5E262, p0, p1, p2, p3); }
	inline Void NetworkSpentPlayerHealthcare(Any p0, Any p1, bool p2, bool p3) { return _i<Void>(0x7C99101F7FCE2EE5, p0, p1, p2, p3); }
	inline Void NetworkSpentProstitutes(Any p0, bool p1, bool p2) { return _i<Void>(0xB21B89501CFAC79E, p0, p1, p2); }
	inline Void _0x6FD97159FE3C971A(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x6FD97159FE3C971A, p0, p1, p2, p3); }
	inline Void _0x998E18CEB44487FC(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x998E18CEB44487FC, p0, p1, p2, p3); }
	inline Void _0xCCB339CC970452DA(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xCCB339CC970452DA, p0, p1, p2, p3); }
	inline Void _0x33981D6804E62F49(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x33981D6804E62F49, p0, p1, p2, p3); }
	inline Void _0xB4C2EC463672474E(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xB4C2EC463672474E, p0, p1, p2, p3); }
	inline Void _0x69EF772B192614C1(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x69EF772B192614C1, p0, p1, p2, p3); }
	inline Void _0xBD0EFB25CCA8F97A(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xBD0EFB25CCA8F97A, p0, p1, p2, p3); }
	inline Void _0xFC4EE00A7B3BFB76(Any p0, Any p1, Any p2) { return _i<Void>(0xFC4EE00A7B3BFB76, p0, p1, p2); }
	inline Void NetworkSpentRequestHeist(Any p0, bool p1, bool p2) { return _i<Void>(0x9D26502BB97BFE62, p0, p1, p2); }
	inline Void NetworkSpentRequestJob(Any p0, bool p1, bool p2) { return _i<Void>(0x8204DA7934DF3155, p0, p1, p2); }
	inline Void NetworkSpentRobbedByMugger(int amount, bool p1, bool p2) { return _i<Void>(0x995A65F15F581359, amount, p1, p2); }
	inline Void NetworkSpentTaxi(int amount, bool p1, bool p2) { return _i<Void>(0x17C3A7D31EAE39F9, amount, p1, p2); }
	inline Void NetworkSpentTelescope(Any p0, bool p1, bool p2) { return _i<Void>(0x7FE61782AD94CC09, p0, p1, p2); }
	inline Void _0xA51B086B0B2C0F7A(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xA51B086B0B2C0F7A, p0, p1, p2, p3); }
	inline Void _0x2FAB6614CE22E196(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x2FAB6614CE22E196, p0, p1, p2, p3); }
	inline Void _0x675D19C6067CAE08(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x675D19C6067CAE08, p0, p1, p2, p3); }
	inline Void _0xFA07759E6FDDD7CF(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xFA07759E6FDDD7CF, p0, p1, p2, p3); }
	inline Void _0x615EB504B0788DAF(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x615EB504B0788DAF, p0, p1, p2, p3); }
	inline Void _0x4128464231E3CA0B(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x4128464231E3CA0B, p0, p1, p2, p3); }
	inline Void _0x2AFC2D19B50797F2(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x2AFC2D19B50797F2, p0, p1, p2, p3); }
	inline Void _0x8E243837643D9583(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x8E243837643D9583, p0, p1, p2, p3); }
	inline Void _0x365E877C61D6988B(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x365E877C61D6988B, p0, p1, p2, p3); }
	inline Void _0xA95F667A755725DA(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xA95F667A755725DA, p0, p1, p2, p3); }
	inline Void _0x0C82D21A77C22D49(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x0C82D21A77C22D49, p0, p1, p2, p3); }
	inline Void _0xA75CCF58A60A5FD1(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return _i<Void>(0xA75CCF58A60A5FD1, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Void _0xD99DB210089617FE(Any p0, Any p1, Any p2) { return _i<Void>(0xD99DB210089617FE, p0, p1, p2); }
	inline String ProcessCashGift(int* p0, int* p1, String p2) { return _i<String>(0x20194D48EAEC9A41, p0, p1, p2); }
	inline Any _0xF70EFA14FE091429(Any p0) { return _i<Any>(0xF70EFA14FE091429, p0); }
	inline Any _0x9B5016A6433A68C5() { return _i<Any>(0x9B5016A6433A68C5); }
	inline Any _0xCD0F5B5D932AE473() { return _i<Any>(0xCD0F5B5D932AE473); }
}

namespace MOBILE
{
	inline bool CanPhoneBeSeenOnScreen() { return _i<bool>(0xC4E2813898C97A4B); }
	inline Void CellCamActivate(bool p0, bool p1) { return _i<Void>(0xFDE8F069C542D126, p0, p1); }
	inline Void _DisablePhoneThisFrame(bool toggle) { return _i<Void>(0x015C49A93E3E086E, toggle); }
	inline Void _0xA2CCBE62CD4C91A4(int* toggle) { return _i<Void>(0xA2CCBE62CD4C91A4, toggle); }
	inline bool CellCamIsCharVisibleNoFaceCheck(Entity entity) { return _i<bool>(0x439E9BC95B7E7FBE, entity); }
	inline Void _0xAC2890471901861C(float p0) { return _i<Void>(0xAC2890471901861C, p0); }
	inline Void _0x466DA42C89865553(float p0) { return _i<Void>(0x466DA42C89865553, p0); }
	inline Void _0xF1E22DC13F5EEBAD(float p0) { return _i<Void>(0xF1E22DC13F5EEBAD, p0); }
	inline Void _0xD6ADE981781FCA09(float p0) { return _i<Void>(0xD6ADE981781FCA09, p0); }
	inline Void _0x53F4892D18EC90A4(float p0) { return _i<Void>(0x53F4892D18EC90A4, p0); }
	inline Void _0x15E69E2802C24B8D(float p0) { return _i<Void>(0x15E69E2802C24B8D, p0); }
	inline Void _0x1B0B4AEED5B9B41C(float p0) { return _i<Void>(0x1B0B4AEED5B9B41C, p0); }
	inline Void _0x3117D84EFA60F77B(float p0) { return _i<Void>(0x3117D84EFA60F77B, p0); }
	inline Void _SetPhoneLean(bool Toggle) { return _i<Void>(0x44E44169EF70138E, Toggle); }
	inline Void _MoveFinger(int direction) { return _i<Void>(0x95C9E72F3D7DEC9B, direction); }
	inline Void CreateMobilePhone(int phoneType) { return _i<Void>(0xA4E8E696C532FBC7, phoneType); }
	inline Void DestroyMobilePhone() { return _i<Void>(0x3BC861DF703E5097); }
	inline Void GetMobilePhonePosition(Vector3* position) { return _i<Void>(0x584FDFDA48805B86, position); }
	inline Void GetMobilePhoneRenderId(int* renderId) { return _i<Void>(0xB4A53E05F68B6FA1, renderId); }
	inline Void GetMobilePhoneRotation(Vector3* rotation, Any p1) { return _i<Void>(0x1CEFB61F193070AE, rotation, p1); }
	inline Void ScriptIsMovingMobilePhoneOffscreen(bool toggle) { return _i<Void>(0xF511F759238A5122, toggle); }
	inline Void _0x375A706A5C2FD084(Any p0) { return _i<Void>(0x375A706A5C2FD084, p0); }
	inline Void SetMobilePhonePosition(float posX, float posY, float posZ) { return _i<Void>(0x693A5C6D6734085B, posX, posY, posZ); }
	inline Void SetMobilePhoneRotation(float rotX, float rotY, float rotZ, Any p3) { return _i<Void>(0xBB779C0CA917E865, rotX, rotY, rotZ, p3); }
	inline Void SetMobilePhoneScale(float scale) { return _i<Void>(0xCBDD322A73D6D932, scale); }
}

namespace NETSHOP
{
	inline Any _NetworkShopBasketAddItem(Any* p0, Any p1) { return _i<Any>(0xF30980718C8ED876, p0, p1); }
	inline bool _NetworkShopBasketApplyServerData(Any p0, Any* p1) { return _i<bool>(0xE1A0450ED46A7812, p0, p1); }
	inline Any _NetworkShopBasketEnd() { return _i<Any>(0xA65568121DF2EA26); }
	inline Any _0xE547E9114277098F() { return _i<Any>(0xE547E9114277098F); }
	inline Any _NetworkShopBasketIsFull() { return _i<Any>(0x27F76CC6C55AD30E); }
	inline bool _NetworkShopBasketStart(Any* p0, Any p1, Any p2, Any p3) { return _i<bool>(0x279F08B1A4B29B7E, p0, p1, p2, p3); }
	inline bool _NetworkShopBeginService(int* value, Any p1, Any p2, Any p3, Any p4, int p5) { return _i<bool>(0x3C5FD37B5499582E, value, p1, p2, p3, p4, p5); }
	inline Any _0x3C4487461E9B0DCB() { return _i<Any>(0x3C4487461E9B0DCB); }
	inline bool _NetworkShopDoesItemExist(String name) { return _i<bool>(0xBD4D7EAF8A30F637, name); }
	inline bool _NetworkShopDoesItemExistHash(Hash hash) { return _i<bool>(0x247F0F73A182EA0B, hash); }
	inline bool _NetworkShopCheckoutStart(Any p0) { return _i<bool>(0x39BE7CEA8D9CC8E6, p0); }
	inline bool _0x74A0FD0688F1EE45(Any p0) { return _i<bool>(0x74A0FD0688F1EE45, p0); }
	inline bool _0x51F1A8E48C3D2F6D(Any p0, bool p1, Any p2) { return _i<bool>(0x51F1A8E48C3D2F6D, p0, p1, p2); }
	inline Any _0x0A6D923DFFC9BD89() { return _i<Any>(0x0A6D923DFFC9BD89); }
	inline Any _NetworkShopDeleteSetTelemetryNonceSeed() { return _i<Any>(0x112CEF1615A1139F); }
	inline bool _NetworkShopEndService(Any p0) { return _i<bool>(0xE2A99A9B524BEFFF, p0); }
	inline Any _0x85F6C9ABA1DE2BCF() { return _i<Any>(0x85F6C9ABA1DE2BCF); }
	inline int _NetworkShopGetPrice(Hash hash, Hash hash2, bool p2) { return _i<int>(0xC27009422FCCA88D, hash, hash2, p2); }
	inline bool _0x897433D292B44130(Any* p0, Any* p1) { return _i<bool>(0x897433D292B44130, p0, p1); }
	inline Any _0xE3E5A7C64CA2C6ED() { return _i<Any>(0xE3E5A7C64CA2C6ED); }
	inline Any _0x2B949A1E6AEC8F6A() { return _i<Any>(0x2B949A1E6AEC8F6A); }
	inline bool _NetworkShopGetTransactionsDisabled() { return _i<bool>(0x810E8431C0614BF9); }
	inline bool _NetworkShopGetTransactionsEnabledForCharacter(int mpChar) { return _i<bool>(0xB24F0944DA203D9E, mpChar); }
	inline Any _0x357B152EF96C30B6() { return _i<Any>(0x357B152EF96C30B6); }
	inline bool _0xCF38DAFBB49EDE5E(Any* p0) { return _i<bool>(0xCF38DAFBB49EDE5E, p0); }
	inline bool _0x0395CB47B022E62C(Any* p0) { return _i<bool>(0x0395CB47B022E62C, p0); }
	inline bool _0xC13C38E47EA5DF31(Any* p0) { return _i<bool>(0xC13C38E47EA5DF31, p0); }
	inline bool _0x170910093218C8B9(Any* p0) { return _i<bool>(0x170910093218C8B9, p0); }
	inline bool _NetworkShopSessionApplyReceivedData(Any p0) { return _i<bool>(0x2F41D51BA3BCD1F1, p0); }
	inline bool _NetworkShopSetTelemetryNonceSeed(Any p0) { return _i<bool>(0x9507D4271988E1AE, p0); }
	inline bool _NetworkShopStartSession(Any p0) { return _i<bool>(0xA135AC892A58FC07, p0); }
	inline Any _0x72EB7BA9B69BF6AB() { return _i<Any>(0x72EB7BA9B69BF6AB); }
	inline bool _0x35A1B3E1D1315CFA(bool p0, bool p1) { return _i<bool>(0x35A1B3E1D1315CFA, p0, p1); }
	inline Any _0x613F125BA3BD2EB9() { return _i<Any>(0x613F125BA3BD2EB9); }
	inline bool _NetworkTransferBankToWallet(int charStatInt, int amount) { return _i<bool>(0xD47A2C1BA117471D, charStatInt, amount); }
	inline Any _0x23789E777D14CE44() { return _i<Any>(0x23789E777D14CE44); }
	inline Any _0x350AA5EBC03D3BD2() { return _i<Any>(0x350AA5EBC03D3BD2); }
	inline Any _NetworkShopCashTransferSetTelemetryNonceSeed() { return _i<Any>(0x498C1E05CE5F7877); }
	inline bool _NetworkTransferWalletToBank(int charStatInt, int amount) { return _i<bool>(0xC2F7FE5309181C7D, charStatInt, amount); }
}

namespace NETWORK
{
	inline Void _0x1F7BC3539F9E0224() { return _i<Void>(0x1F7BC3539F9E0224); }
	inline bool _0xBD545D44CCE70597() { return _i<bool>(0xBD545D44CCE70597); }
	inline Any _0xEBCAB9E5048434F4() { return _i<Any>(0xEBCAB9E5048434F4); }
	inline Any _0x7808619F31FF22DB() { return _i<Any>(0x7808619F31FF22DB); }
	inline Void ActivateDamageTrackerOnNetworkId(int netID, bool p1) { return _i<Void>(0xD45B1FFCCD52FF19, netID, p1); }
	inline Void _0xBEC0816FF5ACBCDA(Any p0, Any p1) { return _i<Void>(0xBEC0816FF5ACBCDA, p0, p1); }
	inline bool BadSportPlayerLeftDetected(int* networkHandle, int event, int amountReceived) { return _i<bool>(0xEC5E3AF5289DCA81, networkHandle, event, amountReceived); }
	inline Any _0xE16AA70CE9BEEDC3(Any p0) { return _i<Any>(0xE16AA70CE9BEEDC3, p0); }
	inline bool CanRegisterMissionEntities(int p0, Any p1, Any p2, Any p3) { return _i<bool>(0x69778E7564BADE6D, p0, p1, p2, p3); }
	inline bool CanRegisterMissionObjects(int p0) { return _i<bool>(0x800DD4721A8B008B, p0); }
	inline bool CanRegisterMissionPeds(int p0) { return _i<bool>(0xBCBF4FEF9FA5D781, p0); }
	inline bool _CanRegisterMissionPickups(int p0) { return _i<bool>(0x0A49D1CB6E34AF72, p0); }
	inline bool CanRegisterMissionVehicles(int p0) { return _i<bool>(0x7277F1F2E085EE74, p0); }
	inline Void _DownloadCheck() { return _i<Void>(0x4F18196C8D38768D); }
	inline Any _0xC64DED7EF0D2FE37(Any* p0) { return _i<Any>(0xC64DED7EF0D2FE37, p0); }
	inline bool _0x3A3D5568AF297CD5(Any p0) { return _i<bool>(0x3A3D5568AF297CD5, p0); }
	inline Any NetworkEnableMotionDrugged() { return _i<Any>(0x0B0CC10720653F3B); }
	inline bool _0x4C61B39930D045DA(Any p0) { return _i<bool>(0x4C61B39930D045DA, p0); }
	inline Any _0xC7ABAC5DE675EE3B() { return _i<Any>(0xC7ABAC5DE675EE3B); }
	inline Void _GetDateAndTimeFromUnixEpoch(int unixEpoch, Any* timeStructure) { return _i<Void>(0xAC97AF97FA68E5D5, unixEpoch, timeStructure); }
	inline Void _0x265635150FB0D82E() { return _i<Void>(0x265635150FB0D82E); }
	inline Any _0x43865688AE10F0D7() { return _i<Any>(0x43865688AE10F0D7); }
	inline Any _0xA75E2B6733DA5142() { return _i<Any>(0xA75E2B6733DA5142); }
	inline Any _0x62B9FEC9A11F10EF() { return _i<Any>(0x62B9FEC9A11F10EF); }
	inline bool _0x098AB65B9ED9A9EC(Any* p0, Any p1, Any p2) { return _i<bool>(0x098AB65B9ED9A9EC, p0, p1, p2); }
	inline bool _0x0AE1F1653B554AB9(Any p0) { return _i<bool>(0x0AE1F1653B554AB9, p0); }
	inline Any _0xDC48473142545431() { return _i<Any>(0xDC48473142545431); }
	inline Void FadeOutLocalPlayer(bool p0) { return _i<Void>(0x416DBD4CD6ED8DD2, p0); }
	inline bool FilloutPmPlayerList(int* networkHandle, Any p1, Any p2) { return _i<bool>(0xCBBD7C4991B64809, networkHandle, p1, p2); }
	inline bool FilloutPmPlayerListWithNames(Any* p0, Any* p1, Any p2, Any p3) { return _i<bool>(0x716B6DB9D1886106, p0, p1, p2, p3); }
	inline int _GetPosixTime() { return _i<int>(0x9A73240B49945C76); }
	inline Any _0xF12E6CD06C73D69E() { return _i<Any>(0xF12E6CD06C73D69E); }
	inline Any _0x6F44CBF56D79FAC0(Any p0, Any p1) { return _i<Any>(0x6F44CBF56D79FAC0, p0, p1); }
	inline Any _0x662635855957C411(Any p0) { return _i<Any>(0x662635855957C411, p0); }
	inline Any _0xB4271092CA7EDF48(Any p0) { return _i<Any>(0xB4271092CA7EDF48, p0); }
	inline Any _0x2A7776C709904AB0(Any p0) { return _i<Any>(0x2A7776C709904AB0, p0); }
	inline Any _0x722F5D28B61C5EA8(Any p0) { return _i<Any>(0x722F5D28B61C5EA8, p0); }
	inline Any _0xCA94551B50B4932C(Any p0) { return _i<Any>(0xCA94551B50B4932C, p0); }
	inline Any _0x74FB3E29E6D10FA9() { return _i<Any>(0x74FB3E29E6D10FA9); }
	inline Any _0xA0FA4EC6A05DA44E() { return _i<Any>(0xA0FA4EC6A05DA44E); }
	inline Any _0x58CC181719256197(Any p0, Any p1, Any p2) { return _i<Any>(0x58CC181719256197, p0, p1, p2); }
	inline Any NetworkIsPendingFriend(Any p0) { return _i<Any>(0x0BE73DA6984A6E33, p0); }
	inline Any _0x8B0C2964BA471961() { return _i<Any>(0x8B0C2964BA471961); }
	inline Any _0x88B588B41FF7868E() { return _i<Any>(0x88B588B41FF7868E); }
	inline Any _0x67FC09BC554A75E5() { return _i<Any>(0x67FC09BC554A75E5); }
	inline Any _0x6FB7BB3607D27FA2() { return _i<Any>(0x6FB7BB3607D27FA2); }
	inline Any _0xC7BE335216B5EC7C() { return _i<Any>(0xC7BE335216B5EC7C); }
	inline Any _0x0C1F7D49C39D2289() { return _i<Any>(0x0C1F7D49C39D2289); }
	inline Any _0xA72835064DD63E4C() { return _i<Any>(0xA72835064DD63E4C); }
	inline Any _0x0AFCE529F69B21FF() { return _i<Any>(0x0AFCE529F69B21FF); }
	inline int GetNetworkTime() { return _i<int>(0x7A5487FE9FAA6B48); }
	inline int _0x89023FBBF9200E9F() { return _i<int>(0x89023FBBF9200E9F); }
	inline Any _0xF2EAC213D5EA0623() { return _i<Any>(0xF2EAC213D5EA0623); }
	inline int _0x12B6281B6C6706C0(bool p0) { return _i<int>(0x12B6281B6C6706C0, p0); }
	inline int _0xCB215C4B56A7FAE7(bool p0) { return _i<int>(0xCB215C4B56A7FAE7, p0); }
	inline int _0x0CD9AB83489430EA(bool p0) { return _i<int>(0x0CD9AB83489430EA, p0); }
	inline int GetNumReservedMissionObjects(bool p0, Any p1) { return _i<int>(0xAA81B5F10BC43AC2, p0, p1); }
	inline int GetNumReservedMissionPeds(bool p0, Any p1) { return _i<int>(0x1F13D5AE5CB17E17, p0, p1); }
	inline int GetNumReservedMissionVehicles(bool p0, Any p1) { return _i<int>(0xCF3A965906452031, p0, p1); }
	inline String _GetOnlineVersion() { return _i<String>(0xFCA9373EF340AC0A); }
	inline Any _0x8BD6C6DEA20E82C6(Any p0) { return _i<Any>(0x8BD6C6DEA20E82C6, p0); }
	inline String GetTimeAsString(int time) { return _i<String>(0x9E23B1777A927DAD, time); }
	inline int GetTimeDifference(int timeA, int timeB) { return _i<int>(0xA2C6FC031D46FFF0, timeA, timeB); }
	inline int GetTimeOffset(int timeA, int timeB) { return _i<int>(0x017008CCDAD48503, timeA, timeB); }
	inline bool HasNetworkTimeStarted() { return _i<bool>(0x46718ACEEDEAFC84); }
	inline Any _0x1D4DC17C38FEAFF0() { return _i<Any>(0x1D4DC17C38FEAFF0); }
	inline Any _0xEA14EEF5B7CD2C30() { return _i<Any>(0xEA14EEF5B7CD2C30); }
	inline Any _0x2EAC52B4019E2782() { return _i<Any>(0x2EAC52B4019E2782); }
	inline bool IsDamageTrackerActiveOnNetworkId(int netID) { return _i<bool>(0x6E192E33AD436366, netID); }
	inline Any _0xB2092A1EAA7FD45F(Any p0) { return _i<Any>(0xB2092A1EAA7FD45F, p0); }
	inline bool _0x21D04D7BC538C146(Any p0) { return _i<bool>(0x21D04D7BC538C146, p0); }
	inline Any _0x7EF7649B64D7FF10(Any p0) { return _i<Any>(0x7EF7649B64D7FF10, p0); }
	inline bool _0xA1607996431332DF(int netId) { return _i<bool>(0xA1607996431332DF, netId); }
	inline bool IsPlayerInCutscene(Player player) { return _i<bool>(0xE73092F4157CD126, player); }
	inline bool NetworkIsSignedOnline() { return _i<bool>(0x1077788E268557C2); }
	inline bool IsSphereVisibleToAnotherMachine(float p0, float p1, float p2, float p3) { return _i<bool>(0xD82CF8E64C8729D8, p0, p1, p2, p3); }
	inline bool IsSphereVisibleToPlayer(Any p0, float p1, float p2, float p3, float p4) { return _i<bool>(0xDC3A310219E5DA62, p0, p1, p2, p3, p4); }
	inline Any _0x883D79C4071E18B3() { return _i<Any>(0x883D79C4071E18B3); }
	inline bool IsTimeEqualTo(int timeA, int timeB) { return _i<bool>(0xF5BC95857BD6D512, timeA, timeB); }
	inline bool IsTimeLessThan(int timeA, int timeB) { return _i<bool>(0xCB2CF5148012C8D0, timeA, timeB); }
	inline bool IsTimeMoreThan(int timeA, int timeB) { return _i<bool>(0xDE350F8651E4346C, timeA, timeB); }
	inline Any _0x59328EB08C5CEB2B() { return _i<Any>(0x59328EB08C5CEB2B); }
	inline bool NetworkAcceptPresenceInvite(Any p0) { return _i<bool>(0xFA91550DF9318B22, p0); }
	inline bool NetworkAccessTunableBool(String tunableContext, String tunableName) { return _i<bool>(0xAA6A47A573ABB75A, tunableContext, tunableName); }
	inline bool NetworkAccessTunableBoolHash(Hash tunableContext, Hash tunableName) { return _i<bool>(0xEA16B69D93D71A45, tunableContext, tunableName); }
	inline bool NetworkAccessTunableFloat(String tunableContext, String tunableName, float* value) { return _i<bool>(0xE5608CA7BC163A5F, tunableContext, tunableName, value); }
	inline bool NetworkAccessTunableFloatHash(Hash tunableContext, Hash tunableName, float* value) { return _i<bool>(0x972BC203BBC4C4D5, tunableContext, tunableName, value); }
	inline Any _0x3A8B55FDA4C8DDEF(Any p0, Any p1, Any p2) { return _i<Any>(0x3A8B55FDA4C8DDEF, p0, p1, p2); }
	inline Any _0x1950DAE9848A4739(Any p0, Any p1, Any p2) { return _i<Any>(0x1950DAE9848A4739, p0, p1, p2); }
	inline Any _0x697F508861875B42(Any p0, Any p1, Any p2) { return _i<Any>(0x697F508861875B42, p0, p1, p2); }
	inline bool NetworkAccessTunableInt(String tunableContext, String tunableName, int* value) { return _i<bool>(0x8BE1146DFD5D4468, tunableContext, tunableName, value); }
	inline bool NetworkAccessTunableIntHash(Hash tunableContext, Hash tunableName, int* value) { return _i<bool>(0x40FCE03E50E8DBE8, tunableContext, tunableName, value); }
	inline Any _0xFAFC23AEE23868DB() { return _i<Any>(0xFAFC23AEE23868DB); }
	inline Any NetworkActionFollowInvite() { return _i<Any>(0xC88156EBB786F8D5); }
	inline Any _0x2B1C623823DB0D9D(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Any>(0x2B1C623823DB0D9D, p0, p1, p2, p3, p4, p5, p6); }
	inline Any _0x25B99872D588A101(float p0, float p1, float p2, float p3, float p4, float p5) { return _i<Any>(0x25B99872D588A101, p0, p1, p2, p3, p4, p5); }
	inline Any NetworkAddEntityAngledArea(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return _i<Any>(0x376C6375BA60293A, p0, p1, p2, p3, p4, p5, p6); }
	inline Any NetworkAddEntityArea(float p0, float p1, float p2, float p3, float p4, float p5) { return _i<Any>(0x494C8FB299290269, p0, p1, p2, p3, p4, p5); }
	inline Void NetworkAddEntityToSynchronisedScene(Entity entity, int netScene, String animDict, String animName, float speed, float speedMulitiplier, int flag) { return _i<Void>(0xF2404D68CBC855FA, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); }
	inline Void NetworkAddFollowers(int* p0, int p1) { return _i<Void>(0x236406F60CF216D6, p0, p1); }
	inline bool NetworkAddFriend(int* p0, String p1) { return _i<bool>(0x8E02D73914064223, p0, p1); }
	inline Void NetworkAddPedToSynchronisedScene(Ped ped, int netScene, String animDict, String animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { return _i<Void>(0x742A637471BCECD9, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); }
	inline Void _NetworkForceLocalUseOfSyncedSceneCamera(int netScene, String animDict, String animName) { return _i<Void>(0xCF8BD3B0BD6D42D7, netScene, animDict, animName); }
	inline Void _0xFB680D403909DC70(Any p0, Any p1) { return _i<Void>(0xFB680D403909DC70, p0, p1); }
	inline Void _NetworkBlockKickedPlayers(bool p0) { return _i<Void>(0x6B07B9CE4D390375, p0); }
	inline Void _0x267C78C60E806B9A(Any p0, bool p1) { return _i<Void>(0x267C78C60E806B9A, p0, p1); }
	inline Void _0x144DA052257AE7D8(Any p0) { return _i<Void>(0x144DA052257AE7D8, p0); }
	inline bool NetworkAmIBlockedByGamer(Any* p0) { return _i<bool>(0x15337C7C268A27B2, p0); }
	inline bool NetworkAmIBlockedByPlayer(Player player) { return _i<bool>(0x87F395D957D4353D, player); }
	inline bool NetworkAmIMutedByGamer(Any* p0) { return _i<bool>(0xDF02A2C93F1F26DA, p0); }
	inline bool NetworkAmIMutedByPlayer(Player player) { return _i<bool>(0x9D6981DFC91A8604, player); }
	inline bool _0x99B72C7ABDE5C910(Ped ped, Player player) { return _i<bool>(0x99B72C7ABDE5C910, ped, player); }
	inline Void _0xE66C690248F11150(Entity p0, Any p1) { return _i<Void>(0xE66C690248F11150, p0, p1); }
	inline Void NetworkApplyTransitionParameter(Any p0, Any p1) { return _i<Void>(0x521638ADA1BA0D18, p0, p1); }
	inline Void _0xEBEFC2E77084F599(Any p0, String p1, bool p2) { return _i<Void>(0xEBEFC2E77084F599, p0, p1, p2); }
	inline Void _0xDBD2056652689917(float x, float y, float z) { return _i<Void>(0xDBD2056652689917, x, y, z); }
	inline bool NetworkAreHandlesTheSame(int* netHandle1, int* netHandle2) { return _i<bool>(0x57DBA049E110F217, netHandle1, netHandle2); }
	inline bool _NetworkIsPlayerEqualToIndex(Player player, int index) { return _i<bool>(0x9DE986FC9A87C474, player, index); }
	inline Any _0xBA9775570DB788CF() { return _i<Any>(0xBA9775570DB788CF); }
	inline bool NetworkAreTransitionDetailsValid(Any p0) { return _i<bool>(0x2615AA2A695930C1, p0); }
	inline Void NetworkAttachSynchronisedSceneToEntity(int netScene, Entity entity, int bone) { return _i<Void>(0x478DCBD2A98B705A, netScene, entity, bone); }
	inline Void NetworkBail(Any p0, Any p1, Any p2) { return _i<Void>(0x95914459A87EBA28, p0, p1, p2); }
	inline Void NetworkBailTransition(Any p0, Any p1, Any p2) { return _i<Void>(0xEAA572036990CD1B, p0, p1, p2); }
	inline Void NetworkBlockInvites(bool toggle) { return _i<Void>(0x34F9E9049454A7A0, toggle); }
	inline Void _0xCFEB8AF24FC1D0BB(bool p0) { return _i<Void>(0xCFEB8AF24FC1D0BB, p0); }
	inline Void _0xBD0BE0BFC927EAC1() { return _i<Void>(0xBD0BE0BFC927EAC1); }
	inline Void _0xFB8F2A6F3DF08CBE() { return _i<Void>(0xFB8F2A6F3DF08CBE); }
	inline bool NetworkCanAccessMultiplayer(int* loadingState) { return _i<bool>(0xAF50DA1A3F8B1BA4, loadingState); }
	inline bool NetworkCanBail() { return _i<bool>(0x580CE4438479CC61); }
	inline Any _0x8F5D1AD832AEB06C(Any p0) { return _i<Any>(0x8F5D1AD832AEB06C, p0); }
	inline bool NetworkCanEnterMultiplayer() { return _i<bool>(0x7E782A910C362C25); }
	inline bool _0x135F9B7B7ADD2185(Any* p0) { return _i<bool>(0x135F9B7B7ADD2185, p0); }
	inline Any _0x2BF66D2E7414F686() { return _i<Any>(0x2BF66D2E7414F686); }
	inline bool NetworkCanSessionEnd() { return _i<bool>(0x4EEBC3694E49C572); }
	inline bool NetworkCanSetWaypoint() { return _i<bool>(0xC927EC229934AF60); }
	inline bool NetworkCanCommunicateWithGamer(int* player) { return _i<bool>(0xA150A4F065806B1F, player); }
	inline Void NetworkChangeTransitionSlots(Any p0, Any p1) { return _i<Void>(0xEEEDA5E6D7080987, p0, p1); }
	inline bool _0x83F28CE49FBBFFBA(Any p0, Any p1, bool p2) { return _i<bool>(0x83F28CE49FBBFFBA, p0, p1, p2); }
	inline Any _0x4AD490AE1536933B(Any p0, Any p1) { return _i<Any>(0x4AD490AE1536933B, p0, p1); }
	inline bool _0x44B37CDCAE765AAE(Any p0, Any* p1) { return _i<bool>(0x44B37CDCAE765AAE, p0, p1); }
	inline bool _0x78321BEA235FD8CD(Any p0, bool p1) { return _i<bool>(0x78321BEA235FD8CD, p0, p1); }
	inline Any _0x0CF6CC51AA18F0F8(Any p0, Any p1, Any p2) { return _i<Any>(0x0CF6CC51AA18F0F8, p0, p1, p2); }
	inline Any _0x60EDD13EB3AC1FF3() { return _i<Any>(0x60EDD13EB3AC1FF3); }
	inline Any _0x07EAB372C8841D99(Any p0, Any p1, Any p2) { return _i<Any>(0x07EAB372C8841D99, p0, p1, p2); }
	inline bool _0x595F028698072DD9(Any p0, Any p1, bool p2) { return _i<bool>(0x595F028698072DD9, p0, p1, p2); }
	inline bool _NetworkIsClanMembershipFinishedDownloading() { return _i<bool>(0xB3F64A6A91432477); }
	inline bool _0x2B51EDBEFC301339(int p0, String p1) { return _i<bool>(0x2B51EDBEFC301339, p0, p1); }
	inline bool _NetworkClanAnimation(String animDict, String animName) { return _i<bool>(0x729E3401F0430686, animDict, animName); }
	inline bool NetworkClanDownloadMembership(int* networkHandle) { return _i<bool>(0xA989044E70010ABE, networkHandle); }
	inline bool NetworkClanDownloadMembershipPending(Any* p0) { return _i<bool>(0x5B9E023DC6EBEDC0, p0); }
	inline bool _0x5835D9CD92E83184(Any* p0, Any* p1) { return _i<bool>(0x5835D9CD92E83184, p0, p1); }
	inline int _GetNumMembershipDesc() { return _i<int>(0x1F471B79ACC90BEF); }
	inline bool NetworkClanGetMembership(int* p0, int* clanMembership, int p2) { return _i<bool>(0xC8BC2011F67B3411, p0, clanMembership, p2); }
	inline int NetworkClanGetMembershipCount(int* p0) { return _i<int>(0xAAB11F6C4ADBC2C1, p0); }
	inline bool NetworkClanGetMembershipDesc(int* memberDesc, int p1) { return _i<bool>(0x48DE78AF2C8885B8, memberDesc, p1); }
	inline bool NetworkClanGetMembershipValid(int* p0, Any p1) { return _i<bool>(0x48A59CF88D43DF0E, p0, p1); }
	inline Void _0xF45352426FF3A4F0(int* clanDesc, int bufferSize, int* networkHandle) { return _i<Void>(0xF45352426FF3A4F0, clanDesc, bufferSize, networkHandle); }
	inline Any _0xC32EA7A2F6CA7557() { return _i<Any>(0xC32EA7A2F6CA7557); }
	inline bool _0xA134777FF7F33331(Any p0, Any* p1) { return _i<bool>(0xA134777FF7F33331, p0, p1); }
	inline bool _0x7543BB439F63792B(int* clanDesc, int bufferSize) { return _i<bool>(0x7543BB439F63792B, clanDesc, bufferSize); }
	inline bool NetworkClanJoin(int clanDesc) { return _i<bool>(0x9FAAA4F4FC71F87F, clanDesc); }
	inline bool NetworkClanPlayerGetDesc(int* clanDesc, int bufferSize, int* networkHandle) { return _i<bool>(0xEEE6EACBE8874FBA, clanDesc, bufferSize, networkHandle); }
	inline bool NetworkClanPlayerIsActive(int* networkHandle) { return _i<bool>(0xB124B57F571D8F18, networkHandle); }
	inline Void _0x113E6E3E50E286B0(Any p0) { return _i<Void>(0x113E6E3E50E286B0, p0); }
	inline bool NetworkClanRemoteMembershipsAreInCache(int* p0) { return _i<bool>(0xBB6E6FEE99D866B2, p0); }
	inline bool _0x13518FF1C6B28938(Any p0) { return _i<bool>(0x13518FF1C6B28938, p0); }
	inline bool _NetworkPlayerIsInClan() { return _i<bool>(0x579CCED0265D4896); }
	inline Void NetworkClearClockTimeOverride() { return _i<Void>(0xD972DF67326F966E); }
	inline Void NetworkClearFollowers() { return _i<Void>(0x058F43EC59A8631A); }
	inline Any NetworkClearFollowInvite() { return _i<Any>(0x439BFDE3CD0610F6); }
	inline Void NetworkClearFoundGamers() { return _i<Void>(0x6D14CCEE1B40381A); }
	inline Void _0x86E0660E4F5C956D() { return _i<Void>(0x86E0660E4F5C956D); }
	inline Void _0x1888694923EF4591() { return _i<Void>(0x1888694923EF4591); }
	inline Void _0x140E6A44870A11CE() { return _i<Void>(0x140E6A44870A11CE); }
	inline Void NetworkClearPropertyId() { return _i<Void>(0xC2B82527CA77053E); }
	inline Void _0x6CE50E47F5543D0C() { return _i<Void>(0x6CE50E47F5543D0C); }
	inline Void NetworkClearTransitionCreatorHandle() { return _i<Void>(0xFB3272229A82C759); }
	inline Void NetworkClearVoiceChannel() { return _i<Void>(0xE036A705F989E049); }
	inline Void _0xF03755696450470C() { return _i<Void>(0xF03755696450470C); }
	inline Void NetworkCloseTransitionMatchmaking() { return _i<Void>(0x43F4DBA69710E01E); }
	inline Void _0x1632BE0AC1E62876(Any p0, Any p1) { return _i<Void>(0x1632BE0AC1E62876, p0, p1); }
	inline Void _0xBBDF066252829606(Any p0, bool p1, Any p2) { return _i<Void>(0xBBDF066252829606, p0, p1, p2); }
	inline int NetworkCreateSynchronisedScene(float x, float y, float z, float xRot, float yRot, float zRot, int p6, int p7, int p8, float p9, Any p10, Any p11) { return _i<int>(0x7CD6BC4C2BBDD526, x, y, z, xRot, yRot, zRot, p6, p7, p8, p9, p10, p11); }
	inline Any _0xF9B83B77929D8863() { return _i<Any>(0xF9B83B77929D8863); }
	inline Any _0x5AE17C6B0134B7F1() { return _i<Any>(0x5AE17C6B0134B7F1); }
	inline Void NetworkDisableInvincibleFlashing(int player, bool p1) { return _i<Void>(0x9DD368BF06983221, player, p1); }
	inline Void _0xC505036A35AFD01B(bool p0) { return _i<Void>(0xC505036A35AFD01B, p0); }
	inline Void _0x407091CF6037118E(int netID) { return _i<Void>(0x407091CF6037118E, netID); }
	inline Void _0xCA575C391FEA25CC(Any p0) { return _i<Void>(0xCA575C391FEA25CC, p0); }
	inline bool NetworkDoesNetworkIdExist(int netID) { return _i<bool>(0x38CE16C96BD11344, netID); }
	inline bool NetworkDoesEntityExistWithNetworkId(Entity entity) { return _i<bool>(0x18A47D074708FD68, entity); }
	inline bool NetworkDoesTunableExist(String tunableContext, String tunableName) { return _i<bool>(0x85E5F8B9B898B20A, tunableContext, tunableName); }
	inline bool NetworkDoesTunableExistHash(Hash tunbaleContext, Hash tunableName) { return _i<bool>(0xE4E53E1419D81127, tunbaleContext, tunableName); }
	inline bool NetworkDoTransitionQuickmatch(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<bool>(0x71FB0EBCD4915D56, p0, p1, p2, p3, p4, p5); }
	inline bool NetworkDoTransitionQuickmatchAsync(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<bool>(0xA091A5E44F0072E5, p0, p1, p2, p3, p4, p5); }
	inline bool NetworkDoTransitionQuickmatchWithGroup(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5, Any p6, Any p7) { return _i<bool>(0x9C4AB58491FDC98A, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline bool NetworkDoTransitionToFreemode(Any* p0, Any p1, bool p2, int players, bool p4) { return _i<bool>(0x3AAD8B2FCA1E289F, p0, p1, p2, players, p4); }
	inline bool NetworkDoTransitionToGame(bool p0, int maxPlayers) { return _i<bool>(0x3E9BB38102A589B0, p0, maxPlayers); }
	inline bool NetworkDoTransitionToNewFreemode(Any* p0, Any* p1, int players, bool p3, bool p4, bool p5) { return _i<bool>(0x9E80A5BA8109F974, p0, p1, players, p3, p4, p5); }
	inline bool NetworkDoTransitionToNewGame(bool p0, int maxPlayers, bool p2) { return _i<bool>(0x4665F51EFED00034, p0, maxPlayers, p2); }
	inline Void _0xE6717E652B8C8D8A(Any p0, Any p1) { return _i<Void>(0xE6717E652B8C8D8A, p0, p1); }
	inline Void _0x5E3AA4CA2B6FB0EE(Any p0) { return _i<Void>(0x5E3AA4CA2B6FB0EE, p0); }
	inline Void NetworkEndTutorialSession() { return _i<Void>(0xD0AFAFF5A51D72F7); }
	inline bool _0xE64A3CA08DFA37A9(Any p0) { return _i<bool>(0xE64A3CA08DFA37A9, p0); }
	inline bool _0x4DF7CFFF471A7FB1(Any p0) { return _i<bool>(0x4DF7CFFF471A7FB1, p0); }
	inline bool _0x4A2D4E8BF4265B0F(Any p0) { return _i<bool>(0x4A2D4E8BF4265B0F, p0); }
	inline Any _0x815F18AD865F057F(Any p0) { return _i<Any>(0x815F18AD865F057F, p0); }
	inline Void _0x2A5E0621DD815A9A(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x2A5E0621DD815A9A, p0, p1, p2, p3); }
	inline Any NetworkExplodeVehicle(Vehicle vehicle, bool isAudible, bool isInvisible, bool p3) { return _i<Any>(0x301A42153C9AD707, vehicle, isAudible, isInvisible, p3); }
	inline Void NetworkFadeInEntity(Entity entity, bool state, Any p2) { return _i<Void>(0x1F4ED342ACEFE62D, entity, state, p2); }
	inline Void NetworkFadeOutEntity(Entity entity, bool normal, bool slow) { return _i<Void>(0xDE564951F95E09ED, entity, normal, slow); }
	inline bool NetworkXAffectsGamers(Any p0) { return _i<bool>(0xE532D6811B3A4D2A, p0); }
	inline Any _0xFB1F9381E80FA13F(int p0, Any p1) { return _i<Any>(0xFB1F9381E80FA13F, p0, p1); }
	inline bool NetworkFindMatchedGamers(Any p0, float p1, float p2, float p3) { return _i<bool>(0xF7B2CFDE5C9F700D, p0, p1, p2, p3); }
	inline Void _0x64F62AFB081E260D() { return _i<Void>(0x64F62AFB081E260D); }
	inline Void _0xB7C7F6AD6424304B() { return _i<Void>(0xB7C7F6AD6424304B); }
	inline Void _0xC9B43A33D09CADA7(Any p0) { return _i<Void>(0xC9B43A33D09CADA7, p0); }
	inline bool NetworkGamertagFromHandlePending() { return _i<bool>(0xB071E27958EF4CF0); }
	inline bool NetworkGamertagFromHandleStart(int* networkHandle) { return _i<bool>(0x9F0C0A981D73FA56, networkHandle); }
	inline bool NetworkGamertagFromHandleSucceeded() { return _i<bool>(0xFD00798DBA7523DD); }
	inline bool NetworkGamerHasHeadset(Any* p0) { return _i<bool>(0xF2FD55CB574BCC55, p0); }
	inline int NetworkGetActivityPlayerNum(bool p0) { return _i<int>(0x73E2B500410DA5A2, p0); }
	inline Any _0x9614B71F8ADB982B() { return _i<Any>(0x9614B71F8ADB982B); }
	inline bool _NetworkGetDesroyerOfEntity(Any p0, Any p1, Hash* p2) { return _i<bool>(0x4CACA84440FA26F6, p0, p1, p2); }
	inline Any _0x83660B734994124D(Any p0, Any p1, Any p2) { return _i<Any>(0x83660B734994124D, p0, p1, p2); }
	inline Any _0x350C23949E43686C() { return _i<Any>(0x350C23949E43686C); }
	inline Any _0xD414BE129BB81B32() { return _i<Any>(0xD414BE129BB81B32); }
	inline Any _0x0E3A041ED6AC2B45() { return _i<Any>(0x0E3A041ED6AC2B45); }
	inline Any _0x7DB53B37A2F211A0() { return _i<Any>(0x7DB53B37A2F211A0); }
	inline int _GetTunablesContentModifierId(Hash contentHash) { return _i<int>(0x187382F8A3E0A6C3, contentHash); }
	inline bool NetworkGetCurrentlySelectedGamerHandleFromInviteMenu(Any* p0) { return _i<bool>(0x74881E6BCAE2327C, p0); }
	inline Any _0xC434133D9BA52777(Any p0, Any p1) { return _i<Any>(0xC434133D9BA52777, p0, p1); }
	inline int NetworkGetDestroyerOfNetworkId(int netId, Hash* weaponHash) { return _i<int>(0x7A1ADEEF01740A24, netId, weaponHash); }
	inline Entity NetworkGetEntityFromNetworkId(int netId) { return _i<Entity>(0xCE4E5D9B0A4FF560, netId); }
	inline Vehicle NetToVeh(int netHandle) { return _i<Vehicle>(0x367B936610BA360C, netHandle); }
	inline Ped NetToPed(int netHandle) { return _i<Ped>(0xBDCD95FC216A8B3E, netHandle); }
	inline Object NetToObj(int netHandle) { return _i<Object>(0xD8515F5FEA14CB3F, netHandle); }
	inline Entity NetToEnt(int netHandle) { return _i<Entity>(0xBFFEAB45A9A9094A, netHandle); }
	inline Any _0x37D5F739FD494675(Any p0) { return _i<Any>(0x37D5F739FD494675, p0); }
	inline bool NetworkGetEntityIsLocal(Entity entity) { return _i<bool>(0x0991549DE4D64762, entity); }
	inline bool NetworkGetEntityIsNetworked(Entity entity) { return _i<bool>(0xC7827959479DCC78, entity); }
	inline Entity NetworkGetEntityKillerOfPlayer(Player player, Hash* weaponHash) { return _i<Entity>(0x42B2DAA6B596F5F8, player, weaponHash); }
	inline bool NetworkGetFoundGamer(Any* p0, Any p1) { return _i<bool>(0x9DCFF2AFB68B3476, p0, p1); }
	inline int NetworkGetFriendCount() { return _i<int>(0x203F1CFD823B27A4); }
	inline String NetworkGetFriendName(Player player) { return _i<String>(0xE11EBBB2A783FE8B, player); }
	inline String _NetworkGetFriendNameFromIndex(int friendIndex) { return _i<String>(0x4164F227D052E293, friendIndex); }
	inline String NetworkGetGamertagFromHandle(int* networkHandle) { return _i<String>(0x426141162EBE5CDB, networkHandle); }
	inline Any _0x2CC848A861D01493() { return _i<Any>(0x2CC848A861D01493); }
	inline bool _0x02A8BEC6FD9AF660(Any* p0, Any p1) { return _i<bool>(0x02A8BEC6FD9AF660, p0, p1); }
	inline Void _NetworkGetServerTime(int* hours, int* minutes, int* seconds) { return _i<Void>(0x6D03BFBD643B2A02, hours, minutes, seconds); }
	inline Any _0x52C1EADAF7B10302() { return _i<Any>(0x52C1EADAF7B10302); }
	inline int NetworkGetHostOfScript(String scriptName, int p1, int p2) { return _i<int>(0x1D6A14F1F9A736FC, scriptName, p1, p2); }
	inline Any NetworkGetHostOfThisScript() { return _i<Any>(0xC7B4D79B01FA7A5C); }
	inline Any _0x638A3A81733086DB() { return _i<Any>(0x638A3A81733086DB); }
	inline Any _0x3855FB5EB2C5E8B2(Any p0) { return _i<Any>(0x3855FB5EB2C5E8B2, p0); }
	inline Any _0x2DA41ED6E1FCD7A5(Any p0, Any p1) { return _i<Any>(0x2DA41ED6E1FCD7A5, p0, p1); }
	inline Vector3 _0x64D779659BC37B19(Any p0) { return _i<Vector3>(0x64D779659BC37B19, p0); }
	inline Vector3 _0x125E6D638B8605D4(Any p0) { return _i<Vector3>(0x125E6D638B8605D4, p0); }
	inline Vector3 _0x33DE49EDF4DDE77A(Any p0) { return _i<Vector3>(0x33DE49EDF4DDE77A, p0); }
	inline Void NetworkGetLocalHandle(int* networkHandle, int bufferSize) { return _i<Void>(0xE86051786B66CD8E, networkHandle, bufferSize); }
	inline int _NetworkUnlinkNetworkedSynchronisedScene(int netScene) { return _i<int>(0x02C40BF885C567B6, netScene); }
	inline int NetworkGetMaxFriends() { return _i<int>(0xAFEBB0D5D8F687D2); }
	inline int _NetworkGetNumParticipantsHost() { return _i<int>(0xA6C90FBC38E395EE); }
	inline Void _0xADB57E5B663CCA8B(Player p0, float* p1, float* p2) { return _i<Void>(0xADB57E5B663CCA8B, p0, p1, p2); }
	inline Any _0xD38C4A6D047C019D() { return _i<Any>(0xD38C4A6D047C019D); }
	inline int NetworkGetNumConnectedPlayers() { return _i<int>(0xA4A79DD2D9600654); }
	inline int NetworkGetNumFoundGamers() { return _i<int>(0xA1B043EE79A916FB); }
	inline int NetworkGetNumParticipants() { return _i<int>(0x18D0456E86604654); }
	inline int NetworkGetNumPresenceInvites() { return _i<int>(0xCEFA968912D0F78D); }
	inline int NetworkGetNumScriptParticipants(Any* p0, Any p1, Any p2) { return _i<int>(0x3658E8CD94FC121A, p0, p1, p2); }
	inline Any _0x617F49C2668E6155() { return _i<Any>(0x617F49C2668E6155); }
	inline Any _0xFF8FCF9FFC458A1C() { return _i<Any>(0xFF8FCF9FFC458A1C); }
	inline int NetworkGetParticipantIndex(int index) { return _i<int>(0x1B84DF6AF2A46938, index); }
	inline Any _0x120364DE2845DAF8(Any* p0, Any p1) { return _i<Any>(0x120364DE2845DAF8, p0, p1); }
	inline Any _0x01ABCE5E7CBDA196() { return _i<Any>(0x01ABCE5E7CBDA196); }
	inline Player NetworkGetPlayerFromGamerHandle(int* networkHandle) { return _i<Player>(0xCE5F689CF5A0A49D, networkHandle); }
	inline int NetworkGetPlayerIndex(Player player) { return _i<int>(0x24FB80D107371267, player); }
	inline Player NetworkGetPlayerIndexFromPed(Ped ped) { return _i<Player>(0x6C0E2E0125610278, ped); }
	inline float NetworkGetPlayerLoudness(Any p0) { return _i<float>(0x21A1684A25C2867F, p0); }
	inline bool _0x82377B65E943F72D(Any p0) { return _i<bool>(0x82377B65E943F72D, p0); }
	inline Any _0x3B39236746714134(Any p0) { return _i<Any>(0x3B39236746714134, p0); }
	inline Any _0xAA5FAFCD2C5F5E47() { return _i<Any>(0xAA5FAFCD2C5F5E47); }
	inline Any _0x24409FC4C55CB22D(Any p0) { return _i<Any>(0x24409FC4C55CB22D, p0); }
	inline bool _0x3DBF2DF0AEB7D289(Any p0) { return _i<bool>(0x3DBF2DF0AEB7D289, p0); }
	inline bool NetworkGetPresenceInviteHandle(Any p0, Any* p1) { return _i<bool>(0x38D5B0FEBB086F75, p0, p1); }
	inline Any NetworkGetPresenceInviteId(Any p0) { return _i<Any>(0xDFF09646E12EC386, p0); }
	inline Any _0x742B58F723233ED9(Any p0) { return _i<Any>(0x742B58F723233ED9, p0); }
	inline Any NetworkGetPresenceInviteInviter(Any p0) { return _i<Any>(0x4962CC4AA2F345B7, p0); }
	inline bool _0x8806CEBFABD3CE05(Any p0) { return _i<bool>(0x8806CEBFABD3CE05, p0); }
	inline Any _0x728C4CC7920CD102(Any p0) { return _i<Any>(0x728C4CC7920CD102, p0); }
	inline Any _0xD39B3FFF8FFDD5BF(Any p0) { return _i<Any>(0xD39B3FFF8FFDD5BF, p0); }
	inline Any NetworkGetPresenceInviteSessionId(Any p0) { return _i<Any>(0x26E1CD96B0903D60, p0); }
	inline Void NetworkGetPrimaryClanDataCancel() { return _i<Void>(0x042E4B70B93E6054); }
	inline Any NetworkGetPrimaryClanDataClear() { return _i<Any>(0x9AA46BADAD0E27ED); }
	inline bool NetworkGetPrimaryClanDataNew(Any* p0, Any* p1) { return _i<bool>(0xC080FF658B2E41DA, p0, p1); }
	inline Any NetworkGetPrimaryClanDataPending() { return _i<Any>(0xB5074DB804E28CE7); }
	inline bool NetworkGetPrimaryClanDataStart(Any* p0, Any p1) { return _i<bool>(0xCE86D8191B762107, p0, p1); }
	inline Any NetworkGetPrimaryClanDataSuccess() { return _i<Any>(0x5B4F04F19376A0BA); }
	inline int NetworkGetRandomInt() { return _i<int>(0x599E4FA1F87EB5FF); }
	inline int _NetworkGetRandomIntInRange(int rangeStart, int rangeEnd) { return _i<int>(0xE30CF56F1EFA5F43, rangeStart, rangeEnd); }
	inline Void NetworkGetRespawnResult(int randomInt, Vector3* coordinates, float* heading) { return _i<Void>(0x371EA43692861CF1, randomInt, coordinates, heading); }
	inline Any _0x6C34F1208B8923FD(Any p0) { return _i<Any>(0x6C34F1208B8923FD, p0); }
	inline int NetworkGetScriptStatus() { return _i<int>(0x57D158647A6BFABF); }
	inline Any NetworkGetTalkerProximity() { return _i<Any>(0x84F0F13120B4E098); }
	inline bool NetworkGetThisScriptIsNetworkScript() { return _i<bool>(0x2910669969E9535E); }
	inline int NetworkGetTimeoutTime() { return _i<int>(0x5ED0356A0CE3A34F); }
	inline int _0xCF61D4B4702EE9EB() { return _i<int>(0xCF61D4B4702EE9EB); }
	inline bool NetworkGetTransitionHost(int* networkHandle) { return _i<bool>(0x65042B9774C4435E, networkHandle); }
	inline Any NetworkGetTransitionMembers(Any* p0, Any p1) { return _i<Any>(0x73B000F7FBC55829, p0, p1); }
	inline Any _0x10BD227A753B0D84() { return _i<Any>(0x10BD227A753B0D84); }
	inline Any _0x3765C3A3E8192E10() { return _i<Any>(0x3765C3A3E8192E10); }
	inline Void NetworkHandleFromFriend(Player friendIndex, int* networkHandle, int bufferSize) { return _i<Void>(0xD45CB817D7E177D2, friendIndex, networkHandle, bufferSize); }
	inline Void NetworkHandleFromMemberId(String memberId, int* networkHandle, int bufferSize) { return _i<Void>(0xA0FD21BED61E5C4C, memberId, networkHandle, bufferSize); }
	inline Void NetworkHandleFromPlayer(Player player, int* networkHandle, int bufferSize) { return _i<Void>(0x388EB2B86C73B6B3, player, networkHandle, bufferSize); }
	inline Void NetworkHandleFromUserId(String userId, int* networkHandle, int bufferSize) { return _i<Void>(0xDCD51DD8F87AEC5C, userId, networkHandle, bufferSize); }
	inline Hash NetworkHashFromGamerHandle(int* networkHandle) { return _i<Hash>(0x58575AC3CF2CA8EC, networkHandle); }
	inline Hash NetworkHashFromPlayerHandle(Player player) { return _i<Hash>(0xBC1D768F2F5D6C05, player); }
	inline bool _0x1353F87E89946207() { return _i<bool>(0x1353F87E89946207); }
	inline Any _0x26F07DD83A5F7F98() { return _i<Any>(0x26F07DD83A5F7F98); }
	inline bool _0x2E0BF682CC778D49(Any p0) { return _i<bool>(0x2E0BF682CC778D49, p0); }
	inline bool _0x237D5336A9A54108(Any p0) { return _i<bool>(0x237D5336A9A54108, p0); }
	inline Any _0xC42DD763159F3461() { return _i<Any>(0xC42DD763159F3461); }
	inline bool NetworkHasControlOfDoor(int doorID) { return _i<bool>(0xCB3C68ADB06195DF, doorID); }
	inline bool NetworkHasControlOfEntity(Entity entity) { return _i<bool>(0x01BF60A500E28887, entity); }
	inline bool NetworkHasControlOfNetworkId(int netId) { return _i<bool>(0x4D36070FE0215186, netId); }
	inline bool NetworkHasControlOfPickup(Pickup pickup) { return _i<bool>(0x5BC9495F0B3B6FA6, pickup); }
	inline bool _0xB07D3185E11657A5(Entity p0) { return _i<bool>(0xB07D3185E11657A5, p0); }
	inline bool NetworkHasFollowInvite() { return _i<bool>(0x76D9B976C4C09FDE); }
	inline bool NetworkHasHeadset() { return _i<bool>(0xE870F9F1F7B4F1FA); }
	inline bool NetworkHasInvitedGamer(Any* p0) { return _i<bool>(0x4D86CD31E8976ECE, p0); }
	inline bool NetworkHasInvitedGamerToTransition(Any* p0) { return _i<bool>(0x7284A47B3540E6CF, p0); }
	inline Any _0x71DC455F5CD1C2B1(Any p0) { return _i<Any>(0x71DC455F5CD1C2B1, p0); }
	inline bool NetworkHasPendingInvite() { return _i<bool>(0xAC8C7B9B88C4A668); }
	inline bool NetworkHasPlayerStartedTransition(Player player) { return _i<bool>(0x9AC9CCBFA8C29795, player); }
	inline bool _0x5D10B3795F3FC886() { return _i<bool>(0x5D10B3795F3FC886); }
	inline bool NetworkHasRosPrivilege(int p0) { return _i<bool>(0xA699957E60D80214, p0); }
	inline bool _0xC22912B1D85F26B1(Any p0, Any* p1, Any* p2) { return _i<bool>(0xC22912B1D85F26B1, p0, p1, p2); }
	inline Any _0x593570C289A77688() { return _i<Any>(0x593570C289A77688); }
	inline Any _0x91B87C55093DE351() { return _i<Any>(0x91B87C55093DE351); }
	inline bool _0x67A5589628E0CFF6() { return _i<bool>(0x67A5589628E0CFF6); }
	inline Any _0x76BF03FADBF154F5() { return _i<Any>(0x76BF03FADBF154F5); }
	inline bool _0x3F9990BF5F22759C(Any* p0) { return _i<bool>(0x3F9990BF5F22759C, p0); }
	inline bool _NetworkAreRosAvailable() { return _i<bool>(0x85443FF4C328F53B); }
	inline bool _0xB57A49545BA53CE7(Any* p0) { return _i<bool>(0xB57A49545BA53CE7, p0); }
	inline bool _0xCCA4318E1AB03F1F(Any* p0) { return _i<bool>(0xCCA4318E1AB03F1F, p0); }
	inline bool _0x07DD29D5E22763F1(Any* p0) { return _i<bool>(0x07DD29D5E22763F1, p0); }
	inline bool _0xAEEF48CDF5B6CE7C(Any p0, Any p1) { return _i<bool>(0xAEEF48CDF5B6CE7C, p0, p1); }
	inline bool NetworkHaveOnlinePrivileges() { return _i<bool>(0x25CB5A9F37BFD063); }
	inline Any _0x5EA784D197556507() { return _i<Any>(0x5EA784D197556507); }
	inline bool _IsRockstarBanned() { return _i<bool>(0x8020A73847E0CA7D); }
	inline bool _IsSocialclubBanned() { return _i<bool>(0xA0AD7E2AF5349F61); }
	inline Any _0x422D396F80A96547() { return _i<Any>(0x422D396F80A96547); }
	inline bool _CanPlayOnline() { return _i<bool>(0x5F91D5D0B36AA310); }
	inline Any _0x606E4D3E3CCCF3EB() { return _i<Any>(0x606E4D3E3CCCF3EB); }
	inline Any _0x66B59CFFD78467AF() { return _i<Any>(0x66B59CFFD78467AF); }
	inline bool _0x72D918C99BCACC54(Any p0) { return _i<bool>(0x72D918C99BCACC54, p0); }
	inline Void _0xFAC18E7356BD3210() { return _i<Void>(0xFAC18E7356BD3210); }
	inline Any NetworkHostTransition(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return _i<Any>(0xA60BB5CE242BB254, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Void _0x4C2A9FDC22377075() { return _i<Void>(0x4C2A9FDC22377075); }
	inline bool NetworkInviteGamers(Any* p0, Any p1, Any* p2, Any* p3) { return _i<bool>(0x9D80CD1D0E6327DE, p0, p1, p2, p3); }
	inline bool NetworkInviteGamersToTransition(Any* p0, Any p1) { return _i<bool>(0x4A595C32F77DFF76, p0, p1); }
	inline bool NetworkIsActivitySession() { return _i<bool>(0x05095437424397FA); }
	inline Any NetworkIsActivitySpectator() { return _i<Any>(0x12103B9E0C9F92FB); }
	inline bool NetworkIsActivitySpectatorFromHandle(int* networkHandle) { return _i<bool>(0x2763BBAA72A7BCB9, networkHandle); }
	inline Any NetworkIsAddingFriend() { return _i<Any>(0x6EA101606F6E4D81); }
	inline Any _0x2E4C123D1C8A710E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Any>(0x2E4C123D1C8A710E, p0, p1, p2, p3, p4, p5, p6); }
	inline bool NetworkIsCableConnected() { return _i<bool>(0xEFFB25453D8600F9); }
	inline bool NetworkIsChattingInPlatformParty(int* networkHandle) { return _i<bool>(0x8DE9945BCC9AEC52, networkHandle); }
	inline bool NetworkIsClockTimeOverridden() { return _i<bool>(0xD7C95D322FF57522); }
	inline bool NetworkIsCloudAvailable() { return _i<bool>(0x9A4CF4F48AD77302); }
	inline bool _HasBgScriptBeenDownloaded() { return _i<bool>(0x8132C0EB8B2B3293); }
	inline Any _0x16D3D49902F697BB() { return _i<Any>(0x16D3D49902F697BB); }
	inline bool _NetworkHasControlOfPavementStats(Hash hash) { return _i<bool>(0xC01E93FAC20C3346, hash); }
	inline Any _0x71302EC70689052A(Any p0) { return _i<Any>(0x71302EC70689052A, p0); }
	inline bool _0x422F32CC7E56ABAD(Any p0) { return _i<bool>(0x422F32CC7E56ABAD, p0); }
	inline bool NetworkIsFindingGamers() { return _i<bool>(0xDDDF64C91BFCF0AA); }
	inline bool NetworkIsFriend(int* networkHandle) { return _i<bool>(0x1A24A179F9B31654, networkHandle); }
	inline bool _NetworkIsFriendOnline2(int* networkHandle) { return _i<bool>(0x87EB7A3FFCB314DB, networkHandle); }
	inline bool NetworkIsFriendIndexOnline(int friendIndex) { return _i<bool>(0xBAD8F2A42B844821, friendIndex); }
	inline bool NetworkIsFriendInMultiplayer(String friendName) { return _i<bool>(0x57005C18827F3A28, friendName); }
	inline bool NetworkIsFriendInSameTitle(String friendName) { return _i<bool>(0x2EA9A3BEDF3F17B8, friendName); }
	inline bool NetworkIsFriendOnline(String name) { return _i<bool>(0x425A44533437B64D, name); }
	inline bool NetworkIsGamerBlockedByMe(Any* p0) { return _i<bool>(0xE944C4F5AF1B5883, p0); }
	inline bool NetworkIsGamerInMySession(int* networkHandle) { return _i<bool>(0x0F10B05DDF8D16E9, networkHandle); }
	inline bool NetworkIsGamerMutedByMe(int* p0) { return _i<bool>(0xCE60DE011B6C7978, p0); }
	inline bool NetworkIsGamerTalking(int* p0) { return _i<bool>(0x71C33B22606CD88A, p0); }
	inline bool NetworkIsGameInProgress() { return _i<bool>(0x10FAB35428CCC9D7); }
	inline Any _0x94A8394D150B013A() { return _i<Any>(0x94A8394D150B013A); }
	inline bool NetworkIsHandleValid(int* networkHandle, int bufferSize) { return _i<bool>(0x6F79B93B0A8E4133, networkHandle, bufferSize); }
	inline bool NetworkIsHost() { return _i<bool>(0x8DB296B814EDDA07); }
	inline bool NetworkIsHostOfThisScript() { return _i<bool>(0x83CD99A1E6061AB5); }
	inline bool NetworkIsInactiveProfile(Any* p0) { return _i<bool>(0x7E58745504313A2E, p0); }
	inline bool NetworkIsInMpCutscene() { return _i<bool>(0x6CC27C9FA2040220); }
	inline Any _0x2FC5650B0271CB57() { return _i<Any>(0x2FC5650B0271CB57); }
	inline Any _0xFD8B834A8BA05048() { return _i<Any>(0xFD8B834A8BA05048); }
	inline bool NetworkIsSessionActive() { return _i<bool>(0xD83C2B94E7508980); }
	inline bool NetworkIsInSession() { return _i<bool>(0xCA97246103B63917); }
	inline bool NetworkIsInSpectatorMode() { return _i<bool>(0x048746E388762E11); }
	inline bool NetworkIsInTransition() { return _i<bool>(0x68049AEFF83D8F0A); }
	inline Any NetworkIsInTutorialSession() { return _i<Any>(0xADA24309FE08DACF); }
	inline bool NetworkIsLocalPlayerInvincible() { return _i<bool>(0x8A8694B48715B000); }
	inline bool NetworkIsMultiplayerDisabled() { return _i<bool>(0x9747292807126EDA); }
	inline Any _0x7242F8B741CE1086(Any p0) { return _i<Any>(0x7242F8B741CE1086, p0); }
	inline Any _0x74698374C45701D2() { return _i<Any>(0x74698374C45701D2); }
	inline bool NetworkIsParticipantActive(int p0) { return _i<bool>(0x6FF8FF40B6357D45, p0); }
	inline Any _0xA8ACB6459542A8C8() { return _i<Any>(0xA8ACB6459542A8C8); }
	inline bool NetworkIsPlayerActive(Player player) { return _i<bool>(0xB8DFD30D6973E135, player); }
	inline bool NetworkIsPlayerAParticipant(Any p0) { return _i<bool>(0x3CA58F6CB7CBD784, p0); }
	inline bool _0x1AD5B71586B94820(Player p0, Any* p1, Any p2) { return _i<bool>(0x1AD5B71586B94820, p0, p1, p2); }
	inline bool NetworkIsPlayerBlockedByMe(Player player) { return _i<bool>(0x57AF1F8E27483721, player); }
	inline bool _0x919B3C98ED8292F9(Any p0) { return _i<bool>(0x919B3C98ED8292F9, p0); }
	inline bool NetworkIsPlayerConnected(Player player) { return _i<bool>(0x93DC1BE4E1ABE9D1, player); }
	inline bool _0x631DC5DFF4B110E3(Any p0) { return _i<bool>(0x631DC5DFF4B110E3, p0); }
	inline bool NetworkIsPlayerInMpCutscene(Player player) { return _i<bool>(0x63F9EE203C3619F2, player); }
	inline bool NetworkIsPlayerMutedByMe(Player player) { return _i<bool>(0x8C71288AE68EDE39, player); }
	inline bool NetworkIsPlayerTalking(Player player) { return _i<bool>(0x031E11F3D447647E, player); }
	inline Any _0xC0D2AF00BCC234CA() { return _i<Any>(0xC0D2AF00BCC234CA); }
	inline Any _0x14922ED3E38761F0() { return _i<Any>(0x14922ED3E38761F0); }
	inline bool _0x8D11E61A4ABF49CC() { return _i<bool>(0x8D11E61A4ABF49CC); }
	inline bool NetworkIsScriptActive(String scriptName, Any p1, bool p2, Any p3) { return _i<bool>(0x9D40DF90FAD26098, scriptName, p1, p2, p3); }
	inline bool NetworkIsSessionBusy() { return _i<bool>(0xF4435D66A8E2905E); }
	inline bool NetworkIsSessionStarted() { return _i<bool>(0x9DE624D2FC4B603F); }
	inline bool NetworkIsSignedIn() { return _i<bool>(0x054354A99211EB96); }
	inline Any NetworkIsTransitionBusy() { return _i<Any>(0x520F3282A53D26B7); }
	inline Any _0x0DBD5D7E3C5BEC3B() { return _i<Any>(0x0DBD5D7E3C5BEC3B); }
	inline Any _0x6512765E3BE78C50() { return _i<Any>(0x6512765E3BE78C50); }
	inline Any NetworkIsTransitionHost() { return _i<Any>(0x0B824797C9BF2159); }
	inline bool NetworkIsTransitionHostFromHandle(int* networkHandle) { return _i<bool>(0x6B5C83BA3EFE6A10, networkHandle); }
	inline Any _0xC571D0E77D8BBC29() { return _i<Any>(0xC571D0E77D8BBC29); }
	inline Any NetworkIsTransitionMatchmaking() { return _i<Any>(0x292564C735375EDF); }
	inline Any _0x37A4494483B9F5C9() { return _i<Any>(0x37A4494483B9F5C9); }
	inline bool _0x5A6AA44FF8E931E6() { return _i<bool>(0x5A6AA44FF8E931E6); }
	inline bool _0x5DC577201723960A() { return _i<bool>(0x5DC577201723960A); }
	inline bool NetworkIsTransitionStarted() { return _i<bool>(0x53FA83401D9C07FE); }
	inline Any NetworkIsTransitionToGame() { return _i<Any>(0x9D7696D8F4FA6CB7); }
	inline Any _0xD0A484CB2F829FBE() { return _i<Any>(0xD0A484CB2F829FBE); }
	inline bool _HasTunablesBeenDownloaded() { return _i<bool>(0x0467C11ED88B7D28); }
	inline Any _0x35F0B98A8387274D() { return _i<Any>(0x35F0B98A8387274D); }
	inline Any NetworkJoinGroupActivity() { return _i<Any>(0xA06509A691D12BE4); }
	inline Any _0x59DF79317F85A7E0() { return _i<Any>(0x59DF79317F85A7E0); }
	inline Any _0xFFE1E5B792D92B34() { return _i<Any>(0xFFE1E5B792D92B34); }
	inline bool NetworkJoinTransition(Player player) { return _i<bool>(0x9D060B08CD63321A, player); }
	inline Any NetworkLaunchTransition() { return _i<Any>(0x2DCF46CB1A4F0884); }
	inline Void _0xBF22E0F32968E967(Player player, bool p1) { return _i<Void>(0xBF22E0F32968E967, player, p1); }
	inline Void _NetworkRespawnCoords(Player player, float x, float y, float z, bool p4, bool p5) { return _i<Void>(0x9769F811D1785B03, player, x, y, z, p4, p5); }
	inline Any NetworkLeaveTransition() { return _i<Any>(0xD23A1A815D21DB19); }
	inline Void _0x261E97AD7BCF3D40(bool p0) { return _i<Void>(0x261E97AD7BCF3D40, p0); }
	inline Void _0x39917E1B4CB0F911(bool p0) { return _i<Void>(0x39917E1B4CB0F911, p0); }
	inline bool NetworkMarkTransitionGamerAsFullyJoined(Any* p0) { return _i<bool>(0x5728BB6D63E3FF1D, p0); }
	inline String NetworkMemberIdFromGamerHandle(int* networkHandle) { return _i<String>(0xC82630132081BB6F, networkHandle); }
	inline Any _0x53C10C8BD774F2C9() { return _i<Any>(0x53C10C8BD774F2C9); }
	inline Void _0x283B6062A2C01E9B() { return _i<Void>(0x283B6062A2C01E9B); }
	inline Void NetworkOpenTransitionMatchmaking() { return _i<Void>(0x2B3A8F7CA3A38FDE); }
	inline Void NetworkOverrideChatRestrictions(Player player, bool toggle) { return _i<Void>(0x3039AE5AD2C9C0C4, player, toggle); }
	inline Void NetworkOverrideClockTime(int Hours, int Minutes, int Seconds) { return _i<Void>(0xE679E3E06E363892, Hours, Minutes, Seconds); }
	inline Void _0xA7E30DE9272B6D49(Ped ped, float x, float y, float z, float p4) { return _i<Void>(0xA7E30DE9272B6D49, ped, x, y, z, p4); }
	inline Void NetworkOverrideReceiveRestrictions(Player player, bool toggle) { return _i<Void>(0xDDF73E2B1FEC5AB4, player, toggle); }
	inline Void _0x0FF2862B61A58AF9(bool p0) { return _i<Void>(0x0FF2862B61A58AF9, p0); }
	inline Void NetworkOverrideSendRestrictions(Player player, bool toggle) { return _i<Void>(0x97DD4C5944CC2E6A, player, toggle); }
	inline Void _NetworkChatMute(bool p0) { return _i<Void>(0x57B192B4D4AD23D5, p0); }
	inline Void _0x6F697A66CE78674E(int team, bool toggle) { return _i<Void>(0x6F697A66CE78674E, team, toggle); }
	inline Void NetworkOverrideTransitionChat(bool p0) { return _i<Void>(0xAF66059A131AA269, p0); }
	inline Any _0x172F75B6EE2233BA() { return _i<Any>(0x172F75B6EE2233BA); }
	inline String NetworkPlayerGetName(Player player) { return _i<String>(0x7718D2E2060837D2, player); }
	inline String NetworkPlayerGetUserid(Player player, int* buffer) { return _i<String>(0x4927FC39CD0869A0, player, buffer); }
	inline bool NetworkPlayerHasHeadset(Player player) { return _i<bool>(0x3FB99A8B08D18FD6, player); }
	inline bool _0x565E430DB3B05BEC(Any p0) { return _i<bool>(0x565E430DB3B05BEC, p0); }
	inline bool NetworkPlayerIsBadsport() { return _i<bool>(0x19D8DA0E5A68045A); }
	inline bool NetworkPlayerIsCheater() { return _i<bool>(0x655B91F1495A9090); }
	inline bool NetworkPlayerIsRockstarDev(Player player) { return _i<bool>(0x544ABDDA3B409B6D, player); }
	inline Void _0x2302C0264EA58D31() { return _i<Void>(0x2302C0264EA58D31); }
	inline Any _0x3C891A251567DFCE(Any* p0) { return _i<Any>(0x3C891A251567DFCE, p0); }
	inline bool _0x85A0EF54A500882C(Any* p0) { return _i<bool>(0x85A0EF54A500882C, p0); }
	inline Void _0x45A83257ED02D9BC() { return _i<Void>(0x45A83257ED02D9BC); }
	inline Void NetworkRegisterEntityAsNetworked(Entity entity) { return _i<Void>(0x06FAACD625D80CAA, entity); }
	inline Void NetworkRegisterHostBroadcastVariables(uint64_t* vars, int numVars) { return _i<Void>(0x3E9B2F01C50DF595, vars, numVars); }
	inline Void NetworkRegisterPlayerBroadcastVariables(int* vars, int numVars) { return _i<Void>(0x3364AA97340CA215, vars, numVars); }
	inline Void _0xCFEB46DCD7D8D5EB(bool p0) { return _i<Void>(0xCFEB46DCD7D8D5EB, p0); }
	inline Void _0x25D990F8E0E3F13C() { return _i<Void>(0x25D990F8E0E3F13C); }
	inline Void NetworkRemoveAllTransitionInvite() { return _i<Void>(0x726E0375C7A26368); }
	inline Void _0xEBF8284D8CADEB53() { return _i<Void>(0xEBF8284D8CADEB53); }
	inline Void _0xF083835B70BA9BFE() { return _i<Void>(0xF083835B70BA9BFE); }
	inline bool NetworkRemoveEntityArea(Any p0) { return _i<bool>(0x93CF869BAA0C4874, p0); }
	inline bool NetworkRemovePresenceInvite(Any p0) { return _i<bool>(0xF0210268DB0974B1, p0); }
	inline Void NetworkRemoveTransitionInvite(Any* p0) { return _i<Void>(0x7524B431B2E6F7EE, p0); }
	inline Any _0x5626D9D6810730D5() { return _i<Any>(0x5626D9D6810730D5); }
	inline bool NetworkRequestCloudBackgroundScripts() { return _i<bool>(0x924426BFFD82E915); }
	inline Void NetworkRequestCloudTunables() { return _i<Void>(0x42FB3B532D526E6C); }
	inline bool NetworkRequestControlOfDoor(int doorID) { return _i<bool>(0x870DDFD5A4A796E4, doorID); }
	inline bool NetworkRequestControlOfEntity(Entity entity) { return _i<bool>(0xB69317BF5E782347, entity); }
	inline bool NetworkRequestControlOfNetworkId(int netId) { return _i<bool>(0xA670B3662FAFFBD0, netId); }
	inline Any _0x62A0296C1BB1CEB3() { return _i<Any>(0x62A0296C1BB1CEB3); }
	inline Void _0x741A3D8380319A81() { return _i<Void>(0x741A3D8380319A81); }
	inline Void NetworkResetBodyTracker() { return _i<Void>(0x72433699B4E6DD64); }
	inline Void NetworkResurrectLocalPlayer(float x, float y, float z, float heading, bool unk, bool changetime, Any p6) { return _i<Void>(0xEA23C49EAA83ACFB, x, y, z, heading, unk, changetime, p6); }
	inline Void _0xB13E88E655E5A3BC() { return _i<Void>(0xB13E88E655E5A3BC); }
	inline Void _0xF1B84178F8674195(Any p0) { return _i<Void>(0xF1B84178F8674195, p0); }
	inline bool _0x1171A97A3D3981B6(Any* p0, Any* p1, Any p2, Any p3) { return _i<bool>(0x1171A97A3D3981B6, p0, p1, p2, p3); }
	inline bool _NetworkSendPresenceInvite(int* networkHandle, Any* p1, Any p2, Any p3) { return _i<bool>(0xC3C7A6AFDB244624, networkHandle, p1, p2, p3); }
	inline Void _0xFA2888E3833C8E96() { return _i<Void>(0xFA2888E3833C8E96); }
	inline bool NetworkSendTextMessage(String message, int* networkHandle) { return _i<bool>(0x3A214F2EC889B100, message, networkHandle); }
	inline bool NetworkSendTransitionGamerInstruction(int* networkHandle, String p1, int p2, int p3, bool p4) { return _i<bool>(0x31D1D2B858D25E6B, networkHandle, p1, p2, p3, p4); }
	inline bool _NetworkSendPresenceTransitionInvite(Any* p0, Any* p1, Any p2, Any p3) { return _i<bool>(0xC116FF9B4D488291, p0, p1, p2, p3); }
	inline bool NetworkSessionActivityQuickmatch(Any p0, Any p1, Any p2, Any p3) { return _i<bool>(0xBE3E347A87ACEB82, p0, p1, p2, p3); }
	inline Void _0xCAE55F48D3D7875C(Any p0) { return _i<Void>(0xCAE55F48D3D7875C, p0); }
	inline Void NetworkSessionBlockJoinRequests(bool p0) { return _i<Void>(0xA73667484D7037C3, p0); }
	inline Void NetworkSessionCancelInvite() { return _i<Void>(0x2FBF47B1B36D36F9); }
	inline Void NetworkSessionChangeSlots(int p0, bool p1) { return _i<Void>(0xB4AB419E0D86ACAE, p0, p1); }
	inline bool NetworkSessionCrewMatchmaking(int p0, int p1, int p2, int maxPlayers, bool p4) { return _i<bool>(0x94BC51E9449D917F, p0, p1, p2, maxPlayers, p4); }
	inline bool NetworkSessionEnd(bool p0, bool p1) { return _i<bool>(0xA02E59562D711006, p0, p1); }
	inline Any NetworkSessionEnter(Any p0, Any p1, Any p2, int maxPlayers, Any p4, Any p5) { return _i<Any>(0x330ED4D05491934F, p0, p1, p2, maxPlayers, p4, p5); }
	inline Void NetworkSessionForceCancelInvite() { return _i<Void>(0xA29177F7703B5644); }
	inline bool NetworkSessionFriendMatchmaking(int p0, int p1, int maxPlayers, bool p3) { return _i<bool>(0x2CFC76E0D087C994, p0, p1, maxPlayers, p3); }
	inline Any _0xDFFA5BE8381C3314() { return _i<Any>(0xDFFA5BE8381C3314); }
	inline Void NetworkSessionGetInviter(int* networkHandle) { return _i<Void>(0xE57397B4A3429DD0, networkHandle); }
	inline bool _NetworkSessionIsPlayerVotedToKick(Player player) { return _i<bool>(0xD6D09A6F32F49EF1, player); }
	inline int _NetworkSessionGetUnk(int p0) { return _i<int>(0x56CE820830EF040B, p0); }
	inline Any _0x53AFD64C6758F2F9() { return _i<Any>(0x53AFD64C6758F2F9); }
	inline bool NetworkSessionHost(int p0, int maxPlayers, bool p2) { return _i<bool>(0x6F3D4ED9BEE4E61D, p0, maxPlayers, p2); }
	inline bool NetworkSessionHostClosed(int p0, int maxPlayers) { return _i<bool>(0xED34C0C02C098BB7, p0, maxPlayers); }
	inline bool NetworkSessionHostFriendsOnly(int p0, int maxPlayers) { return _i<bool>(0xB9CFD27A5D578D83, p0, maxPlayers); }
	inline Void NetworkSessionHostSinglePlayer(int p0) { return _i<Void>(0xC74C33FCA52856D5, p0); }
	inline Any _0xD313DE83394AF134() { return _i<Any>(0xD313DE83394AF134); }
	inline bool NetworkSessionIsClosedCrew() { return _i<bool>(0x74732C6CA90DA2B4); }
	inline bool NetworkSessionIsClosedFriends() { return _i<bool>(0xFBCFA2EA2E206890); }
	inline Any _0xBDB6F89C729CF388() { return _i<Any>(0xBDB6F89C729CF388); }
	inline bool _0x855BC38818F6F684() { return _i<bool>(0x855BC38818F6F684); }
	inline bool NetworkSessionIsPrivate() { return _i<bool>(0xCEF70AA5B3F89BA1); }
	inline bool NetworkSessionIsSolo() { return _i<bool>(0xF3929C2379B60CCE); }
	inline Any NetworkSessionIsVisible() { return _i<Any>(0xBA416D68C631496A); }
	inline Any _0xB5D3453C98456528() { return _i<Any>(0xB5D3453C98456528); }
	inline bool _0xEF0912DDF7C4CB4B() { return _i<bool>(0xEF0912DDF7C4CB4B); }
	inline Void _0xC6F8AB8A4189CF3A() { return _i<Void>(0xC6F8AB8A4189CF3A); }
	inline Void NetworkSessionKickPlayer(Player player) { return _i<Void>(0xFA8904DC5F304220, player); }
	inline Void NetworkSessionLeaveSinglePlayer() { return _i<Void>(0x3442775428FD2DAA); }
	inline Void NetworkSessionMarkVisible(bool p0) { return _i<Void>(0x271CC6AB59EBF9A5, p0); }
	inline Any _0x041C7F2A6C9894E6(Any p0, Any p1, Any p2) { return _i<Any>(0x041C7F2A6C9894E6, p0, p1, p2); }
	inline Void _0x702BC4D605522539(Any p0) { return _i<Void>(0x702BC4D605522539, p0); }
	inline Void _0x5ECD378EE64450AB(Any p0) { return _i<Void>(0x5ECD378EE64450AB, p0); }
	inline Void _0x600F8CB31C7AAB6E(Any p0) { return _i<Void>(0x600F8CB31C7AAB6E, p0); }
	inline Void _0x49EC8030F5015F8B(int p0) { return _i<Void>(0x49EC8030F5015F8B, p0); }
	inline Void _NetworkSessionSetMaxPlayers(int playerType, int playerCount) { return _i<Void>(0x8B6A4DD0AF9CE215, playerType, playerCount); }
	inline Void _0xF1EEA2DDA9FFA69D(Any p0) { return _i<Void>(0xF1EEA2DDA9FFA69D, p0); }
	inline Void _0x3F52E880AAF6C8CA(bool p0) { return _i<Void>(0x3F52E880AAF6C8CA, p0); }
	inline Void _0x59D421683D31835A(Any p0) { return _i<Void>(0x59D421683D31835A, p0); }
	inline Void _0x1153FA02A659051C() { return _i<Void>(0x1153FA02A659051C); }
	inline Void _0xF49ABC20D8552257(Any p0) { return _i<Void>(0xF49ABC20D8552257, p0); }
	inline Void _0x4811BBAC21C5FCD5(Any p0) { return _i<Void>(0x4811BBAC21C5FCD5, p0); }
	inline Void _0x5539C3EBF104A53A(bool p0) { return _i<Void>(0x5539C3EBF104A53A, p0); }
	inline Void _NetworkSessionHosted(bool p0) { return _i<Void>(0xC19F6C8E7865A6FF, p0); }
	inline Void _0xABD5E88B8A2D3DB2(Any* globalPtr) { return _i<Void>(0xABD5E88B8A2D3DB2, globalPtr); }
	inline Void NetworkSessionVoiceHost() { return _i<Void>(0x9C1556705F864230); }
	inline Void NetworkSessionVoiceLeave() { return _i<Void>(0x6793E42BE02B575D); }
	inline Void NetworkSetKeepFocuspoint(bool p0, Any p1) { return _i<Void>(0x7F8413B7FC2AA6B9, p0, p1); }
	inline Void _0x5B8ED3DB018927B1(Any p0) { return _i<Void>(0x5B8ED3DB018927B1, p0); }
	inline bool NetworkSessionWasInvited() { return _i<bool>(0x23DFB504655D0CE4); }
	inline Void _0x0E4F77F7B9D74D84(Any p0) { return _i<Void>(0x0E4F77F7B9D74D84, p0); }
	inline Void NetworkSetActivitySpectator(bool toggle) { return _i<Void>(0x75138790B4359A74, toggle); }
	inline Void NetworkSetActivitySpectatorMax(int maxSpectators) { return _i<Void>(0x9D277B76D1D12222, maxSpectators); }
	inline Void _0x5C707A667DF8B9FA(bool p0, Any p1) { return _i<Void>(0x5C707A667DF8B9FA, p0, p1); }
	inline bool _0x0EDE326D47CD0F3E(Ped ped, Player player) { return _i<bool>(0x0EDE326D47CD0F3E, ped, player); }
	inline bool NetworkSetCurrentlySelectedGamerHandleFromInviteMenu(Any* p0) { return _i<bool>(0x7206F674F2A3B1BB, p0); }
	inline bool _0x796A87B3B68D1F3D(Any* p0) { return _i<bool>(0x796A87B3B68D1F3D, p0); }
	inline Void _0xA2E9C1AB8A92E8CD(bool p0) { return _i<Void>(0xA2E9C1AB8A92E8CD, p0); }
	inline Void NetworkSetEntityCanBlend(Entity entity, bool toggle) { return _i<Void>(0xD830567D88A1E873, entity, toggle); }
	inline Void _NetworkSetEntityVisibleToNetwork(Entity entity, bool toggle) { return _i<Void>(0xF1CA12B18AEF5298, entity, toggle); }
	inline Void NetworkSetFriendlyFireOption(bool toggle) { return _i<Void>(0xF808475FA571D823, toggle); }
	inline Void NetworkSetGamerInvitedToTransition(int* networkHandle) { return _i<Void>(0xCA2C8073411ECDB6, networkHandle); }
	inline Void _0x6A5D89D7769A40D8(bool p0) { return _i<Void>(0x6A5D89D7769A40D8, p0); }
	inline Void _0x0D77A82DC2D0DA59(Any* p0, Any* p1) { return _i<Void>(0x0D77A82DC2D0DA59, p0, p1); }
	inline Void _0x66F010A4B031A331(Any* p0) { return _i<Void>(0x66F010A4B031A331, p0); }
	inline Void _0xFC18DB55AE19E046(bool p0) { return _i<Void>(0xFC18DB55AE19E046, p0); }
	inline Void NetworkSetInMpCutscene(bool p0, bool p1) { return _i<Void>(0x9CA5DE655269FEC4, p0, p1); }
	inline Void _0x2CE9D95E4051AECD(Any p0) { return _i<Void>(0x2CE9D95E4051AECD, p0); }
	inline Void NetworkSetInSpectatorMode(bool toggle, Ped playerPed) { return _i<Void>(0x423DE3854BB50894, toggle, playerPed); }
	inline Void _0x419594E137637120(bool p0, Any p1, bool p2) { return _i<Void>(0x419594E137637120, p0, p1, p2); }
	inline Void NetworkSetLocalPlayerInvincibleTime(int time) { return _i<Void>(0x2D95C7E2D7E07307, time); }
	inline Void _0x524FF0AEFF9C3973(Any p0) { return _i<Void>(0x524FF0AEFF9C3973, p0); }
	inline Void _0x7D395EA61622E116(bool p0) { return _i<Void>(0x7D395EA61622E116, p0); }
	inline Void _0x94538037EE44F5CF(bool p0) { return _i<Void>(0x94538037EE44F5CF, p0); }
	inline Void NetworkSetMissionFinished() { return _i<Void>(0x3B3D11CD9FFCDFC9); }
	inline Void _0xF46A1E03E8755980(bool p0) { return _i<Void>(0xF46A1E03E8755980, p0); }
	inline Void _0x0379DAF89BA09AA5(Any p0, Any p1) { return _i<Void>(0x0379DAF89BA09AA5, p0, p1); }
	inline Void _0xBA7F0B77D80A4EB7(Any p0, Any p1) { return _i<Void>(0xBA7F0B77D80A4EB7, p0, p1); }
	inline Void NetworkSetOverrideSpectatorMode(bool toggle) { return _i<Void>(0x70DA3BF8DACD3210, toggle); }
	inline Void _0x3C5C1E2C2FF814B1(bool p0) { return _i<Void>(0x3C5C1E2C2FF814B1, p0); }
	inline Void _0x1B857666604B1A74(bool p0) { return _i<Void>(0x1B857666604B1A74, p0); }
	inline Void _0x367EF5E2F439B4C6(int p0) { return _i<Void>(0x367EF5E2F439B4C6, p0); }
	inline Void NetworkSetPropertyId(Any p0) { return _i<Void>(0x1775961C2FBBCB5C, p0); }
	inline Void _0x9D7AFCBF21C51712(bool p0) { return _i<Void>(0x9D7AFCBF21C51712, p0); }
	inline Any _0x4348BFDA56023A2F(Any p0, Any p1) { return _i<Any>(0x4348BFDA56023A2F, p0, p1); }
	inline Any _0xB309EBEA797E001F(Any p0) { return _i<Any>(0xB309EBEA797E001F, p0); }
	inline Void _0x265559DA40B3F327(Any p0) { return _i<Void>(0x265559DA40B3F327, p0); }
	inline Void _0x7AC752103856FB20(bool p0) { return _i<Void>(0x7AC752103856FB20, p0); }
	inline Void NetworkSetTalkerProximity(float p0) { return _i<Void>(0xCBF12D65F95AD686, p0); }
	inline Void NetworkSetTeamOnlyChat(bool toggle) { return _i<Void>(0xD5B4883AC32F24C3, toggle); }
	inline Void NetworkSetThisScriptIsNetworkScript(int lobbySize, bool p1, int playerId) { return _i<Void>(0x1CA59E306ECB80A5, lobbySize, p1, playerId); }
	inline Void NetworkSetTransitionActivityId(Any p0) { return _i<Void>(0x30DE938B516F0AD2, p0); }
	inline Void NetworkSetTransitionCreatorHandle(Any* p0) { return _i<Void>(0xEF26739BCD9907D5, p0); }
	inline Void _0x0C978FDA19692C2C(bool p0, bool p1) { return _i<Void>(0x0C978FDA19692C2C, p0, p1); }
	inline Void NetworkSetVoiceActive(bool toggle) { return _i<Void>(0xBABEC9E69A91C57B, toggle); }
	inline Void NetworkSetVoiceChannel(Any p0) { return _i<Void>(0xEF6212C2EFEF1A23, p0); }
	inline Any _0x82A2B386716608F1() { return _i<Any>(0x82A2B386716608F1); }
	inline Void _0x83FE8D7229593017() { return _i<Void>(0x83FE8D7229593017); }
	inline Void NetworkShowProfileUi(int* networkHandle) { return _i<Void>(0x859ED1CEA343FCA8, networkHandle); }
	inline Void _0x9465E683B12D3F6B() { return _i<Void>(0x9465E683B12D3F6B); }
	inline Any _0x659CF2EF7F550C4F() { return _i<Any>(0x659CF2EF7F550C4F); }
	inline bool _0x5A6FFA2433E2F14C(Player player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, int flags) { return _i<bool>(0x5A6FFA2433E2F14C, player, p1, p2, p3, p4, p5, p6, p7, flags); }
	inline bool _0x4BA92A18502BCA61(Player player, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, int flags) { return _i<bool>(0x4BA92A18502BCA61, player, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, flags); }
	inline Void _0x17E0198B3882C2CB() { return _i<Void>(0x17E0198B3882C2CB); }
	inline Void NetworkStartSynchronisedScene(int netScene) { return _i<Void>(0x9A1B3FCDB36C8697, netScene); }
	inline int _0xD66C9E72B3CC4982(Any* p0, Any p1) { return _i<int>(0xD66C9E72B3CC4982, p0, p1); }
	inline Any _0x36391F397731595D(Any p0) { return _i<Any>(0x36391F397731595D, p0); }
	inline Any _0xDEB2B99A1AF1A2A6(Any p0) { return _i<Any>(0xDEB2B99A1AF1A2A6, p0); }
	inline Void NetworkStopSynchronisedScene(int netScene) { return _i<Void>(0xC254481A4574CB2F, netScene); }
	inline Void _0xF814FEC6A19FD6E0() { return _i<Void>(0xF814FEC6A19FD6E0); }
	inline Void NetworkSuppressInvite(bool toggle) { return _i<Void>(0xA0682D67EF1FBA3D, toggle); }
	inline bool _NetworkIsTextChatActive() { return _i<bool>(0x5FCF4D7069B09026); }
	inline Any _0xC3BFED92026A2AAD(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Any>(0xC3BFED92026A2AAD, p0, p1, p2, p3, p4); }
	inline Void _0x973D76AA760A6CB6(bool p0) { return _i<Void>(0x973D76AA760A6CB6, p0); }
	inline Any _0x04918A41BC9B8157(Any p0, Any p1, Any p2) { return _i<Any>(0x04918A41BC9B8157, p0, p1, p2); }
	inline Void _0xF6F4383B7C92F11A(Any p0) { return _i<Void>(0xF6F4383B7C92F11A, p0); }
	inline Void _0x1F8E00FB18239600(Any p0) { return _i<Void>(0x1F8E00FB18239600, p0); }
	inline Void _0x1398582B7F72B3ED(Any p0) { return _i<Void>(0x1398582B7F72B3ED, p0); }
	inline Any _0x8B4FFC790CA131EF(Any p0, Any p1, Any p2, Any p3) { return _i<Any>(0x8B4FFC790CA131EF, p0, p1, p2, p3); }
	inline bool _NetworkAccessTunableBoolHashFailVal(Hash tunableContext, Hash tunableName, bool defaultValue) { return _i<bool>(0xC7420099936CE286, tunableContext, tunableName, defaultValue); }
	inline bool _NetworkSetThisScriptMarked(Any p0, bool p1, Any p2) { return _i<bool>(0xD1110739EEADB592, p0, p1, p2); }
	inline Void NetworkUnregisterNetworkedEntity(Entity entity) { return _i<Void>(0x7368E683BB9038D6, entity); }
	inline Void _NetworkSetNetworkIdDynamic(int netID, bool toggle) { return _i<Void>(0x2B1813ABA29016C5, netID, toggle); }
	inline Void _0xCD71A4ECAB22709E(Entity entity) { return _i<Void>(0xCD71A4ECAB22709E, entity); }
	inline Any _0xB37E4E6A2388CA7B() { return _i<Any>(0xB37E4E6A2388CA7B); }
	inline bool _0x4237E822315D8BA9() { return _i<bool>(0x4237E822315D8BA9); }
	inline Void _0x58C21165F6545892(String p0, String p1, Any p2) { return _i<Void>(0x58C21165F6545892, p0, p1, p2); }
	inline Player ParticipantId() { return _i<Player>(0x90986E8876CE0A83); }
	inline int ParticipantIdToInt() { return _i<int>(0x57A3BDDAD8E5AA0A); }
	inline bool _0xE26CCFF8094D8C74(Any p0) { return _i<bool>(0xE26CCFF8094D8C74, p0); }
	inline Void _0x72D0706CD6CCDB58() { return _i<Void>(0x72D0706CD6CCDB58); }
	inline Any _0x472841A026D26D8B() { return _i<Any>(0x472841A026D26D8B); }
	inline Void _0x715135F4B82AC90D(Entity entity, Any p1) { return _i<Void>(0x715135F4B82AC90D, entity, p1); }
	inline bool _0xA2F952104FC6DD4B(Any p0) { return _i<bool>(0xA2F952104FC6DD4B, p0); }
	inline Void _0x42613035157E4208(Any p0) { return _i<Void>(0x42613035157E4208, p0); }
	inline Void ReserveNetworkMissionObjects(int p0) { return _i<Void>(0x4E5C93BD0C32FBF8, p0); }
	inline Void ReserveNetworkMissionPeds(int p0) { return _i<Void>(0xB60FEBA45333D36F, p0); }
	inline Void ReserveNetworkMissionVehicles(int p0) { return _i<Void>(0x76B02E21ED27A469, p0); }
	inline Void _0x17330EBF2F2124A8() { return _i<Void>(0x17330EBF2F2124A8); }
	inline Void _0x444C4525ECE0A4B9() { return _i<Void>(0x444C4525ECE0A4B9); }
	inline Void _0x4BA166079D658ED4(Any p0, Any p1) { return _i<Void>(0x4BA166079D658ED4, p0, p1); }
	inline Void SetEntityLocallyInvisible(Entity entity) { return _i<Void>(0xE135A9FF3F5D05D8, entity); }
	inline Void SetEntityLocallyVisible(Entity entity) { return _i<Void>(0x241E289B5C059EDC, entity); }
	inline Void SetEntityVisibleInCutscene(Any p0, bool p1, bool p2) { return _i<Void>(0xE0031D3C8F36AB82, p0, p1, p2); }
	inline Void _0x658500AE6D723A7E(Any p0) { return _i<Void>(0x658500AE6D723A7E, p0); }
	inline Void _0xD7B6C73CAD419BCF(Any p0) { return _i<Void>(0xD7B6C73CAD419BCF, p0); }
	inline Void _0xFAE628F1E9ADB239(Any p0, Any p1, Any p2) { return _i<Void>(0xFAE628F1E9ADB239, p0, p1, p2); }
	inline Void UsePlayerColourInsteadOfTeamColour(bool toggle, Any p1) { return _i<Void>(0x5FFE9B4144F9712F, toggle, p1); }
	inline Void SetLocalPlayerInvisibleLocally(bool p0) { return _i<Void>(0xE5F773C1A1D9D168, p0); }
	inline Void SetLocalPlayerVisibleInCutscene(bool p0, bool p1) { return _i<Void>(0xD1065D68947E7B6E, p0, p1); }
	inline Void SetLocalPlayerVisibleLocally(bool p0) { return _i<Void>(0x7619364C82D3BF14, p0); }
	inline Void _0xAAA553E7DD28A457(bool p0) { return _i<Void>(0xAAA553E7DD28A457, p0); }
	inline Void _0x838DA0936A24ED4D(Any p0, Any p1) { return _i<Void>(0x838DA0936A24ED4D, p0, p1); }
	inline Void _SetNetworkIdSyncToPlayer(int netId, Player player, bool toggle) { return _i<Void>(0xA8A024587329F36A, netId, player, toggle); }
	inline Void SetNetworkIdCanMigrate(int netId, bool toggle) { return _i<Void>(0x299EEB23175895FC, netId, toggle); }
	inline Void SetNetworkIdExistsOnAllMachines(int netId, bool toggle) { return _i<Void>(0xE05E81A888FA63C8, netId, toggle); }
	inline Void _0x3FA36981311FA4FF(int netId, bool state) { return _i<Void>(0x3FA36981311FA4FF, netId, state); }
	inline Void SetNetworkIdVisibleInCutscene(int netId, bool p1, bool p2) { return _i<Void>(0xA6928482543022B4, netId, p1, p2); }
	inline Void _0x32EBD154CB6B8B99(Any p0, Any p1, Any p2) { return _i<Void>(0x32EBD154CB6B8B99, p0, p1, p2); }
	inline Void _SetNetworkVehicleNonContact(Vehicle vehicle, bool toggle) { return _i<Void>(0x6274C4712850841E, vehicle, toggle); }
	inline Void _0xA2A707979FE754DC(Any p0, Any p1) { return _i<Void>(0xA2A707979FE754DC, p0, p1); }
	inline Void SetNetworkVehicleRespotTimer(int netId, int time, Any p2) { return _i<Void>(0xEC51713AB6EC36E8, netId, time, p2); }
	inline Void _0x13F1FCB111B820B0(Any p0) { return _i<Void>(0x13F1FCB111B820B0, p0); }
	inline Void SetPlayerInvisibleLocally(Player player, bool toggle) { return _i<Void>(0x12B37D54667DB0B8, player, toggle); }
	inline Void SetPlayerVisibleLocally(Player player, bool toggle) { return _i<Void>(0xFAA10F1FAFB11AF2, player, toggle); }
	inline Void _0xA7C511FA1C5BDA38(Any p0, Any p1) { return _i<Void>(0xA7C511FA1C5BDA38, p0, p1); }
	inline Void SetStoreEnabled(bool toggle) { return _i<Void>(0x9641A9FF718E9C5E, toggle); }
	inline Void ShutdownAndLaunchSinglePlayerGame() { return _i<Void>(0x593850C16A36B692); }
	inline Any _0x9ECA15ADFE141431() { return _i<Any>(0x9ECA15ADFE141431); }
	inline String TextureDownloadGetName(int p0) { return _i<String>(0x3448505B6E35262D, p0); }
	inline bool TextureDownloadHasFailed(int p0) { return _i<bool>(0x5776ED562C134687, p0); }
	inline Void TextureDownloadRelease(int p0) { return _i<Void>(0x487EB90B98E9FB19, p0); }
	inline int TextureDownloadRequest(int* PlayerHandle, String FilePath, String Name, bool p3) { return _i<int>(0x16160DA74A8E74A2, PlayerHandle, FilePath, Name, p3); }
	inline Any _0x0B203B4AFDE53A4F(Any* p0, Any* p1, bool p2) { return _i<Any>(0x0B203B4AFDE53A4F, p0, p1, p2); }
	inline Any _0xF287F506767CC8A9() { return _i<Any>(0xF287F506767CC8A9); }
	inline bool _0x46FB3ED415C7641C(Player player, int p1, Hash scriptHash) { return _i<bool>(0x46FB3ED415C7641C, player, p1, scriptHash); }
	inline Any _0xA12D3A5A3753CC23() { return _i<Any>(0xA12D3A5A3753CC23); }
	inline Void _0xE9B99B6853181409() { return _i<Void>(0xE9B99B6853181409); }
	inline Void _0x17440AA15D1D3739() { return _i<Void>(0x17440AA15D1D3739); }
	inline Void _0xA1E5E0204A6FCC70() { return _i<Void>(0xA1E5E0204A6FCC70); }
	inline Void _0x61A885D3F7CFEE9A() { return _i<Void>(0x61A885D3F7CFEE9A); }
	inline Void _0xBA96394A0EECFA65() { return _i<Void>(0xBA96394A0EECFA65); }
	inline bool _0x152D90E4C1B4738A(Any* p0, Any* p1) { return _i<bool>(0x152D90E4C1B4738A, p0, p1); }
	inline Any _0x24E4E51FC16305F9() { return _i<Any>(0x24E4E51FC16305F9); }
	inline bool _0x162C23CA83ED0A62(Any p0) { return _i<bool>(0x162C23CA83ED0A62, p0); }
	inline Any _0x941E5306BCD7C2C7() { return _i<Any>(0x941E5306BCD7C2C7); }
	inline Any _0x793FF272D5B365F4() { return _i<Any>(0x793FF272D5B365F4); }
	inline Any _0x4D02279C83BE69FE() { return _i<Any>(0x4D02279C83BE69FE); }
	inline bool _0xD5A4B59980401588(Any p0, Any p1, Any* p2, Any* p3) { return _i<bool>(0xD5A4B59980401588, p0, p1, p2, p3); }
	inline Any _0x40F7E66472DF3E5C(Any p0, Any p1) { return _i<Any>(0x40F7E66472DF3E5C, p0, p1); }
	inline int _GetContentCategory(int p0) { return _i<int>(0xA7BAB11E7C9C6C5A, p0); }
	inline bool _0x8C8D2739BA44AF0F(Any p0) { return _i<bool>(0x8C8D2739BA44AF0F, p0); }
	inline bool _0x584770794D758C18(Any p0, Any* p1) { return _i<bool>(0x584770794D758C18, p0, p1); }
	inline int _GetContentDescriptionHash(Any p0) { return _i<int>(0x7CF0448787B23758, p0); }
	inline Any _GetContentFileVersion(Any p0, Any p1) { return _i<Any>(0x37025B27D9B658B1, p0, p1); }
	inline Any _0x3A17A27D75C74887() { return _i<Any>(0x3A17A27D75C74887); }
	inline bool _0x7FCC39C46C3C03BD(Any p0) { return _i<bool>(0x7FCC39C46C3C03BD, p0); }
	inline bool _0x1D610EB0FEA716D9(Any p0) { return _i<bool>(0x1D610EB0FEA716D9, p0); }
	inline bool _0x993CBE59D350D225(Any p0) { return _i<bool>(0x993CBE59D350D225, p0); }
	inline bool _0x70EA8DA57840F9BE(Any p0) { return _i<bool>(0x70EA8DA57840F9BE, p0); }
	inline String _GetContentId(Any p0) { return _i<String>(0x55AA95F481D694D2, p0); }
	inline bool _0x3054F114121C21EA(Any p0) { return _i<bool>(0x3054F114121C21EA, p0); }
	inline bool _0xAEAB987727C5A8A4(Any p0) { return _i<bool>(0xAEAB987727C5A8A4, p0); }
	inline bool _0xA9240A96C74CCA13(Any p0) { return _i<bool>(0xA9240A96C74CCA13, p0); }
	inline Any _0x32DD916F3F7C9672(Any p0) { return _i<Any>(0x32DD916F3F7C9672, p0); }
	inline Any _0xBF09786A7FCAB582(Any p0) { return _i<Any>(0xBF09786A7FCAB582, p0); }
	inline Any _0xE0A6138401BCB837() { return _i<Any>(0xE0A6138401BCB837); }
	inline Any _0xBAF6BABF9E7CCC13(Any p0, Any p1) { return _i<Any>(0xBAF6BABF9E7CCC13, p0, p1); }
	inline Any _0x1ACCFBA3D8DAB2EE(Any p0, Any p1) { return _i<Any>(0x1ACCFBA3D8DAB2EE, p0, p1); }
	inline Any _0x759299C5BB31D2A9(Any p0, Any p1) { return _i<Any>(0x759299C5BB31D2A9, p0, p1); }
	inline Any _0x4E548C0D7AE39FF9(Any p0, Any p1) { return _i<Any>(0x4E548C0D7AE39FF9, p0, p1); }
	inline Any _0x87E5C46C187FE0AE(Any p0, Any p1) { return _i<Any>(0x87E5C46C187FE0AE, p0, p1); }
	inline Any _0x769951E2455E2EB5() { return _i<Any>(0x769951E2455E2EB5); }
	inline Void _0xCFD115B373C0DF63(Any p0, Any* p1) { return _i<Void>(0xCFD115B373C0DF63, p0, p1); }
	inline String _GetContentUserId(int p0) { return _i<String>(0xCD67AD041A394C9C, p0); }
	inline Any _0x703F12425ECA8BF5(Any p0) { return _i<Any>(0x703F12425ECA8BF5, p0); }
	inline Any _0xC55A0B40FFB1ED23() { return _i<Any>(0xC55A0B40FFB1ED23); }
	inline Any _0xFBC5E768C7A77A6A() { return _i<Any>(0xFBC5E768C7A77A6A); }
	inline bool _0xB746D20B17F2A229(Any* p0, Any* p1) { return _i<bool>(0xB746D20B17F2A229, p0, p1); }
	inline Any _0x597F8DBA9B206FC7() { return _i<Any>(0x597F8DBA9B206FC7); }
	inline bool _0x9F6E2821885CAEE2(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return _i<bool>(0x9F6E2821885CAEE2, p0, p1, p2, p3, p4); }
	inline bool _0xF9E1CCAE8BA4C281(Any p0, Any p1, Any* p2, Any* p3) { return _i<bool>(0xF9E1CCAE8BA4C281, p0, p1, p2, p3); }
	inline bool _0x678BB03C1A3BD51E(Any p0, Any p1, Any p2, Any* p3, Any* p4) { return _i<bool>(0x678BB03C1A3BD51E, p0, p1, p2, p3, p4); }
	inline bool SetBalanceAddMachine(Any* p0, Any* p1) { return _i<bool>(0x815E5E3073DA1D67, p0, p1); }
	inline bool SetBalanceAddMachines(Any* p0, Any p1, Any* p2) { return _i<bool>(0xB8322EEB38BE7C26, p0, p1, p2); }
	inline Any _0x5A0A3D1A186A5508() { return _i<Any>(0x5A0A3D1A186A5508); }
	inline bool _0xA7862BC5ED1DFD7E(Any p0, Any p1, Any* p2, Any* p3) { return _i<bool>(0xA7862BC5ED1DFD7E, p0, p1, p2, p3); }
	inline bool NetworkGetBackgroundLoadingRecipients(Any p0, Any p1, Any* p2, Any* p3) { return _i<bool>(0x97A770BEEF227E2B, p0, p1, p2, p3); }
	inline bool _0x3195F8DD0D531052(Any p0, Any p1, Any* p2, Any* p3) { return _i<bool>(0x3195F8DD0D531052, p0, p1, p2, p3); }
	inline Any _0xEDF7F927136C224B() { return _i<Any>(0xEDF7F927136C224B); }
	inline String _GetRootContentId(Any p0) { return _i<String>(0xC0173D6BFF4E0348, p0); }
	inline bool _0x5324A0E3E4CE3570(Any p0, Any p1, Any* p2, Any* p3) { return _i<bool>(0x5324A0E3E4CE3570, p0, p1, p2, p3); }
	inline Any _0x5E24341A7F92A74B() { return _i<Any>(0x5E24341A7F92A74B); }
	inline bool _0xEBFA8D50ADDC54C4(Any p0) { return _i<bool>(0xEBFA8D50ADDC54C4, p0); }
	inline Any _0x02ADA21EA2F6918F() { return _i<Any>(0x02ADA21EA2F6918F); }
	inline Any _0x299EF3C576773506() { return _i<Any>(0x299EF3C576773506); }
	inline Any _0x63B406D7884BFA95() { return _i<Any>(0x63B406D7884BFA95); }
	inline Any _0x9FEDF86898F100E9() { return _i<Any>(0x9FEDF86898F100E9); }
	inline bool _0x2D5DC831176D0114(Any p0) { return _i<bool>(0x2D5DC831176D0114, p0); }
	inline Any _0xD53ACDBEF24A46E8() { return _i<Any>(0xD53ACDBEF24A46E8); }
	inline bool _0xF53E48461B71EECB(Any p0) { return _i<bool>(0xF53E48461B71EECB, p0); }
	inline Any _0x45E816772E93A9DB() { return _i<Any>(0x45E816772E93A9DB); }
	inline bool _0x5CAE833B0EE0C500(Any p0) { return _i<bool>(0x5CAE833B0EE0C500, p0); }
	inline bool _0x1DE0F5F50D723CAA(Any* p0, Any* p1, Any* p2) { return _i<bool>(0x1DE0F5F50D723CAA, p0, p1, p2); }
	inline bool _0x692D58DF40657E8C(Any p0, Any p1, Any p2, Any* p3, Any p4, bool p5) { return _i<bool>(0x692D58DF40657E8C, p0, p1, p2, p3, p4, p5); }
	inline bool _0x158EC424F35EC469(Any* p0, bool p1, Any* p2) { return _i<bool>(0x158EC424F35EC469, p0, p1, p2); }
	inline bool _0xC7397A83F7A2A462(Any* p0, Any p1, bool p2, Any* p3) { return _i<bool>(0xC7397A83F7A2A462, p0, p1, p2, p3); }
	inline bool _0x6D4CB481FAC835E8(Any p0, Any p1, Any* p2, Any p3) { return _i<bool>(0x6D4CB481FAC835E8, p0, p1, p2, p3); }
	inline bool _0x9BF438815F5D96EA(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return _i<bool>(0x9BF438815F5D96EA, p0, p1, p2, p3, p4, p5); }
	inline Void _0x68103E2247887242() { return _i<Void>(0x68103E2247887242); }
	inline bool _0x5A34CD9C3C5BEC44(Any p0) { return _i<bool>(0x5A34CD9C3C5BEC44, p0); }
	inline Any _0x5E0165278F6339EE(Any p0) { return _i<Any>(0x5E0165278F6339EE, p0); }
	inline Any _0x171DF6A0C07FB3DC(Any p0, Any p1) { return _i<Any>(0x171DF6A0C07FB3DC, p0, p1); }
	inline Any _0x7FD2990AF016795E(Any* p0, Any* p1, Any p2, Any p3, Any p4) { return _i<Any>(0x7FD2990AF016795E, p0, p1, p2, p3, p4); }
	inline bool _0x274A1519DFC1094F(Any* p0, bool p1, Any* p2) { return _i<bool>(0x274A1519DFC1094F, p0, p1, p2); }
	inline bool _0xD05D1A6C74DA3498(Any* p0, bool p1, Any* p2) { return _i<bool>(0xD05D1A6C74DA3498, p0, p1, p2); }
	inline Void _0xF98DDE0A8ED09323(bool p0) { return _i<Void>(0xF98DDE0A8ED09323, p0); }
	inline Void _0xFD75DABC0957BF33(bool p0) { return _i<Void>(0xFD75DABC0957BF33, p0); }
	inline Any _0x308F96458B7087CC(Any* p0, Any p1, Any p2, Any p3, Any* p4, bool p5) { return _i<Any>(0x308F96458B7087CC, p0, p1, p2, p3, p4, p5); }
	inline Any _0xC87E740D9F3872CC() { return _i<Any>(0xC87E740D9F3872CC); }
	inline Void _0x77758139EC9B66C7(bool p0) { return _i<Void>(0x77758139EC9B66C7, p0); }
	inline int NetworkGetNetworkIdFromEntity(Entity entity) { return _i<int>(0xA11700682F3AD45C, entity); }
	inline int VehToNet(Vehicle vehicle) { return _i<int>(0xB4C94523F023419C, vehicle); }
	inline int PedToNet(Ped ped) { return _i<int>(0x0EDEC3C276198689, ped); }
	inline int ObjToNet(Object object) { return _i<int>(0x99BFDC94A603E541, object); }
	inline Void _0x4A9FDE3A5A6D0437(Any p0) { return _i<Void>(0x4A9FDE3A5A6D0437, p0); }
	inline Void NetworkSetRichPresence(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x1DCCACDCFC569362, p0, p1, p2, p3); }
	inline Void _0x3E200C2BCF4164EB(Any p0, Any p1) { return _i<Void>(0x3E200C2BCF4164EB, p0, p1); }
	inline Void _0xB606E6CC59664972(Any p0) { return _i<Void>(0xB606E6CC59664972, p0); }
	inline Void _0x966DD84FB6A46017() { return _i<Void>(0x966DD84FB6A46017); }
	inline Void _0x6BFF5F84102DF80A(Any p0) { return _i<Void>(0x6BFF5F84102DF80A, p0); }
	inline Void _0x5C497525F803486B() { return _i<Void>(0x5C497525F803486B); }
	inline Any _0xAEDF1BC1C133D6E3() { return _i<Any>(0xAEDF1BC1C133D6E3); }
	inline Any _0x2555CF7DA5473794() { return _i<Any>(0x2555CF7DA5473794); }
	inline Any _0x6FD992C4A1C1B986() { return _i<Any>(0x6FD992C4A1C1B986); }
}

namespace OBJECT
{
	inline Void AddDoorToSystem(Hash doorHash, Hash modelHash, float x, float y, float z, bool p5, bool p6, bool p7) { return _i<Void>(0x6F8838D03D1DC226, doorHash, modelHash, x, y, z, p5, p6, p7); }
	inline Void _0xAA059C615DE9DD03(Any p0, Any p1) { return _i<Void>(0xAA059C615DE9DD03, p0, p1); }
	inline Void _0x641F272B52E2F0F8(Any p0, Any p1) { return _i<Void>(0x641F272B52E2F0F8, p0, p1); }
	inline bool _0x85B6C850546FDDE2(Any p0, bool p1, bool p2, bool p3, Any p4) { return _i<bool>(0x85B6C850546FDDE2, p0, p1, p2, p3, p4); }
	inline Void AttachPortablePickupToPed(Ped ped, Any p1) { return _i<Void>(0x8DC39368BDD57755, ped, p1); }
	inline Void _0x1E3F1B1B891A2AAA(Any p0, Any p1) { return _i<Void>(0x1E3F1B1B891A2AAA, p0, p1); }
	inline Void _0xE7E4C198B0185900(Object p0, Any p1, bool p2) { return _i<Void>(0xE7E4C198B0185900, p0, p1, p2); }
	inline Void _0xA2C1F5E92AFE49ED() { return _i<Void>(0xA2C1F5E92AFE49ED); }
	inline Void _0xDA05194260CDCDF9(Any p0, Any p1) { return _i<Void>(0xDA05194260CDCDF9, p0, p1); }
	inline Void _0x190428512B240692(Any p0, bool p1, bool p2, bool p3, bool p4) { return _i<Void>(0x190428512B240692, p0, p1, p2, p3, p4); }
	inline Void _0x762DB2D380B48D04(Any p0) { return _i<Void>(0x762DB2D380B48D04, p0); }
	inline Void _0x701FDA1E82076BA4() { return _i<Void>(0x701FDA1E82076BA4); }
	inline Void _0x66A49D021870FE88() { return _i<Void>(0x66A49D021870FE88); }
	inline Hash _GetPickupHash(Pickup pickupHash) { return _i<Hash>(0x5EAAD83F8CFB4575, pickupHash); }
	inline Pickup CreateAmbientPickup(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, Hash modelHash, bool p7, bool p8) { return _i<Pickup>(0x673966A0C0FD7171, pickupHash, posX, posY, posZ, p4, value, modelHash, p7, p8); }
	inline Void CreateMoneyPickups(float x, float y, float z, int value, int amount, Hash model) { return _i<Void>(0x0589B5E791CE9B2B, x, y, z, value, amount, model); }
	inline Pickup _CreatePortablePickup2(Hash pickupHash, float x, float y, float z, bool placeOnGround, Hash modelHash) { return _i<Pickup>(0x125494B98A21AAF7, pickupHash, x, y, z, placeOnGround, modelHash); }
	inline Object CreateObject(Hash modelHash, float x, float y, float z, bool isNetwork, bool p5, bool dynamic) { return _i<Object>(0x509D5878EB39E842, modelHash, x, y, z, isNetwork, p5, dynamic); }
	inline Object CreateObjectNoOffset(Hash modelHash, float x, float y, float z, bool isNetwork, bool p5, bool dynamic) { return _i<Object>(0x9A294B2138ABB884, modelHash, x, y, z, isNetwork, p5, dynamic); }
	inline Pickup CreatePickup(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, bool p6, Hash modelHash) { return _i<Pickup>(0xFBA08C503DD5FA58, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); }
	inline Pickup CreatePickupRotate(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, bool p10, Hash modelHash) { return _i<Pickup>(0x891804727E0A98B7, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); }
	inline Pickup CreatePortablePickup(Hash pickupHash, float x, float y, float z, bool placeOnGround, Hash modelHash) { return _i<Pickup>(0x2EAF1FDB2FB55698, pickupHash, x, y, z, placeOnGround, modelHash); }
	inline Void _0xE05F6AEEFEB0BB02(Any p0, Any p1, Any p2) { return _i<Void>(0xE05F6AEEFEB0BB02, p0, p1, p2); }
	inline Void DeleteObject(Object* object) { return _i<Void>(0x539E0AE3E6634B9F, object); }
	inline Void DetachPortablePickupFromPed(Ped ped) { return _i<Void>(0xCF463D1E9A0AECB1, ped); }
	inline bool DoesObjectOfTypeExistAtCoords(float x, float y, float z, float radius, Hash hash, bool p5) { return _i<bool>(0xBFA48E2FF417213F, x, y, z, radius, hash, p5); }
	inline bool DoesPickupExist(Pickup pickup) { return _i<bool>(0xAFC1CA75AD4074D1, pickup); }
	inline bool DoesPickupObjectExist(Object pickupObject) { return _i<bool>(0xD9EFB6DBF7DAAEA3, pickupObject); }
	inline bool _IsPickupWithinRadius(Hash pickupHash, float x, float y, float z, float radius) { return _i<bool>(0xF9C36251F6E48E33, pickupHash, x, y, z, radius); }
	inline bool _DoesDesObjectExist(int handle) { return _i<bool>(0x52AF537A0C5B8AAD, handle); }
	inline bool _0x589F80B325CC82C5(float p0, float p1, float p2, Any p3, Any* p4) { return _i<bool>(0x589F80B325CC82C5, p0, p1, p2, p3, p4); }
	inline int _0x4BC2854478F3A749(Hash doorHash) { return _i<int>(0x4BC2854478F3A749, doorHash); }
	inline int _0x160AA1B32F6139B8(Hash doorHash) { return _i<int>(0x160AA1B32F6139B8, doorHash); }
	inline bool _0xDF97CDD4FC08FD34(Any p0) { return _i<bool>(0xDF97CDD4FC08FD34, p0); }
	inline float _0x65499865FCA6E5EC(Hash doorHash) { return _i<float>(0x65499865FCA6E5EC, doorHash); }
	inline Void _0x9BA001CB45CBF627(Hash doorHash, float heading, bool p2, bool p3) { return _i<Void>(0x9BA001CB45CBF627, doorHash, heading, p2, p3); }
	inline Void _0x03C27E13B42A0E82(Hash doorHash, float p1, bool p2, bool p3) { return _i<Void>(0x03C27E13B42A0E82, doorHash, p1, p2, p3); }
	inline Void _0xA85A21582451E951(Hash doorHash, bool p1) { return _i<Void>(0xA85A21582451E951, doorHash, p1); }
	inline Void _SetDoorAccelerationLimit(Hash doorHash, int limit, bool p2, bool p3) { return _i<Void>(0x6BAB9442830C7F53, doorHash, limit, p2, p3); }
	inline Void _0xD9B71952F78A2640(Hash doorHash, bool p1) { return _i<Void>(0xD9B71952F78A2640, doorHash, p1); }
	inline Void _SetDoorAjarAngle(Hash doorHash, float ajar, bool p2, bool p3) { return _i<Void>(0xB6E6FBA95C7324AC, doorHash, ajar, p2, p3); }
	inline Void _0xC485E07E4F0B7958(Hash doorHash, bool p1, bool p2, bool p3) { return _i<Void>(0xC485E07E4F0B7958, doorHash, p1, p2, p3); }
	inline Void _0xF2E1A7133DD356A6(Hash hash, bool toggle) { return _i<Void>(0xF2E1A7133DD356A6, hash, toggle); }
	inline Void _0xF9C1681347C8BD15(Object object) { return _i<Void>(0xF9C1681347C8BD15, object); }
	inline Void _0x4C134B4DF76025D0(Any p0, Any p1) { return _i<Void>(0x4C134B4DF76025D0, p0, p1); }
	inline Void _0x758A5C1B3B1E1990(Any p0) { return _i<Void>(0x758A5C1B3B1E1990, p0); }
	inline Void _0x394CD08E31313C28() { return _i<Void>(0x394CD08E31313C28); }
	inline Object GetClosestObjectOfType(float x, float y, float z, float radius, Hash modelHash, bool isMission, bool p6, bool p7) { return _i<Object>(0xE143FA2249364369, x, y, z, radius, modelHash, isMission, p6, p7); }
	inline Any _0x163F8B586BC95F2A(Any coords, float radius, Hash modelHash, float x, float y, float z, Vector3* p6, int p7) { return _i<Any>(0x163F8B586BC95F2A, coords, radius, modelHash, x, y, z, p6, p7); }
	inline Any _0xDB41D07A45A6D4B7(Any p0) { return _i<Any>(0xDB41D07A45A6D4B7, p0); }
	inline Any _0x2542269291C6AC84(Any p0) { return _i<Any>(0x2542269291C6AC84, p0); }
	inline float GetObjectFragmentDamageHealth(Any p0, bool p1) { return _i<float>(0xB6FBFD079B8D0596, p0, p1); }
	inline Any _0xE84EB93729C5F36A(Any p0) { return _i<Any>(0xE84EB93729C5F36A, p0); }
	inline Vector3 _GetObjectOffsetFromCoords(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return _i<Vector3>(0x163E252DE035A133, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); }
	inline Vector3 GetPickupCoords(Pickup pickup) { return _i<Vector3>(0x225B8B35C88029B3, pickup); }
	inline Any _0xB3ECA65C7317F174() { return _i<Any>(0xB3ECA65C7317F174); }
	inline Object GetPickupObject(Pickup pickup) { return _i<Object>(0x5099BC55630B25AE, pickup); }
	inline int _GetDesObject(float x, float y, float z, float rotation, String name) { return _i<int>(0xB48FCED898292E52, x, y, z, rotation, name); }
	inline float _0x260EE4FDBDF4DB01(Any p0) { return _i<float>(0x260EE4FDBDF4DB01, p0); }
	inline Vector3 GetSafePickupCoords(float x, float y, float z, Any p3, Any p4) { return _i<Vector3>(0x6E16BC2503FF1FF0, x, y, z, p3, p4); }
	inline Void GetStateOfClosestDoorOfType(Hash type, float x, float y, float z, bool* locked, float* heading) { return _i<Void>(0xEDC1A5B84AEF33FF, type, x, y, z, locked, heading); }
	inline Any _GetDesObjectState(int handle) { return _i<Any>(0x899BA936634A322E, handle); }
	inline Hash _GetWeaponHashFromPickup(Pickup pickupHash) { return _i<Hash>(0x08F96CA6C551AD51, pickupHash); }
	inline bool HasClosestObjectOfTypeBeenBroken(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return _i<bool>(0x761B0E69AC4D007E, p0, p1, p2, p3, modelHash, p5); }
	inline bool _0x46494A2475701343(float p0, float p1, float p2, float p3, Hash modelHash, bool p5) { return _i<bool>(0x46494A2475701343, p0, p1, p2, p3, modelHash, p5); }
	inline bool HasObjectBeenBroken(Object object) { return _i<bool>(0x8ABFB70C49CC43E2, object); }
	inline bool HasPickupBeenCollected(Pickup pickup) { return _i<bool>(0x80EC48E6679313F9, pickup); }
	inline Void _0x867458251D47CCB2(Any p0, Any p1) { return _i<Void>(0x867458251D47CCB2, p0, p1); }
	inline bool _0x673ED815D6E323B7(Any p0, bool p1, bool p2, bool p3, Any p4) { return _i<bool>(0x673ED815D6E323B7, p0, p1, p2, p3, p4); }
	inline bool IsAnyObjectNearPoint(float x, float y, float z, float range, bool p4) { return _i<bool>(0x397DC58FF00298D1, x, y, z, range, p4); }
	inline bool IsDoorClosed(Hash door) { return _i<bool>(0xC531EE8A1145A149, door); }
	inline bool _DoesDoorExist(Hash doorHash) { return _i<bool>(0xC153C43EA202C8C1, doorHash); }
	inline bool IsGarageEmpty(Any garage, bool p1, int p2) { return _i<bool>(0x90E47239EA1980B8, garage, p1, p2); }
	inline bool _0x0378C08504160D0D(Any p0) { return _i<bool>(0x0378C08504160D0D, p0); }
	inline bool _0x372EF6699146A1E4(Any p0, Entity entity, float p2, int p3) { return _i<bool>(0x372EF6699146A1E4, p0, entity, p2, p3); }
	inline bool IsObjectNearPoint(Hash objectHash, float x, float y, float z, float range) { return _i<bool>(0x8C90FE4B381BA60A, objectHash, x, y, z, range); }
	inline bool _0xF0EED5A6BC7B237A(Any p0, Entity entity, int p2) { return _i<bool>(0xF0EED5A6BC7B237A, p0, entity, p2); }
	inline bool IsObjectVisible(Object object) { return _i<bool>(0x8B32ACE6326A7546, object); }
	inline bool _0x11D1E53A726891FE(Object object) { return _i<bool>(0x11D1E53A726891FE, object); }
	inline bool _0x024A60DEB0EA69F0(Any p0, Player player, float p2, int p3) { return _i<bool>(0x024A60DEB0EA69F0, p0, player, p2, p3); }
	inline bool _0x1761DC5D8471CBAA(Any p0, Player player, int p2) { return _i<bool>(0x1761DC5D8471CBAA, p0, player, p2); }
	inline bool IsPointInAngledArea(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, bool p10, bool p11) { return _i<bool>(0x2A70BAE8883E4C81, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	inline Void _MarkObjectForDeletion(Object object) { return _i<Void>(0xADBE4809F19F927A, object); }
	inline Void _0xC7F29CA00F46350E(bool p0) { return _i<Void>(0xC7F29CA00F46350E, p0); }
	inline Any _0xD76EEEF746057FD6(Any p0) { return _i<Any>(0xD76EEEF746057FD6, p0); }
	inline bool PlaceObjectOnGroundProperly(Object object) { return _i<bool>(0x58A850EAEE20FAA3, object); }
	inline Void _0x92AEFB5F6E294023(Object object, bool p1, bool p2) { return _i<Void>(0x92AEFB5F6E294023, object, p1, p2); }
	inline Void RemoveAllPickupsOfType(Hash pickupHash) { return _i<Void>(0x27F9D613092159CF, pickupHash); }
	inline Void RemoveDoorFromSystem(Hash doorHash) { return _i<Void>(0x464D8E1427156FE4, doorHash); }
	inline Void _0x4A39DB43E47CF3AA(Any p0) { return _i<Void>(0x4A39DB43E47CF3AA, p0); }
	inline Void RemovePickup(Pickup pickup) { return _i<Void>(0x3288D8ACAECD2AB2, pickup); }
	inline Void _HighlightPlacementCoords(float x, float y, float z, int colorIndex) { return _i<Void>(0x3430676B11CDF21D, x, y, z, colorIndex); }
	inline Void SetActivateObjectPhysicsAsSoonAsItIsUnfrozen(Object object, bool toggle) { return _i<Void>(0x406137F8EF90EAF5, object, toggle); }
	inline Void _0x826D1EE4D1CAFC78(Any p0, Any p1) { return _i<Void>(0x826D1EE4D1CAFC78, p0, p1); }
	inline Void _0xBCE595371A5FBAAF(Any p0, bool p1) { return _i<Void>(0xBCE595371A5FBAAF, p0, p1); }
	inline Void _0x8CAAB2BD3EA58BD4(Any p0) { return _i<Void>(0x8CAAB2BD3EA58BD4, p0); }
	inline Void _0xB2D0BDE54F0E8E5A(Object object, bool toggle) { return _i<Void>(0xB2D0BDE54F0E8E5A, object, toggle); }
	inline Void _0xD05A3241B9A86F19(Any p0, Any p1) { return _i<Void>(0xD05A3241B9A86F19, p0, p1); }
	inline Void SetForceObjectThisFrame(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xF538081986E49E9D, p0, p1, p2, p3); }
	inline Void _0x78857FC65CADB909(bool p0) { return _i<Void>(0x78857FC65CADB909, p0); }
	inline Void _0x88EAEC617CD26926(Hash p0, bool p1) { return _i<Void>(0x88EAEC617CD26926, p0, p1); }
	inline Void _DoorControl(Hash doorHash, float x, float y, float z, bool locked, float p5, float p6, float p7) { return _i<Void>(0x9B12F9A24FABEDB0, doorHash, x, y, z, locked, p5, p6, p7); }
	inline Void _0x0BF3B3BD47D79C08(Any p0, int p1) { return _i<Void>(0x0BF3B3BD47D79C08, p0, p1); }
	inline Void _0x4D89D607CB3DD1D2(Object object, bool toggle) { return _i<Void>(0x4D89D607CB3DD1D2, object, toggle); }
	inline Void _0x77F33F2CCF64B3AA(Object object, bool p1) { return _i<Void>(0x77F33F2CCF64B3AA, object, p1); }
	inline Void _0x62454A641B41F3C5(Any p0) { return _i<Void>(0x62454A641B41F3C5, p0); }
	inline Void _0xC6033D32241F6FB5(Any p0, bool p1) { return _i<Void>(0xC6033D32241F6FB5, p0, p1); }
	inline Void _0x3B2FD68DB5F8331C(Any p0, Any p1) { return _i<Void>(0x3B2FD68DB5F8331C, p0, p1); }
	inline Void SetObjectPhysicsParams(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { return _i<Void>(0xF6DF6E90DE7DF90F, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); }
	inline Void _0x96EE0EBA0163DF80(Any p0, Any p1) { return _i<Void>(0x96EE0EBA0163DF80, p0, p1); }
	inline Void _0xDF6CA0330F2E737B(Any p0, Any p1) { return _i<Void>(0xDF6CA0330F2E737B, p0, p1); }
	inline Void _0xEB6F1A9B5510A5D2(Any p0, bool p1) { return _i<Void>(0xEB6F1A9B5510A5D2, p0, p1); }
	inline Void SetObjectTargettable(Object object, bool targettable) { return _i<Void>(0x8A7391690F5AFD81, object, targettable); }
	inline Void _SetObjectTextureVariant(Object object, int paintIndex) { return _i<Void>(0x971DA0055324D033, object, paintIndex); }
	inline Void _0x31F924B53EADDF65(bool p0) { return _i<Void>(0x31F924B53EADDF65, p0); }
	inline Void _0x318516E02DE3ECE2(float p0) { return _i<Void>(0x318516E02DE3ECE2, p0); }
	inline Void _0x0596843B34B95CE5(Any p0, Any p1) { return _i<Void>(0x0596843B34B95CE5, p0, p1); }
	inline Void _0x3ED2B83AB2E82799(Any p0, Any p1) { return _i<Void>(0x3ED2B83AB2E82799, p0, p1); }
	inline Void _0x8881C98A31117998(Any p0) { return _i<Void>(0x8881C98A31117998, p0); }
	inline Void _0x39A5FB7EAF150840(Any p0, Any p1) { return _i<Void>(0x39A5FB7EAF150840, p0, p1); }
	inline Void _0xA08FE5E49BDC39DD(Any p0, float p1, bool p2) { return _i<Void>(0xA08FE5E49BDC39DD, p0, p1, p2); }
	inline Void _0xA90E7227A9303FA9(Any p0, Any p1) { return _i<Void>(0xA90E7227A9303FA9, p0, p1); }
	inline Void SetPickupRegenerationTime(Pickup pickup, int time) { return _i<Void>(0x78015C9B4B3ECC9D, pickup, time); }
	inline Void _0x858EC9FD25DE04AA(Any p0, Any p1) { return _i<Void>(0x858EC9FD25DE04AA, p0, p1); }
	inline Void _0x1C1B69FAE509BA97(Any p0, Any p1) { return _i<Void>(0x1C1B69FAE509BA97, p0, p1); }
	inline Void _0x616093EC6B139DD9(Player player, Hash pickupHash, bool p2) { return _i<Void>(0x616093EC6B139DD9, player, pickupHash, p2); }
	inline Void _0x46F3ADD1E2D5BAF2(Any p0, Any p1) { return _i<Void>(0x46F3ADD1E2D5BAF2, p0, p1); }
	inline Void SetStateOfClosestDoorOfType(Hash type, float x, float y, float z, bool locked, float heading, bool p6) { return _i<Void>(0xF82D8F1926A02C3D, type, x, y, z, locked, heading, p6); }
	inline Void _SetDesObjectState(int handle, int state) { return _i<Void>(0x5C29F698D404C5E1, handle, state); }
	inline Void SetTeamPickupObject(Object object, Any p1, bool p2) { return _i<Void>(0x53E0DF1A2A3CF0CA, object, p1, p2); }
	inline Any _0xF12E33034D887F66(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Any>(0xF12E33034D887F66, p0, p1, p2, p3, p4, p5); }
	inline bool SlideObject(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, bool collision) { return _i<bool>(0x2FDFF4107B8C1147, object, toX, toY, toZ, speedX, speedY, speedZ, collision); }
	inline Void _0xF92099527DB8E2A7(Any p0, Any p1) { return _i<Void>(0xF92099527DB8E2A7, p0, p1); }
	inline Void _0x8DCA505A5C196F05(Any p0, Any p1) { return _i<Void>(0x8DCA505A5C196F05, p0, p1); }
	inline Void TrackObjectVisibility(Any p0) { return _i<Void>(0xB252BC036B525623, p0); }
}

namespace PAD
{
	inline Void _DisableInputGroup(int inputGroup) { return _i<Void>(0x7F4724035FDCA1DD, inputGroup); }
	inline Void _0xCB0360EFEFB2580D(Any p0) { return _i<Void>(0xCB0360EFEFB2580D, p0); }
	inline Void _0xA0CEFCEA390AAB9B(Any p0) { return _i<Void>(0xA0CEFCEA390AAB9B, p0); }
	inline Void DisableAllControlActions(int inputGroup) { return _i<Void>(0x5F4B6931816E599B, inputGroup); }
	inline Void DisableControlAction(int inputGroup, int control, bool disable) { return _i<Void>(0xFE99B66D079CF6BC, inputGroup, control, disable); }
	inline Void EnableAllControlActions(int inputGroup) { return _i<Void>(0xA5FFE9B05F199DE7, inputGroup); }
	inline Void EnableControlAction(int inputGroup, int control, bool enable) { return _i<Void>(0x351220255D64C155, inputGroup, control, enable); }
	inline bool _0xFC859E2374407556() { return _i<bool>(0xFC859E2374407556); }
	inline String _0x80C2FD58D720C801(int inputGroup, int control, bool p2) { return _i<String>(0x80C2FD58D720C801, inputGroup, control, p2); }
	inline int _0xD7D22F5592AED8BA(int p0) { return _i<int>(0xD7D22F5592AED8BA, p0); }
	inline String GetControlInstructionalButton(int inputGroup, int control, bool p2) { return _i<String>(0x0499D7B09FC9B407, inputGroup, control, p2); }
	inline float GetControlNormal(int inputGroup, int control) { return _i<float>(0xEC3C9B8D5327B563, inputGroup, control); }
	inline float _0x5B84D09CEC5209C5(int inputGroup, int control) { return _i<float>(0x5B84D09CEC5209C5, inputGroup, control); }
	inline int GetControlValue(int inputGroup, int control) { return _i<int>(0xD95E79E8686D2C27, inputGroup, control); }
	inline float GetDisabledControlNormal(int inputGroup, int control) { return _i<float>(0x11E65974A982637C, inputGroup, control); }
	inline float _0x4F8A26A890FD62FB(int inputGroup, int control) { return _i<float>(0x4F8A26A890FD62FB, inputGroup, control); }
	inline bool _0x0F70731BACCFBB96() { return _i<bool>(0x0F70731BACCFBB96); }
	inline int GetLocalPlayerAimState() { return _i<int>(0xBB41AFBBBC0A0287); }
	inline Any _0x59B9A7AF4C95133C() { return _i<Any>(0x59B9A7AF4C95133C); }
	inline bool _0x6CD79468A1E595C6(int inputGroup) { return _i<bool>(0x6CD79468A1E595C6, inputGroup); }
	inline bool IsControlEnabled(int inputGroup, int control) { return _i<bool>(0x1CEA6BFDF248E5D9, inputGroup, control); }
	inline bool IsControlJustPressed(int inputGroup, int control) { return _i<bool>(0x580417101DDB492F, inputGroup, control); }
	inline bool IsControlJustReleased(int inputGroup, int control) { return _i<bool>(0x50F940259D3841E6, inputGroup, control); }
	inline bool IsControlPressed(int inputGroup, int control) { return _i<bool>(0xF3A21BCD95725A4A, inputGroup, control); }
	inline bool IsControlReleased(int inputGroup, int control) { return _i<bool>(0x648EE3E7F38877DD, inputGroup, control); }
	inline bool IsDisabledControlJustPressed(int inputGroup, int control) { return _i<bool>(0x91AEF906BCA88877, inputGroup, control); }
	inline bool IsDisabledControlJustReleased(int inputGroup, int control) { return _i<bool>(0x305C8DCD79DA8B0F, inputGroup, control); }
	inline bool IsDisabledControlPressed(int inputGroup, int control) { return _i<bool>(0xE2587F8CBBD87B1D, inputGroup, control); }
	inline Any _0xFB6C4072E9A32E92(Any p0, Any p1) { return _i<Any>(0xFB6C4072E9A32E92, p0, p1); }
	inline bool IsLookInverted() { return _i<bool>(0x77B612531280010D); }
	inline bool _0xE1615EC03B3BB4FD() { return _i<bool>(0xE1615EC03B3BB4FD); }
	inline bool _IsInputJustDisabled(int inputGroup) { return _i<bool>(0x13337B38DB572509, inputGroup); }
	inline bool _IsInputDisabled(int inputGroup) { return _i<bool>(0xA571D46727E2B718, inputGroup); }
	inline bool _0x23F09EADC01449D6(bool p0) { return _i<bool>(0x23F09EADC01449D6, p0); }
	inline Void _0x8290252FFF36ACB5(int p0, int red, int green, int blue) { return _i<Void>(0x8290252FFF36ACB5, p0, red, green, blue); }
	inline Void SetPadShake(int p0, int duration, int frequency) { return _i<Void>(0x48B3886C1358D0D5, p0, duration, frequency); }
	inline Void _0xF239400E16C23E08(Any p0, Any p1) { return _i<Void>(0xF239400E16C23E08, p0, p1); }
	inline bool _SetControlNormal(int inputGroup, int control, float amount) { return _i<bool>(0xE8A25867FBA3B05E, inputGroup, control, amount); }
	inline bool _SetCursorLocation(float x, float y) { return _i<bool>(0xFC695459D4D0E219, x, y); }
	inline Void SetInputExclusive(int inputGroup, int control) { return _i<Void>(0xEDE476E5EE29EDB1, inputGroup, control); }
	inline Void SetPlayerpadShakesWhenControllerDisabled(bool toggle) { return _i<Void>(0x798FDEB5B1575088, toggle); }
	inline Void _0x5B73C77D9EB66E24(bool p0) { return _i<Void>(0x5B73C77D9EB66E24, p0); }
	inline Void _0x643ED62D5EA3BEBD() { return _i<Void>(0x643ED62D5EA3BEBD); }
	inline Void StopPadShake(Any p0) { return _i<Void>(0x38C16A305E8CDC8D, p0); }
	inline bool _0x3D42B92563939375(String p0) { return _i<bool>(0x3D42B92563939375, p0); }
	inline bool _0x4683149ED1DDE7A1(String p0) { return _i<bool>(0x4683149ED1DDE7A1, p0); }
	inline Void _0x14D29BB12D47F68C(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x14D29BB12D47F68C, p0, p1, p2, p3, p4); }
}

namespace PATHFIND
{
	inline Any AddNavmeshBlockingObject(float p0, float p1, float p2, float p3, float p4, float p5, float p6, bool p7, Any p8) { return _i<Any>(0xFCD5C8E06E502F5A, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline Void AddNavmeshRequiredRegion(float x, float y, float radius) { return _i<Void>(0x387EAD7EE42F6685, x, y, radius); }
	inline Void _0xAA76052DDA9BFC3E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0xAA76052DDA9BFC3E, p0, p1, p2, p3, p4, p5, p6); }
	inline bool AreAllNavmeshRegionsLoaded() { return _i<bool>(0x8415D95B194A3AEA); }
	inline bool _0xF7B79A50B905A30D(float p0, float p1, float p2, float p3) { return _i<bool>(0xF7B79A50B905A30D, p0, p1, p2, p3); }
	inline float CalculateTravelDistanceBetweenPoints(float x1, float y1, float z1, float x2, float y2, float z2) { return _i<float>(0xADD95C7005C4A197, x1, y1, z1, x2, y2, z2); }
	inline Void _0x2801D0012266DF07(Any p0) { return _i<Void>(0x2801D0012266DF07, p0); }
	inline Void DisableNavmeshInArea(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0x4C8872D8CDBE1B8B, p0, p1, p2, p3, p4, p5, p6); }
	inline bool DoesNavmeshBlockingObjectExist(Any p0) { return _i<bool>(0x0EAEB0DB4B132399, p0); }
	inline int GenerateDirectionsToCoord(float x, float y, float z, bool p3, float* direction, float* p5, float* distToNxJunction) { return _i<int>(0xF90125F1F79ECDF8, x, y, z, p3, direction, p5, distToNxJunction); }
	inline float _0x3599D741C9AC6310(float p0, float p1, float p2, float p3) { return _i<float>(0x3599D741C9AC6310, p0, p1, p2, p3); }
	inline float _0x336511A34F2E5185(float left, float right) { return _i<float>(0x336511A34F2E5185, left, right); }
	inline float _0x8ABE8608576D9CE3(float p0, float p1, float p2, float p3) { return _i<float>(0x8ABE8608576D9CE3, p0, p1, p2, p3); }
	inline float _0x29C24BFBED8AB8FB(float p0, float p1) { return _i<float>(0x29C24BFBED8AB8FB, p0, p1); }
	inline bool GetClosestMajorVehicleNode(float x, float y, float z, Vector3* outPosition, float unknown1, int unknown2) { return _i<bool>(0x2EABE3B06F58C1BE, x, y, z, outPosition, unknown1, unknown2); }
	inline Any GetClosestRoad(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, bool p10) { return _i<Any>(0x132F52BBA570FE92, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); }
	inline bool GetClosestVehicleNode(float x, float y, float z, Vector3* outPosition, int nodeType, float p5, float p6) { return _i<bool>(0x240A18690AE96513, x, y, z, outPosition, nodeType, p5, p6); }
	inline bool GetClosestVehicleNodeWithHeading(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, int p7) { return _i<bool>(0xFF071FB798B803B0, x, y, z, outPosition, outHeading, nodeType, p6, p7); }
	inline Any _0x869DAACBBE9FA006() { return _i<Any>(0x869DAACBBE9FA006); }
	inline Any _0xBBB45C3CF5C8AA85() { return _i<Any>(0xBBB45C3CF5C8AA85); }
	inline Any _0xD3A6A0EF48823A8C() { return _i<Any>(0xD3A6A0EF48823A8C); }
	inline bool GetNthClosestVehicleNode(float x, float y, float z, int nthClosest, Vector3* outPosition, Any unknown1, Any unknown2, Any unknown3) { return _i<bool>(0xE50E52416CCF948B, x, y, z, nthClosest, outPosition, unknown1, unknown2, unknown3); }
	inline bool GetNthClosestVehicleNodeFavourDirection(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodetype, Any p10, Any p11) { return _i<bool>(0x45905BE8654AE067, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodetype, p10, p11); }
	inline int GetNthClosestVehicleNodeId(float x, float y, float z, int nth, int nodetype, float p5, float p6) { return _i<int>(0x22D7275A79FE8215, x, y, z, nth, nodetype, p5, p6); }
	inline Any GetNthClosestVehicleNodeIdWithHeading(float x, float y, float z, int nthClosest, Vector3* outPosition, float outHeading, Any p6, float p7, float p8) { return _i<Any>(0x6448050E9C2A7207, x, y, z, nthClosest, outPosition, outHeading, p6, p7, p8); }
	inline bool GetNthClosestVehicleNodeWithHeading(float x, float y, float z, int nthClosest, Vector3* outPosition, float* heading, Any* unknown1, int unknown2, float unknown3, float unknown4) { return _i<bool>(0x80CA6A8B6C094CC4, x, y, z, nthClosest, outPosition, heading, unknown1, unknown2, unknown3, unknown4); }
	inline Any _0x01708E8DD3FF8C65(float p0, float p1, float p2, float p3, float p4, float p5) { return _i<Any>(0x01708E8DD3FF8C65, p0, p1, p2, p3, p4, p5); }
	inline Any _0x16F46FB18C8009E4(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Any>(0x16F46FB18C8009E4, p0, p1, p2, p3, p4); }
	inline Any _0xF3162836C28F9DA5(Any p0, Any p1, Any p2, Any p3) { return _i<Any>(0xF3162836C28F9DA5, p0, p1, p2, p3); }
	inline bool GetRandomVehicleNode(float x, float y, float z, float radius, bool p4, bool p5, bool p6, Vector3* outPosition, int* nodeId) { return _i<bool>(0x93E0DB8440B73A7D, x, y, z, radius, p4, p5, p6, outPosition, nodeId); }
	inline Any _0xA0F8A7517A273C05(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Any>(0xA0F8A7517A273C05, p0, p1, p2, p3, p4); }
	inline bool GetSafeCoordForPed(float x, float y, float z, bool onGround, Vector3* outPosition, int flags) { return _i<bool>(0xB61C8E878A4199CA, x, y, z, onGround, outPosition, flags); }
	inline Void GetStreetNameAtCoord(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { return _i<Void>(0x2EB41072B4C1E4C0, x, y, z, streetName, crossingRoad); }
	inline bool _GetSupportsGpsRouteFlag(int nodeID) { return _i<bool>(0xA2AE5C478B96E3B6, nodeID); }
	inline bool _GetIsSlowRoadFlag(int nodeID) { return _i<bool>(0x4F5070AA58F69279, nodeID); }
	inline Void GetVehicleNodePosition(int nodeId, Vector3* outPosition) { return _i<Void>(0x703123E5E7D429C2, nodeId, outPosition); }
	inline bool GetVehicleNodeProperties(float x, float y, float z, int* density, int* flags) { return _i<bool>(0x0568566ACBB5DEDC, x, y, z, density, flags); }
	inline bool IsNavmeshLoadedInArea(float x1, float y1, float z1, float x2, float y2, float z2) { return _i<bool>(0xF813C7E63F9062A5, x1, y1, z1, x2, y2, z2); }
	inline Any _0x705A844002B39DC0() { return _i<Any>(0x705A844002B39DC0); }
	inline bool IsPointOnRoad(float x, float y, float z, Vehicle vehicle) { return _i<bool>(0x125BF4ABFC536B09, x, y, z, vehicle); }
	inline bool IsVehicleNodeIdValid(int vehicleNodeId) { return _i<bool>(0x1EAF30FCFBF5AF74, vehicleNodeId); }
	inline Void RemoveNavmeshBlockingObject(Any p0) { return _i<Void>(0x46399A7895957C0E, p0); }
	inline Void RemoveNavmeshRequiredRegions() { return _i<Void>(0x916F0A3CDEC3445E); }
	inline bool _0x07FB139B592FA687(float p0, float p1, float p2, float p3) { return _i<bool>(0x07FB139B592FA687, p0, p1, p2, p3); }
	inline Void _0x228E5C6AD4D74BFD(bool p0) { return _i<Void>(0x228E5C6AD4D74BFD, p0); }
	inline Void _0x0B919E1FB47CC4E0(float p0) { return _i<Void>(0x0B919E1FB47CC4E0, p0); }
	inline Void SetGpsDisabledZone(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Void>(0xDC20483CD3DD5201, p0, p1, p2, p3, p4, p5); }
	inline Void _0xD0BC1C6FB18EE154(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0xD0BC1C6FB18EE154, p0, p1, p2, p3, p4, p5, p6); }
	inline Void SetIgnoreNoGpsFlag(bool ignore) { return _i<Void>(0x72751156E7678833, ignore); }
	inline Void _0x1FC289A0C3FF470F(bool p0) { return _i<Void>(0x1FC289A0C3FF470F, p0); }
	inline Void SetPedPathsBackToOriginal(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0xE04B48F2CC926253, p0, p1, p2, p3, p4, p5, p6); }
	inline Void SetPedPathsInArea(float x1, float y1, float z1, float x2, float y2, float z2, bool unknown, Any p7) { return _i<Void>(0x34F060F4BF92E018, x1, y1, z1, x2, y2, z2, unknown, p7); }
	inline Void SetRoadsBackToOriginal(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return _i<Void>(0x1EE7063B80FFC77C, p0, p1, p2, p3, p4, p5, p6); }
	inline Void SetRoadsBackToOriginalInAngledArea(float x1, float y1, float z1, float x2, float y2, float z2, float p6, Any p7) { return _i<Void>(0x0027501B9F3B407E, x1, y1, z1, x2, y2, z2, p6, p7); }
	inline Void SetRoadsInAngledArea(float x1, float y1, float z1, float x2, float y2, float z2, float angle, bool unknown1, bool unknown2, bool unknown3) { return _i<Void>(0x1A5AA1208AF5DB59, x1, y1, z1, x2, y2, z2, angle, unknown1, unknown2, unknown3); }
	inline Void SetRoadsInArea(float x1, float y1, float z1, float x2, float y2, float z2, bool unknown1, bool unknown2) { return _i<Void>(0xBF1A602B5BA52FEE, x1, y1, z1, x2, y2, z2, unknown1, unknown2); }
	inline Void UpdateNavmeshBlockingObject(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { return _i<Void>(0x109E99373F290687, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
}

namespace PED
{
	inline Void AddArmourToPed(Ped ped, int amount) { return _i<Void>(0x5BA652A0CD14DF2F, ped, amount); }
	inline Void _SetPedDecoration(Ped ped, Hash collection, Hash overlay) { return _i<Void>(0x5F5D1665E352A839, ped, collection, overlay); }
	inline Void _SetPedFacialDecoration(Ped ped, Hash collection, Hash overlay) { return _i<Void>(0x5619BFA07CFD7833, ped, collection, overlay); }
	inline Any AddRelationshipGroup(String name, Hash* groupHash) { return _i<Any>(0xF372BC22FCB88606, name, groupHash); }
	inline Any AddScenarioBlockingArea(float p0, float p1, float p2, float p3, float p4, float p5, bool p6, bool p7, bool p8, bool p9) { return _i<Any>(0x1B5C85C612E5256E, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Void ApplyDamageToPed(Ped ped, int damageAmount, bool p2) { return _i<Void>(0x697157CED63F18D4, ped, damageAmount, p2); }
	inline Void ApplyPedBlood(Ped ped, int boneIndex, float xRot, float yRot, float zRot, String woundType) { return _i<Void>(0x83F7E01C7B769A26, ped, boneIndex, xRot, yRot, zRot, woundType); }
	inline Void ApplyPedBloodByZone(Ped ped, Any p1, float p2, float p3, Any* p4) { return _i<Void>(0x3311E47B91EDCBBC, ped, p1, p2, p3, p4); }
	inline Void ApplyPedBloodDamageByZone(Ped ped, Any p1, float p2, float p3, Any p4) { return _i<Void>(0x816F6981C60BF53B, ped, p1, p2, p3, p4); }
	inline Void ApplyPedBloodSpecific(Ped ped, Any p1, float p2, float p3, float p4, float p5, Any p6, float p7, Any* p8) { return _i<Void>(0xEF0D582CBF2D9B0F, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline Void ApplyPedDamageDecal(Ped ped, int p1, float p2, float p3, float p4, float p5, float p6, int p7, bool p8, String p9) { return _i<Void>(0x397C38AA7B4A5F83, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Void ApplyPedDamagePack(Ped ped, String damagePack, float damage, float mult) { return _i<Void>(0x46DF918788CB093F, ped, damagePack, damage, mult); }
	inline Void AttachSynchronizedSceneToEntity(int sceneID, Entity entity, int boneIndex) { return _i<Void>(0x272E4723B56A3B96, sceneID, entity, boneIndex); }
	inline Void _0xE43A13C9E4CCCBCF(Ped ped, bool p1) { return _i<Void>(0xE43A13C9E4CCCBCF, ped, p1); }
	inline bool CanCreateRandomBikeRider() { return _i<bool>(0xEACEEDA81751915C); }
	inline bool CanCreateRandomCops() { return _i<bool>(0x5EE2CAFF7F17770D); }
	inline bool CanCreateRandomDriver() { return _i<bool>(0xB8EB95E5B4E56978); }
	inline bool CanCreateRandomPed(bool unk) { return _i<bool>(0x3E8349C08E4B82E4, unk); }
	inline bool CanKnockPedOffVehicle(Ped ped) { return _i<bool>(0x51AC07A44D4F5B8A, ped); }
	inline bool CanPedInCombatSeeTarget(Ped ped, Ped target) { return _i<bool>(0xEAD42DE3610D0721, ped, target); }
	inline bool CanPedRagdoll(Ped ped) { return _i<bool>(0x128F79EDCECE4FD5, ped); }
	inline bool _CanPedSeePed(Ped ped1, Ped ped2) { return _i<bool>(0x6CD5A433374D4CFB, ped1, ped2); }
	inline Any _0x2DFC81C9B9608549(Any p0, Any p1) { return _i<Any>(0x2DFC81C9B9608549, p0, p1); }
	inline bool _0x9C6A6C19B6C0C496(Ped p0, Any* p1) { return _i<bool>(0x9C6A6C19B6C0C496, p0, p1); }
	inline Void ClearAllPedProps(Ped ped) { return _i<Void>(0xCD8A7537A9B52F06, ped); }
	inline Void _0xE6CA85E7259CE16B(Any p0) { return _i<Void>(0xE6CA85E7259CE16B, p0); }
	inline Void ClearFacialIdleAnimOverride(Ped ped) { return _i<Void>(0x726256CC1EEB182F, ped); }
	inline Void ClearPedAlternateMovementAnim(Ped ped, int stance, float p2) { return _i<Void>(0xD8D19675ED5FBDCE, ped, stance, p2); }
	inline Void ClearPedAlternateWalkAnim(Ped ped, float p1) { return _i<Void>(0x8844BBFCE30AA9E9, ped, p1); }
	inline Void ClearPedBloodDamageByZone(Ped ped, int p1) { return _i<Void>(0x56E3B78C5408D9F4, ped, p1); }
	inline Void ClearPedDamageDecalByZone(Ped ped, int p1, String p2) { return _i<Void>(0x523C79AEEFCC4A2A, ped, p1, p2); }
	inline Void ClearPedDecorations(Ped ped) { return _i<Void>(0x0E5173C163976E38, ped); }
	inline Void _ClearPedFacialDecorations(Ped ped) { return _i<Void>(0xE3B27E70CEAB9F0C, ped); }
	inline Void ClearPedDriveByClipsetOverride(Ped ped) { return _i<Void>(0x4AFE3690D7E0B5AC, ped); }
	inline Void _0x6585D955A68452A5(Ped ped) { return _i<Void>(0x6585D955A68452A5, ped); }
	inline Void _0x80054D7FCC70EEC6(Any p0) { return _i<Void>(0x80054D7FCC70EEC6, p0); }
	inline Void ClearPedLastDamageBone(Ped ped) { return _i<Void>(0x8EF6B7AC68E2F01B, ped); }
	inline Void _0xC79196DCB36F6121(Any p0) { return _i<Void>(0xC79196DCB36F6121, p0); }
	inline Void ClearPedNonCreationArea() { return _i<Void>(0x2E05208086BA0651); }
	inline Void _0x1280804F7CFD2D6C(Any p0) { return _i<Void>(0x1280804F7CFD2D6C, p0); }
	inline Void ClearPedProp(Ped ped, int propId) { return _i<Void>(0x0943E5B8E078E76E, ped, propId); }
	inline Void _0xB50EB4CCB29704AC(Any p0) { return _i<Void>(0xB50EB4CCB29704AC, p0); }
	inline Void _0x687C0B594907D2E8(Ped ped) { return _i<Void>(0x687C0B594907D2E8, ped); }
	inline Void ClearPedWetness(Ped ped) { return _i<Void>(0x9C720776DAA43E7E, ped); }
	inline Void _ResetPedRagdollBlockingFlags(Ped ped, int flags) { return _i<Void>(0xD86D101FCFD00A4B, ped, flags); }
	inline Void ClearRelationshipBetweenGroups(int relationship, Hash group1, Hash group2) { return _i<Void>(0x5E29243FB56FC6D4, relationship, group1, group2); }
	inline Ped ClonePed(Ped ped, float heading, bool isNetwork, bool p3) { return _i<Ped>(0xEF29A16337FACADB, ped, heading, isNetwork, p3); }
	inline Any _0x668FD40BCBA5DE48(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Any>(0x668FD40BCBA5DE48, p0, p1, p2, p3, p4); }
	inline Void ClonePedToTarget(Ped ped, Ped targetPed) { return _i<Void>(0xE952D6431689AD9A, ped, targetPed); }
	inline Void _0x148B08C2D2ACB884(Any p0, Any p1, Any p2) { return _i<Void>(0x148B08C2D2ACB884, p0, p1, p2); }
	inline int _0x5407B7288D0478B7(Any p0) { return _i<int>(0x5407B7288D0478B7, p0); }
	inline Any _0x336B3D200AB007CB(Any p0, float p1, float p2, float p3, float p4) { return _i<Any>(0x336B3D200AB007CB, p0, p1, p2, p3, p4); }
	inline int CreateGroup(int unused) { return _i<int>(0x90370EBE0FEE1A3D, unused); }
	inline Void CreateNmMessage(bool startImmediately, int messageId) { return _i<Void>(0x418EF2A1BCE56685, startImmediately, messageId); }
	inline Entity _0x8C4F3BF23B6237DB(Ped ped, bool p1, bool p2) { return _i<Entity>(0x8C4F3BF23B6237DB, ped, p1, p2); }
	inline Ped CreatePed(int pedType, Hash modelHash, float x, float y, float z, float heading, bool isNetwork, bool p7) { return _i<Ped>(0xD49F9B0955C367DE, pedType, modelHash, x, y, z, heading, isNetwork, p7); }
	inline Ped CreatePedInsideVehicle(Vehicle vehicle, int pedType, Hash modelHash, int seat, bool isNetwork, bool p5) { return _i<Ped>(0x7DD959874C1FD534, vehicle, pedType, modelHash, seat, isNetwork, p5); }
	inline Ped CreateRandomPed(float posX, float posY, float posZ) { return _i<Ped>(0xB4AC7D0CF06BFE8F, posX, posY, posZ); }
	inline Ped CreateRandomPedAsDriver(Vehicle vehicle, bool returnHandle) { return _i<Ped>(0x9B62392B474F44A0, vehicle, returnHandle); }
	inline int CreateSynchronizedScene(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return _i<int>(0x8C18E0F9080ADD73, x, y, z, roll, pitch, yaw, p6); }
	inline int _CreateSynchronizedScene2(float x, float y, float z, float radius, Hash object) { return _i<int>(0x62EC273D00187DCA, x, y, z, radius, object); }
	inline Void DeletePed(Ped* ped) { return _i<Void>(0x9614299DCB53E54B, ped); }
	inline Void DetachSynchronizedScene(int sceneID) { return _i<Void>(0x6D38F1F04CBB37EA, sceneID); }
	inline Void _0xA21C118553BBDF02(Any p0) { return _i<Void>(0xA21C118553BBDF02, p0); }
	inline Void _0x600048C60D5C2C51(Any p0) { return _i<Void>(0x600048C60D5C2C51, p0); }
	inline Void _0x733C87D4CE22BEA2(Any p0) { return _i<Void>(0x733C87D4CE22BEA2, p0); }
	inline bool DoesGroupExist(int groupId) { return _i<bool>(0x7C6B0C22F9F40BBE, groupId); }
	inline Any _0xCC6E3B6BB69501F1(Any p0) { return _i<Any>(0xCC6E3B6BB69501F1, p0); }
	inline Any _0x8A24B067D175A7BD(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Any>(0x8A24B067D175A7BD, p0, p1, p2, p3, p4, p5); }
	inline Void _0xAFF4710E2A0A6C12(Ped ped) { return _i<Void>(0xAFF4710E2A0A6C12, ped); }
	inline Void ExplodePedHead(Ped ped, Hash weaponHash) { return _i<Void>(0x2D05CED3A38D0F3A, ped, weaponHash); }
	inline Void _0x4668D80430D6C299(Ped ped) { return _i<Void>(0x4668D80430D6C299, ped); }
	inline Void _FreezePedCameraRotation(Ped ped) { return _i<Void>(0xFF287323B0E2C69A, ped); }
	inline Void _0xED3C76ADFA6D07C4(Any p0) { return _i<Void>(0xED3C76ADFA6D07C4, p0); }
	inline Void _0x2208438012482A1A(Ped ped, bool p1, bool p2) { return _i<Void>(0x2208438012482A1A, ped, p1, p2); }
	inline bool ForcePedMotionState(Ped ped, Hash motionStateHash, bool p2, bool p3, bool p4) { return _i<bool>(0xF28965D04F570DCA, ped, motionStateHash, p2, p3, p4); }
	inline Void ForcePedToOpenParachute(Ped ped) { return _i<Void>(0x16E42E800B472221, ped); }
	inline Void _0xD33DAA36272177C4(Ped ped) { return _i<Void>(0xD33DAA36272177C4, ped); }
	inline Vector3 GetAnimInitialOffsetPosition(String animDict, String animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return _i<Vector3>(0xBE22B26DD764C040, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
	inline Vector3 GetAnimInitialOffsetRotation(String animDict, String animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return _i<Vector3>(0x4B805E6046EE9E47, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
	inline bool _0x03EA03AF85A85CB7(Ped ped, bool p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, Any p8) { return _i<bool>(0x03EA03AF85A85CB7, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline bool GetClosestPed(float x, float y, float z, float radius, bool p4, bool p5, Ped* outPed, bool p7, bool p8, int pedType) { return _i<bool>(0xC33AB876A77F8164, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); }
	inline float GetCombatFloat(Ped ped, int p1) { return _i<float>(0x52DFF8A10508090A, ped, p1); }
	inline Vector3 GetDeadPedPickupCoords(Ped ped, float p1, float p2) { return _i<Vector3>(0xCD5003B097200F36, ped, p1, p2); }
	inline Any _0xAAA6A3698A69E048(Any p0) { return _i<Any>(0xAAA6A3698A69E048, p0); }
	inline int _0xEA9960D07DADCF10(Any p0) { return _i<int>(0xEA9960D07DADCF10, p0); }
	inline Any _0xF033419D1B81FAE8(Any p0) { return _i<Any>(0xF033419D1B81FAE8, p0); }
	inline Any _0x1E77FA7A62EE6C4C(Any p0) { return _i<Any>(0x1E77FA7A62EE6C4C, p0); }
	inline Void GetGroupSize(int groupID, Any* unknown, int* sizeInMembers) { return _i<Void>(0x8DE69FE35CA09A45, groupID, unknown, sizeInMembers); }
	inline Any _0x76BBA2CEE66D47E9(Any p0) { return _i<Any>(0x76BBA2CEE66D47E9, p0); }
	inline Ped GetJackTarget(Ped ped) { return _i<Ped>(0x5486A79D9FBD342D, ped); }
	inline Ped GetMeleeTargetForPed(Ped ped) { return _i<Ped>(0x18A3E9EE1297FD39, ped); }
	inline bool IsPedOnMount(Ped ped) { return _i<bool>(0x460BC76A0E10655E, ped); }
	inline Ped GetMount(Ped ped) { return _i<Ped>(0xE7E11B8DCBED1058, ped); }
	inline bool _0x9E30E91FB03A2CAF(Any* p0, Any* p1) { return _i<bool>(0x9E30E91FB03A2CAF, p0, p1); }
	inline int GetNumberOfPedDrawableVariations(Ped ped, int componentId) { return _i<int>(0x27561561732A7842, ped, componentId); }
	inline int GetNumberOfPedPropDrawableVariations(Ped ped, int propId) { return _i<int>(0x5FAF9754E789FB47, ped, propId); }
	inline int GetNumberOfPedPropTextureVariations(Ped ped, int propId, int drawableId) { return _i<int>(0xA6E7F1CEB523E171, ped, propId, drawableId); }
	inline int GetNumberOfPedTextureVariations(Ped ped, int componentId, int drawableId) { return _i<int>(0x8F7156A3142A6BAD, ped, componentId, drawableId); }
	inline int _GetNumHairColors() { return _i<int>(0xE5C0CF872C2AD150); }
	inline int _GetNumMakeupColors() { return _i<int>(0xD1F7CA1535D22818); }
	inline String GetPedheadshotTxdString(int handle) { return _i<String>(0xDB4EACD4AD0A5D6B, handle); }
	inline Ped GetPedsJacker(Ped ped) { return _i<Ped>(0x9B128DC36C1E04CF, ped); }
	inline int GetPedAccuracy(Ped ped) { return _i<int>(0x37F4AD56ECBC0CD6, ped); }
	inline int GetPedAlertness(Ped ped) { return _i<int>(0xF6AA118530443FD2, ped); }
	inline int GetPedArmour(Ped ped) { return _i<int>(0x9483AF821605B1D8, ped); }
	inline Ped _GetPedAsGroupLeader(int groupID) { return _i<Ped>(0x5CCE68DBD5FE93EC, groupID); }
	inline Ped GetPedAsGroupMember(int groupID, int memberNumber) { return _i<Ped>(0x51455483CF23ED97, groupID, memberNumber); }
	inline Vector3 GetPedBoneCoords(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return _i<Vector3>(0x17C07FC640E86B4E, ped, boneId, offsetX, offsetY, offsetZ); }
	inline int GetPedBoneIndex(Ped ped, int boneId) { return _i<int>(0x3F428D08BE5AAE31, ped, boneId); }
	inline Hash GetPedCauseOfDeath(Ped ped) { return _i<Hash>(0x16FFE42AB2D2DC59, ped); }
	inline int GetPedCombatMovement(Ped ped) { return _i<int>(0xDEA92412FCAEB3F5, ped); }
	inline Any GetPedCombatRange(Ped ped) { return _i<Any>(0xF9D9F7F2DB8E2FA0, ped); }
	inline bool GetPedConfigFlag(Ped ped, int flagId, bool p2) { return _i<bool>(0x7EE53118C892B513, ped, flagId, p2); }
	inline bool _0xF60165E1D2C5370B(Ped ped, Any* p1, Any* p2) { return _i<bool>(0xF60165E1D2C5370B, ped, p1, p2); }
	inline Any GetPedDecorationsState(Ped ped) { return _i<Any>(0x71EAB450D86954A1, ped); }
	inline int _GetTattooZone(Hash collection, Hash overlay) { return _i<int>(0x9FD452BFBE7A7A8B, collection, overlay); }
	inline Vector3 GetPedDefensiveAreaPosition(Ped ped, bool p1) { return _i<Vector3>(0x3C06B8786DD94CD1, ped, p1); }
	inline int GetPedDrawableVariation(Ped ped, int componentId) { return _i<int>(0x67F3780DD425D4FC, ped, componentId); }
	inline Any _0x1461B28A06717D68(Any p0) { return _i<Any>(0x1461B28A06717D68, p0); }
	inline float GetPedEnveffScale(Ped ped) { return _i<float>(0x9C14D30395A51A3C, ped); }
	inline Vector3 GetPedExtractedDisplacement(Ped ped, bool worldSpace) { return _i<Vector3>(0xE0AF41401ADF87E3, ped, worldSpace); }
	inline int GetPedGroupIndex(Ped ped) { return _i<int>(0xF162E133B4E7A675, ped); }
	inline Void _0x4852FC386E2E1BB5(Any p0, Any* p1, Any* p2, Any* p3) { return _i<Void>(0x4852FC386E2E1BB5, p0, p1, p2, p3); }
	inline bool _GetPedHeadBlendData(Ped ped, Any* headBlendData) { return _i<bool>(0x2746BD9D88C5C5D0, ped, headBlendData); }
	inline int _GetFirstParentIdForPedType(int type) { return _i<int>(0x68D353AB88B97E0C, type); }
	inline int _GetNumParentPedsOfType(int type) { return _i<int>(0x5EF37013A6539C9D, type); }
	inline int _GetPedHeadOverlayValue(Ped ped, int overlayID) { return _i<int>(0xA60EF3B6461A4D43, ped, overlayID); }
	inline int _GetNumHeadOverlayValues(int overlayID) { return _i<int>(0xCF1CE768BB43480E, overlayID); }
	inline Any _0x451294E859ECC018(Any p0) { return _i<Any>(0x451294E859ECC018, p0); }
	inline Any _0x9D728C1E12BF5518(Any p0) { return _i<Any>(0x9D728C1E12BF5518, p0); }
	inline bool GetPedLastDamageBone(Ped ped, int* outBone) { return _i<bool>(0xD75960F6BD9EA49C, ped, outBone); }
	inline Void _0x013E5CFC38CD5387(Any p0, Any* p1, Any* p2, Any* p3) { return _i<Void>(0x013E5CFC38CD5387, p0, p1, p2, p3); }
	inline int GetPedMaxHealth(Ped ped) { return _i<int>(0x4700A416E8324EF3, ped); }
	inline int GetPedMoney(Ped ped) { return _i<int>(0x3F69145BBA87BAE7, ped); }
	inline int GetPedNearbyPeds(Ped ped, int* sizeAndPeds, int ignore) { return _i<int>(0x23F8F5FC7E8C4A6B, ped, sizeAndPeds, ignore); }
	inline int GetPedNearbyVehicles(Ped ped, int* sizeAndVehs) { return _i<int>(0xCFF869CBFA210D82, ped, sizeAndVehs); }
	inline int GetPedPaletteVariation(Ped ped, int componentId) { return _i<int>(0xE3DD5F2A84B42281, ped, componentId); }
	inline int GetPedParachuteLandingType(Ped ped) { return _i<int>(0x8B9F1FC6AE8166C0, ped); }
	inline int GetPedParachuteState(Ped ped) { return _i<int>(0x79CFD9827CC979B6, ped); }
	inline Void GetPedParachuteTintIndex(Ped ped, int* outTintIndex) { return _i<Void>(0xEAF5F7E5AE7C6C9D, ped, outTintIndex); }
	inline int GetPedPropIndex(Ped ped, int componentId) { return _i<int>(0x898CC20EA75BACD8, ped, componentId); }
	inline int GetPedPropTextureIndex(Ped ped, int componentId) { return _i<int>(0xE131A28626F81AB2, ped, componentId); }
	inline int GetPedRagdollBoneIndex(Ped ped, int bone) { return _i<int>(0x2057EF813397A772, ped, bone); }
	inline Hash GetPedRelationshipGroupDefaultHash(Ped ped) { return _i<Hash>(0x42FDD0F017B1E38E, ped); }
	inline Hash GetPedRelationshipGroupHash(Ped ped) { return _i<Hash>(0x7DBDD04862D95F04, ped); }
	inline bool GetPedResetFlag(Ped ped, int flagId) { return _i<bool>(0xAF9E59B1B1FBF2A0, ped, flagId); }
	inline Entity GetPedSourceOfDeath(Ped ped) { return _i<Entity>(0x93C8B64DEB84728C, ped); }
	inline bool GetPedStealthMovement(Ped ped) { return _i<bool>(0x7C2AC9CA66575FBF, ped); }
	inline int GetPedTextureVariation(Ped ped, int componentId) { return _i<int>(0x04A355E041E004E6, ped, componentId); }
	inline int _GetPedTimeOfDeath(Ped ped) { return _i<int>(0x1E98817B311AE98A, ped); }
	inline int GetPedType(Ped ped) { return _i<int>(0xFF059E1E4C01E63C, ped); }
	inline Player GetPlayerPedIsFollowing(Ped ped) { return _i<Player>(0x6A3975DEA89F9A17, ped); }
	inline Ped GetRandomPedAtCoord(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return _i<Ped>(0x876046A8E3A4B71C, x, y, z, xRadius, yRadius, zRadius, pedType); }
	inline int GetRelationshipBetweenGroups(Hash group1, Hash group2) { return _i<int>(0x9E6B70061662AE5C, group1, group2); }
	inline int GetRelationshipBetweenPeds(Ped ped1, Ped ped2) { return _i<int>(0xEBA5AD3A0EAF7121, ped1, ped2); }
	inline int GetSeatPedIsTryingToEnter(Ped ped) { return _i<int>(0x6F4C85ACD641BCD2, ped); }
	inline float GetSynchronizedScenePhase(int sceneID) { return _i<float>(0xE4A310B1D7FA73CC, sceneID); }
	inline float GetSynchronizedSceneRate(int sceneID) { return _i<float>(0xD80932D577274D40, sceneID); }
	inline Any _0x36B77BB84687C318(Ped ped, Any p1) { return _i<Any>(0x36B77BB84687C318, ped, p1); }
	inline Any _0xC56FBF2F228E1DAC(Any p0, Any p1, Any p2) { return _i<Any>(0xC56FBF2F228E1DAC, p0, p1, p2); }
	inline Any _0x511F1A683387C7E2(Any p0) { return _i<Any>(0x511F1A683387C7E2, p0); }
	inline Vehicle GetVehiclePedIsEntering(Ped ped) { return _i<Vehicle>(0xF92691AED837A5FC, ped); }
	inline Vehicle GetVehiclePedIsIn(Ped ped, bool lastVehicle) { return _i<Vehicle>(0x9A9112A0FE9A4713, ped, lastVehicle); }
	inline Vehicle GetVehiclePedIsTryingToEnter(Ped ped) { return _i<Vehicle>(0x814FA8BE5449445D, ped); }
	inline Vehicle GetVehiclePedIsUsing(Ped ped) { return _i<Vehicle>(0x6094AD011A2EA87D, ped); }
	inline Void GivePedHelmet(Ped ped, bool cannotRemove, int helmetFlag, int textureIndex) { return _i<Void>(0x54C7C4A94367717E, ped, cannotRemove, helmetFlag, textureIndex); }
	inline Void GivePedNmMessage(Ped ped) { return _i<Void>(0xB158DFCCC56E5C5B, ped); }
	inline bool HasActionModeAssetLoaded(String asset) { return _i<bool>(0xE4B5F4BF2CB24E65, asset); }
	inline Any _0x876928DDDFCCC9CD() { return _i<Any>(0x876928DDDFCCC9CD); }
	inline Any _0xE8A169E666CBC541() { return _i<Any>(0xE8A169E666CBC541); }
	inline bool HasPedHeadBlendFinished(Ped ped) { return _i<bool>(0x654CD0A825161131, ped); }
	inline bool _0x784002A632822099(Ped ped) { return _i<bool>(0x784002A632822099, ped); }
	inline bool _0x66680A92700F43DF(Ped p0) { return _i<bool>(0x66680A92700F43DF, p0); }
	inline bool HasPedReceivedEvent(Any p0, Any p1) { return _i<bool>(0x8507BCB710FA6DC0, p0, p1); }
	inline bool HasStealthModeAssetLoaded(String asset) { return _i<bool>(0xE977FC5B08AF3441, asset); }
	inline bool _0x7350823473013C02(Ped ped) { return _i<bool>(0x7350823473013C02, ped); }
	inline Void HidePedBloodDamageByZone(Ped ped, Any p1, bool p2) { return _i<Void>(0x62AB793144DE75DC, ped, p1, p2); }
	inline Void _0x4759CC730F947C81() { return _i<Void>(0x4759CC730F947C81); }
	inline bool _0x68772DB2B2526F9F(Ped ped, float x, float y, float z, float range) { return _i<bool>(0x68772DB2B2526F9F, ped, x, y, z, range); }
	inline bool IsAnyPedNearPoint(float x, float y, float z, float radius) { return _i<bool>(0x083961498679DC9F, x, y, z, radius); }
	inline bool IsAnyPedShootingInArea(float x1, float y1, float z1, float x2, float y2, float z2, bool p6, bool p7) { return _i<bool>(0xA0D3D71EA1086C55, x1, y1, z1, x2, y2, z2, p6, p7); }
	inline bool IsConversationPedDead(Ped ped) { return _i<bool>(0xE0A0AEC214B1FABA, ped); }
	inline bool IsCopPedInArea3D(float x1, float y1, float z1, float x2, float y2, float z2) { return _i<bool>(0x16EC4839969F9F5E, x1, y1, z1, x2, y2, z2); }
	inline bool _0xF2385935BFFD4D92(Any p0) { return _i<bool>(0xF2385935BFFD4D92, p0); }
	inline bool _0xA3F3564A5B3646C0(Ped ped) { return _i<bool>(0xA3F3564A5B3646C0, ped); }
	inline Any _0xEBB376779A760AA8() { return _i<Any>(0xEBB376779A760AA8); }
	inline bool IsPedheadshotReady(int handle) { return _i<bool>(0x7085228842B13A67, handle); }
	inline bool IsPedheadshotValid(int handle) { return _i<bool>(0xA0A9668F158129A2, handle); }
	inline bool IsPedAimingFromCover(Ped ped) { return _i<bool>(0x3998B1276A3300E5, ped); }
	inline bool IsPedAPlayer(Ped ped) { return _i<bool>(0x12534C348C6CB68B, ped); }
	inline bool IsPedBeingJacked(Ped ped) { return _i<bool>(0x9A497FE2DF198913, ped); }
	inline bool IsPedBeingStealthKilled(Ped ped) { return _i<bool>(0x863B23EFDE9C5DF2, ped); }
	inline bool IsPedBeingStunned(Ped ped, int p1) { return _i<bool>(0x4FBACCE3B4138EE8, ped, p1); }
	inline bool _IsPedBlushColorValid(int colorID) { return _i<bool>(0x604E810189EE3A59, colorID); }
	inline bool _0xF41B5D290C99A3D6(Any p0) { return _i<bool>(0xF41B5D290C99A3D6, p0); }
	inline bool IsPedClimbing(Ped ped) { return _i<bool>(0x53E8CB4F48BFE623, ped); }
	inline bool IsPedComponentVariationValid(Ped ped, int componentId, int drawableId, int textureId) { return _i<bool>(0xE825F6B6CEA7671D, ped, componentId, drawableId, textureId); }
	inline bool IsPedDeadOrDying(Ped ped, bool p1) { return _i<bool>(0x3317DEDB88C95038, ped, p1); }
	inline bool _0xBA63D9FE45412247(Ped ped, bool p1) { return _i<bool>(0xBA63D9FE45412247, ped, p1); }
	inline bool IsPedDiving(Ped ped) { return _i<bool>(0x5527B8246FEF9B11, ped); }
	inline Any _0x451D05012CCEC234(Any p0) { return _i<Any>(0x451D05012CCEC234, p0); }
	inline bool IsPedDoingDriveby(Ped ped) { return _i<bool>(0xB2C086CC1BF8F2BF, ped); }
	inline bool IsPedDucking(Ped ped) { return _i<bool>(0xD125AE748725C6BC, ped); }
	inline bool IsPedEvasiveDiving(Ped ped, Entity* evadingEntity) { return _i<bool>(0x414641C26E105898, ped, evadingEntity); }
	inline bool IsPedFacingPed(Ped ped, Ped otherPed, float angle) { return _i<bool>(0xD71649DB0A545AA3, ped, otherPed, angle); }
	inline bool IsPedFalling(Ped ped) { return _i<bool>(0xFB92A102F1C4DFA3, ped); }
	inline bool IsPedFatallyInjured(Ped ped) { return _i<bool>(0xD839450756ED5A80, ped); }
	inline bool IsPedFleeing(Ped ped) { return _i<bool>(0xBBCCE00B381F8482, ped); }
	inline bool IsPedGettingIntoAVehicle(Ped ped) { return _i<bool>(0xBB062B2B5722478E, ped); }
	inline bool IsPedGoingIntoCover(Ped ped) { return _i<bool>(0x9F65DBC537E59AD5, ped); }
	inline bool IsPedGroupMember(Ped ped, int groupId) { return _i<bool>(0x9BB01E3834671191, ped, groupId); }
	inline bool _IsPedHairColorValid(int colorID) { return _i<bool>(0xE0D36E5D9E99CC21, colorID); }
	inline bool _0xED6D8E27A43B8CDE(Any p0) { return _i<bool>(0xED6D8E27A43B8CDE, p0); }
	inline bool IsPedHangingOnToVehicle(Ped ped) { return _i<bool>(0x1C86D8AEF8254B78, ped); }
	inline bool _0xFCF37A457CB96DC0(Any p0, float p1, float p2, float p3, float p4) { return _i<bool>(0xFCF37A457CB96DC0, p0, p1, p2, p3, p4); }
	inline bool IsPedHeadtrackingEntity(Ped ped, Entity entity) { return _i<bool>(0x813A0A7C9D2E831F, ped, entity); }
	inline bool IsPedHeadtrackingPed(Ped ped1, Ped ped2) { return _i<bool>(0x5CD3CB88A7F8850D, ped1, ped2); }
	inline Any _0xB9496CE47546DB2C(Any p0) { return _i<Any>(0xB9496CE47546DB2C, p0); }
	inline bool IsPedHuman(Ped ped) { return _i<bool>(0xB980061DA992779D, ped); }
	inline bool IsPedHurt(Ped ped) { return _i<bool>(0x5983BB449D7FDB12, ped); }
	inline bool IsPedInjured(Ped ped) { return _i<bool>(0x84A2DD9AC37C35C1, ped); }
	inline bool IsPedInAnyBoat(Ped ped) { return _i<bool>(0x2E0E1C2B4F6CB339, ped); }
	inline bool IsPedInAnyHeli(Ped ped) { return _i<bool>(0x298B91AE825E5705, ped); }
	inline bool IsPedInAnyPlane(Ped ped) { return _i<bool>(0x5FFF4CFC74D8FB80, ped); }
	inline bool IsPedInAnyPoliceVehicle(Ped ped) { return _i<bool>(0x0BD04E29640C9C12, ped); }
	inline bool IsPedInAnySub(Ped ped) { return _i<bool>(0xFBFC01CCFB35D99E, ped); }
	inline bool IsPedInAnyTaxi(Ped ped) { return _i<bool>(0x6E575D6A898AB852, ped); }
	inline bool IsPedInAnyTrain(Ped ped) { return _i<bool>(0x6F972C1AB75A1ED0, ped); }
	inline bool IsPedInAnyVehicle(Ped ped, bool atGetIn) { return _i<bool>(0x997ABD671D25CA0B, ped, atGetIn); }
	inline bool IsPedInCombat(Ped ped, Ped target) { return _i<bool>(0x4859F1FC66A6278E, ped, target); }
	inline bool IsPedInCover(Ped ped, bool p1) { return _i<bool>(0x60DFD0691A170B88, ped, p1); }
	inline bool IsPedInCoverFacingLeft(Ped ped) { return _i<bool>(0x845333B3150583AB, ped); }
	inline bool IsPedInFlyingVehicle(Ped ped) { return _i<bool>(0x9134873537FA419C, ped); }
	inline bool IsPedInGroup(Ped ped) { return _i<bool>(0x5891CAC5D4ACFF74, ped); }
	inline bool _IsPedStandingInCover(Ped ped) { return _i<bool>(0x6A03BF943D767C93, ped); }
	inline bool IsPedInMeleeCombat(Ped ped) { return _i<bool>(0x4E209B2C1EAD5159, ped); }
	inline bool IsPedInModel(Ped ped, Hash modelHash) { return _i<bool>(0x796D90EFB19AA332, ped, modelHash); }
	inline bool IsPedInParachuteFreeFall(Ped ped) { return _i<bool>(0x7DCE8BDA0F1C1200, ped); }
	inline bool IsPedInVehicle(Ped ped, Vehicle vehicle, bool atGetIn) { return _i<bool>(0xA3EE4A07279BB9DB, ped, vehicle, atGetIn); }
	inline bool IsPedJacking(Ped ped) { return _i<bool>(0x4AE4FF911DFB61DA, ped); }
	inline bool IsPedJumping(Ped ped) { return _i<bool>(0xCEDABC5900A0BF97, ped); }
	inline bool IsPedJumpingOutOfVehicle(Ped ped) { return _i<bool>(0x433DDFFE2044B636, ped); }
	inline Any _0x412F1364FA066CFB(Any p0) { return _i<Any>(0x412F1364FA066CFB, p0); }
	inline bool _IsPedLipstickColorValid(int colorID) { return _i<bool>(0x0525A2C2562F3CD4, colorID); }
	inline bool _0x3E802F11FBE27674(Any p0) { return _i<bool>(0x3E802F11FBE27674, p0); }
	inline bool IsPedMale(Ped ped) { return _i<bool>(0x6D9F5FAA7488BA46, ped); }
	inline bool IsPedModel(Ped ped, Hash modelHash) { return _i<bool>(0xC9D55B1A358A5BF7, ped, modelHash); }
	inline bool IsPedOnAnyBike(Ped ped) { return _i<bool>(0x94495889E22C6479, ped); }
	inline bool IsPedOnFoot(Ped ped) { return _i<bool>(0x01FEE67DB37F59B2, ped); }
	inline bool IsPedOnSpecificVehicle(Ped ped, Vehicle vehicle) { return _i<bool>(0xEC5F66E459AF3BB2, ped, vehicle); }
	inline bool IsPedOnVehicle(Ped ped) { return _i<bool>(0x67722AEB798E5FAB, ped); }
	inline bool _0x26AF0E8E30BD2A2C(Ped ped) { return _i<bool>(0x26AF0E8E30BD2A2C, ped); }
	inline bool _0xEBD0EDBA5BE957CF(Ped ped) { return _i<bool>(0xEBD0EDBA5BE957CF, ped); }
	inline bool _0xDCCA191DF9980FD7(Ped ped) { return _i<bool>(0xDCCA191DF9980FD7, ped); }
	inline bool IsPedPerformingStealthKill(Ped ped) { return _i<bool>(0xFD4CCDBCC59941B7, ped); }
	inline bool IsPedPlantingBomb(Ped ped) { return _i<bool>(0xC70B5FAE151982D8, ped); }
	inline bool IsPedProne(Ped ped) { return _i<bool>(0xD6A86331A537A7B9, ped); }
	inline bool IsPedRagdoll(Ped ped) { return _i<bool>(0x47E4E977581C5B55, ped); }
	inline bool IsPedReloading(Ped ped) { return _i<bool>(0x24B100C68C645951, ped); }
	inline bool IsPedRespondingToEvent(Ped ped, Any event) { return _i<bool>(0x625B774D75C87068, ped, event); }
	inline bool _0xD1871251F3B5ACD7(Ped ped) { return _i<bool>(0xD1871251F3B5ACD7, ped); }
	inline bool IsPedRunningMobilePhoneTask(Ped ped) { return _i<bool>(0x2AFE52F782F25775, ped); }
	inline bool IsPedRunningRagdollTask(Ped ped) { return _i<bool>(0xE3B6097CC25AA69E, ped); }
	inline Any _0x81AA517FBBA05D39(Any p0) { return _i<Any>(0x81AA517FBBA05D39, p0); }
	inline bool _0xB8B52E498014F5B0(Ped ped) { return _i<bool>(0xB8B52E498014F5B0, ped); }
	inline bool IsPedShooting(Ped ped) { return _i<bool>(0x34616828CD07F1A1, ped); }
	inline bool IsPedShootingInArea(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, bool p7, bool p8) { return _i<bool>(0x7E9DFE24AC1E58EF, ped, x1, y1, z1, x2, y2, z2, p7, p8); }
	inline bool IsPedSittingInAnyVehicle(Ped ped) { return _i<bool>(0x826AA586EDB9FEF8, ped); }
	inline bool IsPedSittingInVehicle(Ped ped, Vehicle vehicle) { return _i<bool>(0xA808AA1D79230FC2, ped, vehicle); }
	inline bool IsPedStopped(Ped ped) { return _i<bool>(0x530944F6F4B8A214, ped); }
	inline bool IsPedSwimming(Ped ped) { return _i<bool>(0x9DE327631295B4C2, ped); }
	inline bool IsPedSwimmingUnderWater(Ped ped) { return _i<bool>(0xC024869A53992F34, ped); }
	inline Any _0x3795688A307E1EB6(Any p0) { return _i<Any>(0x3795688A307E1EB6, p0); }
	inline bool _0x14590DDBEDB1EC85(Ped ped) { return _i<bool>(0x14590DDBEDB1EC85, ped); }
	inline bool IsPedTracked(Ped ped) { return _i<bool>(0x4C5E1F087CD10BB7, ped); }
	inline bool IsPedTryingToEnterALockedVehicle(Ped ped) { return _i<bool>(0x44D28D5DDFE5F68C, ped); }
	inline bool IsPedUsingActionMode(Ped ped) { return _i<bool>(0x00E73468D085F745, ped); }
	inline bool IsPedUsingAnyScenario(Ped ped) { return _i<bool>(0x57AB4A3080F85143, ped); }
	inline bool IsPedUsingScenario(Ped ped, String scenario) { return _i<bool>(0x1BF094736DD62C2E, ped, scenario); }
	inline bool IsPedVaulting(Ped ped) { return _i<bool>(0x117C70D1F5730B5E, ped); }
	inline bool IsPedWearingHelmet(Ped ped) { return _i<bool>(0xF33BDFE19B309B19, ped); }
	inline bool IsScriptedScenarioPedUsingConditionalAnim(Ped ped, String animDict, String anim) { return _i<bool>(0x6EC47A344923E1ED, ped, animDict, anim); }
	inline bool _0x7F2F4F13AC5257EF(Any p0) { return _i<bool>(0x7F2F4F13AC5257EF, p0); }
	inline bool IsSynchronizedSceneLooped(int sceneID) { return _i<bool>(0x62522002E0C391BA, sceneID); }
	inline bool IsSynchronizedSceneRunning(int sceneId) { return _i<bool>(0x25D39B935A038A26, sceneId); }
	inline bool _0x06087579E7AA85A9(Any p0, Any p1, float p2, float p3, float p4, float p5) { return _i<bool>(0x06087579E7AA85A9, p0, p1, p2, p3, p4, p5); }
	inline bool IsTrackedPedVisible(Ped ped) { return _i<bool>(0x91C8E617F64188AC, ped); }
	inline bool _0xFEC9A3B1820F3331(Any p0) { return _i<bool>(0xFEC9A3B1820F3331, p0); }
	inline Void KnockOffPedProp(Ped ped, bool p1, bool p2, bool p3, bool p4) { return _i<Void>(0x6FD7816A36615F48, ped, p1, p2, p3, p4); }
	inline Void KnockPedOffVehicle(Ped ped) { return _i<Void>(0x45BBCBA77C29A841, ped); }
	inline Void _0x2B694AFCF64E6994(Ped ped, bool p1) { return _i<Void>(0x2B694AFCF64E6994, ped, p1); }
	inline bool _0x46B05BCAE43856B0(Ped ped, int flag) { return _i<bool>(0x46B05BCAE43856B0, ped, flag); }
	inline Void PlayFacialAnim(Ped ped, String animName, String animDict) { return _i<Void>(0xE1E65CA8AC9C00ED, ped, animName, animDict); }
	inline Void RegisterHatedTargetsAroundPed(Ped ped, float radius) { return _i<Void>(0x9222F300BF8354FE, ped, radius); }
	inline int RegisterPedheadshot(Ped ped) { return _i<int>(0x4462658788425076, ped); }
	inline Any _0xBA8805A1108A2515(Any p0) { return _i<Any>(0xBA8805A1108A2515, p0); }
	inline Any _0x953563CE563143AF(Any p0) { return _i<Any>(0x953563CE563143AF, p0); }
	inline Void RegisterTarget(Ped ped, Ped target) { return _i<Void>(0x2F25D9AEFA34FBA2, ped, target); }
	inline Void _0x5D517B27CF6ECD04(Any p0) { return _i<Void>(0x5D517B27CF6ECD04, p0); }
	inline Void _0xF79F9DEF0AADE61A(Ped ped) { return _i<Void>(0xF79F9DEF0AADE61A, ped); }
	inline Void _0x5AAB586FFEC0FD96(Any p0) { return _i<Void>(0x5AAB586FFEC0FD96, p0); }
	inline Void RemoveActionModeAsset(String asset) { return _i<Void>(0x13E940F88470FA51, asset); }
	inline Void RemoveGroup(int groupId) { return _i<Void>(0x8EB2F69076AF7053, groupId); }
	inline Void RemovePedDefensiveArea(Ped ped, bool toggle) { return _i<Void>(0x74D4E028107450A9, ped, toggle); }
	inline Void RemovePedElegantly(Ped* ped) { return _i<Void>(0xAC6D445B994DF95E, ped); }
	inline Void RemovePedFromGroup(Ped ped) { return _i<Void>(0xED74007FFB146BC2, ped); }
	inline Void RemovePedHelmet(Ped ped, bool instantly) { return _i<Void>(0xA7B2458D0AD6DED8, ped, instantly); }
	inline Void RemovePedPreferredCoverSet(Ped ped) { return _i<Void>(0xFDDB234CF74073D9, ped); }
	inline Void RemoveRelationshipGroup(Hash groupHash) { return _i<Void>(0xB6BA2444AB393DA2, groupHash); }
	inline Void RemoveScenarioBlockingArea(Any p0, bool p1) { return _i<Void>(0x31D16B74C6E29D66, p0, p1); }
	inline Void RemoveScenarioBlockingAreas() { return _i<Void>(0xD37401D78A929A49); }
	inline Void RemoveStealthModeAsset(String asset) { return _i<Void>(0x9219857D21F0E842, asset); }
	inline Void RequestActionModeAsset(String asset) { return _i<Void>(0x290E2780BB7AA598, asset); }
	inline bool _0xF0DAEF2F545BEE25(Any p0) { return _i<bool>(0xF0DAEF2F545BEE25, p0); }
	inline Void _0xCD018C591F94CB43(Any p0, bool p1) { return _i<Void>(0xCD018C591F94CB43, p0, p1); }
	inline Void _0x75BA1CB3B7D40CAF(Ped ped, bool p1) { return _i<Void>(0x75BA1CB3B7D40CAF, ped, p1); }
	inline Void _0x2BC338A7B21F4608(Ped ped, bool p1) { return _i<Void>(0x2BC338A7B21F4608, ped, p1); }
	inline Void _0x7D7A2E43E74E2EB8(Any p0) { return _i<Void>(0x7D7A2E43E74E2EB8, p0); }
	inline Void RequestStealthModeAsset(String asset) { return _i<Void>(0x2A0A62FCDEE16D4F, asset); }
	inline Void ResetAiMeleeWeaponDamageModifier() { return _i<Void>(0x46E56A7CD1D63C3F); }
	inline Void ResetAiWeaponDamageModifier() { return _i<Void>(0xEA16670E7BA4743C); }
	inline Void ResetGroupFormationDefaultSpacing(int groupHandle) { return _i<Void>(0x63DAB4CCB3273205, groupHandle); }
	inline Void ResetPedInVehicleContext(Ped ped) { return _i<Void>(0x22EF8FF8778030EB, ped); }
	inline Void ResetPedLastVehicle(Ped ped) { return _i<Void>(0xBB8DE8CF6A8DD8BB, ped); }
	inline Void ResetPedMovementClipset(Ped ped, float p1) { return _i<Void>(0xAA74EC0CB0AAEA2C, ped, p1); }
	inline Void ResetPedRagdollTimer(Ped ped) { return _i<Void>(0x9FA4664CF62E47E8, ped); }
	inline Void ResetPedStrafeClipset(Ped ped) { return _i<Void>(0x20510814175EA477, ped); }
	inline Void ResetPedVisibleDamage(Ped ped) { return _i<Void>(0x3AC1F7B898F30C05, ped); }
	inline Void ClearPedBloodDamage(Ped ped) { return _i<Void>(0x8FE22675A5A45817, ped); }
	inline Void ResetPedWeaponMovementClipset(Ped ped) { return _i<Void>(0x97B0DB5B4AA74E77, ped); }
	inline Void ResurrectPed(Ped ped) { return _i<Void>(0x71BC8E838B9C6035, ped); }
	inline Void ReviveInjuredPed(Ped ped) { return _i<Void>(0x8D8ACD8388CD99CE, ped); }
	inline Void SetAiMeleeWeaponDamageModifier(float modifier) { return _i<Void>(0x66460DEDDD417254, modifier); }
	inline Void SetAiWeaponDamageModifier(float value) { return _i<Void>(0x1B1E2A40A65B8521, value); }
	inline Void _0x061CB768363D6424(Any p0, bool p1) { return _i<Void>(0x061CB768363D6424, p0, p1); }
	inline Void _0x87DDEB611B329A9C(Any p0) { return _i<Void>(0x87DDEB611B329A9C, p0); }
	inline Void _0x6B0E6172C9A4D902(bool p0) { return _i<Void>(0x6B0E6172C9A4D902, p0); }
	inline Void SetBlockingOfNonTemporaryEvents(Ped ped, bool toggle) { return _i<Void>(0x9F8AA94D6D97DBF4, ped, toggle); }
	inline Void _0x9911F4A24485F653(bool p0) { return _i<Void>(0x9911F4A24485F653, p0); }
	inline Void SetCanAttackFriendly(Ped ped, bool toggle, bool p2) { return _i<Void>(0xB3B1CB349FF9C75D, ped, toggle, p2); }
	inline Void SetCombatFloat(Ped ped, int combatType, float p2) { return _i<Void>(0xFF41B4B141ED981C, ped, combatType, p2); }
	inline Void _0x2F074C904D85129E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0x2F074C904D85129E, p0, p1, p2, p3, p4, p5, p6); }
	inline Void _0x2735233A786B1BEF(Ped ped, float p1) { return _i<Void>(0x2735233A786B1BEF, ped, p1); }
	inline Void SetCreateRandomCops(bool toggle) { return _i<Void>(0x102E68B2024D536D, toggle); }
	inline Void SetCreateRandomCopsNotOnScenarios(bool toggle) { return _i<Void>(0x8A4986851C4EF6E7, toggle); }
	inline Void SetCreateRandomCopsOnScenarios(bool toggle) { return _i<Void>(0x444CB7D7DBE6973D, toggle); }
	inline Void _0x711794453CFD692B(Any p0, Any p1) { return _i<Void>(0x711794453CFD692B, p0, p1); }
	inline Any _0xDFE68C4B787E1BFB() { return _i<Any>(0xDFE68C4B787E1BFB); }
	inline Void SetDriverAbility(Ped driver, float ability) { return _i<Void>(0xB195FFA8042FC5C3, driver, ability); }
	inline Void SetDriverAggressiveness(Ped driver, float aggressiveness) { return _i<Void>(0xA731F608CA104E3C, driver, aggressiveness); }
	inline Void _0xDED5AF5A0EA4B297(Ped driver, float p1) { return _i<Void>(0xDED5AF5A0EA4B297, driver, p1); }
	inline Void SetEnableBoundAnkles(Ped ped, bool toggle) { return _i<Void>(0xC52E0F855C58FC2E, ped, toggle); }
	inline Void SetEnableHandcuffs(Ped ped, bool toggle) { return _i<Void>(0xDF1AF8B5D56542FA, ped, toggle); }
	inline Void SetEnablePedEnveffScale(Ped ped, bool toggle) { return _i<Void>(0xD2C5AA0C0E8D0F1E, ped, toggle); }
	inline Void SetEnableScuba(Ped ped, bool toggle) { return _i<Void>(0xF99F62004024D506, ped, toggle); }
	inline Void SetFacialIdleAnimOverride(Ped ped, String animName, String animDict) { return _i<Void>(0xFFC24B988B938B38, ped, animName, animDict); }
	inline Void _0x129466ED55140F8D(Ped ped, bool toggle) { return _i<Void>(0x129466ED55140F8D, ped, toggle); }
	inline Void _0xCB968B53FC7F916D(Any p0, bool p1, Any p2, Any p3) { return _i<Void>(0xCB968B53FC7F916D, p0, p1, p2, p3); }
	inline Void SetGroupFormation(int groupId, int formationType) { return _i<Void>(0xCE2F5FC3AF7E8C1E, groupId, formationType); }
	inline Void SetGroupFormationSpacing(int groupId, float p1, float p2, float p3) { return _i<Void>(0x1D9D45004C28C916, groupId, p1, p2, p3); }
	inline Void SetGroupSeparationRange(int groupHandle, float separationRange) { return _i<Void>(0x4102C7858CFEE4E4, groupHandle, separationRange); }
	inline Void _SetPedEyeColor(Ped ped, int index) { return _i<Void>(0x50B56988B170AFDF, ped, index); }
	inline Void _0xCC9682B8951C5229(Ped ped, int r, int g, int b, int p4) { return _i<Void>(0xCC9682B8951C5229, ped, r, g, b, p4); }
	inline Void _0xFF4803BC019852D9(float p0, Any p1) { return _i<Void>(0xFF4803BC019852D9, p0, p1); }
	inline Void SetIkTarget(Ped ped, int p1, Ped targetPed, int boneLookAt, float x, float y, float z, Any p7, int duration, int duration1) { return _i<Void>(0xC32779C16FCEECD9, ped, p1, targetPed, boneLookAt, x, y, z, p7, duration, duration1); }
	inline Void _0x1A330D297AAC6BC1(Ped ped, int p1) { return _i<Void>(0x1A330D297AAC6BC1, ped, p1); }
	inline Void _0x781DE8FA214E87D2(Ped ped, String p1) { return _i<Void>(0x781DE8FA214E87D2, ped, p1); }
	inline Void SetPedAccuracy(Ped ped, int accuracy) { return _i<Void>(0x7AEFB85C1D49DEB6, ped, accuracy); }
	inline Void SetPedAlertness(Ped ped, int value) { return _i<Void>(0xDBA71115ED9941A6, ped, value); }
	inline Void SetPedAllowedToDuck(Ped ped, bool toggle) { return _i<Void>(0xDA1F1B7BE1A8766F, ped, toggle); }
	inline Void _0xF2BEBCDFAFDAA19E(bool toggle) { return _i<Void>(0xF2BEBCDFAFDAA19E, toggle); }
	inline Void _0x49E50BDB8BA4DAB2(Ped ped, bool p1) { return _i<Void>(0x49E50BDB8BA4DAB2, ped, p1); }
	inline Void SetPedAllowVehiclesOverride(Ped ped, bool toggle) { return _i<Void>(0x3C028C636A414ED9, ped, toggle); }
	inline Void SetPedAlternateMovementAnim(Ped ped, int stance, String animDictionary, String animationName, float p4, bool p5) { return _i<Void>(0x90A43CC281FFAB46, ped, stance, animDictionary, animationName, p4, p5); }
	inline Void SetPedAlternateWalkAnim(Ped ped, String animDict, String animName, float p3, bool p4) { return _i<Void>(0x6C60394CB4F75E9A, ped, animDict, animName, p3, p4); }
	inline Void SetPedAngledDefensiveArea(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, bool p8, bool p9) { return _i<Void>(0xC7F76DF27A5045A1, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Void _0x2B5AA717A181FB4C(Any p0, bool p1) { return _i<Void>(0x2B5AA717A181FB4C, p0, p1); }
	inline Void SetPedArmour(Ped ped, int amount) { return _i<Void>(0xCEA04D83135264CC, ped, amount); }
	inline Void SetPedAsCop(Ped ped, bool toggle) { return _i<Void>(0xBB03C38DD3FB7FFD, ped, toggle); }
	inline Void SetPedAsEnemy(Ped ped, bool toggle) { return _i<Void>(0x02A0C9720B854BFA, ped, toggle); }
	inline Void SetPedAsGroupLeader(Ped ped, int groupId) { return _i<Void>(0x2A7819605465FBCE, ped, groupId); }
	inline Void SetPedAsGroupMember(Ped ped, int groupId) { return _i<Void>(0x9F3480FE65DB31B5, ped, groupId); }
	inline Void SetPedBlendFromParents(Ped ped, Any p1, Any p2, float p3, float p4) { return _i<Void>(0x137BBD05230DB22D, ped, p1, p2, p3, p4); }
	inline Void _0x576594E8D64375E2(Any p0, bool p1) { return _i<Void>(0x576594E8D64375E2, p0, p1); }
	inline Void SetPedBoundsOrientation(Ped ped, float p1, float p2, float p3, float p4, float p5) { return _i<Void>(0x4F5F651ACCC9C4CF, ped, p1, p2, p3, p4, p5); }
	inline Void SetPedCanArmIk(Ped ped, bool toggle) { return _i<Void>(0x6C3B4D6D13B4C841, ped, toggle); }
	inline Void SetPedCanBeDraggedOut(Ped ped, bool toggle) { return _i<Void>(0xC1670E958EEE24E5, ped, toggle); }
	inline Void SetPedCanBeKnockedOffVehicle(Ped ped, int state) { return _i<Void>(0x7A6535691B477C48, ped, state); }
	inline Void SetPedCanBeShotInVehicle(Ped ped, bool toggle) { return _i<Void>(0xC7EF1BA83230BA07, ped, toggle); }
	inline Void SetPedCanBeTargetedWhenInjured(Ped ped, bool toggle) { return _i<Void>(0x638C03B0F9878F57, ped, toggle); }
	inline Void SetPedCanBeTargetedWithoutLos(Ped ped, bool toggle) { return _i<Void>(0x4328652AE5769C71, ped, toggle); }
	inline Void SetPedCanBeTargetted(Ped ped, bool toggle) { return _i<Void>(0x63F58F7C80513AAD, ped, toggle); }
	inline Void SetPedCanBeTargettedByPlayer(Ped ped, Player player, bool toggle) { return _i<Void>(0x66B57B72E0836A76, ped, player, toggle); }
	inline Void SetPedCanBeTargettedByTeam(Ped ped, int team, bool toggle) { return _i<Void>(0xBF1CA77833E58F2C, ped, team, toggle); }
	inline Void SetPedCanCowerInCover(Ped ped, bool toggle) { return _i<Void>(0xCB7553CDCEF4A735, ped, toggle); }
	inline Void SetPedCanEvasiveDive(Ped ped, bool toggle) { return _i<Void>(0x6B7A646C242A7059, ped, toggle); }
	inline Void SetPedCanHeadIk(Ped ped, bool toggle) { return _i<Void>(0xC11C18092C5530DC, ped, toggle); }
	inline Void SetPedCanLegIk(Ped ped, bool toggle) { return _i<Void>(0x73518ECE2485412B, ped, toggle); }
	inline Void _0xE861D0B05C7662B8(Any p0, bool p1, Any p2) { return _i<Void>(0xE861D0B05C7662B8, p0, p1, p2); }
	inline Void SetPedCanPeekInCover(Ped ped, bool toggle) { return _i<Void>(0xC514825C507E3736, ped, toggle); }
	inline Void SetPedCanPlayAmbientAnims(Ped ped, bool toggle) { return _i<Void>(0x6373D1349925A70E, ped, toggle); }
	inline Void SetPedCanPlayAmbientBaseAnims(Ped ped, bool toggle) { return _i<Void>(0x0EB0585D15254740, ped, toggle); }
	inline Void SetPedCanPlayGestureAnims(Ped ped, bool toggle) { return _i<Void>(0xBAF20C5432058024, ped, toggle); }
	inline Void _0x820E9892A77E97CD(Any p0, Any p1) { return _i<Void>(0x820E9892A77E97CD, p0, p1); }
	inline Void SetPedCanPlayVisemeAnims(Ped ped, bool toggle, bool p2) { return _i<Void>(0xF833DDBA3B104D43, ped, toggle, p2); }
	inline Void SetPedCanRagdoll(Ped ped, bool toggle) { return _i<Void>(0xB128377056A54E2A, ped, toggle); }
	inline Void SetPedCanRagdollFromPlayerImpact(Ped ped, bool toggle) { return _i<Void>(0xDF993EE5E90ABA25, ped, toggle); }
	inline Void SetPedCanSmashGlass(Ped ped, bool p1, bool p2) { return _i<Void>(0x1CCE141467FF42A2, ped, p1, p2); }
	inline Void SetPedCanSwitchWeapon(Ped ped, bool toggle) { return _i<Void>(0xED7F7EFE9FABF340, ped, toggle); }
	inline Void SetPedCanTeleportToGroupLeader(Ped pedHandle, int groupHandle, bool toggle) { return _i<Void>(0x2E2F4240B3F24647, pedHandle, groupHandle, toggle); }
	inline Void SetPedCanTorsoIk(Ped ped, bool toggle) { return _i<Void>(0xF2B7106D37947CE0, ped, toggle); }
	inline Void _0xF5846EDB26A98A24(Ped ped, bool p1) { return _i<Void>(0xF5846EDB26A98A24, ped, p1); }
	inline Void _0x6647C5F6F5792496(Ped ped, bool p1) { return _i<Void>(0x6647C5F6F5792496, ped, p1); }
	inline Void SetPedCanUseAutoConversationLookat(Ped ped, bool toggle) { return _i<Void>(0xEC4686EC06434678, ped, toggle); }
	inline Void SetPedCapsule(Ped ped, float value) { return _i<Void>(0x364DF566EC833DE2, ped, value); }
	inline Void SetPedClothProne(Any p0, Any p1) { return _i<Void>(0x82A3D6D9CC2CB8E3, p0, p1); }
	inline Void _0x78C4E9961DB3EB5B(Any p0, Any p1) { return _i<Void>(0x78C4E9961DB3EB5B, p0, p1); }
	inline Void _0xA660FAF550EB37E5(Any p0, bool p1) { return _i<Void>(0xA660FAF550EB37E5, p0, p1); }
	inline Void SetPedCombatAbility(Ped ped, int p1) { return _i<Void>(0xC7622C0D36B2FDA8, ped, p1); }
	inline Void SetPedCombatAttributes(Ped ped, int attributeIndex, bool enabled) { return _i<Void>(0x9F7794730795E019, ped, attributeIndex, enabled); }
	inline Void SetPedCombatMovement(Ped ped, int combatMovement) { return _i<Void>(0x4D9CA1009AFBD057, ped, combatMovement); }
	inline Void SetPedCombatRange(Ped ped, int p1) { return _i<Void>(0x3C606747B23E497B, ped, p1); }
	inline Void SetPedComponentVariation(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { return _i<Void>(0x262B14F48D29DE80, ped, componentId, drawableId, textureId, paletteId); }
	inline Void SetPedConfigFlag(Ped ped, int flagId, bool value) { return _i<Void>(0x1913FE4CBF41C463, ped, flagId, value); }
	inline Void SetPedCoordsKeepVehicle(Ped ped, float posX, float posY, float posZ) { return _i<Void>(0x9AFEFF481A85AB2E, ped, posX, posY, posZ); }
	inline Void SetPedCoordsNoGang(Ped ped, float posX, float posY, float posZ) { return _i<Void>(0x87052FE446E07247, ped, posX, posY, posZ); }
	inline Void SetPedCowerHash(Ped ped, String p1) { return _i<Void>(0xA549131166868ED3, ped, p1); }
	inline Void SetPedDefaultComponentVariation(Ped ped) { return _i<Void>(0x45EEE61580806D63, ped); }
	inline Void SetPedDefensiveAreaAttachedToPed(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, bool p9, bool p10) { return _i<Void>(0x4EF47FE21698A8B6, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	inline Void SetPedDefensiveAreaDirection(Ped ped, float p1, float p2, float p3, bool p4) { return _i<Void>(0x413C6C763A4AFFAD, ped, p1, p2, p3, p4); }
	inline Void SetPedDefensiveSphereAttachedToPed(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, bool p6) { return _i<Void>(0xF9B8F91AAD3B953E, ped, target, xOffset, yOffset, zOffset, radius, p6); }
	inline Void _0xE4723DB6E736CCFF(Ped ped, Any p1, float p2, float p3, float p4, float p5, bool p6) { return _i<Void>(0xE4723DB6E736CCFF, ped, p1, p2, p3, p4, p5, p6); }
	inline Void SetPedDensityMultiplierThisFrame(float multiplier) { return _i<Void>(0x95E3D6257B166CF2, multiplier); }
	inline Void SetPedDesiredHeading(Ped ped, float heading) { return _i<Void>(0xAA5A7ECE2AA8FE70, ped, heading); }
	inline Void SetPedDiesInstantlyInWater(Ped ped, bool toggle) { return _i<Void>(0xEEB64139BA29A7CF, ped, toggle); }
	inline Void SetPedDiesInSinkingVehicle(Ped ped, bool toggle) { return _i<Void>(0xD718A22995E2B4BC, ped, toggle); }
	inline Void SetPedDiesInVehicle(Ped ped, bool toggle) { return _i<Void>(0x2A30922C90C9B42C, ped, toggle); }
	inline Void SetPedDiesInWater(Ped ped, bool toggle) { return _i<Void>(0x56CEF0AC79073BDE, ped, toggle); }
	inline Void SetPedDiesWhenInjured(Ped ped, bool toggle) { return _i<Void>(0x5BA7919BED300023, ped, toggle); }
	inline Void SetPedDriveByClipsetOverride(Ped ped, String clipset) { return _i<Void>(0xED34AB6C5CB36520, ped, clipset); }
	inline Void SetPedDucking(Ped ped, bool toggle) { return _i<Void>(0x030983CA930B692D, ped, toggle); }
	inline Void _0x4E90D746056E273D(Any p0, Any p1) { return _i<Void>(0x4E90D746056E273D, p0, p1); }
	inline Void _0xE906EC930F5FE7C8(Any p0, Any p1) { return _i<Void>(0xE906EC930F5FE7C8, p0, p1); }
	inline Void SetPedEnableWeaponBlocking(Ped ped, bool toggle) { return _i<Void>(0x97A790315D3831FD, ped, toggle); }
	inline Void _0xD69411AA0CEBF9E9(Ped ped, int p1, int p2, int p3) { return _i<Void>(0xD69411AA0CEBF9E9, ped, p1, p2, p3); }
	inline Void _0x110F526AB784111F(Ped ped, float p1) { return _i<Void>(0x110F526AB784111F, ped, p1); }
	inline Void SetPedEnveffScale(Ped ped, float value) { return _i<Void>(0xBF29516833893561, ped, value); }
	inline Void SetPedFiringPattern(Ped ped, Hash patternHash) { return _i<Void>(0x9AC577F5A12AD8A9, ped, patternHash); }
	inline Void SetPedFleeAttributes(Ped ped, int attributes, bool p2) { return _i<Void>(0x70A2D1137C8ED7C9, ped, attributes, p2); }
	inline Void SetPedGeneratesDeadBodyEvents(Ped ped, bool toggle) { return _i<Void>(0x7FB17BA2E7DECA5B, ped, toggle); }
	inline Void SetPedGestureGroup(Ped ped, String animGroupGesture) { return _i<Void>(0xDDF803377F94AAA8, ped, animGroupGesture); }
	inline Void SetPedGetOutUpsideDownVehicle(Ped ped, bool toggle) { return _i<Void>(0xBC0ED94165A48BC2, ped, toggle); }
	inline Void SetPedGravity(Ped ped, bool toggle) { return _i<Void>(0x9FF447B6B6AD960A, ped, toggle); }
	inline Void SetPedGroupMemberPassengerIndex(Ped ped, int index) { return _i<Void>(0x0BDDB8D9EC6BCF3C, ped, index); }
	inline Void _SetPedHairColor(Ped ped, int colorID, int highlightColorID) { return _i<Void>(0x4CFFC65454C93A49, ped, colorID, highlightColorID); }
	inline Void SetPedHeadBlendData(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, bool isParent) { return _i<Void>(0x9414E18B9434C2FE, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); }
	inline Void SetPedHeadOverlay(Ped ped, int overlayID, int index, float opacity) { return _i<Void>(0x48F44967FA05CC1E, ped, overlayID, index, opacity); }
	inline Void _SetPedHeadOverlayColor(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { return _i<Void>(0x497BF74A7B9CB952, ped, overlayID, colorType, colorID, secondColorID); }
	inline Void SetPedHearingRange(Ped ped, float value) { return _i<Void>(0x33A8F7F7D5F7F33C, ped, value); }
	inline Void _0xC1F6EBF9A3D55538(Any p0, Any p1) { return _i<Void>(0xC1F6EBF9A3D55538, p0, p1); }
	inline Void SetPedHelmet(Ped ped, bool canWearHelmet) { return _i<Void>(0x560A43136EB58105, ped, canWearHelmet); }
	inline Void SetPedHelmetFlag(Ped ped, int helmetFlag) { return _i<Void>(0xC0E78D5C2CE3EB25, ped, helmetFlag); }
	inline Void SetPedHelmetPropIndex(Ped ped, int propIndex, Any p2) { return _i<Void>(0x26D83693ED99291C, ped, propIndex, p2); }
	inline Void SetPedHelmetTextureIndex(Ped ped, int textureIndex) { return _i<Void>(0xF1550C4BD22582E2, ped, textureIndex); }
	inline Void _0x3F7325574E41B44D(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x3F7325574E41B44D, p0, p1, p2, p3); }
	inline Void _0x52D59AB61DDC05DD(Ped ped, bool p1) { return _i<Void>(0x52D59AB61DDC05DD, ped, p1); }
	inline Void SetPedIdRange(Ped ped, float value) { return _i<Void>(0xF107E836A70DCE05, ped, value); }
	inline Void _0x570389D1C3DE3C6B(Any p0) { return _i<Void>(0x570389D1C3DE3C6B, p0); }
	inline Void _0xEC4B4B3B9908052A(Ped ped, float unk) { return _i<Void>(0xEC4B4B3B9908052A, ped, unk); }
	inline Void SetPedIntoVehicle(Ped ped, Vehicle vehicle, int seatIndex) { return _i<Void>(0xF75B0D629E1C063D, ped, vehicle, seatIndex); }
	inline Void SetPedInVehicleContext(Ped ped, Hash context) { return _i<Void>(0x530071295899A8C6, ped, context); }
	inline Void _0xA9B61A329BFDCBEA(Any p0, bool p1) { return _i<Void>(0xA9B61A329BFDCBEA, p0, p1); }
	inline Void _0x33A60D8BDD6E508C(Ped ped, bool p1) { return _i<Void>(0x33A60D8BDD6E508C, ped, p1); }
	inline Void SetPedKeepTask(Ped ped, bool toggle) { return _i<Void>(0x971D38760FBC02EF, ped, toggle); }
	inline Void SetPedLegIkMode(Ped ped, int mode) { return _i<Void>(0xC396F5B86FF9FEBD, ped, mode); }
	inline Void SetPedLodMultiplier(Ped ped, float multiplier) { return _i<Void>(0xDC2C5C242AAC342B, ped, multiplier); }
	inline Void SetPedMaxHealth(Ped ped, int value) { return _i<Void>(0xF5F6378C4F3419D3, ped, value); }
	inline Void SetPedMaxMoveBlendRatio(Ped ped, float value) { return _i<Void>(0x433083750C5E064A, ped, value); }
	inline Void SetPedMaxTimeInWater(Ped ped, float value) { return _i<Void>(0x43C851690662113D, ped, value); }
	inline Void SetPedMaxTimeUnderwater(Ped ped, float value) { return _i<Void>(0x6BA428C528D9E522, ped, value); }
	inline Void _SetPedFaceFeature(Ped ped, int index, float scale) { return _i<Void>(0x71A5C1DBA060049E, ped, index, scale); }
	inline Void SetPedMinGroundTimeForStungun(Ped ped, int ms) { return _i<Void>(0xFA0675AB151073FA, ped, ms); }
	inline Void SetPedMinMoveBlendRatio(Ped ped, float value) { return _i<Void>(0x01A898D26E2333DD, ped, value); }
	inline Void SetPedModelIsSuppressed(Ped ped, bool toggle) { return _i<Void>(0xE163A4BCE4DE6F11, ped, toggle); }
	inline Void SetPedMoney(Ped ped, int amount) { return _i<Void>(0xA9C8960E8684C1B5, ped, amount); }
	inline Void SetPedMotionBlur(Ped ped, bool toggle) { return _i<Void>(0x0A986918B102B448, ped, toggle); }
	inline Void _0x9DBA107B4937F809(Any p0, String p1) { return _i<Void>(0x9DBA107B4937F809, p0, p1); }
	inline Void SetPedMovementClipset(Ped ped, String clipSet, float p2) { return _i<Void>(0xAF8A94EDE7712BEF, ped, clipSet, p2); }
	inline Void SetPedMoveAnimsBlendOut(Ped ped) { return _i<Void>(0x9E8C908F41584ECD, ped); }
	inline Void _0x0B3E35AC043707D9(Any p0, Any p1) { return _i<Void>(0x0B3E35AC043707D9, p0, p1); }
	inline Void SetPedMoveRateOverride(Ped ped, float value) { return _i<Void>(0x085BF80FA50A39D1, ped, value); }
	inline Void SetPedNeverLeavesGroup(Ped ped, bool toggle) { return _i<Void>(0x3DBFC55D5C9BB447, ped, toggle); }
	inline Void SetPedNonCreationArea(float x1, float y1, float z1, float x2, float y2, float z2) { return _i<Void>(0xEE01041D559983EA, x1, y1, z1, x2, y2, z2); }
	inline Void _0xA52D5247A4227E14(Any p0) { return _i<Void>(0xA52D5247A4227E14, p0); }
	inline Any _0xFE07FF6495D52E2A(Any p0, Any p1, Any p2, Any p3) { return _i<Any>(0xFE07FF6495D52E2A, p0, p1, p2, p3); }
	inline Void SetPedParachuteTintIndex(Ped ped, int tintIndex) { return _i<Void>(0x333FC8DB079B7186, ped, tintIndex); }
	inline Void _0x83A169EABCDB10A2(Any p0, Any p1) { return _i<Void>(0x83A169EABCDB10A2, p0, p1); }
	inline Any SetPedPinnedDown(Ped ped, bool pinned, int i) { return _i<Any>(0xAAD6D1ACF08F4612, ped, pinned, i); }
	inline Void SetPedPreferredCoverSet(Ped ped, Any itemSet) { return _i<Void>(0x8421EB4DA7E391B9, ped, itemSet); }
	inline bool _IsPedPropValid(Ped ped, int componentId, int drawableId, int TextureId) { return _i<bool>(0x2B16A3BFF1FBCE49, ped, componentId, drawableId, TextureId); }
	inline Any _0x39D55A620FCB6A3A(Ped ped, int p1, int drawableId, int textureId) { return _i<Any>(0x39D55A620FCB6A3A, ped, p1, drawableId, textureId); }
	inline Void SetPedPrimaryLookat(Ped ped, Ped lookAt) { return _i<Void>(0xCD17B554996A8D9E, ped, lookAt); }
	inline Void SetPedPropIndex(Ped ped, int componentId, int drawableId, int TextureId, bool attach) { return _i<Void>(0x93376B65A266EB5F, ped, componentId, drawableId, TextureId, attach); }
	inline Void SetPedRagdollForceFall(Ped ped) { return _i<Void>(0x01F6594B923B9251, ped); }
	inline Void SetPedRagdollOnCollision(Ped ped, bool toggle) { return _i<Void>(0xF0A4F1BBF4FA7497, ped, toggle); }
	inline Void SetPedRandomComponentVariation(Ped ped, bool p1) { return _i<Void>(0xC8A9481A01E63C28, ped, p1); }
	inline Void SetPedRandomProps(Ped ped) { return _i<Void>(0xC44AA05345C992C6, ped); }
	inline Void SetPedRelationshipGroupDefaultHash(Ped ped, Hash hash) { return _i<Void>(0xADB3F206518799E8, ped, hash); }
	inline Void SetPedRelationshipGroupHash(Ped ped, Hash hash) { return _i<Void>(0xC80A74AC829DDD92, ped, hash); }
	inline Void SetPedReserveParachuteTintIndex(Ped ped, Any p1) { return _i<Void>(0xE88DA0751C22A2AD, ped, p1); }
	inline Void SetPedResetFlag(Ped ped, int flagId, bool doReset) { return _i<Void>(0xC1E8A365BF3B29F2, ped, flagId, doReset); }
	inline Void _0x36C6984C3ED0C911(Any p0) { return _i<Void>(0x36C6984C3ED0C911, p0); }
	inline Void SetPedSeeingRange(Ped ped, float value) { return _i<Void>(0xF29CF591C4BF6CEE, ped, value); }
	inline Void SetPedShootsAtCoord(Ped ped, float x, float y, float z, bool toggle) { return _i<Void>(0x96A05E4FB321B1BA, ped, x, y, z, toggle); }
	inline Void SetPedShootRate(Ped ped, int shootRate) { return _i<Void>(0x614DA022990752DC, ped, shootRate); }
	inline Void _0x425AECF167663F48(Ped ped, bool p1) { return _i<Void>(0x425AECF167663F48, ped, p1); }
	inline Void _0x5B6010B3CBC29095(Any p0, bool p1) { return _i<Void>(0x5B6010B3CBC29095, p0, p1); }
	inline Any _0xEC6935EBE0847B90(Any p0, Any p1, Any p2, Any p3) { return _i<Any>(0xEC6935EBE0847B90, p0, p1, p2, p3); }
	inline Any _0xEEED8FAFEC331A70(Any p0, Any p1, Any p2, Any p3) { return _i<Any>(0xEEED8FAFEC331A70, p0, p1, p2, p3); }
	inline Void _0xF1C03A5352243A30(Any p0) { return _i<Void>(0xF1C03A5352243A30, p0); }
	inline Void _0xA3A9299C4F2ADB98(Any p0) { return _i<Void>(0xA3A9299C4F2ADB98, p0); }
	inline Void _0xCEDA60A74219D064(Any p0, bool p1) { return _i<Void>(0xCEDA60A74219D064, p0, p1); }
	inline Void SetPedSphereDefensiveArea(Ped ped, float x, float y, float z, float radius, bool p5, bool p6) { return _i<Void>(0x9D3151A373974804, ped, x, y, z, radius, p5, p6); }
	inline Void SetPedStayInVehicleWhenJacked(Ped ped, bool toggle) { return _i<Void>(0xEDF4079F9D54C9A1, ped, toggle); }
	inline Void SetPedStealthMovement(Ped ped, bool p1, String action) { return _i<Void>(0x88CBB5CEB96B7BD2, ped, p1, action); }
	inline Void _0x2016C603D6B8987C(Any p0, bool p1) { return _i<Void>(0x2016C603D6B8987C, p0, p1); }
	inline Void SetPedSteersAroundObjects(Ped ped, bool toggle) { return _i<Void>(0x1509C089ADC208BF, ped, toggle); }
	inline Void SetPedSteersAroundPeds(Ped ped, bool toggle) { return _i<Void>(0x46F2193B3AD1D891, ped, toggle); }
	inline Void SetPedSteersAroundVehicles(Ped ped, bool toggle) { return _i<Void>(0xEB6FB9D48DDE23EC, ped, toggle); }
	inline Void _0x288DF530C92DAD6F(Any p0, float p1) { return _i<Void>(0x288DF530C92DAD6F, p0, p1); }
	inline Void SetPedStrafeClipset(Ped ped, String clipSet) { return _i<Void>(0x29A28F3F8CF6D854, ped, clipSet); }
	inline Void SetPedSuffersCriticalHits(Ped ped, bool toggle) { return _i<Void>(0xEBD76F2359F190AC, ped, toggle); }
	inline Void SetPedSweat(Ped ped, float sweat) { return _i<Void>(0x27B0405F59637D1F, ped, sweat); }
	inline Void SetPedTargetLossResponse(Ped ped, int responseType) { return _i<Void>(0x0703B9079823DA4A, ped, responseType); }
	inline Void SetPedToInformRespectedFriends(Ped ped, float radius, int maxFriends) { return _i<Void>(0x112942C6E708F70B, ped, radius, maxFriends); }
	inline Void SetPedToLoadCover(Ped ped, bool toggle) { return _i<Void>(0x332B562EEDA62399, ped, toggle); }
	inline bool SetPedToRagdoll(Ped ped, int time1, int time2, int ragdollType, bool p4, bool p5, bool p6) { return _i<bool>(0xAE99FB955581844A, ped, time1, time2, ragdollType, p4, p5, p6); }
	inline bool SetPedToRagdollWithFall(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { return _i<bool>(0xD76632D99E4966C8, ped, time, p2, ragdollType, x, y, z, p7, p8, p9, p10, p11, p12, p13); }
	inline Void _0x0F62619393661D6E(Any p0, Any p1, Any p2) { return _i<Void>(0x0F62619393661D6E, p0, p1, p2); }
	inline Void _0xAFC976FD0580C7B3(Ped ped, bool toggle) { return _i<Void>(0xAFC976FD0580C7B3, ped, toggle); }
	inline Void SetPedUsingActionMode(Ped ped, bool p1, Any p2, String action) { return _i<Void>(0xD75ACCF5E0FB5367, ped, p1, p2, action); }
	inline Void _0x952F06BEECD775CC(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x952F06BEECD775CC, p0, p1, p2, p3); }
	inline Void SetPedVisualFieldCenterAngle(Ped ped, float angle) { return _i<Void>(0x3B6405E8AB34A907, ped, angle); }
	inline Void SetPedVisualFieldMaxAngle(Ped ped, float value) { return _i<Void>(0x70793BDCA1E854D4, ped, value); }
	inline Void SetPedVisualFieldMaxElevationAngle(Ped ped, float angle) { return _i<Void>(0x78D0B67629D75856, ped, angle); }
	inline Void SetPedVisualFieldMinAngle(Ped ped, float value) { return _i<Void>(0x2DB492222FB21E26, ped, value); }
	inline Void SetPedVisualFieldMinElevationAngle(Ped ped, float angle) { return _i<Void>(0x7A276EB2C224D70F, ped, angle); }
	inline Void SetPedVisualFieldPeripheralRange(Ped ped, float range) { return _i<Void>(0x9C74B0BC831B753A, ped, range); }
	inline Void SetPedWeaponMovementClipset(Ped ped, String clipSet) { return _i<Void>(0x2622E35B77D3ACA2, ped, clipSet); }
	inline Void SetPedWetnessEnabledThisFrame(Ped ped) { return _i<Void>(0xB5485E4907B53019, ped); }
	inline Void SetPedWetnessHeight(Ped ped, float height) { return _i<Void>(0x44CB6447D2571AA0, ped, height); }
	inline Void _0x3E9679C1DFCF422C(Any p0, Any p1) { return _i<Void>(0x3E9679C1DFCF422C, p0, p1); }
	inline Void _0xD8C3BE3EE94CAF2D(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0xD8C3BE3EE94CAF2D, p0, p1, p2, p3, p4); }
	inline Void _SetPedRagdollBlockingFlags(Ped ped, int flags) { return _i<Void>(0x26695EC767728D84, ped, flags); }
	inline Void SetRelationshipBetweenGroups(int relationship, Hash group1, Hash group2) { return _i<Void>(0xBF25EB89375A37AD, relationship, group1, group2); }
	inline Void _0x5615E0C5EB2BC6E2(Any p0, Any p1) { return _i<Void>(0x5615E0C5EB2BC6E2, p0, p1); }
	inline Void SetScenarioPedsSpawnInSphereArea(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x28157D43CF600981, p0, p1, p2, p3, p4); }
	inline Void SetScenarioPedsToBeReturnedByNextCommand(bool value) { return _i<Void>(0x14F19A8782C8071E, value); }
	inline Void SetScenarioPedDensityMultiplierThisFrame(float p0, float p1) { return _i<Void>(0x7A556143A1C03898, p0, p1); }
	inline Void SetScriptedAnimSeatOffset(Ped ped, float p1) { return _i<Void>(0x5917BBA32D06C230, ped, p1); }
	inline Void SetScriptedConversionCoordThisFrame(float x, float y, float z) { return _i<Void>(0x5086C7843552CF85, x, y, z); }
	inline Void _SetSynchronizedSceneOcclusionPortal(Any sceneID, bool p1) { return _i<Void>(0x394B9CD12435C981, sceneID, p1); }
	inline Void SetSynchronizedSceneLooped(int sceneID, bool toggle) { return _i<Void>(0xD9A897A4C6C2974F, sceneID, toggle); }
	inline Void SetSynchronizedSceneOrigin(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, bool p7) { return _i<Void>(0x6ACF6B7225801CD7, sceneID, x, y, z, roll, pitch, yaw, p7); }
	inline Void SetSynchronizedScenePhase(int sceneID, float phase) { return _i<Void>(0x734292F4F0ABF6D0, sceneID, phase); }
	inline Void SetSynchronizedSceneRate(int sceneID, float rate) { return _i<Void>(0xB6C49F8A5E295A5D, sceneID, rate); }
	inline Void _0x2F3C3D9F50681DE4(Any p0, bool p1) { return _i<Void>(0x2F3C3D9F50681DE4, p0, p1); }
	inline Void _0xFD325494792302D7(Any p0, bool p1) { return _i<Void>(0xFD325494792302D7, p0, p1); }
	inline Void _0xFEE4A5459472A9F8() { return _i<Void>(0xFEE4A5459472A9F8); }
	inline Any _0xA635C11B8C44AFC2() { return _i<Any>(0xA635C11B8C44AFC2); }
	inline Void _0x280C7E3AC7F56E90(Any p0, Any* p1, Any* p2, Any* p3) { return _i<Void>(0x280C7E3AC7F56E90, p0, p1, p2, p3); }
	inline Void _0xB782F8238512BAD5(Any p0, Any* p1) { return _i<Void>(0xB782F8238512BAD5, p0, p1); }
	inline Any _0x3C67506996001F5E() { return _i<Any>(0x3C67506996001F5E); }
	inline Any _0xA586FBEB32A53DBB() { return _i<Any>(0xA586FBEB32A53DBB); }
	inline Any _0xF445DE8DA80A1792() { return _i<Any>(0xF445DE8DA80A1792); }
	inline Void _0x2DF9038C90AD5264(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) { return _i<Void>(0x2DF9038C90AD5264, p0, p1, p2, p3, p4, interiorFlags, scale, duration); }
	inline Void _0xB2AFF10216DEFA2F(float x, float y, float z, float p3, float p4, float p5, float p6, int interiorFlags, float scale, int duration) { return _i<Void>(0xB2AFF10216DEFA2F, x, y, z, p3, p4, p5, p6, interiorFlags, scale, duration); }
	inline Void _0xF9ACF4A08098EA25(Ped ped, bool p1) { return _i<Void>(0xF9ACF4A08098EA25, ped, p1); }
	inline Void StopAnyPedModelBeingSuppressed() { return _i<Void>(0xB47BD05FA66B40CF); }
	inline Void StopPedWeaponFiringWhenDropped(Ped ped) { return _i<Void>(0xC158D28142A34608, ped); }
	inline Void _0x5A7F62FDA59759BD() { return _i<Void>(0x5A7F62FDA59759BD); }
	inline Void _DisposeSynchronizedScene(int scene) { return _i<Void>(0xCD9CC7E200A52A6F, scene); }
	inline Void _0x9A77DFD295E29B09(Any p0, bool p1) { return _i<Void>(0x9A77DFD295E29B09, p0, p1); }
	inline Void _0xC2EE020F5FB4DB53(Ped ped) { return _i<Void>(0xC2EE020F5FB4DB53, ped); }
	inline Any _0x25361A96E0F7E419(Any p0, Any p1, Any p2, Any p3) { return _i<Any>(0x25361A96E0F7E419, p0, p1, p2, p3); }
	inline Void UnregisterPedheadshot(int handle) { return _i<Void>(0x96B1361D9B24C2FF, handle); }
	inline Void UpdatePedHeadBlendData(Ped ped, float shapeMix, float skinMix, float thirdMix) { return _i<Void>(0x723538F61C647C5A, ped, shapeMix, skinMix, thirdMix); }
	inline bool WasPedKilledByStealth(Ped ped) { return _i<bool>(0xF9800AA1A771B000, ped); }
	inline bool WasPedKilledByTakedown(Ped ped) { return _i<bool>(0x7F08E26039C7347C, ped); }
	inline bool _0x61767F73EACEED21(Ped ped) { return _i<bool>(0x61767F73EACEED21, ped); }
	inline bool WasPedSkeletonUpdated(Ped ped) { return _i<bool>(0x11B499C1E0FF8559, ped); }
	inline Void _0xB282749D5E028163(Any p0, Any p1) { return _i<Void>(0xB282749D5E028163, p0, p1); }
	inline Void SetPedNameDebug(Ped ped, String name) { return _i<Void>(0x98EFA132A4117BE1, ped, name); }
	inline Void SetPedPlaysHeadOnHornAnimWhenDiesInVehicle(Ped ped, bool toggle) { return _i<Void>(0x94D94BF1A75AED3D, ped, toggle); }
	inline Void _0x1216E0BFA72CC703(Any p0, Any p1) { return _i<Void>(0x1216E0BFA72CC703, p0, p1); }
}

namespace PHYSICS
{
	inline Void ActivatePhysics(Entity entity) { return _i<Void>(0x710311ADF0E20730, entity); }
	inline Object AddRope(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float p10, bool p11, bool p12, bool rigid, float p14, bool breakWhenShot, Any* unkPtr) { return _i<Object>(0xE832D760399EB220, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, p10, p11, p12, rigid, p14, breakWhenShot, unkPtr); }
	inline Void ApplyImpulseToCloth(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { return _i<Void>(0xE37F721824571784, posX, posY, posZ, vecX, vecY, vecZ, impulse); }
	inline Void AttachEntitiesToRope(Object rope, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, bool p10, bool p11, Any* p12, Any* p13) { return _i<Void>(0x3D95EC8B6D940AC3, rope, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); }
	inline Void AttachRopeToEntity(Object rope, Entity entity, float x, float y, float z, bool p5) { return _i<Void>(0x4B490A6832559A65, rope, entity, x, y, z, p5); }
	inline Void BreakEntityGlass(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, bool p10) { return _i<Void>(0x2E648D16F6E308F3, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	inline Void DeleteChildRope(Object rope) { return _i<Void>(0xAA5D6B1888E4DB20, rope); }
	inline Void DeleteRope(Object* rope) { return _i<Void>(0x52B4829281364649, rope); }
	inline Void DetachRopeFromEntity(Object rope, Entity entity) { return _i<Void>(0xBCF3026912A8647D, rope, entity); }
	inline bool DoesRopeExist(Object* rope) { return _i<bool>(0xFD5448BE3111ED96, rope); }
	inline bool _0x271C9D3ACA5D6409(Object rope) { return _i<bool>(0x271C9D3ACA5D6409, rope); }
	inline Vector3 GetCgoffset(Object rope) { return _i<Vector3>(0x8214A4B5A7A33612, rope); }
	inline Any _0x0C112765300C7E1E(Any p0) { return _i<Any>(0x0C112765300C7E1E, p0); }
	inline Vector3 GetRopeLastVertexCoord(Object rope) { return _i<Vector3>(0x21BB0FBD3E217C2D, rope); }
	inline Vector3 GetRopeVertexCoord(Object rope, int vertex) { return _i<Vector3>(0xEA61CA8E80F09E4D, rope, vertex); }
	inline int GetRopeVertexCount(Object rope) { return _i<int>(0x3655F544CD30F0B5, rope); }
	inline bool _0x84DE3B5FB3E666F0(Any* p0) { return _i<bool>(0x84DE3B5FB3E666F0, p0); }
	inline Void LoadRopeData(Object rope, String rope_preset) { return _i<Void>(0xCBB203C04D1ABD27, rope, rope_preset); }
	inline Void PinRopeVertex(Object rope, int vertex, float x, float y, float z) { return _i<Void>(0x2B320CF14146B69A, rope, vertex, x, y, z); }
	inline Void _0xCC6E963682533882(Any p0) { return _i<Void>(0xCC6E963682533882, p0); }
	inline bool RopeAreTexturesLoaded() { return _i<bool>(0xF2D0E6A75CC05597); }
	inline Void _0xBC0CE682D4D05650(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return _i<Void>(0xBC0CE682D4D05650, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
	inline Void _0xB1B6216CA2E7B55E(Any p0, bool p1, bool p2) { return _i<Void>(0xB1B6216CA2E7B55E, p0, p1, p2); }
	inline Void RopeConvertToSimple(Object rope) { return _i<Void>(0x5389D48EFA2F079A, rope); }
	inline Void RopeDrawShadowEnabled(Object* rope, bool toggle) { return _i<Void>(0xF159A63806BB5BA8, rope, toggle); }
	inline Void RopeForceLength(Object rope, float length) { return _i<Void>(0xD009F759A723DB1B, rope, length); }
	inline float _GetRopeLength(Object rope) { return _i<float>(0x73040398DFF9A4A6, rope); }
	inline Void RopeLoadTextures() { return _i<Void>(0x9B9039DBF2D258C1); }
	inline Void RopeResetLength(Object rope, bool length) { return _i<Void>(0xC16DE94D9BEA14A0, rope, length); }
	inline Void _0xB743F735C03D7810(Any p0, Any p1) { return _i<Void>(0xB743F735C03D7810, p0, p1); }
	inline Void _0x36CCB9BE67B970FD(Any p0, bool p1) { return _i<Void>(0x36CCB9BE67B970FD, p0, p1); }
	inline Void _0xDC57A637A20006ED(Any p0, Any p1) { return _i<Void>(0xDC57A637A20006ED, p0, p1); }
	inline Void RopeSetUpdatePinverts(Object rope) { return _i<Void>(0xC8D667EE52114ABA, rope); }
	inline Void RopeUnloadTextures() { return _i<Void>(0x6CE36C35C1AC8163); }
	inline Void SetCgoffset(Object rope, float x, float y, float z) { return _i<Void>(0xD8FA3908D7B86904, rope, x, y, z); }
	inline Void SetCgAtBoundcenter(Object rope) { return _i<Void>(0xBE520D9761FF811F, rope); }
	inline Void SetDamping(Object rope, int vertex, float value) { return _i<Void>(0xEEA3B200A6FEB65B, rope, vertex, value); }
	inline Void SetDisableBreaking(Object rope, bool enabled) { return _i<Void>(0x5CEC1A84620E7D5B, rope, enabled); }
	inline Void SetDisableFragDamage(Object object, bool toggle) { return _i<Void>(0x01BA3AED21C16CFB, object, toggle); }
	inline Void _0x9EBD751E5787BAF2(Any p0) { return _i<Void>(0x9EBD751E5787BAF2, p0); }
	inline Void _0x15F944730C832252(Any p0, Any p1) { return _i<Void>(0x15F944730C832252, p0, p1); }
	inline Void StartRopeUnwindingFront(Object rope) { return _i<Void>(0x538D1179EC1AA9A9, rope); }
	inline Void StartRopeWinding(Object rope) { return _i<Void>(0x1461C72C889E343E, rope); }
	inline Void StopRopeUnwindingFront(Object rope) { return _i<Void>(0xFFF3A50779EFBBB3, rope); }
	inline Void StopRopeWinding(Object rope) { return _i<Void>(0xCB2D4AB84A19AA7C, rope); }
	inline Void UnpinRopeVertex(Object rope, int vertex) { return _i<Void>(0x4B5AE2EEE4A8F180, rope, vertex); }
}

namespace PLAYER
{
	inline Player IntToPlayerindex(int value) { return _i<Player>(0x41BD2A6B006AF756, value); }
	inline int IntToParticipantindex(int value) { return _i<int>(0x9EC6603812C24710, value); }
	inline Void _0x2F41A3BAE005E5FA(Any p0, Any p1) { return _i<Void>(0x2F41A3BAE005E5FA, p0, p1); }
	inline bool ArePlayerFlashingStarsAboutToDrop(Player player) { return _i<bool>(0xAFAF86043E5874E9, player); }
	inline bool ArePlayerStarsGreyedOut(Player player) { return _i<bool>(0x0A6EB355EE14A2DB, player); }
	inline Void AssistedMovementCloseRoute() { return _i<Void>(0xAEBF081FFC0A0E5E); }
	inline Void AssistedMovementFlushRoute() { return _i<Void>(0x8621390F0CDCFE1F); }
	inline bool CanPedHearPlayer(Player player, Ped ped) { return _i<bool>(0xF297383AA91DCA29, player, ped); }
	inline bool CanPlayerStartMission(Player player) { return _i<bool>(0xDE7465A27D403C06, player); }
	inline Void ChangePlayerPed(Player player, Ped ped, bool b2, bool b3) { return _i<Void>(0x048189FAC643DEEE, player, ped, b2, b3); }
	inline Void ClearPlayerHasDamagedAtLeastOneNonAnimalPed(Player player) { return _i<Void>(0x4AACB96203D11A31, player); }
	inline Void ClearPlayerHasDamagedAtLeastOnePed(Player player) { return _i<Void>(0xF0B67A4DE6AB5F98, player); }
	inline Void ClearPlayerParachuteModelOverride(Player player) { return _i<Void>(0x8753997EB5F6EE3F, player); }
	inline Void ClearPlayerParachutePackModelOverride(Player player) { return _i<Void>(0x10C54E4389C12B42, player); }
	inline Void ClearPlayerParachuteVariationOverride(Player player) { return _i<Void>(0x0F4CC924CF8C7B21, player); }
	inline Void ClearPlayerWantedLevel(Player player) { return _i<Void>(0xB302540597885499, player); }
	inline Void _0x5501B7A5CDB79D37(Any p0) { return _i<Void>(0x5501B7A5CDB79D37, p0); }
	inline Void DisablePlayerFiring(Player player, bool toggle) { return _i<Void>(0x5E6CC07646BBEAB8, player, toggle); }
	inline Void _0xB885852C39CC265D() { return _i<Void>(0xB885852C39CC265D); }
	inline Void DisablePlayerVehicleRewards(Player player) { return _i<Void>(0xC142BE3BB9CE125F, player); }
	inline Void DisplaySystemSigninUi(bool unk) { return _i<Void>(0x94DD7888C10A979E, unk); }
	inline Void EnableSpecialAbility(Player player, bool toggle) { return _i<Void>(0x181EC197DAEFE121, player, toggle); }
	inline Void _ExpandWorldLimits(float x, float y, float z) { return _i<Void>(0x5006D96C995A5827, x, y, z); }
	inline Void ForceCleanup(int cleanupFlags) { return _i<Void>(0xBC8983F38F78ED51, cleanupFlags); }
	inline Void ForceCleanupForAllThreadsWithThisName(String name, int cleanupFlags) { return _i<Void>(0x4C68DDDDF0097317, name, cleanupFlags); }
	inline Void ForceCleanupForThreadWithThisId(int id, int cleanupFlags) { return _i<Void>(0xF745B37630DF176B, id, cleanupFlags); }
	inline Void _0xAD73CE5A09E42D12(Player player) { return _i<Void>(0xAD73CE5A09E42D12, player); }
	inline Cam _0x1C186837D0619335(Any p0) { return _i<Cam>(0x1C186837D0619335, p0); }
	inline bool _IsPlayerCamControlDisabled() { return _i<bool>(0x7C814D2FB49F40C0); }
	inline int GetCauseOfMostRecentForceCleanup() { return _i<int>(0x9A41CF4674A12272); }
	inline bool GetEntityPlayerIsFreeAimingAt(Player player, Entity* entity) { return _i<bool>(0x2975C866E6713290, player, entity); }
	inline bool IsPlayerLoggingInNp() { return _i<bool>(0x74556E1420867ECA); }
	inline bool _0xDD2620B7B9D16FF1(Player player, float p1) { return _i<bool>(0xDD2620B7B9D16FF1, player, p1); }
	inline bool _0x5FC472C501CCADB3(Player player) { return _i<bool>(0x5FC472C501CCADB3, player); }
	inline bool _0xF10B44FD479D69F3(Player player, int p1) { return _i<bool>(0xF10B44FD479D69F3, player, p1); }
	inline Any _0xB9CF1F793A9F1BF1() { return _i<Any>(0xB9CF1F793A9F1BF1); }
	inline Any _0xCB645E85E97EA48B() { return _i<Any>(0xCB645E85E97EA48B); }
	inline int GetMaxWantedLevel() { return _i<int>(0x462E0DB9B137DC5F); }
	inline int GetNumberOfPlayers() { return _i<int>(0x407C7F91DDB46C16); }
	inline Any _0x1FC200409F10E6F1(Any p0) { return _i<Any>(0x1FC200409F10E6F1, p0); }
	inline Vehicle GetPlayersLastVehicle() { return _i<Vehicle>(0xB6997A7EB3F5C8C0); }
	inline float GetPlayerCurrentStealthNoise(Player player) { return _i<float>(0x2F395D61F3A1F877, player); }
	inline Player _0x56105E599CAB0EFA(int* p0) { return _i<Player>(0x56105E599CAB0EFA, p0); }
	inline int GetPlayerGroup(Player player) { return _i<int>(0x0D127585F77030AF, player); }
	inline bool GetPlayerHasReserveParachute(Player player) { return _i<bool>(0x5DDFE2FF727F3CA3, player); }
	inline Any _0x8BC515BAE4AAF8FF(Any p0) { return _i<Any>(0x8BC515BAE4AAF8FF, p0); }
	inline bool GetPlayerInvincible(Player player) { return _i<bool>(0xB721981B2B939E07, player); }
	inline int GetPlayerMaxArmour(Player player) { return _i<int>(0x92659B4CE1863CB3, player); }
	inline String GetPlayerName(Player player) { return _i<String>(0x6D0DE6A7B5DA71F8, player); }
	inline Void GetPlayerParachutePackTintIndex(Player player, int* tintIndex) { return _i<Void>(0x6E9C742F340CE5A2, player, tintIndex); }
	inline Void GetPlayerParachuteSmokeTrailColor(Player player, int* r, int* g, int* b) { return _i<Void>(0xEF56DBABD3CD4887, player, r, g, b); }
	inline Void GetPlayerParachuteTintIndex(Player player, int* tintIndex) { return _i<Void>(0x75D3F7A1B0D9B145, player, tintIndex); }
	inline Ped GetPlayerPed(Player player) { return _i<Ped>(0x43A66C31C68491C0, player); }
	inline Entity GetPlayerPedScriptIndex(Player player) { return _i<Entity>(0x50FAC3A3E030A6E1, player); }
	inline bool _0xBC0753C9CA14B506(Player player, int p1, bool p2) { return _i<bool>(0xBC0753C9CA14B506, player, p1, p2); }
	inline Void GetPlayerReserveParachuteTintIndex(Player player, int* index) { return _i<Void>(0xD5A016BC3C09CF40, player, index); }
	inline Void GetPlayerRgbColour(Player player, int* r, int* g, int* b) { return _i<Void>(0xE902EF951DCE178F, player, r, g, b); }
	inline float GetPlayerSprintStaminaRemaining(Player player) { return _i<float>(0x3F9F16F8E65A7ED7, player); }
	inline float GetPlayerSprintTimeRemaining(Player player) { return _i<float>(0x1885BC9B108B4C99, player); }
	inline bool GetPlayerTargetEntity(Player player, Entity* entity) { return _i<bool>(0x13EDE1A5DBF797C9, player, entity); }
	inline int GetPlayerTeam(Player player) { return _i<int>(0x37039302F4E0A008, player); }
	inline float GetPlayerUnderwaterTimeRemaining(Player player) { return _i<float>(0xA1FCF8E6AF40B731, player); }
	inline Vector3 GetPlayerWantedCentrePosition(Player player) { return _i<Vector3>(0x0C92BA89F1AF26F8, player); }
	inline int GetPlayerWantedLevel(Player player) { return _i<int>(0xE28E54788CE8F12D, player); }
	inline int GetTimeSinceLastArrest() { return _i<int>(0x5063F92F07C2A316); }
	inline int GetTimeSinceLastDeath() { return _i<int>(0xC7034807558DDFCA); }
	inline int GetTimeSincePlayerDroveAgainstTraffic(Player player) { return _i<int>(0xDB89591E290D9182, player); }
	inline int GetTimeSincePlayerDroveOnPavement(Player player) { return _i<int>(0xD559D2BE9E37853B, player); }
	inline int GetTimeSincePlayerHitPed(Player player) { return _i<int>(0xE36A25322DC35F42, player); }
	inline int GetTimeSincePlayerHitVehicle(Player player) { return _i<int>(0x5D35ECF3A81A0EE0, player); }
	inline float GetWantedLevelRadius(Player player) { return _i<float>(0x085DEB493BE80812, player); }
	inline int GetWantedLevelThreshold(int wantedLevel) { return _i<int>(0xFDD179EAF45B556C, wantedLevel); }
	inline bool GiveAchievementToPlayer(int achievement) { return _i<bool>(0xBEC7076D64130195, achievement); }
	inline Void GivePlayerRagdollControl(Player player, bool toggle) { return _i<Void>(0x3C49C870E66F0A28, player, toggle); }
	inline bool HasAchievementBeenPassed(int achievement) { return _i<bool>(0x867365E111A3B6EB, achievement); }
	inline bool HasForceCleanupOccurred(int cleanupFlags) { return _i<bool>(0xC968670BFACE42D9, cleanupFlags); }
	inline bool HasPlayerBeenSpottedInStolenVehicle(Player player) { return _i<bool>(0xD705740BB0A1CF4C, player); }
	inline bool HasPlayerDamagedAtLeastOneNonAnimalPed(Player player) { return _i<bool>(0xE4B90F367BD81752, player); }
	inline bool HasPlayerDamagedAtLeastOnePed(Player player) { return _i<bool>(0x20CE80B0C2BF4ACC, player); }
	inline bool HasPlayerLeftTheWorld(Player player) { return _i<bool>(0xD55DDFB47991A294, player); }
	inline Void _0x9EDD76E87D5D51BA(Player player) { return _i<Void>(0x9EDD76E87D5D51BA, player); }
	inline bool _0x38D28DA81E4E9BF9(Player player) { return _i<bool>(0x38D28DA81E4E9BF9, player); }
	inline bool IsPlayerBeingArrested(Player player, bool atArresting) { return _i<bool>(0x388A47C51ABDAC8E, player, atArresting); }
	inline bool _0x65FAEE425DE637B0(Player p0) { return _i<bool>(0x65FAEE425DE637B0, p0); }
	inline bool IsPlayerClimbing(Player player) { return _i<bool>(0x95E8F73DC65EFB9C, player); }
	inline bool IsPlayerControlOn(Player player) { return _i<bool>(0x49C32D60007AFA47, player); }
	inline bool IsPlayerDead(Player player) { return _i<bool>(0x424D4687FA1E5652, player); }
	inline bool IsPlayerFreeAiming(Player player) { return _i<bool>(0x2E397FD2ECD37C87, player); }
	inline bool IsPlayerFreeAimingAtEntity(Player player, Entity entity) { return _i<bool>(0x3C06B5C839B38F7B, player, entity); }
	inline bool IsPlayerFreeForAmbientTask(Player player) { return _i<bool>(0xDCCFD3F106C36AB4, player); }
	inline bool IsPlayerOnline() { return _i<bool>(0xF25D331DC2627BBC); }
	inline bool IsPlayerPlaying(Player player) { return _i<bool>(0x5E9564D8246B909A, player); }
	inline bool IsPlayerPressingHorn(Player player) { return _i<bool>(0xFA1E2BF8B10598F9, player); }
	inline bool IsPlayerReadyForCutscene(Player player) { return _i<bool>(0x908CBECC2CAA3690, player); }
	inline bool IsPlayerRidingTrain(Player player) { return _i<bool>(0x4EC12697209F2196, player); }
	inline bool IsPlayerScriptControlOn(Player player) { return _i<bool>(0x8A876A65283DD7D7, player); }
	inline bool IsPlayerTargettingAnything(Player player) { return _i<bool>(0x78CFE51896B6B8A4, player); }
	inline bool IsPlayerTargettingEntity(Player player, Entity entity) { return _i<bool>(0x7912F7FC4F6264B6, player, entity); }
	inline bool IsPlayerTeleportActive() { return _i<bool>(0x02B15662D7F8886F); }
	inline Any _0x6E4361FF3E8CD7CA(Any p0) { return _i<Any>(0x6E4361FF3E8CD7CA, p0); }
	inline bool IsPlayerWantedLevelGreater(Player player, int wantedLevel) { return _i<bool>(0x238DB2A2C23EE9EF, player, wantedLevel); }
	inline bool _0x690A61A6D13583F6(Any p0) { return _i<bool>(0x690A61A6D13583F6, p0); }
	inline bool IsSpecialAbilityActive(Player player) { return _i<bool>(0x3E5F7FC85D854E15, player); }
	inline bool IsSpecialAbilityEnabled(Player player) { return _i<bool>(0xB1D200FE26AEF3CB, player); }
	inline bool IsSpecialAbilityMeterFull(Player player) { return _i<bool>(0x05A1FE504B7F2587, player); }
	inline bool IsSpecialAbilityUnlocked(Hash playerModel) { return _i<bool>(0xC6017F6A6CDFA694, playerModel); }
	inline bool IsSystemUiBeingDisplayed() { return _i<bool>(0x5D511E3867C87139); }
	inline Any _0x7E07C78925D5FD96(Any p0) { return _i<Any>(0x7E07C78925D5FD96, p0); }
	inline Player GetPlayerIndex() { return _i<Player>(0xA5EDC40EF369B48D); }
	inline Player PlayerId() { return _i<Player>(0x4F8644AF03D0E0D6); }
	inline int NetworkPlayerIdToInt() { return _i<int>(0xEE68096F9F37341E); }
	inline Void PlayerAttachVirtualBound(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { return _i<Void>(0xED51733DC73AED51, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline Void PlayerDetachVirtualBound() { return _i<Void>(0x1DD5897E2FA6E7C9); }
	inline Ped PlayerPedId() { return _i<Ped>(0xD80958FC74E988A6); }
	inline Void RemovePlayerHelmet(Player player, bool p2) { return _i<Void>(0xF3AC26D3CC576528, player, p2); }
	inline Void ReportCrime(Player player, int crimeType, int wantedLvlThresh) { return _i<Void>(0xE9B09589827545E7, player, crimeType, wantedLvlThresh); }
	inline Void _0xDC64D2C53493ED12(Player player) { return _i<Void>(0xDC64D2C53493ED12, player); }
	inline Void _0x0032A6DBA562C518() { return _i<Void>(0x0032A6DBA562C518); }
	inline Void ResetPlayerArrestState(Player player) { return _i<Void>(0x2D03E13C460760D6, player); }
	inline Void ResetPlayerInputGait(Player player) { return _i<Void>(0x19531C47A2ABD691, player); }
	inline Void ResetPlayerStamina(Player player) { return _i<Void>(0xA6F312FCCE9C1DFE, player); }
	inline Void ResetWantedLevelDifficulty(Player player) { return _i<Void>(0xB9D0DD990DC141DD, player); }
	inline Void _0xDA1DF03D5A315F4E() { return _i<Void>(0xDA1DF03D5A315F4E); }
	inline Void RestorePlayerStamina(Player player, float p1) { return _i<Void>(0xA352C1B864CAFD33, player, p1); }
	inline bool _0xC2AFFFDABBDC2C5C(Any p0, Any p1) { return _i<bool>(0xC2AFFFDABBDC2C5C, p0, p1); }
	inline Void SetAirDragMultiplierForPlayersVehicle(Player player, float multiplier) { return _i<Void>(0xCA7DC8329F0A1E9E, player, multiplier); }
	inline Void _0xDE45D1A1EF45EE61(Player player, bool toggle) { return _i<Void>(0xDE45D1A1EF45EE61, player, toggle); }
	inline Void _0xC3376F42B1FACCC6(Player player) { return _i<Void>(0xC3376F42B1FACCC6, player); }
	inline Void SetAllRandomPedsFlee(Player player, bool toggle) { return _i<Void>(0x056E0FE8534C2949, player, toggle); }
	inline Void SetAllRandomPedsFleeThisFrame(Player player) { return _i<Void>(0x471D2FF42A94B4F2, player); }
	inline Void _0x2382AB11450AE7BA(Any p0, Any p1) { return _i<Void>(0x2382AB11450AE7BA, p0, p1); }
	inline Void SetAutoGiveParachuteWhenEnterPlane(Player player, bool toggle) { return _i<Void>(0x9F343285A00B4BB6, player, toggle); }
	inline Void _0xD2B315B6689D537D(Player player, bool p1) { return _i<Void>(0xD2B315B6689D537D, player, p1); }
	inline Void SetDisableAmbientMeleeMove(Player player, bool toggle) { return _i<Void>(0x2E8AABFA40A84F8C, player, toggle); }
	inline Void SetDispatchCopsForPlayer(Player player, bool toggle) { return _i<Void>(0xDB172424876553F4, player, toggle); }
	inline Void SetEveryoneIgnorePlayer(Player player, bool toggle) { return _i<Void>(0x8EEDA153AD141BA4, player, toggle); }
	inline Void SetIgnoreLowPriorityShockingEvents(Player player, bool toggle) { return _i<Void>(0x596976B02B6B5700, player, toggle); }
	inline Void _0xFAC75988A7D078D3(Any p0) { return _i<Void>(0xFAC75988A7D078D3, p0); }
	inline Void _0xB45EFF719D8427A6(float p0) { return _i<Void>(0xB45EFF719D8427A6, p0); }
	inline Void SetMaxWantedLevel(int maxWantedLevel) { return _i<Void>(0xAA5F02DB48D704B9, maxWantedLevel); }
	inline Void _0x5DC40A8869C22141(bool p0, ScrHandle p1) { return _i<Void>(0x5DC40A8869C22141, p0, p1); }
	inline Void SetPlayerCanBeHassledByGangs(Player player, bool toggle) { return _i<Void>(0xD5E460AD7020A246, player, toggle); }
	inline Void _0xCAC57395B151135F(Player player, bool p1) { return _i<Void>(0xCAC57395B151135F, player, p1); }
	inline Void _0x55FCC0C390620314(Any p0, Any p1, Any p2) { return _i<Void>(0x55FCC0C390620314, p0, p1, p2); }
	inline Void SetPlayerCanDoDriveBy(Player player, bool toggle) { return _i<Void>(0x6E8834B52EC20C77, player, toggle); }
	inline Void SetPlayerCanLeaveParachuteSmokeTrail(Player player, bool enabled) { return _i<Void>(0xF401B182DBA8AF53, player, enabled); }
	inline Void SetPlayerCanUseCover(Player player, bool toggle) { return _i<Void>(0xD465A8599DFF6814, player, toggle); }
	inline Void SetPlayerClothLockCounter(int value) { return _i<Void>(0x14D913B777DFF5DA, value); }
	inline Void SetPlayerClothPackageIndex(int index) { return _i<Void>(0x9F7BBA2EA6372500, index); }
	inline Void SetPlayerClothPinFrames(Player player, bool toggle) { return _i<Void>(0x749FADDF97DFE930, player, toggle); }
	inline Void SetPlayerControl(Player player, bool toggle, int possiblyFlags) { return _i<Void>(0x8D32347D6D4C40A2, player, toggle, possiblyFlags); }
	inline Void _0xD821056B9ACF8052(Any p0, Any p1) { return _i<Void>(0xD821056B9ACF8052, p0, p1); }
	inline Void _0xEFD79FA81DFBA9CB(Any p0, Any p1) { return _i<Void>(0xEFD79FA81DFBA9CB, p0, p1); }
	inline Void SetPlayerForcedAim(Player player, bool toggle) { return _i<Void>(0x0FEE4F80AC44A726, player, toggle); }
	inline Void SetPlayerForcedZoom(Player player, bool toggle) { return _i<Void>(0x75E7D505F2B15902, player, toggle); }
	inline Void SetPlayerForceSkipAimIntro(Player player, bool toggle) { return _i<Void>(0x7651BC64AE59E128, player, toggle); }
	inline Void SetPlayerHasReserveParachute(Player player) { return _i<Void>(0x7DDAB28D31FAC363, player); }
	inline Void _0xC388A0F065F5BC34(Any p0, Any p1) { return _i<Void>(0xC388A0F065F5BC34, p0, p1); }
	inline Void SetPlayerHealthRechargeMultiplier(Player player, float regenRate) { return _i<Void>(0x5DB660B38DD98A31, player, regenRate); }
	inline Void _0xEE4EBDD2593BA844(Any p0, Any p1) { return _i<Void>(0xEE4EBDD2593BA844, p0, p1); }
	inline Void SetPlayerInvincible(Player player, bool toggle) { return _i<Void>(0x239528EACDC3E7DE, player, toggle); }
	inline Void _0x6BC97F4F4BB3C04B(Any p0, Any p1) { return _i<Void>(0x6BC97F4F4BB3C04B, p0, p1); }
	inline Void _0xFF300C7649724A0B(Player player, bool p1) { return _i<Void>(0xFF300C7649724A0B, player, p1); }
	inline Void SetPlayerLockon(Player player, bool toggle) { return _i<Void>(0x5C8B2F450EE4328E, player, toggle); }
	inline Void SetPlayerLockonRangeOverride(Player player, float range) { return _i<Void>(0x29961D490E5814FD, player, range); }
	inline Void SetPlayerMaxArmour(Player player, int value) { return _i<Void>(0x77DFCCF5948B8C71, player, value); }
	inline Void _0x8D768602ADEF2245(Any p0, Any p1) { return _i<Void>(0x8D768602ADEF2245, p0, p1); }
	inline Void SetPlayerMayNotEnterAnyVehicle(Player player) { return _i<Void>(0x1DE37BBF9E9CC14A, player); }
	inline Void SetPlayerMayOnlyEnterThisVehicle(Player player, Vehicle vehicle) { return _i<Void>(0x8026FF78F208978A, player, vehicle); }
	inline Void SetPlayerMeleeWeaponDamageModifier(Player player, float modifier, Any p2) { return _i<Void>(0x4A3DC7ECCC321032, player, modifier, p2); }
	inline Void SetPlayerMeleeWeaponDefenseModifier(Player player, float modifier) { return _i<Void>(0xAE540335B4ABC4E2, player, modifier); }
	inline Void SetPlayerModel(Player player, Hash model) { return _i<Void>(0x00A1CADD00108836, player, model); }
	inline Void SetPlayerNoiseMultiplier(Player player, float multiplier) { return _i<Void>(0xDB89EF50FF25FCE9, player, multiplier); }
	inline Void SetPlayerParachuteModelOverride(Player player, Hash model) { return _i<Void>(0x977DB4641F6FC3DB, player, model); }
	inline Void SetPlayerParachutePackModelOverride(Player player, Hash model) { return _i<Void>(0xDC80A4C2F18A2B64, player, model); }
	inline Void SetPlayerParachutePackTintIndex(Player player, int tintIndex) { return _i<Void>(0x93B0FB27C9A04060, player, tintIndex); }
	inline Void SetPlayerParachuteSmokeTrailColor(Player player, int r, int g, int b) { return _i<Void>(0x8217FD371A4625CF, player, r, g, b); }
	inline Void SetPlayerParachuteTintIndex(Player player, int tintIndex) { return _i<Void>(0xA3D0E54541D9A5E5, player, tintIndex); }
	inline Void SetPlayerParachuteVariationOverride(Player player, int p1, Any p2, Any p3, bool p4) { return _i<Void>(0xD9284A8C0D48352C, player, p1, p2, p3, p4); }
	inline Void SetPlayerResetFlagPreferRearSeats(Player player, int flags) { return _i<Void>(0x11D5F725F0E780E0, player, flags); }
	inline Void SetPlayerReserveParachuteTintIndex(Player player, int index) { return _i<Void>(0xAF04C87F5DC1DF38, player, index); }
	inline Void SetPlayerSimulateAiming(Player player, bool toggle) { return _i<Void>(0xC54C95DA968EC5B5, player, toggle); }
	inline Void SetPlayerSneakingNoiseMultiplier(Player player, float multiplier) { return _i<Void>(0xB2C1A29588A9F47C, player, multiplier); }
	inline Void _0x2F7CEB6520288061(bool p0) { return _i<Void>(0x2F7CEB6520288061, p0); }
	inline Void SetPlayerSprint(Player player, bool toggle) { return _i<Void>(0xA01B8075D8B92DF4, player, toggle); }
	inline Void SetPlayerStealthPerceptionModifier(Player player, float value) { return _i<Void>(0x4E9021C1FCDD507A, player, value); }
	inline Void SetPlayerTargetingMode(int targetMode) { return _i<Void>(0xB1906895227793F3, targetMode); }
	inline Void _0x5702B917B99DB1CD(Any p0) { return _i<Void>(0x5702B917B99DB1CD, p0); }
	inline Void SetPlayerTeam(Player player, int team) { return _i<Void>(0x0299FA38396A4940, player, team); }
	inline Any _0xA0D3E4F7AAFB7E78(Any p0, Any p1) { return _i<Any>(0xA0D3E4F7AAFB7E78, p0, p1); }
	inline Void SetPlayerVehicleDamageModifier(Player player, float damageAmount) { return _i<Void>(0xA50E117CDDF82F0C, player, damageAmount); }
	inline Void SetPlayerVehicleDefenseModifier(Player player, float modifier) { return _i<Void>(0x4C60E6EFDAFF2462, player, modifier); }
	inline Void SetPlayerWantedCentrePosition(Player player, float x, float y, float z) { return _i<Void>(0x520E541A97A13354, player, x, y, z); }
	inline Void SetPlayerWantedLevel(Player player, int wantedLevel, bool disableNoMission) { return _i<Void>(0x39FF19C64EF7DA5B, player, wantedLevel, disableNoMission); }
	inline Void SetPlayerWantedLevelNow(Player player, bool p1) { return _i<Void>(0xE0A7D1E497FFCD6F, player, p1); }
	inline Void SetPlayerWantedLevelNoDrop(Player player, int wantedLevel, bool p2) { return _i<Void>(0x340E61DE7F471565, player, wantedLevel, p2); }
	inline Void SetPlayerWeaponDamageModifier(Player player, float damageAmount) { return _i<Void>(0xCE07B9F7817AADA3, player, damageAmount); }
	inline Void SetPlayerWeaponDefenseModifier(Player player, float modifier) { return _i<Void>(0x2D83BC011CA14A3C, player, modifier); }
	inline Void _0xBCFDE9EDE4CF27DC(Any p0, Any p1) { return _i<Void>(0xBCFDE9EDE4CF27DC, p0, p1); }
	inline Void _0x31E90B8873A4CD3B(Any p0, Any p1) { return _i<Void>(0x31E90B8873A4CD3B, p0, p1); }
	inline Void SetPoliceIgnorePlayer(Player player, bool toggle) { return _i<Void>(0x32C62AA929C2DA6A, player, toggle); }
	inline Void SetPoliceRadarBlips(bool toggle) { return _i<Void>(0x43286D561B72B8BF, toggle); }
	inline Void SetRunSprintMultiplierForPlayer(Player player, float multiplier) { return _i<Void>(0x6DB47AA77FD94E09, player, multiplier); }
	inline Void _0xB214D570EAD7F81A(Any p0, Any p1) { return _i<Void>(0xB214D570EAD7F81A, p0, p1); }
	inline Void SetSpecialAbilityMultiplier(float multiplier) { return _i<Void>(0xA49C426ED0CA4AB7, multiplier); }
	inline Void SetSwimMultiplierForPlayer(Player player, float multiplier) { return _i<Void>(0xA91C6F0FF7D16A13, player, multiplier); }
	inline Void SetWantedLevelDifficulty(Player player, float difficulty) { return _i<Void>(0x9B0BB33B04405E7A, player, difficulty); }
	inline Void SetWantedLevelMultiplier(float multiplier) { return _i<Void>(0x020E5F00CDA207BA, multiplier); }
	inline Void SimulatePlayerInputGait(Player player, float amount, int gaitType, float speed, bool p4, bool p5) { return _i<Void>(0x477D5D63E63ECA5D, player, amount, gaitType, speed, p4, p5); }
	inline Void _0x821FDC827D6F4090(Any p0) { return _i<Void>(0x821FDC827D6F4090, p0); }
	inline Void SpecialAbilityChargeAbsolute(Player player, int p1, bool p2) { return _i<Void>(0xB7B0870EB531D08D, player, p1, p2); }
	inline Void SpecialAbilityChargeContinuous(Player player, Ped p2) { return _i<Void>(0xED481732DFF7E997, player, p2); }
	inline Void SpecialAbilityChargeLarge(Player player, bool p1, bool p2) { return _i<Void>(0xF733F45FA4497D93, player, p1, p2); }
	inline Void SpecialAbilityChargeMedium(Player player, bool p1, bool p2) { return _i<Void>(0xF113E3AA9BC54613, player, p1, p2); }
	inline Void SpecialAbilityChargeNormalized(Player player, float normalizedValue, bool p2) { return _i<Void>(0xA0696A65F009EE18, player, normalizedValue, p2); }
	inline Void _0xC9A763D8FE87436A(Player player) { return _i<Void>(0xC9A763D8FE87436A, player); }
	inline Void SpecialAbilityChargeSmall(Player player, bool p1, bool p2) { return _i<Void>(0x2E7B9B683481687D, player, p1, p2); }
	inline Void SpecialAbilityDeactivate(Player player) { return _i<Void>(0xD6A953C6D1492057, player); }
	inline Void SpecialAbilityDeactivateFast(Player player) { return _i<Void>(0x9CB5CE07A3968D5A, player); }
	inline Void _0x17F7471EACA78290(Any p0) { return _i<Void>(0x17F7471EACA78290, p0); }
	inline Void SpecialAbilityDepleteMeter(Player player, bool p1) { return _i<Void>(0x1D506DBBBC51E64B, player, p1); }
	inline Void SpecialAbilityFillMeter(Player player, bool p1) { return _i<Void>(0x3DACA8DDC6FD4980, player, p1); }
	inline Void SpecialAbilityLock(Hash playerModel) { return _i<Void>(0x6A09D0D590A47D13, playerModel); }
	inline Void SpecialAbilityReset(Player player) { return _i<Void>(0x375F0E738F861A94, player); }
	inline Void SpecialAbilityUnlock(Hash playerModel) { return _i<Void>(0xF145F3BE2EFA9A3B, playerModel); }
	inline Void StartFiringAmnesty(int duration) { return _i<Void>(0xBF9BD71691857E48, duration); }
	inline Void StartPlayerTeleport(Player player, float x, float y, float z, float heading, bool p5, bool p6, bool p7) { return _i<Void>(0xAD15F075A4DA0FDE, player, x, y, z, heading, p5, p6, p7); }
	inline Void StopPlayerTeleport() { return _i<Void>(0xC449EDED9D73009C); }
	inline Void _SwitchCrimeType(Player player, int p1) { return _i<Void>(0x9A987297ED8BD838, player, p1); }
	inline Void _0x4669B3ED80F24B4E(Player player) { return _i<Void>(0x4669B3ED80F24B4E, player); }
	inline Void _0x36F1B38855F2A8DF(Player player) { return _i<Void>(0x36F1B38855F2A8DF, player); }
	inline bool _HasPlayerTeleportFinished(Player player) { return _i<bool>(0xE23D5873C2394C61, player); }
	inline Void _0xFFEE8FA29AB9A18E(Player player) { return _i<Void>(0xFFEE8FA29AB9A18E, player); }
	inline Void _0xBC9490CA15AEA8FB(Player player) { return _i<Void>(0xBC9490CA15AEA8FB, player); }
}

namespace RECORDING
{
	inline Void _StopRecordingAndDiscardClip() { return _i<Void>(0x88BB3507ED41A240); }
	inline Any _0x4282E08174868BE3() { return _i<Any>(0x4282E08174868BE3); }
	inline Any _0xDF4B952F7D381B95() { return _i<Any>(0xDF4B952F7D381B95); }
	inline bool _IsRecording() { return _i<bool>(0x1897CA71995A90B4); }
	inline bool _0x33D47E85B476ABCD(bool p0) { return _i<bool>(0x33D47E85B476ABCD, p0); }
	inline Void _0x13B350B8AD0EEE10() { return _i<Void>(0x13B350B8AD0EEE10); }
	inline Void _0xAF66DCEE6609B148() { return _i<Void>(0xAF66DCEE6609B148); }
	inline Void _0xEB2D525B57F42B40() { return _i<Void>(0xEB2D525B57F42B40); }
	inline Void _0x293220DA1B46CEBC(float p0, float p1, bool p2) { return _i<Void>(0x293220DA1B46CEBC, p0, p1, p2); }
	inline Void _0xF854439EFBB3B583() { return _i<Void>(0xF854439EFBB3B583); }
	inline Void _0x48621C9FCA3EBD28(bool p0) { return _i<Void>(0x48621C9FCA3EBD28, p0); }
	inline Void _0x81CBAE94390F9F89() { return _i<Void>(0x81CBAE94390F9F89); }
	inline bool _0x644546EC5287471B() { return _i<bool>(0x644546EC5287471B); }
	inline Void _StartRecording(int mode) { return _i<Void>(0xC3AC2FFF9612AC81, mode); }
	inline Void _StopRecordingAndSaveClip() { return _i<Void>(0x071A5197D6AFC8B3); }
	inline Void _0x208784099002BC30(String missionNameLabel, Any p1) { return _i<Void>(0x208784099002BC30, missionNameLabel, p1); }
	inline Void _0x66972397E0757E7A(Any p0, Any p1, Any p2) { return _i<Void>(0x66972397E0757E7A, p0, p1, p2); }
}

namespace RENDERING
{
	inline Void _ActivateRockstarEditor() { return _i<Void>(0x49DA8145672B2725); }
	inline Void _ResetEditorValues() { return _i<Void>(0x3353D13F09307691); }
	inline bool _IsInteriorRenderingDisabled() { return _i<bool>(0x95AB8B5C992C7B58); }
	inline Void _0xE058175F8EAFE79A(bool p0) { return _i<Void>(0xE058175F8EAFE79A, p0); }
	inline Void _0x5AD3932DAEB1E5D3() { return _i<Void>(0x5AD3932DAEB1E5D3); }
	inline Void _0x7E2BD3EF6C205F09(Any p0, Any p1) { return _i<Void>(0x7E2BD3EF6C205F09, p0, p1); }
}

namespace SCRIPT
{
	inline Any _0x0F6F1EBBC4E1D5E6() { return _i<Any>(0x0F6F1EBBC4E1D5E6); }
	inline Any _0xDC2BACD920D0A0DD() { return _i<Any>(0xDC2BACD920D0A0DD); }
	inline Any _0x107E5CC7CA942BC1() { return _i<Any>(0x107E5CC7CA942BC1); }
	inline Any _0x22E21FBCFC88C149() { return _i<Any>(0x22E21FBCFC88C149); }
	inline Any _0x829CD22E043A2577() { return _i<Any>(0x829CD22E043A2577); }
	inline Any _0x836B62713E0534CA() { return _i<Any>(0x836B62713E0534CA); }
	inline Any _0x760910B49D2B98EA() { return _i<Any>(0x760910B49D2B98EA); }
	inline Any _0x9D5A25BADB742ACD() { return _i<Any>(0x9D5A25BADB742ACD); }
	inline Any _0x75B18E49607874C7() { return _i<Any>(0x75B18E49607874C7); }
	inline Void _0xB1577667C3708F9B() { return _i<Void>(0xB1577667C3708F9B); }
	inline bool DoesScriptExist(String scriptName) { return _i<bool>(0xFC04745FBE67C19A, scriptName); }
	inline bool DoesScriptWithNameHashExist(Hash scriptHash) { return _i<bool>(0xF86AA3C56BA31381, scriptHash); }
	inline int GetEventAtIndex(bool p0, int eventNum) { return _i<int>(0xD8F66A3A60C62153, p0, eventNum); }
	inline bool GetEventData(bool p0, int eventNum, int* argStruct, int argStructSize) { return _i<bool>(0x2902843FCD2B2D79, p0, eventNum, argStruct, argStructSize); }
	inline bool GetEventExists(bool p0, int p1) { return _i<bool>(0x936E6168A9BCEDB5, p0, p1); }
	inline Hash GetHashOfThisScriptName() { return _i<Hash>(0x8A1C8B1738FFE87E); }
	inline int GetIdOfThisThread() { return _i<int>(0xC30338E8088E2E21); }
	inline String _GetNameOfThread(int threadId) { return _i<String>(0x05A42BA9FC8DA96B, threadId); }
	inline bool _GetNoLoadingScreen() { return _i<bool>(0x18C1270EA7F199BC); }
	inline int GetNumberOfEvents(bool p0) { return _i<int>(0x5F92A689A06620AA, p0); }
	inline int _GetNumberOfInstancesOfScriptWithNameHash(Hash scriptHash) { return _i<int>(0x2C83A9DA6BFFC4F9, scriptHash); }
	inline String GetThisScriptName() { return _i<String>(0x442E0A7EDE4A738A); }
	inline bool HasScriptLoaded(String scriptName) { return _i<bool>(0xE6CC9F3BA0FB9EF1, scriptName); }
	inline bool HasScriptWithNameHashLoaded(Hash scriptHash) { return _i<bool>(0x5F0F0C783EB16C04, scriptHash); }
	inline bool IsThreadActive(int threadId) { return _i<bool>(0x46E9AE36D8FA6417, threadId); }
	inline Void RequestScript(String scriptName) { return _i<Void>(0x6EB5F71AA68F2E8E, scriptName); }
	inline Void RequestScriptWithNameHash(Hash scriptHash) { return _i<Void>(0xD62A67D26D9653E6, scriptHash); }
	inline int _GetIdOfNextThreadInEnumeration() { return _i<int>(0x30B4FA1C82DD4B9F); }
	inline Void _BeginEnumeratingThreads() { return _i<Void>(0xDADFADA5A20143A8); }
	inline Void _0xA40CC53DF8E50837(bool p0, void* args, int argCount, int bit) { return _i<Void>(0xA40CC53DF8E50837, p0, args, argCount, bit); }
	inline Void SetNoLoadingScreen(bool toggle) { return _i<Void>(0x5262CC1995D07E09, toggle); }
	inline Void SetScriptAsNoLongerNeeded(String scriptName) { return _i<Void>(0xC90D2DCACD56184C, scriptName); }
	inline Void SetScriptWithNameHashAsNoLongerNeeded(Hash scriptHash) { return _i<Void>(0xC5BC038960E9DB27, scriptHash); }
	inline Void ShutdownLoadingScreen() { return _i<Void>(0x078EBE9809CCD637); }
	inline Void TerminateThisThread() { return _i<Void>(0x1090044AD1DA76FA); }
	inline Void TerminateThread(int threadId) { return _i<Void>(0xC8B189ED9138BCD4, threadId); }
	inline Void TriggerScriptEvent(bool p0, void* args, int argCount, int bit) { return _i<Void>(0x5AE99C571D5BBE5D, p0, args, argCount, bit); }
}

namespace SHAPETEST
{
	inline int GetShapeTestResult(int rayHandle, bool* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return _i<int>(0x3D87450E15D98694, rayHandle, hit, endCoords, surfaceNormal, entityHit); }
	inline int _GetShapeTestResultEx(int rayHandle, bool* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* materialHash, Entity* entityHit) { return _i<int>(0x65287525D951F6BE, rayHandle, hit, endCoords, surfaceNormal, materialHash, entityHit); }
	inline Void _0x2B3334BCA57CD799(Entity p0) { return _i<Void>(0x2B3334BCA57CD799, p0); }
	inline int _StartShapeTestRay(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return _i<int>(0x377906D8A31E5586, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
	inline int StartShapeTestBound(Entity entity, int flags1, int flags2) { return _i<int>(0x37181417CE7C8900, entity, flags1, flags2); }
	inline int StartShapeTestBoundingBox(Entity entity, int flags1, int flags2) { return _i<int>(0x052837721A854EC7, entity, flags1, flags2); }
	inline int StartShapeTestBox(float x, float y, float z, float x1, float y2, float z2, float rotX, float rotY, float rotZ, Any p9, Any p10, Any entity, Any p12) { return _i<int>(0xFE466162C4401D18, x, y, z, x1, y2, z2, rotX, rotY, rotZ, p9, p10, entity, p12); }
	inline int StartShapeTestCapsule(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return _i<int>(0x28579D1B8F8AAC80, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
	inline int StartShapeTestLosProbe(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return _i<int>(0x7EE9F5D83DD4F90E, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
	inline int _0xFF6BE494C7987F34(Vector3* pVec1, Vector3* pVec2, int flag, Entity entity, int flag2) { return _i<int>(0xFF6BE494C7987F34, pVec1, pVec2, flag, entity, flag2); }
	inline int _0xE6AC6C45FBE83004(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return _i<int>(0xE6AC6C45FBE83004, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
}

namespace SOCIALCLUB
{
	inline String _ScGetNickname() { return _i<String>(0x198D161F458ECC7F); }
	inline bool _0x225798743970412B(int* p0) { return _i<bool>(0x225798743970412B, p0); }
	inline Void _0xBFA0A56A817C6C7D(bool p0) { return _i<Void>(0xBFA0A56A817C6C7D, p0); }
	inline Any _0xC2C97EA97711D1AE() { return _i<Any>(0xC2C97EA97711D1AE); }
	inline bool _0x19853B5B17D77BCA(Any p0, Any* p1) { return _i<bool>(0x19853B5B17D77BCA, p0, p1); }
	inline Any _0x33DF47CC0642061B() { return _i<Any>(0x33DF47CC0642061B); }
	inline Any _0x4ED9C8D6DA297639() { return _i<Any>(0x4ED9C8D6DA297639); }
	inline Any _0x4A7D6E727F941747(Any* p0) { return _i<Any>(0x4A7D6E727F941747, p0); }
	inline Any _0x50A8A36201DBF83E() { return _i<Any>(0x50A8A36201DBF83E); }
	inline Any _0xC5A35C73B68F3C49() { return _i<Any>(0xC5A35C73B68F3C49); }
	inline Any _0x2570E26BE63964E3() { return _i<Any>(0x2570E26BE63964E3); }
	inline Any _0x710BCDA8071EDED1() { return _i<Any>(0x710BCDA8071EDED1); }
	inline bool _0x8CC469AB4D349B7C(int p0, String p1, Any* p2) { return _i<bool>(0x8CC469AB4D349B7C, p0, p1, p2); }
	inline Any _0xE75A4A2E5E316D86() { return _i<Any>(0xE75A4A2E5E316D86); }
	inline Any _0x9DE5D2F723575ED0() { return _i<Any>(0x9DE5D2F723575ED0); }
	inline bool _0x699E4A5C8C893A18(int p0, String p1, Any* p2) { return _i<bool>(0x699E4A5C8C893A18, p0, p1, p2); }
	inline Any _0x1D12A56FC95BE92E() { return _i<Any>(0x1D12A56FC95BE92E); }
	inline Any _0xFF8F3A92B75ED67A() { return _i<Any>(0xFF8F3A92B75ED67A); }
	inline Any _0xA468E0BE12B12C70() { return _i<Any>(0xA468E0BE12B12C70); }
	inline Any _0x450819D8CF90C416() { return _i<Any>(0x450819D8CF90C416); }
	inline Void _0x44ACA259D67651DB(Any* p0, Any p1) { return _i<Void>(0x44ACA259D67651DB, p0, p1); }
	inline bool _0x4737980E8A283806(int p0, Any* p1) { return _i<bool>(0x4737980E8A283806, p0, p1); }
	inline Any _0x7DB18CA8CAD5B098() { return _i<Any>(0x7DB18CA8CAD5B098); }
	inline Any _0x16DA8172459434AA() { return _i<Any>(0x16DA8172459434AA); }
	inline Void ScEmailMessageClearRecipList() { return _i<Void>(0x55DF6DB45179236E); }
	inline Void ScEmailMessagePushGamerToRecipList(Player* player) { return _i<Void>(0x2330C12A7A605D16, player); }
	inline Void _ScInboxGetEmails(int offset, int limit) { return _i<Void>(0x040ADDCBAFA1018A, offset, limit); }
	inline Void _0x116FB94DC4B79F17(String p0) { return _i<Void>(0x116FB94DC4B79F17, p0); }
	inline Any _0x07DBD622D9533857(Any p0) { return _i<Any>(0x07DBD622D9533857, p0); }
	inline Any _0x2D874D4AE612A65F() { return _i<Any>(0x2D874D4AE612A65F); }
	inline bool _0x8416FE4E4629D7D7(String p0) { return _i<bool>(0x8416FE4E4629D7D7, p0); }
	inline Any _0xA770C8EEC6FB2AC5() { return _i<Any>(0xA770C8EEC6FB2AC5); }
	inline Any _0xC85A7127E7AD02AA() { return _i<Any>(0xC85A7127E7AD02AA); }
	inline Any _0x7FFCBFEE44ECFABF() { return _i<Any>(0x7FFCBFEE44ECFABF); }
	inline Any _0xDF649C4E9AFDD788() { return _i<Any>(0xDF649C4E9AFDD788); }
	inline bool _0x418DC16FAE452C1C(int p0) { return _i<bool>(0x418DC16FAE452C1C, p0); }
	inline Any _0xBC1CC91205EC8D6E() { return _i<Any>(0xBC1CC91205EC8D6E); }
	inline bool _0x87E0052F08BD64E6(Any p0, int* p1) { return _i<bool>(0x87E0052F08BD64E6, p0, p1); }
	inline bool _IsScInboxValid(int p0) { return _i<bool>(0x93028F1DB42BFD08, p0); }
	inline Hash _ScInboxMessageInit(int p0) { return _i<Hash>(0xBB8EA16ECBC976C4, p0); }
	inline int _GetTotalScInboxIds() { return _i<int>(0x03A93FF1A2CA0864); }
	inline bool _ScInboxMessagePush(int p0) { return _i<bool>(0x9A2C8064B6C1E41A, p0); }
	inline bool _ScInboxMessageGetDataBool(int p0, String p1) { return _i<bool>(0xFFE5C16F402D851D, p0, p1); }
	inline bool ScInboxMessageGetDataInt(int p0, String context, int* out) { return _i<bool>(0xA00EFE4082C4056E, p0, context, out); }
	inline bool ScInboxMessageGetDataString(int p0, String context, String out) { return _i<bool>(0x7572EF42FC6A9B6D, p0, context, out); }
	inline String _ScInboxMessageGetString(int p0) { return _i<String>(0xF3E31D16CBDCB304, p0); }
	inline bool ScInboxMessageGetUgcdata(Any p0, Any* p1) { return _i<bool>(0x69D82604A1A5A254, p0, p1); }
	inline Void _0xDA024BDBD600F44A(int* p0) { return _i<Void>(0xDA024BDBD600F44A, p0); }
	inline bool _0x6AFD2CD753FEEF83(String p0) { return _i<bool>(0x6AFD2CD753FEEF83, p0); }
	inline Void _0xA68D3D229F4F3B06(String p0) { return _i<Void>(0xA68D3D229F4F3B06, p0); }
	inline bool _ScInboxMessagePop(int p0) { return _i<bool>(0x2C015348CF19CA1D, p0); }
	inline bool _0x1989C6E6F67E76A8(Any* p0, Any* p1, Any* p2) { return _i<bool>(0x1989C6E6F67E76A8, p0, p1, p2); }
	inline bool _0xF6BAAAF762E1BF40(String p0, int* p1) { return _i<bool>(0xF6BAAAF762E1BF40, p0, p1); }
	inline Any _0x07C61676E5BB52CD(Any p0) { return _i<Any>(0x07C61676E5BB52CD, p0); }
	inline Any _0x8147FFF6A718E1AD(Any p0) { return _i<Any>(0x8147FFF6A718E1AD, p0); }
	inline Any _0x9237E334F6E43156(Any p0) { return _i<Any>(0x9237E334F6E43156, p0); }
	inline bool _0xF22CA0FD74B80E7A(Any p0) { return _i<bool>(0xF22CA0FD74B80E7A, p0); }
	inline Any _0x700569DBA175A77C(Any p0) { return _i<Any>(0x700569DBA175A77C, p0); }
	inline Any _0xD302E99EDF0449CF(Any p0) { return _i<Any>(0xD302E99EDF0449CF, p0); }
	inline Any _0x5C4EBFFA98BDB41C(Any p0) { return _i<Any>(0x5C4EBFFA98BDB41C, p0); }
	inline Any _0x1D4446A62D35B0D0(Any p0, Any p1) { return _i<Any>(0x1D4446A62D35B0D0, p0, p1); }
	inline Any _0x2E89990DDFF670C3(Any p0, Any p1) { return _i<Any>(0x2E89990DDFF670C3, p0, p1); }
	inline bool _0x0F73393BAC7E6730(Any* p0, int* p1) { return _i<bool>(0x0F73393BAC7E6730, p0, p1); }
	inline bool _0xD0EE05FE193646EA(Any* p0, Any* p1, Any* p2) { return _i<bool>(0xD0EE05FE193646EA, p0, p1, p2); }
	inline Any _0xC4C4575F62534A24() { return _i<Any>(0xC4C4575F62534A24); }
	inline bool _0x1F1E9682483697C7(Any p0, Any p1) { return _i<bool>(0x1F1E9682483697C7, p0, p1); }
	inline bool _0x287F1F75D2803595(Any p0, Any* p1) { return _i<bool>(0x287F1F75D2803595, p0, p1); }
	inline bool _0x487912FD248EFDDF(Any p0, float p1) { return _i<bool>(0x487912FD248EFDDF, p0, p1); }
	inline bool _ScStartCheckStringTask(String string, int* taskHandle) { return _i<bool>(0x75632C5ECD7ED843, string, taskHandle); }
	inline Any _0xEB2BF817463DFA28(Any p0, Any p1) { return _i<Any>(0xEB2BF817463DFA28, p0, p1); }
	inline int _ScGetCheckStringStatus(int taskHandle) { return _i<int>(0x82E4A58BABC15AE7, taskHandle); }
	inline bool _ScHasCheckStringTaskCompleted(int taskHandle) { return _i<bool>(0x1753344C770358AE, taskHandle); }
	inline Any _0x85535ACF97FC0969(Any p0) { return _i<Any>(0x85535ACF97FC0969, p0); }
	inline int _0x930DE22F07B1CCE3(Any p0) { return _i<int>(0x930DE22F07B1CCE3, p0); }
	inline Void _0x675721C9F644D161() { return _i<Void>(0x675721C9F644D161); }
	inline bool _0x92DA6E70EF249BD1(String p0, int* p1) { return _i<bool>(0x92DA6E70EF249BD1, p0, p1); }
	inline bool _0x3001BEF2FECA3680() { return _i<bool>(0x3001BEF2FECA3680); }
	inline bool _0x6BFB12CE158E3DD4(Any p0) { return _i<bool>(0x6BFB12CE158E3DD4, p0); }
	inline Any _0xD8122C407663B995() { return _i<Any>(0xD8122C407663B995); }
	inline bool _0xFE4C1D0D3B9CC17E(Any p0, Any p1) { return _i<bool>(0xFE4C1D0D3B9CC17E, p0, p1); }
}

namespace STATS
{
	inline Any _0xB3DA2606774A8E2D() { return _i<Any>(0xB3DA2606774A8E2D); }
	inline Void _0x44919CC079BB60BF(Any p0) { return _i<Void>(0x44919CC079BB60BF, p0); }
	inline Void _0xD1C9B92BDD3F151D(Any p0, Any p1, Any p2) { return _i<Void>(0xD1C9B92BDD3F151D, p0, p1, p2); }
	inline Void _0xA3C53804BDB68ED2(Any p0, Any p1) { return _i<Void>(0xA3C53804BDB68ED2, p0, p1); }
	inline Void _0x6BCCF9948492FD85(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x6BCCF9948492FD85, p0, p1, p2, p3, p4); }
	inline Void _0x6F361B8889A792A3() { return _i<Void>(0x6F361B8889A792A3); }
	inline Void _0x6BC0ACD0673ACEBE(Any p0, Any p1, Any p2) { return _i<Void>(0x6BC0ACD0673ACEBE, p0, p1, p2); }
	inline Hash _GetPstatBoolHash(int index, bool spStat, bool charStat, int character) { return _i<Hash>(0x80C75307B1C42837, index, spStat, charStat, character); }
	inline Hash _GetPstatIntHash(int index, bool spStat, bool charStat, int character) { return _i<Hash>(0x61E111E323419E07, index, spStat, charStat, character); }
	inline Hash _GetNgstatBoolHash(int index, bool spStat, bool charStat, int character, String section) { return _i<Hash>(0xBA52FF538ED2BC71, index, spStat, charStat, character, section); }
	inline Hash _GetNgstatIntHash(int index, bool spStat, bool charStat, int character, String section) { return _i<Hash>(0x2B4CDCA6F07FF3DA, index, spStat, charStat, character, section); }
	inline Hash _GetTupstatBoolHash(int index, bool spStat, bool charStat, int character) { return _i<Hash>(0xC4BB08EE7907471E, index, spStat, charStat, character); }
	inline Hash _GetTupstatIntHash(int index, bool spStat, bool charStat, int character) { return _i<Hash>(0xD16C2AD6B8E32854, index, spStat, charStat, character); }
	inline bool _0x5EAD2BF6484852E4() { return _i<bool>(0x5EAD2BF6484852E4); }
	inline Void _0x792271AB35C356A4(Any p0, Any p1) { return _i<Void>(0x792271AB35C356A4, p0, p1); }
	inline bool Leaderboards2ReadByHandle(Any* p0, Any* p1) { return _i<bool>(0xC30713A383BFBF0E, p0, p1); }
	inline bool _0xF1AE5DCDBFCA2721(Any* p0, Any* p1, Any* p2) { return _i<bool>(0xF1AE5DCDBFCA2721, p0, p1, p2); }
	inline bool Leaderboards2ReadByRadius(Any* p0, Any p1, Any* p2) { return _i<bool>(0x5CE587FB5A42C8C4, p0, p1, p2); }
	inline bool Leaderboards2ReadByRank(Any* p0, Any p1, Any p2) { return _i<bool>(0xBA2C7DB0C129449A, p0, p1, p2); }
	inline bool Leaderboards2ReadByRow(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6) { return _i<bool>(0xA9CDB1E3F0A49883, p0, p1, p2, p3, p4, p5, p6); }
	inline bool Leaderboards2ReadByScoreFloat(Any* p0, float p1, Any p2) { return _i<bool>(0xE662C8B759D08F3C, p0, p1, p2); }
	inline bool Leaderboards2ReadByScoreInt(Any* p0, Any p1, Any p2) { return _i<bool>(0x7EEC7E4F6984A16A, p0, p1, p2); }
	inline bool Leaderboards2ReadFriendsByRow(Any* p0, Any* p1, Any p2, bool p3, Any p4, Any p5) { return _i<bool>(0x918B101666F9CB83, p0, p1, p2, p3, p4, p5); }
	inline Void _0x71B008056E5692D6() { return _i<Void>(0x71B008056E5692D6); }
	inline float _0x38491439B6BA7F7D(Any p0, Any p1) { return _i<float>(0x38491439B6BA7F7D, p0, p1); }
	inline bool _0x34770B9CE0E03B91(Any p0, Any* p1) { return _i<bool>(0x34770B9CE0E03B91, p0, p1); }
	inline Any _0x88578F6EC36B4A3A(Any p0, Any p1) { return _i<Any>(0x88578F6EC36B4A3A, p0, p1); }
	inline bool _0xA0F93D5465B3094D(Any* p0) { return _i<bool>(0xA0F93D5465B3094D, p0); }
	inline bool _0xC38DC1E90D22547C(Any* p0, Any* p1, Any* p2) { return _i<bool>(0xC38DC1E90D22547C, p0, p1, p2); }
	inline bool Leaderboards2WriteData(Any* p0) { return _i<bool>(0xAE2206545888AE49, p0); }
	inline bool _0xC980E62E33DF1D5C(Any* p0, Any* p1) { return _i<bool>(0xC980E62E33DF1D5C, p0, p1); }
	inline bool LeaderboardsCacheDataRow(Any* p0) { return _i<bool>(0xB9BB18E2C40142ED, p0); }
	inline Void LeaderboardsClearCacheData() { return _i<Void>(0xD4B02A6B476E1FDC); }
	inline Void _0x8EC74CEB042E7CFF(Any p0) { return _i<Void>(0x8EC74CEB042E7CFF, p0); }
	inline bool LeaderboardsGetCacheDataRow(Any p0, Any p1, Any* p2) { return _i<bool>(0x9120E8DBA3D69273, p0, p1, p2); }
	inline bool LeaderboardsGetCacheExists(Any p0) { return _i<bool>(0x9C51349BE6CDFE2C, p0); }
	inline Any _0x58A651CD201D89AD(Any p0) { return _i<Any>(0x58A651CD201D89AD, p0); }
	inline Any LeaderboardsGetCacheTime(Any p0) { return _i<Any>(0xF04C1C27DA35F6C8, p0); }
	inline Any LeaderboardsGetColumnId(Any p0, Any p1, Any p2) { return _i<Any>(0xC4B5467A1886EA7E, p0, p1, p2); }
	inline Any LeaderboardsGetColumnType(Any p0, Any p1, Any p2) { return _i<Any>(0xBF4FEF46DB7894D3, p0, p1, p2); }
	inline Any LeaderboardsGetNumberOfColumns(Any p0, Any p1) { return _i<Any>(0x117B45156D7EFF2E, p0, p1); }
	inline Any _0xA31FD15197B192BD() { return _i<Any>(0xA31FD15197B192BD); }
	inline Any LeaderboardsReadClear(Any p0, Any p1, Any p2) { return _i<Any>(0x7CCE5C737A665701, p0, p1, p2); }
	inline Any LeaderboardsReadClearAll() { return _i<Any>(0xA34CB6E6F0DF4A0B); }
	inline bool LeaderboardsReadPending(Any p0, Any p1, Any p2) { return _i<bool>(0xAC392C8483342AC2, p0, p1, p2); }
	inline bool LeaderboardsReadSuccessful(Any p0, Any p1, Any p2) { return _i<bool>(0x2FB19228983E832C, p0, p1, p2); }
	inline Void _0x0BCA1D2C47B0D269(Any p0, Any p1, float p2) { return _i<Void>(0x0BCA1D2C47B0D269, p0, p1, p2); }
	inline Void _0x2E65248609523599(Any p0, Any p1, Any p2) { return _i<Void>(0x2E65248609523599, p0, p1, p2); }
	inline Void _0xCEA553E35C2246E1(Any p0, Any p1, Any p2) { return _i<Void>(0xCEA553E35C2246E1, p0, p1, p2); }
	inline int _0xF4D8E7AC2A27758C(int p0) { return _i<int>(0xF4D8E7AC2A27758C, p0); }
	inline int _0x94F12ABF9C79E339(int p0) { return _i<int>(0x94F12ABF9C79E339, p0); }
	inline Void _0xD558BEC0BBA7E8D2(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0xD558BEC0BBA7E8D2, p0, p1, p2, p3, p4); }
	inline Void _0x79AB33F0FBFAC40C(Any p0) { return _i<Void>(0x79AB33F0FBFAC40C, p0); }
	inline Void _0xA071E0ED98F91286(Any p0, Any p1) { return _i<Void>(0xA071E0ED98F91286, p0, p1); }
	inline Void _0x46326E13DA4E0546(Any* p0) { return _i<Void>(0x46326E13DA4E0546, p0); }
	inline Void _0x47B32F5611E6E483(Any p0) { return _i<Void>(0x47B32F5611E6E483, p0); }
	inline Void PlaystatsAwardXp(Any p0, Any p1, Any p2) { return _i<Void>(0x46F917F6B4128FE4, p0, p1, p2); }
	inline Void _0x5009DFD741329729(String p0, Any p1) { return _i<Void>(0x5009DFD741329729, p0, p1); }
	inline Void _0x516FC96EB88EEFE5(Any p0) { return _i<Void>(0x516FC96EB88EEFE5, p0); }
	inline Void _0x7B18DA61F6BAE9D5(Any p0) { return _i<Void>(0x7B18DA61F6BAE9D5, p0); }
	inline Void _0x53CAE13E9B426993(Any p0) { return _i<Void>(0x53CAE13E9B426993, p0); }
	inline Void _0xE3261D791EB44ACB(Any p0) { return _i<Void>(0xE3261D791EB44ACB, p0); }
	inline Void _0x930F504203F561C9(Any p0) { return _i<Void>(0x930F504203F561C9, p0); }
	inline Void _0x73001E34F85137F8(Any p0) { return _i<Void>(0x73001E34F85137F8, p0); }
	inline Void _0x14EDA9EE27BD1626(Any p0) { return _i<Void>(0x14EDA9EE27BD1626, p0); }
	inline Void _0x7D36291161859389(Any p0) { return _i<Void>(0x7D36291161859389, p0); }
	inline Void _0x06EAF70AE066441E(Any p0) { return _i<Void>(0x06EAF70AE066441E, p0); }
	inline Void _0xD6781E42755531F7(Any p0) { return _i<Void>(0xD6781E42755531F7, p0); }
	inline Void _0xF06A6F41CB445443(Any p0) { return _i<Void>(0xF06A6F41CB445443, p0); }
	inline Void _0x678F86D8FC040BDB(Any p0) { return _i<Void>(0x678F86D8FC040BDB, p0); }
	inline Void _0xA6F54BB2FFCA35EA(Any p0) { return _i<Void>(0xA6F54BB2FFCA35EA, p0); }
	inline Void _0x8D8ADB562F09A245(Any p0) { return _i<Void>(0x8D8ADB562F09A245, p0); }
	inline Void _0x282B6739644F4347(Any p0) { return _i<Void>(0x282B6739644F4347, p0); }
	inline Void _0x5FF2C33B13A02A11(Any p0) { return _i<Void>(0x5FF2C33B13A02A11, p0); }
	inline Void _0x88087EE1F28024AE(Any p0) { return _i<Void>(0x88087EE1F28024AE, p0); }
	inline Void _0xFCC228E07217FCAC(Any p0) { return _i<Void>(0xFCC228E07217FCAC, p0); }
	inline Void _0xD1A1EE3B4FA8E760(Any p0) { return _i<Void>(0xD1A1EE3B4FA8E760, p0); }
	inline Void _0x28ECB8AC2F607DB2(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x28ECB8AC2F607DB2, p0, p1, p2, p3, p4); }
	inline Void _0x0B565B0AAE56A0E8(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0x0B565B0AAE56A0E8, p0, p1, p2, p3, p4, p5, p6); }
	inline Void PlaystatsCheatApplied(String cheat) { return _i<Void>(0x6058665D72302D3F, cheat); }
	inline Void PlaystatsClothChange(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x34B973047A2268B9, p0, p1, p2, p3, p4); }
	inline Void _0xB7257BA2550EA10A(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0xB7257BA2550EA10A, p0, p1, p2, p3, p4, p5, p6); }
	inline Void _PlaystatsAmbientMissionCrateCreated(float p0, float p1, float p2) { return _i<Void>(0xAFC7E5E075A96F46, p0, p1, p2); }
	inline Void _0x1CAE5D2E3F9A07F0(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return _i<Void>(0x1CAE5D2E3F9A07F0, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline bool _0x6DEE77AFF8C21BD1(Any* p0, Any* p1) { return _i<bool>(0x6DEE77AFF8C21BD1, p0, p1); }
	inline Void _0x2605663BD4F23B5D(Any p0) { return _i<Void>(0x2605663BD4F23B5D, p0); }
	inline Void _0x848B66100EE33B05(Any p0) { return _i<Void>(0x848B66100EE33B05, p0); }
	inline Void _0x501478855A6074CE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Void>(0x501478855A6074CE, p0, p1, p2, p3, p4, p5); }
	inline Void _0xBAA2F0490E146BE8(Any p0) { return _i<Void>(0xBAA2F0490E146BE8, p0); }
	inline Void _0x6A60E43998228229(Any p0) { return _i<Void>(0x6A60E43998228229, p0); }
	inline Void _0x3DE3AA516FB126A4(Any p0) { return _i<Void>(0x3DE3AA516FB126A4, p0); }
	inline Void _0x6551B1F7F6CD46EA(Any p0) { return _i<Void>(0x6551B1F7F6CD46EA, p0); }
	inline Void _0xEDBF6C9B0D2C65C8(Any p0) { return _i<Void>(0xEDBF6C9B0D2C65C8, p0); }
	inline Void _0x0A9C7F36E5D7B683(Any p0) { return _i<Void>(0x0A9C7F36E5D7B683, p0); }
	inline Void _0x84DFC579C2FC214C(Any p0) { return _i<Void>(0x84DFC579C2FC214C, p0); }
	inline Void _0x2CD90358F67D0AA8(Any p0) { return _i<Void>(0x2CD90358F67D0AA8, p0); }
	inline Void _0x164C5FF663790845(Any p0) { return _i<Void>(0x164C5FF663790845, p0); }
	inline Void _0x419615486BBF1956(Any p0) { return _i<Void>(0x419615486BBF1956, p0); }
	inline Void _0x1A7CE7CD3E653485(Any p0) { return _i<Void>(0x1A7CE7CD3E653485, p0); }
	inline Void _0x8C9D11605E59D955(Any p0) { return _i<Void>(0x8C9D11605E59D955, p0); }
	inline Void _0xBFAFDB5FAAA5C5AB(Any p0) { return _i<Void>(0xBFAFDB5FAAA5C5AB, p0); }
	inline Void PlaystatsFriendActivity(Any p0, Any p1) { return _i<Void>(0x0F71DE29AB2258F1, p0, p1); }
	inline Void _0x0EACDF8487D5155A(Any p0) { return _i<Void>(0x0EACDF8487D5155A, p0); }
	inline Void _0xDAF80797FC534BEC(Any p0) { return _i<Void>(0xDAF80797FC534BEC, p0); }
	inline Void _0xF4FF020A08BC8863(Any p0, Any p1) { return _i<Void>(0xF4FF020A08BC8863, p0, p1); }
	inline Void _0x60EEDC12AF66E846(Any p0) { return _i<Void>(0x60EEDC12AF66E846, p0); }
	inline Void _0xCB00196B31C39EB1(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xCB00196B31C39EB1, p0, p1, p2, p3); }
	inline Void _0x5DA3A8DE8CB6226F(int time) { return _i<Void>(0x5DA3A8DE8CB6226F, time); }
	inline Void _0x7D8BA05688AD64C7(Any p0) { return _i<Void>(0x7D8BA05688AD64C7, p0); }
	inline Void _0x2B69F5074C894811(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x2B69F5074C894811, p0, p1, p2, p3); }
	inline Void _0xF8C54A461C3E11DC(Any* p0, Any* p1, Any* p2, Any* p3) { return _i<Void>(0xF8C54A461C3E11DC, p0, p1, p2, p3); }
	inline Void _0xF5BB8DAC426A52C0(Any* p0, Any* p1, Any* p2, Any* p3) { return _i<Void>(0xF5BB8DAC426A52C0, p0, p1, p2, p3); }
	inline Void _0xA736CF7FB7C5BFF4(Any* p0, Any* p1, Any* p2, Any* p3) { return _i<Void>(0xA736CF7FB7C5BFF4, p0, p1, p2, p3); }
	inline Void _0x14E0B2D1AD1044E0(Any* p0, Any* p1, Any* p2, Any* p3) { return _i<Void>(0x14E0B2D1AD1044E0, p0, p1, p2, p3); }
	inline Void _0xC5BE134EC7BA96A0(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0xC5BE134EC7BA96A0, p0, p1, p2, p3, p4); }
	inline Void PlaystatsMatchStarted(Any p0, Any p1, Any p2) { return _i<Void>(0xBC80E22DED931E3D, p0, p1, p2); }
	inline Void _0x8989CBD7B4E82534(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0x8989CBD7B4E82534, p0, p1, p2, p3, p4, p5, p6); }
	inline Void _0x03C2EEBB04B3FB72(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<Void>(0x03C2EEBB04B3FB72, p0, p1, p2, p3, p4, p5, p6); }
	inline Void _0xF534D94DFA2EAD26(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0xF534D94DFA2EAD26, p0, p1, p2, p3, p4); }
	inline Void _0xCC25A4553DFBF9EA(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0xCC25A4553DFBF9EA, p0, p1, p2, p3, p4); }
	inline Void PlaystatsMissionCheckpoint(Any* p0, Any p1, Any p2, Any p3) { return _i<Void>(0xC900596A63978C1D, p0, p1, p2, p3); }
	inline Void _0xBF371CD2B64212FD(Any p0) { return _i<Void>(0xBF371CD2B64212FD, p0); }
	inline Void PlaystatsMissionOver(Any* p0, Any p1, Any p2, bool p3, bool p4, bool p5) { return _i<Void>(0x7C4BB33A8CED7324, p0, p1, p2, p3, p4, p5); }
	inline Void PlaystatsMissionStarted(Any* p0, Any p1, Any p2, bool p3) { return _i<Void>(0xC19A2925C34D2231, p0, p1, p2, p3); }
	inline Void PlaystatsNpcInvite(Any* p0) { return _i<Void>(0x93054C88E6AA7C44, p0); }
	inline Void _0x9572BD4DD6B72122(Any p0) { return _i<Void>(0x9572BD4DD6B72122, p0); }
	inline Void _0x203B381133817079(Any p0) { return _i<Void>(0x203B381133817079, p0); }
	inline Void PlaystatsPropChange(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xBA739D6D5A05D6E7, p0, p1, p2, p3); }
	inline Void _0x90D0622866E80445(int p0, String p1) { return _i<Void>(0x90D0622866E80445, p0, p1); }
	inline Void PlaystatsRaceCheckpoint(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x9C375C315099DDE4, p0, p1, p2, p3, p4); }
	inline Void _0xADDD1C754E2E2914(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return _i<Void>(0xADDD1C754E2E2914, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Void _0x71862B1D855F32E1(Any* p0, Any p1, Any p2, Any p3) { return _i<Void>(0x71862B1D855F32E1, p0, p1, p2, p3); }
	inline Void PlaystatsRankUp(Any p0) { return _i<Void>(0xC7F2DE41D102BFB4, p0); }
	inline Void _0x04D90BA8207ADA2D(Any p0) { return _i<Void>(0x04D90BA8207ADA2D, p0); }
	inline Void _0x27AA1C973CACFE63(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { return _i<Void>(0x27AA1C973CACFE63, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	inline Void _0x121FB4DDDC2D5291(Any p0, Any p1, Any p2, float p3) { return _i<Void>(0x121FB4DDDC2D5291, p0, p1, p2, p3); }
	inline Void _0xC729991A9065376E(Any p0) { return _i<Void>(0xC729991A9065376E, p0); }
	inline Void _0xD1032E482629049E(bool p0) { return _i<Void>(0xD1032E482629049E, p0); }
	inline Void PlaystatsShopItem(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x176852ACAAC173D1, p0, p1, p2, p3, p4); }
	inline Void _0x320C35147D5B5DDD(Any p0) { return _i<Void>(0x320C35147D5B5DDD, p0); }
	inline Void _0xBE509B0A3693DE8B(Any p0) { return _i<Void>(0xBE509B0A3693DE8B, p0); }
	inline Void _0x098760C7461724CD() { return _i<Void>(0x098760C7461724CD); }
	inline Void _0x928DBFB892638EF3() { return _i<Void>(0x928DBFB892638EF3); }
	inline Void _0x8A800DACCC0DA55D() { return _i<Void>(0x8A800DACCC0DA55D); }
	inline Void _0x0A50D2604E05CB94(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x0A50D2604E05CB94, p0, p1, p2, p3, p4); }
	inline Void _0xE95C8A1875A02CA4(Any p0, Any p1, Any p2) { return _i<Void>(0xE95C8A1875A02CA4, p0, p1, p2); }
	inline Void PlaystatsWebsiteVisited(Hash scaleformHash, int p1) { return _i<Void>(0xDDF24D535060F811, scaleformHash, p1); }
	inline Void _0x30A6614C1F7799B8(Any p0, float p1, Any p2) { return _i<Void>(0x30A6614C1F7799B8, p0, p1, p2); }
	//STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
	inline Void _0x11FF1C80276097ED(Any p0, Any p1, Any p2) { return _i<Void>(0x11FF1C80276097ED, p0, p1, p2); }
	inline Void _0x6483C25849031C4F(Any p0, Any p1, Any p2, Any* p3) { return _i<Void>(0x6483C25849031C4F, p0, p1, p2, p3); }
	inline Void _0x7033EEFD9B28088E(Any p0) { return _i<Void>(0x7033EEFD9B28088E, p0); }
	inline Void _0x015B03EE1C43E6EC(Any p0) { return _i<Void>(0x015B03EE1C43E6EC, p0); }
	inline Void _0xAA525DFF66BB82F5(Any p0, Any p1, Any p2) { return _i<Void>(0xAA525DFF66BB82F5, p0, p1, p2); }
	inline Void _0x0D01D20616FC73FB(Any p0, Any p1) { return _i<Void>(0x0D01D20616FC73FB, p0, p1); }
	inline Void _0xC141B8917E0017EC() { return _i<Void>(0xC141B8917E0017EC); }
	inline Void _0xDAC073C7901F9E15(Any p0) { return _i<Void>(0xDAC073C7901F9E15, p0); }
	inline Void _0x723C1CE13FBFDB67(Any p0, Any p1) { return _i<Void>(0x723C1CE13FBFDB67, p0, p1); }
	inline Void _0x55384438FC55AD8E(int value) { return _i<Void>(0x55384438FC55AD8E, value); }
	inline Void _0x38BAAA5DD4C9D19F(int value) { return _i<Void>(0x38BAAA5DD4C9D19F, value); }
	inline Void _0xF1A1803D3476F215(int value) { return _i<Void>(0xF1A1803D3476F215, value); }
	inline Void _0xB475F27C6A994D65() { return _i<Void>(0xB475F27C6A994D65); }
	inline Void _0xF6792800AC95350D(Any p0) { return _i<Void>(0xF6792800AC95350D, p0); }
	inline Void _0x3EBEAC6C3F81F6BD(Any p0) { return _i<Void>(0x3EBEAC6C3F81F6BD, p0); }
	inline Void _0x96E6D5150DBF1C09(Any p0, Any p1, Any p2) { return _i<Void>(0x96E6D5150DBF1C09, p0, p1, p2); }
	inline Void _0x9B4BD21D69B1E609() { return _i<Void>(0x9B4BD21D69B1E609); }
	inline Void _0xA8733668D1047B51(Any p0) { return _i<Void>(0xA8733668D1047B51, p0); }
	inline Any StatClearSlotForReload(int statSlot) { return _i<Any>(0xEB0A72181D4AA4AD, statSlot); }
	inline bool _0x7F2C4CDF2E82DF4C(Any p0) { return _i<bool>(0x7F2C4CDF2E82DF4C, p0); }
	inline Any _0xE496A53BA5F50A56(Any p0) { return _i<Any>(0xE496A53BA5F50A56, p0); }
	inline bool _0x7E6946F68A38B74F(Any p0) { return _i<bool>(0x7E6946F68A38B74F, p0); }
	inline bool _0xBED9F5693F34ED17(Hash statName, int p1, float* outValue) { return _i<bool>(0xBED9F5693F34ED17, statName, p1, outValue); }
	inline bool _0x5A556B229A169402() { return _i<bool>(0x5A556B229A169402); }
	inline bool _0xB1D2BB1E1631F5B1() { return _i<bool>(0xB1D2BB1E1631F5B1); }
	inline Any StatDeleteSlot(Any p0) { return _i<Any>(0x49A49BED12794D70, p0); }
	inline Void _0x629526ABA383BCAA() { return _i<Void>(0x629526ABA383BCAA); }
	inline Void _0x98E2BC1CA26287C3() { return _i<Void>(0x98E2BC1CA26287C3); }
	inline bool StatGetBool(Hash statHash, bool* outValue, int p2) { return _i<bool>(0x11B5E6D2AE73F48E, statHash, outValue, p2); }
	inline bool StatGetBoolMasked(Hash statName, int mask, int p2) { return _i<bool>(0x10FE3F1B79F9B071, statName, mask, p2); }
	inline Any _0x567384DFA67029E6() { return _i<Any>(0x567384DFA67029E6); }
	inline Any _0x6E0A5253375C4584() { return _i<Any>(0x6E0A5253375C4584); }
	inline Any _0xBA9749CC94C1FD85() { return _i<Any>(0xBA9749CC94C1FD85); }
	inline Any _0x32CAC93C9DE73D32() { return _i<Any>(0x32CAC93C9DE73D32); }
	inline Any _0x84A810B375E69C0E() { return _i<Any>(0x84A810B375E69C0E); }
	inline Any _0x9EC8858184CD253A() { return _i<Any>(0x9EC8858184CD253A); }
	inline Any _0xE8853FBCE7D8D0D6() { return _i<Any>(0xE8853FBCE7D8D0D6); }
	inline Any _0xA943FD1722E11EFD() { return _i<Any>(0xA943FD1722E11EFD); }
	inline Any _0xAFF47709F1D5DCCE() { return _i<Any>(0xAFF47709F1D5DCCE); }
	inline Any _0x55A8BECAF28A4EB7() { return _i<Any>(0x55A8BECAF28A4EB7); }
	inline bool StatGetDate(Hash statHash, Any* p1, Any p2, Any p3) { return _i<bool>(0x8B0FACEFC36C824B, statHash, p1, p2, p3); }
	inline bool StatGetFloat(Hash statHash, float* outValue, int p2) { return _i<bool>(0xD7AE6C9C9C6AC54C, statHash, outValue, p2); }
	inline Any _0x1A8EA222F9C67DBB(Any p0) { return _i<Any>(0x1A8EA222F9C67DBB, p0); }
	inline int StatGetInt(Hash statHash, int* outValue, int p2) { return _i<int>(0x767FBC2AC802EF3D, statHash, outValue, p2); /*return _i<bool>(0x767FBC2AC802EF3D, statHash, outValue, p2);*/ }
	inline String StatGetLicensePlate(Hash statName) { return _i<String>(0x5473D4195058B2E4, statName); }
	inline Any _0xC0E0D686DDFC6EAE() { return _i<Any>(0xC0E0D686DDFC6EAE); }
	inline bool StatGetMaskedInt(Any p0, Any* p1, Any p2, Any p3, Any p4) { return _i<bool>(0x655185A06D9EEAAB, p0, p1, p2, p3, p4); }
	inline int StatGetNumberOfDays(Hash statName) { return _i<int>(0xE0E854F5280FB769, statName); }
	inline int StatGetNumberOfHours(Hash statName) { return _i<int>(0xF2D4B2FE415AAFC3, statName); }
	inline int StatGetNumberOfMinutes(Hash statName) { return _i<int>(0x7583B4BE4C5A41B5, statName); }
	inline int StatGetNumberOfSeconds(Hash statName) { return _i<int>(0x2CE056FF3723F00B, statName); }
	inline bool StatGetPos(Any p0, Any* p1, Any* p2, Any* p3, Any p4) { return _i<bool>(0x350F82CCB186AA1B, p0, p1, p2, p3, p4); }
	inline Any _0xF11F01D98113536A(Any p0) { return _i<Any>(0xF11F01D98113536A, p0); }
	inline Any _0xCE5AA445ABA8DEE0(Any* p0) { return _i<Any>(0xCE5AA445ABA8DEE0, p0); }
	inline Any _0x886913BBEACA68C1(Any* p0) { return _i<Any>(0x886913BBEACA68C1, p0); }
	inline String StatGetString(Hash statHash, int p1) { return _i<String>(0xE50384ACC2C3DB74, statHash, p1); }
	inline String StatGetUserId(Any p0) { return _i<String>(0x2365C388E393BBE2, p0); }
	inline Any _0x0B8B7F74BF061C6D() { return _i<Any>(0x0B8B7F74BF061C6D); }
	inline Void StatIncrement(Hash statName, float value) { return _i<Void>(0x9B5A68C6489E9909, statName, value); }
	inline Any _0xF9F2922717B819EC() { return _i<Any>(0xF9F2922717B819EC); }
	inline Any _0x8B9CDBD6C566C38C() { return _i<Any>(0x8B9CDBD6C566C38C); }
	inline Any _0xBE3DB208333D9844() { return _i<Any>(0xBE3DB208333D9844); }
	inline bool StatLoad(int p0) { return _i<bool>(0xA651443F437B1CE6, p0); }
	inline bool _0xECB41AC6AB754401() { return _i<bool>(0xECB41AC6AB754401); }
	inline bool StatLoadPending(Any p0) { return _i<bool>(0xA1750FFAFA181661, p0); }
	inline Void _0xA78B8FA58200DA56(int p0) { return _i<Void>(0xA78B8FA58200DA56, p0); }
	inline Any _0x4C89FE2BDEB3F169() { return _i<Any>(0x4C89FE2BDEB3F169); }
	inline Any _0x5BD5F255321C4AAF(Any p0) { return _i<Any>(0x5BD5F255321C4AAF, p0); }
	inline Any _0xDEAAF77EB3687E97(Any p0, Any* p1) { return _i<Any>(0xDEAAF77EB3687E97, p0, p1); }
	inline Any _0xC6E0E2616A7576BB() { return _i<Any>(0xC6E0E2616A7576BB); }
	inline Void _0xC847B43F369AC0B5() { return _i<Void>(0xC847B43F369AC0B5); }
	inline Any _0x9A62EC95AE10E011() { return _i<Any>(0x9A62EC95AE10E011); }
	inline bool _0xA5C80D8E768A9E66(Any* p0) { return _i<bool>(0xA5C80D8E768A9E66, p0); }
	inline Void _0x428EAF89E24F6C36(Any p0, float p1) { return _i<Void>(0x428EAF89E24F6C36, p0, p1); }
	inline Void _0x26D7399B9587FE89(int p0) { return _i<Void>(0x26D7399B9587FE89, p0); }
	inline bool StatSave(int p0, bool p1, int p2) { return _i<bool>(0xE07BCA305B82D2FD, p0, p1, p2); }
	inline Any _0x4FEF53183C3C6414() { return _i<Any>(0x4FEF53183C3C6414); }
	inline bool _0x3270F67EED31FBC1(Any p0, Any* p1, Any* p2) { return _i<bool>(0x3270F67EED31FBC1, p0, p1, p2); }
	inline Any _0xC70DDCE56D0D3A99() { return _i<Any>(0xC70DDCE56D0D3A99); }
	inline Any StatSavePending() { return _i<Any>(0x7D3A583856F2C5AC); }
	inline Any StatSavePendingOrRequested() { return _i<Any>(0xBBB6AD006F1BBEA3); }
	inline Void _0xF434A10BA01C37D0(bool p0) { return _i<Void>(0xF434A10BA01C37D0, p0); }
	inline bool StatSetBool(Hash statName, bool value, bool save) { return _i<bool>(0x4B33C4243DE0C432, statName, value, save); }
	inline bool StatSetBoolMasked(Hash statName, bool value, int mask, bool save) { return _i<bool>(0x5BC62EC1937B9E5B, statName, value, mask, save); }
	inline Void _0x047CBED6F6F8B63C() { return _i<Void>(0x047CBED6F6F8B63C); }
	inline bool StatSetCurrentPosixTime(Hash statName, bool p1) { return _i<bool>(0xC2F84B7F9C4D0C61, statName, p1); }
	inline bool StatSetDate(Hash statName, Any* value, int numFields, bool save) { return _i<bool>(0x2C29BFB64F4FCBE4, statName, value, numFields, save); }
	inline bool StatSetFloat(Hash statName, float value, bool save) { return _i<bool>(0x4851997F37FE9B3C, statName, value, save); }
	inline bool StatSetGxtLabel(Hash statName, String value, bool save) { return _i<bool>(0x17695002FD8B2AE0, statName, value, save); }
	inline bool StatSetInt(Hash statName, int value, bool save) { return _i<bool>(0xB3271D7AB655B441, statName, value, save); }
	inline bool StatSetLicensePlate(Hash statName, String str) { return _i<bool>(0x69FF13266D7296DA, statName, str); }
	inline bool StatSetMaskedInt(Hash statName, Any p1, Any p2, int p3, bool save) { return _i<bool>(0x7BBB1B54583ED410, statName, p1, p2, p3, save); }
	inline Void _0x5688585E6D563CD8(Any p0) { return _i<Void>(0x5688585E6D563CD8, p0); }
	inline bool StatSetPos(Hash statName, float x, float y, float z, bool save) { return _i<bool>(0xDB283FDE680FE72E, statName, x, y, z, save); }
	inline Void _StatSetProfileSetting(int profileSetting, int value) { return _i<Void>(0x68F01422BE1D838F, profileSetting, value); }
	inline bool StatSetString(Hash statName, String value, bool save) { return _i<bool>(0xA87B2335D12531D7, statName, value, save); }
	inline bool StatSetUserId(Hash statName, String value, bool save) { return _i<bool>(0x8CDDF1E452BABE11, statName, value, save); }
	inline bool StatSlotIsLoaded(Any p0) { return _i<bool>(0x0D0A9F0E7BD91E3C, p0); }
	inline Any _0x33D72899E24C3365(Any p0, Any p1) { return _i<Any>(0x33D72899E24C3365, p0, p1); }
	inline Any _0xA761D4AC6115623D() { return _i<Any>(0xA761D4AC6115623D); }
	inline Void PlaystatsOddjobDone(Any p0, Any p1, Any p2) { return _i<Void>(0x69DEA3E9DB727B4C, p0, p1, p2); }
}

namespace STREAMING
{
	inline bool _0x0BC3144DEB678666(Hash modelHash) { return _i<bool>(0x0BC3144DEB678666, modelHash); }
	inline Void _0x8E2A065ABDAE6994() { return _i<Void>(0x8E2A065ABDAE6994); }
	inline Void _0xAD5FDF34B81BFE79() { return _i<Void>(0xAD5FDF34B81BFE79); }
	inline Void _0x74DE2E8739086740() { return _i<Void>(0x74DE2E8739086740); }
	inline Void _0x43D1680C6D19A8E9() { return _i<Void>(0x43D1680C6D19A8E9); }
	inline Void BeginSrl() { return _i<Void>(0x9BADDC94EF83B823); }
	inline Void ClearFocus() { return _i<Void>(0x31B73D1EA9F01DA2); }
	inline Void ClearHdArea() { return _i<Void>(0xCE58B1CFB9290813); }
	inline Void _0xBD605B8E0E18B3BB() { return _i<Void>(0xBD605B8E0E18B3BB); }
	inline bool DoesAnimDictExist(String animDict) { return _i<bool>(0x2DA49C3B79856961, animDict); }
	inline Void _0xD4793DFF3AF2ABCD() { return _i<Void>(0xD4793DFF3AF2ABCD); }
	inline Void EndSrl() { return _i<Void>(0x0A41540E63C9EE17); }
	inline Void _0x03F1A106BDA7DD3E() { return _i<Void>(0x03F1A106BDA7DD3E); }
	inline int GetIdealPlayerSwitchType(float x1, float y1, float z1, float x2, float y2, float z2) { return _i<int>(0xB5D7B26B45720E05, x1, y1, z1, x2, y2, z2); }
	inline Any _0x0C15B0E443B2349D() { return _i<Any>(0x0C15B0E443B2349D); }
	inline int GetNumberOfStreamingRequests() { return _i<int>(0x4060057271CEBC89); }
	inline int GetPlayerShortSwitchState() { return _i<int>(0x20F898A5D9782800); }
	inline Any _0x5B48A06DD0E792A5() { return _i<Any>(0x5B48A06DD0E792A5); }
	inline int _0x08C2D6C52A3104BB() { return _i<int>(0x08C2D6C52A3104BB); }
	inline Any _0x78C0D93253149435() { return _i<Any>(0x78C0D93253149435); }
	inline int GetPlayerSwitchState() { return _i<int>(0x470555300D10B2A5); }
	inline int GetPlayerSwitchType() { return _i<int>(0xB3C94A90D9FC9E62); }
	inline Any _0x3D3D8B3BE5A83D35() { return _i<Any>(0x3D3D8B3BE5A83D35); }
	inline bool HasAnimDictLoaded(String animDict) { return _i<bool>(0xD031A9162D01088C, animDict); }
	inline bool HasAnimSetLoaded(String animSet) { return _i<bool>(0xC4EA073D86FB29B0, animSet); }
	inline bool HasClipSetLoaded(String clipSet) { return _i<bool>(0x318234F4F3738AF3, clipSet); }
	inline bool HasCollisionForModelLoaded(Hash model) { return _i<bool>(0x22CCA434E368F03A, model); }
	inline bool HasModelLoaded(Hash model) { return _i<bool>(0x98A4EB5D89A0C952, model); }
	inline bool HasNamedPtfxAssetLoaded(String fxName) { return _i<bool>(0x8702416E512EC454, fxName); }
	inline bool HasPtfxAssetLoaded() { return _i<bool>(0xCA7D9B86ECA7481B); }
	inline Void _0xB5A4DB34FE89B88A() { return _i<Void>(0xB5A4DB34FE89B88A); }
	inline Void _0x63EB2B972A218CAC() { return _i<Void>(0x63EB2B972A218CAC); }
	inline Void _0xF4A0DADB70F57FA6() { return _i<Void>(0xF4A0DADB70F57FA6); }
	inline Any _0x5068F488DDB54DD8() { return _i<Any>(0x5068F488DDB54DD8); }
	inline Any _0xFB199266061F820A() { return _i<Any>(0xFB199266061F820A); }
	inline Void _0x95A7DABDDBB78AE7(Any* p0, Any* p1) { return _i<Void>(0x95A7DABDDBB78AE7, p0, p1); }
	inline bool IsEntityFocus(Entity entity) { return _i<bool>(0x2DDFF3FB9075D747, entity); }
	inline bool IsIplActive(String iplName) { return _i<bool>(0x88A741E44A2B3495, iplName); }
	inline bool _IsModelAPed(Hash modelHash) { return _i<bool>(0x75816577FEA6DAD5, modelHash); }
	inline bool IsModelAVehicle(Hash model) { return _i<bool>(0x19AAC8F07BFEC53E, model); }
	inline bool IsModelInCdimage(Hash model) { return _i<bool>(0x35B9E0803292B641, model); }
	inline bool IsModelValid(Hash model) { return _i<bool>(0xC0296A2EDF545E92, model); }
	inline bool IsNetworkLoadingScene() { return _i<bool>(0x41CA5A33160EA4AB); }
	inline bool IsNewLoadSceneActive() { return _i<bool>(0xA41A05B6CB741B85); }
	inline bool IsNewLoadSceneLoaded() { return _i<bool>(0x01B8247A7A8B9AD1); }
	inline bool IsPlayerSwitchInProgress() { return _i<bool>(0xD9D2CFFF49FAB35F); }
	inline Any _0x71E7B2E657449AAD() { return _i<Any>(0x71E7B2E657449AAD); }
	inline bool IsSrlLoaded() { return _i<bool>(0xD0263801A4C5B0BB); }
	inline Any _0x07C313F94746702C(Any p0) { return _i<Any>(0x07C313F94746702C, p0); }
	inline Any _0xBC9823AB80A3DCAC() { return _i<Any>(0xBC9823AB80A3DCAC); }
	inline Any _0xDFA80CB25D0A19B3() { return _i<Any>(0xDFA80CB25D0A19B3); }
	inline Any _0x5B74EA8CFD5E3E7E() { return _i<Any>(0x5B74EA8CFD5E3E7E); }
	inline Any _0x933BBEEB8C61B5F4() { return _i<Any>(0x933BBEEB8C61B5F4); }
	inline Void LoadAllObjectsNow() { return _i<Void>(0xBD6E84632DD4CB3F); }
	inline Void LoadScene(float x, float y, float z) { return _i<Void>(0x4448EB75B4904BDB, x, y, z); }
	inline Any NetworkUpdateLoadScene() { return _i<Any>(0xC4582015556D1C46); }
	inline bool NewLoadSceneStart(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7) { return _i<bool>(0x212A8D0D2BABFAC2, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline bool NewLoadSceneStartSphere(float x, float y, float z, float radius, Any p4) { return _i<bool>(0xACCFB4ACF53551B0, x, y, z, radius, p4); }
	inline Void NewLoadSceneStop() { return _i<Void>(0xC197616D221FF4A4); }
	inline Void _0xA76359FC80B2438E(float p0) { return _i<Void>(0xA76359FC80B2438E, p0); }
	inline Void PrefetchSrl(String srl) { return _i<Void>(0x3D245789CE12982C, srl); }
	inline Void _0xBED8CA5FF5E04113(float p0, float p1, float p2, float p3) { return _i<Void>(0xBED8CA5FF5E04113, p0, p1, p2, p3); }
	inline Void RemoveAnimDict(String animDict) { return _i<Void>(0xF66A602F829E2A06, animDict); }
	inline Void RemoveAnimSet(String animSet) { return _i<Void>(0x16350528F93024B3, animSet); }
	inline Void RemoveClipSet(String clipSet) { return _i<Void>(0x01F73A131C18CD94, clipSet); }
	inline Void RemoveIpl(String iplName) { return _i<Void>(0xEE6C5AD3ECE0A82D, iplName); }
	inline Void _0xF086AD9354FAC3A3(Any p0) { return _i<Void>(0xF086AD9354FAC3A3, p0); }
	inline Void RemoveNamedPtfxAsset(String fxName) { return _i<Void>(0x5F61EBBE1A00F96D, fxName); }
	inline Void RemovePtfxAsset() { return _i<Void>(0x88C6814073DD4A73); }
	inline Void RequestCollisionAtCoord(float x, float y, float z) { return _i<Void>(0x07503F7948F491A7, x, y, z); }
	inline Void RequestAdditionalCollisionAtCoord(float p0, float p1, float p2) { return _i<Void>(0xC9156DC11411A9EA, p0, p1, p2); }
	inline Void RequestAnimDict(String animDict) { return _i<Void>(0xD3BD40951412FEF6, animDict); }
	inline Void RequestAnimSet(String animSet) { return _i<Void>(0x6EA47DAE7FAD0EED, animSet); }
	inline Void RequestClipSet(String clipSet) { return _i<Void>(0xD2A71E1A77418A49, clipSet); }
	inline Void RequestIpl(String iplName) { return _i<Void>(0x41B4893843BBDB74, iplName); }
	inline Void RequestMenuPedModel(Hash model) { return _i<Void>(0xA0261AEF7ACFC51E, model); }
	inline Void RequestModel(Hash model) { return _i<Void>(0x963D27A58DF860AC, model); }
	inline Void RequestCollisionForModel(Hash model) { return _i<Void>(0x923CB32A3B874FCB, model); }
	inline Void _RequestInteriorRoomByName(int interiorID, String roomName) { return _i<Void>(0x8A7A40100EDFEC58, interiorID, roomName); }
	inline Void RequestNamedPtfxAsset(String fxName) { return _i<Void>(0xB80D8756B4668AB6, fxName); }
	inline Void RequestPtfxAsset() { return _i<Void>(0x944955FB2A3935C8); }
	inline Void SetFocusEntity(Entity entity) { return _i<Void>(0x198F77705FA0931D, entity); }
	inline Void _SetFocusArea(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { return _i<Void>(0xBB7454BAFF08FE25, x, y, z, offsetX, offsetY, offsetZ); }
	inline Void SetGamePausesForStreaming(bool toggle) { return _i<Void>(0x717CD6E6FAEBBEDC, toggle); }
	inline Void SetHdArea(float x, float y, float z, float ground) { return _i<Void>(0xB85F26619073E775, x, y, z, ground); }
	inline Void SetInteriorActive(int interiorID, bool toggle) { return _i<Void>(0xE37B76C387BE28ED, interiorID, toggle); }
	inline Void _0xAF12610C644A35C9(String p0, bool p1) { return _i<Void>(0xAF12610C644A35C9, p0, p1); }
	inline Void SetModelAsNoLongerNeeded(Hash model) { return _i<Void>(0xE532F5D78798DAAB, model); }
	inline Void SetPedPopulationBudget(int p0) { return _i<Void>(0x8C95333CFC3340F3, p0); }
	inline Void _0x5F2013F8BC24EE69(int p0) { return _i<Void>(0x5F2013F8BC24EE69, p0); }
	inline Void _0x0FDE9DBFC0A6BC65(Any* p0) { return _i<Void>(0x0FDE9DBFC0A6BC65, p0); }
	inline Void SetPlayerSwitchOutro(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { return _i<Void>(0xC208B673CE446B61, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline Void SetReducePedModelBudget(bool toggle) { return _i<Void>(0x77B5F9A36BF96710, toggle); }
	inline Void SetReduceVehicleModelBudget(bool toggle) { return _i<Void>(0x80C527893080CCF3, toggle); }
	inline Void _0x40AEFD1A244741F2(bool p0) { return _i<Void>(0x40AEFD1A244741F2, p0); }
	inline Void _0x0811381EF5062FEC(Entity p0) { return _i<Void>(0x0811381EF5062FEC, p0); }
	inline Void _0x1E9057A74FD73E23() { return _i<Void>(0x1E9057A74FD73E23); }
	inline Void _0xF8155A7F03DDFC8E(Any p0) { return _i<Void>(0xF8155A7F03DDFC8E, p0); }
	inline Void _0x20C6C7E4EB082A7F(bool p0) { return _i<Void>(0x20C6C7E4EB082A7F, p0); }
	inline Void _0xEF39EE20C537E98C(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Void>(0xEF39EE20C537E98C, p0, p1, p2, p3, p4, p5); }
	inline Void _0xBEB2D9A1D9A8F55A(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0xBEB2D9A1D9A8F55A, p0, p1, p2, p3); }
	inline Void SetSrlTime(float p0) { return _i<Void>(0xA74A541C6884E7B8, p0); }
	inline Void SetStreaming(bool toggle) { return _i<Void>(0x6E0C692677008888, toggle); }
	inline Void SetVehiclePopulationBudget(int p0) { return _i<Void>(0xCB9E1EB3BE2AF4E9, p0); }
	inline Void ShutdownCreatorBudget() { return _i<Void>(0xCCE26000E9A6FAD7); }
	inline Void StartPlayerSwitch(Ped from, Ped to, int flags, int switchType) { return _i<Void>(0xFAA23F2CBA159D67, from, to, flags, switchType); }
	inline Void StopPlayerSwitch() { return _i<Void>(0x95C0A5BBDC189AA1); }
	inline Any _0x1F3F018BC3AFA77C(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return _i<Any>(0x1F3F018BC3AFA77C, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline Any _0x0AD9710CEE2F590F(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return _i<Any>(0x0AD9710CEE2F590F, p0, p1, p2, p3, p4, p5, p6); }
	inline Any FormatFocusHeading(float x, float y, float z, float rad, Any p4, Any p5) { return _i<Any>(0x219C7B8D53E429FD, x, y, z, rad, p4, p5); }
	inline Void _0x1EE7D8DF4425F053(Any p0) { return _i<Void>(0x1EE7D8DF4425F053, p0); }
	inline Any _0x7D41E9D2D17C5B2D(Any p0) { return _i<Any>(0x7D41E9D2D17C5B2D, p0); }
	inline Void _0x472397322E92A856() { return _i<Void>(0x472397322E92A856); }
	inline Void _SwitchOutPlayer(Ped ped, int flags, int unknown) { return _i<Void>(0xAAB3200ED59016BC, ped, flags, unknown); }
	inline Void _0xD8295AF639FD9CB8(Any p0) { return _i<Void>(0xD8295AF639FD9CB8, p0); }
	inline Void SetDitchPoliceModels(bool toggle) { return _i<Void>(0x42CBE54462D92634, toggle); }
	inline Void _0x4E52E752C76E7E7A(Any p0) { return _i<Void>(0x4E52E752C76E7E7A, p0); }
}

namespace TASK
{
	inline Void AddScriptToRandomPed(String name, Hash model, float p2, float p3) { return _i<Void>(0x4EE5367468A65CCC, name, model, p2, p3); }
	inline Void DisableScriptBrainSet(int brainSet) { return _i<Void>(0x14D8518E9760F08F, brainSet); }
	inline Void EnableScriptBrainSet(int brainSet) { return _i<Void>(0x67AA4D73F0CFA86B, brainSet); }
	inline bool IsObjectWithinBrainActivationRange(Object object) { return _i<bool>(0xCCBA154209823057, object); }
	inline bool IsWorldPointWithinBrainActivationRange() { return _i<bool>(0xC5042CC6F5E3D450); }
	inline Void _0x4D953DF78EBF8158() { return _i<Void>(0x4D953DF78EBF8158); }
	inline Void _0x0B40ED49D7D6FF84() { return _i<Void>(0x0B40ED49D7D6FF84); }
	inline Void _0x6E91B04E08773030(String action) { return _i<Void>(0x6E91B04E08773030, action); }
	inline Void _0x6D6840CEE8845831(String action) { return _i<Void>(0x6D6840CEE8845831, action); }
	inline Void RegisterObjectScriptBrain(String scriptName, Hash objectName, int p2, float p3, int p4, int p5) { return _i<Void>(0x0BE84C318BA6EC22, scriptName, objectName, p2, p3, p4, p5); }
	inline Void RegisterWorldPointScriptBrain(Any* p0, float p1, Any p2) { return _i<Void>(0x3CDC7136613284BD, p0, p1, p2); }
}

namespace VEHICLE
{
	static Void _SetVehicleHeadlightColor(Vehicle vehicle, int colorID) { return _i<Void>(0xE41033B25D003A07, vehicle, colorID); } // 0xE41033B25D003A07
	static int _GetVehicleHeadlightColor(Vehicle vehicle) { return _i<int>(0x3DFF319A831E0CDB, vehicle); } // 0x3DFF319A831E0CDB
	static void _0x1CF38D529D7441D9(Vehicle vehicle, BOOL toggle) { _i<Void>(0x1CF38D529D7441D9, vehicle, toggle); } // 0x1CF38D529D7441D9 0xDF594D8D
	inline Any _0x0419B167EE128F33(Any p0, Any p1) { return _i<Any>(0x0419B167EE128F33, p0, p1); }
	inline Any _0xF3B0E0AED097A3F5(Any p0, Any p1) { return _i<Any>(0xF3B0E0AED097A3F5, p0, p1); }
	inline Any _0xD3E51C0AB8C26EEE(Any p0, Any p1) { return _i<Any>(0xD3E51C0AB8C26EEE, p0, p1); }
	inline Any _0x2CE544C68FB812A0(float p0, float p1, float p2, float p3, float p4, bool p5) { return _i<Any>(0x2CE544C68FB812A0, p0, p1, p2, p3, p4, p5); }
	inline Any _0x54B0F614960F4A5F(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return _i<Any>(0x54B0F614960F4A5F, p0, p1, p2, p3, p4, p5, p6); }
	inline Void _0x99AD4CCCB128CBC9(Vehicle vehicle) { return _i<Void>(0x99AD4CCCB128CBC9, vehicle); }
	inline Void AddVehicleStuckCheckWithWarp(Any p0, float p1, Any p2, bool p3, bool p4, bool p5, Any p6) { return _i<Void>(0x2FA9923062DD396C, p0, p1, p2, p3, p4, p5, p6); }
	inline Void AddVehicleUpsidedownCheck(Vehicle vehicle) { return _i<Void>(0xB72E26D81006005B, vehicle); }
	inline Void _0xC1F981A6F74F0C23(Any p0, bool p1) { return _i<Void>(0xC1F981A6F74F0C23, p0, p1); }
	inline Void _0x0F3B4D4E43177236(Any p0, bool p1) { return _i<Void>(0x0F3B4D4E43177236, p0, p1); }
	inline bool AreAllVehicleWindowsIntact(Vehicle vehicle) { return _i<bool>(0x11D862A3E977A9EF, vehicle); }
	inline bool AreAnyVehicleSeatsFree(Vehicle vehicle) { return _i<bool>(0x2D34FC3BC4ADB780, vehicle); }
	inline bool _0xF78F94D60248C737(Any p0, bool p1) { return _i<bool>(0xF78F94D60248C737, p0, p1); }
	inline bool _ArePropellersUndamaged(Vehicle vehicle) { return _i<bool>(0x755D6D5267CBBD7E, vehicle); }
	inline bool _AreVehicleWingsIntact(Vehicle vehicle) { return _i<bool>(0x5991A01434CE9677, vehicle); }
	inline Void _0x6A98C2ECF57FA5D4(Vehicle vehicle, Entity entity) { return _i<Void>(0x6A98C2ECF57FA5D4, vehicle, entity); }
	inline Void _0xA1DD82F3CCF9A01E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Void>(0xA1DD82F3CCF9A01E, p0, p1, p2, p3, p4, p5); }
	inline Void _0x16B5E274BDE402F8(Vehicle vehicle, Vehicle trailer, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11) { return _i<Void>(0x16B5E274BDE402F8, vehicle, trailer, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	inline Void AttachVehicleToCargobob(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { return _i<Void>(0x4127F1D84E347769, vehicle, cargobob, p2, x, y, z); }
	inline Void AttachVehicleToTowTruck(Vehicle towTruck, Vehicle vehicle, bool rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { return _i<Void>(0x29A16F8D621C4508, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); }
	inline Void AttachVehicleToTrailer(Vehicle vehicle, Vehicle trailer, float radius) { return _i<Void>(0x3C7D42D58F770B54, vehicle, trailer, radius); }
	inline Void _SetVehicleHalt(Vehicle vehicle, float distance, int killEngine, bool unknown) { return _i<Void>(0x260BE8F09E326A20, vehicle, distance, killEngine, unknown); }
	inline Any _0x2467A2D807D37CA3(Any p0) { return _i<Any>(0x2467A2D807D37CA3, p0); }
	inline bool _GetBoatAnchor(Vehicle vehicle) { return _i<bool>(0x26C10ECBDA5D043B, vehicle); }
	inline Any _0x2C1D8B3B19E517CC(Any p0, Any p1) { return _i<Any>(0x2C1D8B3B19E517CC, p0, p1); }
	inline bool CanShuffleSeat(Vehicle vehicle, Any p1) { return _i<bool>(0x30785D90C956BF35, vehicle, p1); }
	inline Void _0xE01903C47C7AC89E() { return _i<Void>(0xE01903C47C7AC89E); }
	inline Void ClearVehicleCustomPrimaryColour(Vehicle vehicle) { return _i<Void>(0x55E1D2758F34E437, vehicle); }
	inline Void ClearVehicleCustomSecondaryColour(Vehicle vehicle) { return _i<Void>(0x5FFBDEEC3E8E2009, vehicle); }
	inline Void _0x0A436B8643716D14() { return _i<Void>(0x0A436B8643716D14); }
	inline Void _0x4419966C9936071A(Any p0) { return _i<Void>(0x4419966C9936071A, p0); }
	inline Void _0xAA3F739ABDDCF21F() { return _i<Void>(0xAA3F739ABDDCF21F); }
	inline Void _0x6D6AF961B72728AE(Vehicle vehicle) { return _i<Void>(0x6D6AF961B72728AE, vehicle); }
	inline Void CloseBombBayDoors(Vehicle vehicle) { return _i<Void>(0x3556041742A0DC74, vehicle); }
	inline Void ControlLandingGear(Vehicle vehicle, int state) { return _i<Void>(0xCFC8BE9A5E1FE575, vehicle, state); }
	inline Void _0xE44A982368A4AF23(Vehicle vehicle, Vehicle vehicle2) { return _i<Void>(0xE44A982368A4AF23, vehicle, vehicle2); }
	inline Vehicle CreateMissionTrain(int variation, float x, float y, float z, bool direction) { return _i<Vehicle>(0x63C6CCA8E68AE8C8, variation, x, y, z, direction); }
	inline Void CreatePickUpRopeForCargobob(Vehicle cargobob, int state) { return _i<Void>(0x7BEB0C7A235F6F3B, cargobob, state); }
	inline int CreateScriptVehicleGenerator(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, bool p11, bool p12, bool p13, bool p14, bool p15, int p16) { return _i<int>(0x9DEF883114668116, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
	inline Vehicle CreateVehicle(Hash modelHash, float x, float y, float z, float heading, bool isNetwork, bool p6, Any p7) { return _i<Vehicle>(0xAF35D0D2583051B0, modelHash, x, y, z, heading, isNetwork, p6, p7); }
	inline Void DeleteAllTrains() { return _i<Void>(0x736A718577F39C7D); }
	inline Void DeleteMissionTrain(Vehicle* train) { return _i<Void>(0x5B76B14AE875C795, train); }
	inline Void DeleteScriptVehicleGenerator(int vehicleGenerator) { return _i<Void>(0x22102C9ABFCF125D, vehicleGenerator); }
	inline Void DeleteVehicle(Vehicle* vehicle) { return _i<Void>(0xEA386986E786A54F, vehicle); }
	inline Void _0x7C0043FDFF6436BC(Vehicle vehicle) { return _i<Void>(0x7C0043FDFF6436BC, vehicle); }
	inline Any _0xAF03011701811146(Any p0, Any p1) { return _i<Any>(0xAF03011701811146, p0, p1); }
	inline bool DetachVehicleFromAnyCargobob(Vehicle vehicle) { return _i<bool>(0xADF7BE450512C12F, vehicle); }
	inline bool DetachVehicleFromAnyTowTruck(Vehicle vehicle) { return _i<bool>(0xD0E9CE05A1E68CD8, vehicle); }
	inline Void DetachVehicleFromCargobob(Vehicle vehicle, Vehicle cargobob) { return _i<Void>(0x0E21D3DF1051399D, vehicle, cargobob); }
	inline Void DetachVehicleFromTowTruck(Vehicle towTruck, Vehicle vehicle) { return _i<Void>(0xC2DB6B6708350ED8, towTruck, vehicle); }
	inline Void DetachVehicleFromTrailer(Vehicle vehicle) { return _i<Void>(0x90532EDF0D2BDD86, vehicle); }
	inline Void _0xEF49CF0270307CBE() { return _i<Void>(0xEF49CF0270307CBE); }
	inline Void _0x500873A45724C863(Vehicle vehicle, Any p1) { return _i<Void>(0x500873A45724C863, vehicle, p1); }
	inline Void DisablePlaneAileron(Vehicle vehicle, bool p1, bool p2) { return _i<Void>(0x23428FC53C60919C, vehicle, p1, p2); }
	inline Void _0xF0E4BA16D1DB546C(Vehicle vehicle, int p1, int p2) { return _i<Void>(0xF0E4BA16D1DB546C, vehicle, p1, p2); }
	inline Void _0xF25E02CB9C5818F8() { return _i<Void>(0xF25E02CB9C5818F8); }
	inline Void _0x32CAEDF24A583345(Any p0) { return _i<Void>(0x32CAEDF24A583345, p0); }
	inline Void DisableVehicleWeapon(bool disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { return _i<Void>(0xF4FC6A6F67D8D856, disabled, weaponHash, vehicle, owner); }
	inline bool DoesCargobobHavePickupMagnet(Vehicle cargobob) { return _i<bool>(0x6E08BF5B3722BAC9, cargobob); }
	inline bool DoesCargobobHavePickUpRope(Vehicle cargobob) { return _i<bool>(0x1821D91AD4B56108, cargobob); }
	inline bool DoesExtraExist(Vehicle vehicle, int extraId) { return _i<bool>(0x1262D55792428154, vehicle, extraId); }
	inline bool DoesScriptVehicleGeneratorExist(int vehicleGenerator) { return _i<bool>(0xF6086BC836400876, vehicleGenerator); }
	inline Any _0x4E417C547182C84D(Any p0) { return _i<Any>(0x4E417C547182C84D, p0); }
	inline bool DoesVehicleExistWithDecorator(String decorator) { return _i<bool>(0x956B409B984D9BF7, decorator); }
	inline bool DoesVehicleHaveRoof(Vehicle vehicle) { return _i<bool>(0x8AC862B0B32C5B80, vehicle); }
	inline bool DoesVehicleHaveStuckVehicleCheck(Vehicle vehicle) { return _i<bool>(0x57E4C39DE5EE8470, vehicle); }
	inline bool DoesVehicleHaveWeapons(Vehicle vehicle) { return _i<bool>(0x25ECB9F8017D98E0, vehicle); }
	inline Void _0xF87D9F2301F7D206(Any p0) { return _i<Void>(0xF87D9F2301F7D206, p0); }
	inline Void ExplodeVehicle(Vehicle vehicle, bool isAudible, bool isInvisible) { return _i<Void>(0xBA71116ADF5B514C, vehicle, isAudible, isInvisible); }
	inline Void ExplodeVehicleInCutscene(Vehicle vehicle, bool p1) { return _i<Void>(0x786A4EB67B01BF0B, vehicle, p1); }
	inline Vehicle _GetVehicleAttachedToEntity(Object object) { return _i<Vehicle>(0x375E7FC44F21C8AB, object); }
	inline Void FixVehicleWindow(Vehicle vehicle, int index) { return _i<Void>(0x772282EBEB95E682, vehicle, index); }
	inline Void _0x1F2E4E06DEA8992B(Any p0, bool p1) { return _i<Void>(0x1F2E4E06DEA8992B, p0, p1); }
	inline Void _0x33506883545AC0DF(Vehicle vehicle, bool p1) { return _i<Void>(0x33506883545AC0DF, vehicle, p1); }
	inline Void _0x99CAD8E7AFDB60FA(Vehicle vehicle, float p1, float p2) { return _i<Void>(0x99CAD8E7AFDB60FA, vehicle, p1, p2); }
	inline bool _0xA4822F1CF23F4810(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return _i<bool>(0xA4822F1CF23F4810, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); }
	inline int _GetAllVehicles(Any* vehArray) { return _i<int>(0x9B8E1BF04B51F2E8, vehArray); }
	inline Any _GetAreBombBayDoorsOpen(Any p0) { return _i<Any>(0xD0917A423314BBA8, p0); }
	inline Vector3 _GetCargobobHookPosition(Vehicle cargobob) { return _i<Vector3>(0xCBDB9B923CACC92D, cargobob); }
	inline float _0x6636C535F6CC2725(Vehicle vehicle) { return _i<float>(0x6636C535F6CC2725, vehicle); }
	inline float _0x5AA3F878A178C4FC(Hash modelHash) { return _i<float>(0x5AA3F878A178C4FC, modelHash); }
	inline Any _0xEC69ADF931AAE0C3(Any p0) { return _i<Any>(0xEC69ADF931AAE0C3, p0); }
	inline Any _0x51F30DB60626A20E(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return _i<Any>(0x51F30DB60626A20E, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
	inline Any _HasVehicleJumpingAbility(Vehicle vehicle) { return _i<Any>(0x9078C0C5EF8C19E9, vehicle); }
	inline Vehicle GetClosestVehicle(float x, float y, float z, float radius, Hash modelHash, int flags) { return _i<Vehicle>(0xF73EB622C4F1689B, x, y, z, radius, modelHash, flags); }
	inline int GetConvertibleRoofState(Vehicle vehicle) { return _i<int>(0xF8C397922FC03F41, vehicle); }
	inline Any GetCurrentPlaybackForVehicle(Any p0) { return _i<Any>(0x42BC05C27A946054, p0); }
	inline String GetDisplayNameFromVehicleModel(Hash modelHash) { return _i<String>(0xB215AAC32D25D019, modelHash); }
	inline bool _IsVehicleDamaged(Vehicle vehicle) { return _i<bool>(0xBCDC5017D3CE1E9E, vehicle); }
	inline Any _0x99093F60746708CA(Any p0) { return _i<Any>(0x99093F60746708CA, p0); }
	inline Entity GetEntityAttachedToTowTruck(Vehicle towTruck) { return _i<Entity>(0xEFEA18DCF10F8F75, towTruck); }
	inline Vector3 _GetEntryPositionOfDoor(Vehicle vehicle, int doorIndex) { return _i<Vector3>(0xC0572928C0ABFDA3, vehicle, doorIndex); }
	inline float _GetVehicleSuspensionHeight(Vehicle vehicle) { return _i<float>(0x53952FD2BAA19F17, vehicle); }
	inline float _0xC6AD107DDC9054CC(Hash modelHash) { return _i<float>(0xC6AD107DDC9054CC, modelHash); }
	inline Any _GetHasLowerableWheels(Vehicle vehicle) { return _i<Any>(0xDCA174A42133F08C, vehicle); }
	inline Any _HasVehicleRocketBoost(Vehicle vehicle) { return _i<Any>(0x36D782F68B309BDA, vehicle); }
	inline float _GetHeliMainRotorHealth(Vehicle vehicle) { return _i<float>(0xE4CB7541F413D2C5, vehicle); }
	inline float _GetHeliEngineHealth(Vehicle vehicle) { return _i<float>(0xAC51915D27E4A5F7, vehicle); }
	inline float _GetHeliTailRotorHealth(Vehicle vehicle) { return _i<float>(0xAE8CE82A4219AC8C, vehicle); }
	inline Any _0xA01BC64DD4BFBBAC(Vehicle vehicle, int p1) { return _i<Any>(0xA01BC64DD4BFBBAC, vehicle, p1); }
	inline Any _0xBA91D045575699AD(Any p0) { return _i<Any>(0xBA91D045575699AD, p0); }
	inline Any _DoesVehicleHaveDoor(Vehicle vehicle, int doorIndex) { return _i<Any>(0x645F4B6E8499F632, vehicle, doorIndex); }
	inline bool GetIsLeftVehicleHeadlightDamaged(Vehicle vehicle) { return _i<bool>(0x5EF77C9ADD3B11A3, vehicle); }
	inline bool GetIsRightVehicleHeadlightDamaged(Vehicle vehicle) { return _i<bool>(0xA7ECB73355EB2F20, vehicle); }
	inline bool GetIsVehicleEngineRunning(Vehicle vehicle) { return _i<bool>(0xAE31E7DF9B5B132E, vehicle); }
	inline bool GetIsVehiclePrimaryColourCustom(Vehicle vehicle) { return _i<bool>(0xF095C0405307B21B, vehicle); }
	inline bool GetIsVehicleSecondaryColourCustom(Vehicle vehicle) { return _i<bool>(0x910A32E7AAD2656C, vehicle); }
	inline Any _0x1DA0DA9CB3F0C8BF(Any p0) { return _i<Any>(0x1DA0DA9CB3F0C8BF, p0); }
	inline int GetLandingGearState(Vehicle vehicle) { return _i<int>(0x9B0F3DCA3DB0F4CD, vehicle); }
	inline Vehicle GetLastDrivenVehicle() { return _i<Vehicle>(0xB2D06FAEDE65B577); }
	inline Ped GetLastPedInVehicleSeat(Vehicle vehicle, int seatIndex) { return _i<Ped>(0x83F969AA1EE2A664, vehicle, seatIndex); }
	inline String GetLiveryName(Vehicle vehicle, int liveryIndex) { return _i<String>(0xB4C7A93837C91A1F, vehicle, liveryIndex); }
	inline String GetModSlotName(Vehicle vehicle, int modType) { return _i<String>(0x51F0FEB9F6AE98C0, vehicle, modType); }
	inline String GetModTextLabel(Vehicle vehicle, int modType, int modValue) { return _i<String>(0x8935624F8C5592CC, vehicle, modType, modValue); }
	inline int GetNumberOfVehicleColours(Vehicle vehicle) { return _i<int>(0x3B963160CD65D41E, vehicle); }
	inline Any _GetNumberOfVehicleDoors(Vehicle vehicle) { return _i<Any>(0x92922A607497B14D, vehicle); }
	inline int GetNumberOfVehicleNumberPlates() { return _i<int>(0x4C4D6B2644F458CB); }
	inline int GetNumModColors(int p0, bool p1) { return _i<int>(0xA551BE18C11A476D, p0, p1); }
	inline int GetNumModKits(Vehicle vehicle) { return _i<int>(0x33F2E3FE70EAAE1D, vehicle); }
	inline int GetNumVehicleMods(Vehicle vehicle, int modType) { return _i<int>(0xE38E9162A2500646, vehicle, modType); }
	inline int GetNumVehicleWindowTints() { return _i<int>(0x9D1224004B3A6707); }
	inline Ped GetPedInVehicleSeat(Vehicle vehicle, int index, Any p2) { return _i<Ped>(0xBB40DD2270B65366, vehicle, index, p2); }
	inline Ped _GetPedUsingVehicleDoor(Vehicle vehicle, int doorIndex) { return _i<Ped>(0x218297BF0CFD853B, vehicle, doorIndex); }
	inline float GetPositionInRecording(Any p0) { return _i<float>(0x2DACD605FC681475, p0); }
	inline Vector3 GetPositionOfVehicleRecordingAtTime(int p0, float p1, String p2) { return _i<Vector3>(0xD242728AA6F0FBA2, p0, p1, p2); }
	inline Vector3 _0x92523B76657A517D(Any p0, float p1) { return _i<Vector3>(0x92523B76657A517D, p0, p1); }
	inline Vehicle GetRandomVehicleBackBumperInSphere(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return _i<Vehicle>(0xB50807EABE20A8DC, p0, p1, p2, p3, p4, p5, p6); }
	inline Vehicle GetRandomVehicleFrontBumperInSphere(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return _i<Vehicle>(0xC5574E0AEB86BA68, p0, p1, p2, p3, p4, p5, p6); }
	inline Vehicle GetRandomVehicleInSphere(float x, float y, float z, float radius, Hash modelHash, int flags) { return _i<Vehicle>(0x386F6CE5BAF6091C, x, y, z, radius, modelHash, flags); }
	inline Vector3 GetRotationOfVehicleRecordingAtTime(Any p0, float p1, Any* p2) { return _i<Vector3>(0x2058206FBE79A8AD, p0, p1, p2); }
	inline Vector3 _0xF0F2103EFAF8CBA7(Any p0, float p1) { return _i<Vector3>(0xF0F2103EFAF8CBA7, p0, p1); }
	inline float GetTimePositionInRecording(Any p0) { return _i<float>(0x5746F3A7AB7FE544, p0); }
	inline Any GetTotalDurationOfVehicleRecording(Any p0, Any p1) { return _i<Any>(0x0E48D1C262390950, p0, p1); }
	inline float GetTotalDurationOfVehicleRecordingId(Any p0) { return _i<float>(0x102D125411A7B6E6, p0); }
	inline Entity GetTrainCarriage(Vehicle train, int trailerNumber) { return _i<Entity>(0x08AAFD0814722BC3, train, trailerNumber); }
	inline float GetVehicleAcceleration(Vehicle vehicle) { return _i<float>(0x5DD35C8D074E57AE, vehicle); }
	inline Vehicle GetVehicleAttachedToCargobob(Vehicle cargobob) { return _i<Vehicle>(0x873B82D42AC2B9E5, cargobob); }
	inline float GetVehicleBodyHealth(Vehicle vehicle) { return _i<float>(0xF271147EB7B40F12, vehicle); }
	inline Any _SetVehicleBombs(Any p0) { return _i<Any>(0xEA12BD130D7569A1, p0); }
	inline Any _CanVehicleParachuteBeActivated(Vehicle vehicle) { return _i<Any>(0xA916396DF4154EE3, vehicle); }
	inline Hash GetVehicleCauseOfDestruction(Vehicle vehicle) { return _i<Hash>(0xE495D1EF4C91FD20, vehicle); }
	inline int GetVehicleClass(Vehicle vehicle) { return _i<int>(0x29439776AAA00A62, vehicle); }
	inline float _0x00C09F246ABEDD82(int vehicleClass) { return _i<float>(0x00C09F246ABEDD82, vehicleClass); }
	inline int GetVehicleClassFromName(Hash modelHash) { return _i<int>(0xDEDF1C8BD47C2200, modelHash); }
	inline float GetVehicleClassMaxAcceleration(int vehicleClass) { return _i<float>(0x2F83E7E45D9EA7AE, vehicleClass); }
	inline float GetVehicleClassMaxAgility(int vehicleClass) { return _i<float>(0x4F930AD022D6DE3B, vehicleClass); }
	inline float GetVehicleClassMaxBraking(int vehicleClass) { return _i<float>(0x4BF54C16EC8FEC03, vehicleClass); }
	inline float GetVehicleClassMaxTraction(int vehicleClass) { return _i<float>(0xDBC86D85C5059461, vehicleClass); }
	inline Void GetVehicleColor(Vehicle vehicle, int* r, int* g, int* b) { return _i<Void>(0xF3CC740D36221548, vehicle, r, g, b); }
	inline Void GetVehicleColours(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { return _i<Void>(0xA19435F193E081AC, vehicle, colorPrimary, colorSecondary); }
	inline int _0xEEBFC7A7EFDC35B4(Vehicle vehicle) { return _i<int>(0xEEBFC7A7EFDC35B4, vehicle); }
	inline int GetVehicleColourCombination(Vehicle vehicle) { return _i<int>(0x6A842D197F845D56, vehicle); }
	inline Any _GetVehicleCountermeasures(Any p0) { return _i<Any>(0xF846AA63DF56B804, p0); }
	inline Any _0x36492C2F0D134C56(Any p0) { return _i<Any>(0x36492C2F0D134C56, p0); }
	inline Void GetVehicleCustomPrimaryColour(Vehicle vehicle, int* r, int* g, int* b) { return _i<Void>(0xB64CF2CCA9D95F52, vehicle, r, g, b); }
	inline Void GetVehicleCustomSecondaryColour(Vehicle vehicle, int* r, int* g, int* b) { return _i<Void>(0x8389CD56CA8072DC, vehicle, r, g, b); }
	inline Vector3 GetVehicleDeformationAtPos(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return _i<Vector3>(0x4EC6CFBC7B2E9536, vehicle, offsetX, offsetY, offsetZ); }
	inline float GetVehicleDirtLevel(Vehicle vehicle) { return _i<float>(0x8F17BC8BA08DA62B, vehicle); }
	inline bool GetVehicleDoorsLockedForPlayer(Vehicle vehicle, Player player) { return _i<bool>(0xF6AF6CB341349015, vehicle, player); }
	inline float GetVehicleDoorAngleRatio(Vehicle vehicle, int door) { return _i<float>(0xFE3F9C29F7B32BD5, vehicle, door); }
	inline int GetVehicleDoorLockStatus(Vehicle vehicle) { return _i<int>(0x25BC98A59C2EA962, vehicle); }
	inline float GetVehicleEngineHealth(Vehicle vehicle) { return _i<float>(0xC45D23BAF168AAB8, vehicle); }
	inline float GetVehicleEnveffScale(Vehicle vehicle) { return _i<float>(0xA82819CAC9C4C403, vehicle); }
	inline float _0x53AF99BAA671CA47(Vehicle vehicle) { return _i<float>(0x53AF99BAA671CA47, vehicle); }
	inline Void GetVehicleExtraColours(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { return _i<Void>(0x3BC4245933A166F7, vehicle, pearlescentColor, wheelColor); }
	inline Void _GetVehicleInteriorColour(Vehicle vehicle, int* color) { return _i<Void>(0x7D1464D472D32136, vehicle, color); }
	inline Void _GetVehicleDashboardColour(Vehicle vehicle, int* color) { return _i<Void>(0xB7635E80A5C31BFF, vehicle, color); }
	inline Any _GetVehicleHoverModePercentage(Any p0) { return _i<Any>(0xDA62027C8BDB326E, p0); }
	inline Any _0x50634E348C8D44EF(Any p0) { return _i<Any>(0x50634E348C8D44EF, p0); }
	inline Any _0xE43701C36CAFF1A4(Any p0) { return _i<Any>(0xE43701C36CAFF1A4, p0); }
	inline Any _HasVehicleParachute(Vehicle vehicle) { return _i<Any>(0xBC9CFF381338CB4F, vehicle); }
	inline float _GetVehicleBodyHealth2(Vehicle vehicle, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return _i<float>(0xB8EF61207C2393A9, vehicle, p1, p2, p3, p4, p5, p6); }
	inline Any _0x6EAAEFC76ACC311F(Any p0) { return _i<Any>(0x6EAAEFC76ACC311F, p0); }
	inline int _0xE6B0E8CFC3633BF0(Vehicle vehicle) { return _i<int>(0xE6B0E8CFC3633BF0, vehicle); }
	inline Any _0xCA4AC3EAAE46EC7B(Any p0, Any p1) { return _i<Any>(0xCA4AC3EAAE46EC7B, p0, p1); }
	inline Any _0x8533CAFDE1F0F336(Any p0) { return _i<Any>(0x8533CAFDE1F0F336, p0); }
	inline bool _0xD4C4642CB7F50B5D(Vehicle vehicle) { return _i<bool>(0xD4C4642CB7F50B5D, vehicle); }
	inline Hash GetVehicleLayoutHash(Vehicle vehicle) { return _i<Hash>(0x28D37D4F71AC5C58, vehicle); }
	inline bool GetVehicleLightsState(Vehicle vehicle, bool* lightsOn, bool* highbeamsOn) { return _i<bool>(0xB91B4C20085BD12F, vehicle, lightsOn, highbeamsOn); }
	inline Any _0x60190048C0764A26(Any p0) { return _i<Any>(0x60190048C0764A26, p0); }
	inline Any _0x5ECB40269053C0D4(Any p0) { return _i<Any>(0x5ECB40269053C0D4, p0); }
	inline int GetVehicleLivery(Vehicle vehicle) { return _i<int>(0x2BB9230590DA5E8A, vehicle); }
	inline int GetVehicleLiveryCount(Vehicle vehicle) { return _i<int>(0x87B63E25A529D526, vehicle); }
	inline bool _GetVehicleOwner(Vehicle vehicle, Entity* entity) { return _i<bool>(0x8F5EBAB1F260CFCE, vehicle, entity); }
	inline float GetVehicleMaxBraking(Vehicle vehicle) { return _i<float>(0xAD7E85FC227197C4, vehicle); }
	inline int GetVehicleMaxNumberOfPassengers(Vehicle vehicle) { return _i<int>(0xA7C4F2C6E744A550, vehicle); }
	inline float GetVehicleMaxTraction(Vehicle vehicle) { return _i<float>(0xA132FB5370554DB0, vehicle); }
	inline int GetVehicleMod(Vehicle vehicle, int modType) { return _i<int>(0x772960298DA26FDB, vehicle, modType); }
	inline float GetVehicleModelAcceleration(Hash modelHash) { return _i<float>(0x8C044C5C84505B6A, modelHash); }
	inline float _0x53409B5163D5B846(Hash modelHash) { return _i<float>(0x53409B5163D5B846, modelHash); }
	inline float _GetVehicleModelMaxSpeed(Hash modelHash) { return _i<float>(0xF417C2502FFFED43, modelHash); }
	inline float GetVehicleModelMaxBraking(Hash modelHash) { return _i<float>(0xDC53FD41B4ED944C, modelHash); }
	inline float _0xBFBA3BA79CFF7EBF(Hash modelHash) { return _i<float>(0xBFBA3BA79CFF7EBF, modelHash); }
	inline float GetVehicleModelMaxTraction(Hash modelHash) { return _i<float>(0x539DE94D44FDFD0D, modelHash); }
	inline int GetVehicleModelNumberOfSeats(Hash modelHash) { return _i<int>(0x2AD93716F184EDA4, modelHash); }
	inline Any _0x5873C14A52D74236(Any p0) { return _i<Any>(0x5873C14A52D74236, p0); }
	inline Void GetVehicleModColor1(Vehicle vehicle, int* paintType, int* color, int* p3) { return _i<Void>(0xE8D65CA700C9A693, vehicle, paintType, color, p3); }
	inline String GetVehicleModColor1Name(Vehicle vehicle, bool p1) { return _i<String>(0xB45085B721EFD38C, vehicle, p1); }
	inline Void GetVehicleModColor2(Vehicle vehicle, int* paintType, int* color) { return _i<Void>(0x81592BE4E3878728, vehicle, paintType, color); }
	inline String GetVehicleModColor2Name(Vehicle vehicle) { return _i<String>(0x4967A516ED23A5A1, vehicle); }
	inline Any _GetVehicleModData(Vehicle vehicle, int modType, int modIndex) { return _i<Any>(0x4593CF82AA179706, vehicle, modType, modIndex); }
	inline int GetVehicleModKit(Vehicle vehicle) { return _i<int>(0x6325D1A044AE510D, vehicle); }
	inline int GetVehicleModKitType(Vehicle vehicle) { return _i<int>(0xFC058F5121E54C32, vehicle); }
	inline Any GetVehicleModModifierValue(Vehicle vehicle, int modType, int modIndex) { return _i<Any>(0x90A38E9838E0A8C1, vehicle, modType, modIndex); }
	inline bool GetVehicleModVariation(Vehicle vehicle, int modType) { return _i<bool>(0xB3924ECD70E095DC, vehicle, modType); }
	inline Void _GetVehicleNeonLightsColour(Vehicle vehicle, int* r, int* g, int* b) { return _i<Void>(0x7619EEE8C886757F, vehicle, r, g, b); }
	inline bool _IsVehicleNeonLightEnabled(Vehicle vehicle, int index) { return _i<bool>(0x8C4B92553E4766A5, vehicle, index); }
	inline int GetVehicleNumberOfPassengers(Vehicle vehicle) { return _i<int>(0x24CB2137731FFE89, vehicle); }
	inline String GetVehicleNumberPlateText(Vehicle vehicle) { return _i<String>(0x7CE1CCB9B293020E, vehicle); }
	inline int GetVehicleNumberPlateTextIndex(Vehicle vehicle) { return _i<int>(0xF11BC2DD9A3E7195, vehicle); }
	inline Any _0x2C8CBFE1EA5FC631(Any p0) { return _i<Any>(0x2C8CBFE1EA5FC631, p0); }
	inline Any _0x42A4BEB35D372407(Any p0) { return _i<Any>(0x42A4BEB35D372407, p0); }
	inline float GetVehiclePetrolTankHealth(Vehicle vehicle) { return _i<float>(0x7D5DABE888D2D074, vehicle); }
	inline int GetVehiclePlateType(Vehicle vehicle) { return _i<int>(0x9CCC9525BF2408E0, vehicle); }
	inline Any GetVehicleRecordingId(int p0, String p1) { return _i<Any>(0x21543C612379DB3C, p0, p1); }
	inline Void _0xDF7E3EEB29642C38(Vehicle vehicle, Vector3* out1, Vector3* out2) { return _i<Void>(0xDF7E3EEB29642C38, vehicle, out1, out2); }
	inline bool GetVehicleTrailerVehicle(Vehicle vehicle, Vehicle* trailer) { return _i<bool>(0x1CDD6BADC297830D, vehicle, trailer); }
	inline bool GetVehicleTyresCanBurst(Vehicle vehicle) { return _i<bool>(0x678B9BB8C3F58FEB, vehicle); }
	inline Void GetVehicleTyreSmokeColor(Vehicle vehicle, int* r, int* g, int* b) { return _i<Void>(0xB635392A4938B3C3, vehicle, r, g, b); }
	inline Any _0x8181CE2F25CB9BB7(Any p0, Any p1) { return _i<Any>(0x8181CE2F25CB9BB7, p0, p1); }
	inline int GetVehicleWheelType(Vehicle vehicle) { return _i<int>(0xB3ED1BFB4BE636DC, vehicle); }
	inline int GetVehicleWindowTint(Vehicle vehicle) { return _i<int>(0x0EE21293DAD47C95, vehicle); }
	inline bool _0x91D6DD290888CBAB() { return _i<bool>(0x91D6DD290888CBAB); }
	inline bool HasPreloadModsFinished(Any p0) { return _i<bool>(0x06F43E5175EB6D96, p0); }
	inline bool HasVehicleAssetLoaded(int vehicleAsset) { return _i<bool>(0x1BBE0523B8DB9A21, vehicleAsset); }
	inline Any _0x5BA68A0840D546AC(Any p0, Any p1) { return _i<Any>(0x5BA68A0840D546AC, p0, p1); }
	inline Any _0x6ADAABD3068C5235() { return _i<Any>(0x6ADAABD3068C5235); }
	inline bool HasVehicleRecordingBeenLoaded(Any p0, Any* p1) { return _i<bool>(0x300D614A4C785FC4, p0, p1); }
	inline bool _IsVehicleModLoadDone(Vehicle vehicle) { return _i<bool>(0x9A83F5F9963775EF, vehicle); }
	inline Void _0x48ADC8A773564670() { return _i<Void>(0x48ADC8A773564670); }
	inline bool _0x62CA17B74C435651(Vehicle vehicle) { return _i<bool>(0x62CA17B74C435651, vehicle); }
	inline bool _AnyPassengersRappeling(Vehicle vehicle) { return _i<bool>(0x291E373D483E7EE7, vehicle); }
	inline bool IsAnyVehicleNearPoint(float x, float y, float z, float radius) { return _i<bool>(0x61E1DD6125A3EEE6, x, y, z, radius); }
	inline bool IsBigVehicle(Vehicle vehicle) { return _i<bool>(0x9F243D3919F442FE, vehicle); }
	inline Any _0xB0AD1238A709B1A2(Any p0) { return _i<Any>(0xB0AD1238A709B1A2, p0); }
	inline bool IsCopVehicleInArea3D(float x1, float x2, float y1, float y2, float z1, float z2) { return _i<bool>(0x7EEF65D5F153E26A, x1, x2, y1, y2, z1, z2); }
	inline bool _IsVehicleNearEntity(Vehicle vehicle, Entity entity) { return _i<bool>(0x57715966069157AD, vehicle, entity); }
	inline bool _0x639431E895B9AA57(Ped ped, Vehicle vehicle, bool p2, bool p3, bool p4) { return _i<bool>(0x639431E895B9AA57, ped, vehicle, p2, p3, p4); }
	inline bool _0x89D630CF5EA96D23(Vehicle vehicle, Entity entity) { return _i<bool>(0x89D630CF5EA96D23, vehicle, entity); }
	inline bool _0x634148744F385576(Vehicle vehicle) { return _i<bool>(0x634148744F385576, vehicle); }
	inline bool IsHeliPartBroken(Vehicle vehicle, bool p1, bool p2, bool p3) { return _i<bool>(0xBC74B4BE25EB6C8A, vehicle, p1, p2, p3); }
	inline Any _0xB09D25E77C33EB3F(Any p0, Any p1, Any p2) { return _i<Any>(0xB09D25E77C33EB3F, p0, p1, p2); }
	inline bool _VehicleHasLandingGear(Vehicle vehicle) { return _i<bool>(0x4198AB0022B15F87, vehicle); }
	inline bool IsPlaybackGoingOnForVehicle(Any p0) { return _i<bool>(0x1C8A4C2C19E68EEC, p0); }
	inline bool IsPlaybackUsingAiGoingOnForVehicle(Any p0) { return _i<bool>(0xAEA8FD591FAD4106, p0); }
	inline Any _IsVehicleRocketBoostActive(Vehicle vehicle) { return _i<Any>(0x3D34E80EED4AE3BE, vehicle); }
	inline bool _0xF7F203E31F96F6A1(Vehicle vehicle, bool flag) { return _i<bool>(0xF7F203E31F96F6A1, vehicle, flag); }
	inline bool IsTaxiLightOn(Vehicle vehicle) { return _i<bool>(0x7504C0F113AB50FC, vehicle); }
	inline Any _IsThisModelAnAmphibiousCar(Hash model) { return _i<Any>(0x633F6F44A537EBB6, model); }
	inline Any _0xA1A9FC1C76A6730D(Any p0) { return _i<Any>(0xA1A9FC1C76A6730D, p0); }
	inline bool IsThisModelABicycle(Hash model) { return _i<bool>(0xBF94DD42F63BDED2, model); }
	inline bool IsThisModelABike(Hash model) { return _i<bool>(0xB50C0B0CEDC6CE84, model); }
	inline bool IsThisModelABoat(Hash model) { return _i<bool>(0x45A9187928F4B9E3, model); }
	inline bool IsThisModelACar(Hash model) { return _i<bool>(0x7F6DB52EEFC96DF8, model); }
	inline bool IsThisModelAHeli(Hash model) { return _i<bool>(0xDCE4334788AF94EA, model); }
	inline bool _IsThisModelAnEmergencyBoat(Hash model) { return _i<bool>(0x9537097412CF75FE, model); }
	inline bool IsThisModelAPlane(Hash model) { return _i<bool>(0xA0948AB42D7BA0DE, model); }
	inline bool IsThisModelAQuadbike(Hash model) { return _i<bool>(0x39DAC362EE65FA28, model); }
	inline bool IsThisModelATrain(Hash model) { return _i<bool>(0xAB935175B22E822B, model); }
	inline bool IsToggleModOn(Vehicle vehicle, int modType) { return _i<bool>(0x84B233A8C8FC8AE7, vehicle, modType); }
	inline bool _0xE33FFA906CE74880(Vehicle vehicle, Any p1) { return _i<bool>(0xE33FFA906CE74880, vehicle, p1); }
	inline bool IsVehicleAlarmActivated(Vehicle vehicle) { return _i<bool>(0x4319E335B71FFF34, vehicle); }
	inline bool IsVehicleAttachedToCargobob(Vehicle cargobob, Vehicle vehicleAttached) { return _i<bool>(0xD40148F22E81A1D9, cargobob, vehicleAttached); }
	inline bool IsVehicleAttachedToTowTruck(Vehicle towTruck, Vehicle vehicle) { return _i<bool>(0x146DF9EC4C4B9FD4, towTruck, vehicle); }
	inline bool IsVehicleAttachedToTrailer(Vehicle vehicle) { return _i<bool>(0xE7CF3C4F9F489F0C, vehicle); }
	inline bool IsVehicleAConvertible(Vehicle vehicle, bool p1) { return _i<bool>(0x52F357A30698BCCE, vehicle, p1); }
	inline bool _0x27B926779DEB502D(Vehicle vehicle, bool p1) { return _i<bool>(0x27B926779DEB502D, vehicle, p1); }
	inline bool IsVehicleBumperBrokenOff(Vehicle vehicle, bool front) { return _i<bool>(0x468056A6BB6F3846, vehicle, front); }
	inline bool IsVehicleDoorDamaged(Vehicle veh, int doorID) { return _i<bool>(0xB8E181E559464527, veh, doorID); }
	inline bool IsVehicleDoorFullyOpen(Vehicle vehicle, int doorIndex) { return _i<bool>(0x3E933CFF7B111C22, vehicle, doorIndex); }
	inline bool IsVehicleDriveable(Vehicle vehicle, bool isOnFireCheck) { return _i<bool>(0x4C241E39B23DF959, vehicle, isOnFireCheck); }
	inline bool IsVehicleExtraTurnedOn(Vehicle vehicle, int extraId) { return _i<bool>(0xD2E6822DBFD6C8BD, vehicle, extraId); }
	inline bool IsVehicleHighDetail(Vehicle vehicle) { return _i<bool>(0x1F25887F3C104278, vehicle); }
	inline bool IsVehicleInBurnout(Vehicle vehicle) { return _i<bool>(0x1297A88E081430EB, vehicle); }
	inline bool IsVehicleInGarageArea(String garageName, Vehicle vehicle) { return _i<bool>(0xCEE4490CD57BB3C2, garageName, vehicle); }
	inline bool IsVehicleModel(Vehicle vehicle, Hash model) { return _i<bool>(0x423E8DE37D934D89, vehicle, model); }
	inline bool IsVehicleOnAllWheels(Vehicle vehicle) { return _i<bool>(0xB104CD1BABF302E2, vehicle); }
	inline Any _0x3DE51E9C80B116CF(Any p0) { return _i<Any>(0x3DE51E9C80B116CF, p0); }
	inline Any _0x48C633E94A8142A7(Any p0) { return _i<Any>(0x48C633E94A8142A7, p0); }
	inline bool IsVehicleSearchlightOn(Vehicle vehicle) { return _i<bool>(0xC0F97FCE55094987, vehicle); }
	inline bool IsVehicleSeatFree(Vehicle vehicle, int seatIndex, Any p2) { return _i<bool>(0x22AC59A870E6A669, vehicle, seatIndex, p2); }
	inline bool _IsVehicleSirenSoundOn(Vehicle vehicle) { return _i<bool>(0xB5CC40FBCB586380, vehicle); }
	inline bool IsVehicleSirenOn(Vehicle vehicle) { return _i<bool>(0x4C9BF537BE2634B2, vehicle); }
	inline bool _IsVehicleShopResprayAllowed(Vehicle vehicle) { return _i<bool>(0x8D474C8FAEFF6CDE, vehicle); }
	inline bool IsVehicleStolen(Vehicle vehicle) { return _i<bool>(0x4AF9BD80EEBEB453, vehicle); }
	inline bool IsVehicleStopped(Vehicle vehicle) { return _i<bool>(0x5721B434AD84D57A, vehicle); }
	inline bool IsVehicleStoppedAtTrafficLights(Vehicle vehicle) { return _i<bool>(0x2959F696AE390A99, vehicle); }
	inline bool IsVehicleStuckOnRoof(Vehicle vehicle) { return _i<bool>(0xB497F06B288DCFDF, vehicle); }
	inline bool IsVehicleStuckTimerUp(Vehicle vehicle, int p1, int p2) { return _i<bool>(0x679BE1DAF71DA874, vehicle, p1, p2); }
	inline bool IsVehicleTyreBurst(Vehicle vehicle, int wheelID, bool completely) { return _i<bool>(0xBA291848A0815CA9, vehicle, wheelID, completely); }
	inline bool IsVehicleVisible(Vehicle vehicle) { return _i<bool>(0xAA0A52D24FB98293, vehicle); }
	inline Any _0x563B65A643ED072E(Any p0, Any p1, Any p2) { return _i<Any>(0x563B65A643ED072E, p0, p1, p2); }
	inline bool IsVehicleWindowIntact(Vehicle vehicle, int windowIndex) { return _i<bool>(0x46E571A0E20D01F1, vehicle, windowIndex); }
	inline Void _0xCFD778E7904C255E(Vehicle vehicle) { return _i<Void>(0xCFD778E7904C255E, vehicle); }
	inline Void LowerConvertibleRoof(Vehicle vehicle, bool instantlyLower) { return _i<Void>(0xDED51F703D0FA83D, vehicle, instantlyLower); }
	inline Void _SetVehicleEnginePowerMultiplier(Vehicle vehicle, float value) { return _i<Void>(0x93A3996368C94158, vehicle, value); }
	inline Void _0x51DB102F4A3BA5E0(bool p0) { return _i<Void>(0x51DB102F4A3BA5E0, p0); }
	inline Void OpenBombBayDoors(Vehicle vehicle) { return _i<Void>(0x87E7F24270732CB1, vehicle); }
	inline Void _0x5EE5632F47AE9695(Any p0, Any p1) { return _i<Void>(0x5EE5632F47AE9695, p0, p1); }
	inline Void PausePlaybackRecordedVehicle(Any p0) { return _i<Void>(0x632A689BF42301B1, p0); }
	inline Void _EjectJb700Roof(Vehicle vehicle, float x, float y, float z) { return _i<Void>(0xE38CB9D7D39FDBCC, vehicle, x, y, z); }
	inline Void _DetachVehicleWindscreen(Vehicle vehicle) { return _i<Void>(0x6D645D59FB5F5AD3, vehicle); }
	inline Void PreloadVehicleMod(Any p0, Any p1, Any p2) { return _i<Void>(0x758F49C24925568A, p0, p1, p2); }
	inline Void RaiseConvertibleRoof(Vehicle vehicle, bool instantlyRaise) { return _i<Void>(0x8F5FB35D7E88FC70, vehicle, instantlyRaise); }
	inline Void ReleasePreloadMods(Vehicle vehicle) { return _i<Void>(0x445D79F995508307, vehicle); }
	inline Void RemovePickUpRopeForCargobob(Vehicle cargobob) { return _i<Void>(0x9768CF648F54C804, cargobob); }
	inline bool _0x1033371FC8E842A7(Any p0) { return _i<bool>(0x1033371FC8E842A7, p0); }
	inline Void RemoveVehiclesFromGeneratorsInArea(float x1, float y1, float z1, float x2, float y2, float z2, Any unk) { return _i<Void>(0x46A1E1A299EC4BBA, x1, y1, z1, x2, y2, z2, unk); }
	inline Void RemoveVehicleAsset(int vehicleAsset) { return _i<Void>(0xACE699C71AB9DEB5, vehicleAsset); }
	inline Void _0xE30524E1871F481D(Any p0) { return _i<Void>(0xE30524E1871F481D, p0); }
	inline Void RemoveVehicleHighDetailModel(Vehicle vehicle) { return _i<Void>(0x00689CDE5F7C6787, vehicle); }
	inline Void RemoveVehicleMod(Vehicle vehicle, int modType) { return _i<Void>(0x92D619E420858204, vehicle, modType); }
	inline Void RemoveVehicleRecording(Any p0, Any* p1) { return _i<Void>(0xF1160ACCF98A3FC8, p0, p1); }
	inline Void RemoveVehicleStuckCheck(Vehicle vehicle) { return _i<Void>(0x8386BFB614D06749, vehicle); }
	inline Void RemoveVehicleUpsidedownCheck(Vehicle vehicle) { return _i<Void>(0xC53EB42A499A7E90, vehicle); }
	inline Void RemoveVehicleWindow(Vehicle vehicle, int windowIndex) { return _i<Void>(0xA711568EEDB43069, vehicle, windowIndex); }
	inline Void RequestVehicleAsset(Hash vehicleHash, int vehicleAsset) { return _i<Void>(0x81A15811460FAB3A, vehicleHash, vehicleAsset); }
	inline Void _0xDBA3C090E3D74690(Vehicle vehicle) { return _i<Void>(0xDBA3C090E3D74690, vehicle); }
	inline Void RequestVehicleHighDetailModel(Vehicle vehicle) { return _i<Void>(0xA6E9FDCB2C76785E, vehicle); }
	inline Void RequestVehicleRecording(Any p0, Any* p1) { return _i<Void>(0xAF514CABE74CBF15, p0, p1); }
	inline Void _0xE2F53F172B45EDE1() { return _i<Void>(0xE2F53F172B45EDE1); }
	inline Void ResetVehicleStuckTimer(Vehicle vehicle, int nullAttributes) { return _i<Void>(0xD7591B0065AFAA7A, vehicle, nullAttributes); }
	inline Void ResetVehicleWheels(Vehicle vehicle, bool toggle) { return _i<Void>(0x21D2E5662C1F6FED, vehicle, toggle); }
	inline Void RollDownWindow(Vehicle vehicle, int windowIndex) { return _i<Void>(0x7AD9E6CE657D69E3, vehicle, windowIndex); }
	inline Void RollDownWindows(Vehicle vehicle) { return _i<Void>(0x85796B0549DDE156, vehicle); }
	inline Void RollUpWindow(Vehicle vehicle, int windowIndex) { return _i<Void>(0x602E548F46E24D59, vehicle, windowIndex); }
	inline Void _0x5845066D8A1EA7F7(Vehicle vehicle, float x, float y, float z, Any p4) { return _i<Void>(0x5845066D8A1EA7F7, vehicle, x, y, z, p4); }
	inline Void _0xE5810AC70602F2F5(Vehicle vehicle, float p1) { return _i<Void>(0xE5810AC70602F2F5, vehicle, p1); }
	inline Void _0x80E3357FDEF45C21(Any p0, Any p1) { return _i<Void>(0x80E3357FDEF45C21, p0, p1); }
	inline Void _0x3441CAD2F2231923(Vehicle vehicle, bool p1) { return _i<Void>(0x3441CAD2F2231923, vehicle, p1); }
	inline Void SetAllLowPriorityVehicleGeneratorsActive(bool active) { return _i<Void>(0x608207E7A8FB787C, active); }
	inline Void SetAllVehicleGeneratorsActive() { return _i<Void>(0x34AD89078831A4BC); }
	inline Void SetAllVehicleGeneratorsActiveInArea(float x1, float y1, float z1, float x2, float y2, float z2, bool p6, bool p7) { return _i<Void>(0xC12321827687FE4D, x1, y1, z1, x2, y2, z2, p6, p7); }
	inline Void _0x35E0654F4BAD7971(bool p0) { return _i<Void>(0x35E0654F4BAD7971, p0); }
	inline Void _SetSomeVehicleDensityMultiplierThisFrame(float value) { return _i<Void>(0x90B6DA738A9A25DA, value); }
	inline Void _0x73561D4425A021A2(Any p0, Any p1) { return _i<Void>(0x73561D4425A021A2, p0, p1); }
	inline Void _SetBikeLeanAngle(Vehicle vehicle, float x, float y) { return _i<Void>(0x9CFA4896C3A53CBB, vehicle, x, y); }
	inline Void SetBoatAnchor(Vehicle vehicle, bool toggle) { return _i<Void>(0x75DBEC174AEEAD10, vehicle, toggle); }
	inline Void _0x0A6A279F3AA4FD70(Vehicle vehicle, bool p1) { return _i<Void>(0x0A6A279F3AA4FD70, vehicle, p1); }
	inline Void _0xED5EDE9E676643C9(Any p0, Any p1) { return _i<Void>(0xED5EDE9E676643C9, p0, p1); }
	inline Void _0xE842A9398079BD82(Vehicle vehicle, float p1) { return _i<Void>(0xE842A9398079BD82, vehicle, p1); }
	inline Void _0xE3EBAAE484798530(Vehicle vehicle, bool p1) { return _i<Void>(0xE3EBAAE484798530, vehicle, p1); }
	inline Void _0x8F719973E1445BA2(Vehicle vehicle, bool p1) { return _i<Void>(0x8F719973E1445BA2, vehicle, p1); }
	inline Void _0xBD32E46AA95C1DD2(Any p0) { return _i<Void>(0xBD32E46AA95C1DD2, p0); }
	inline Void _0xA7DCDF4DED40A8F4(Vehicle vehicle, bool p1) { return _i<Void>(0xA7DCDF4DED40A8F4, vehicle, p1); }
	inline Void SetCanResprayVehicle(Vehicle vehicle, bool state) { return _i<Void>(0x52BBA29D5EC69356, vehicle, state); }
	inline Void _0x1201E8A3290A3B98(Any p0, Any p1) { return _i<Void>(0x1201E8A3290A3B98, p0, p1); }
	inline Void _0x1F34B0626C594380(Any p0, Any p1) { return _i<Void>(0x1F34B0626C594380, p0, p1); }
	inline Void _0x72BECCF4B829522E(Any p0, Any p1) { return _i<Void>(0x72BECCF4B829522E, p0, p1); }
	inline Void _0x571FEB383F629926(Vehicle cargobob, bool p1) { return _i<Void>(0x571FEB383F629926, cargobob, p1); }
	inline Void SetCargobobPickupMagnetActive(Vehicle cargobob, bool isActive) { return _i<Void>(0x9A665550F8DA349B, cargobob, isActive); }
	inline Void _0x56EB5E94318D3FB6(Vehicle vehicle, bool p1) { return _i<Void>(0x56EB5E94318D3FB6, vehicle, p1); }
	inline Void _0xA17BAD153B51547E(Vehicle cargobob, float p1) { return _i<Void>(0xA17BAD153B51547E, cargobob, p1); }
	inline Void _0x685D5561680D088B(Vehicle vehicle, float p1) { return _i<Void>(0x685D5561680D088B, vehicle, p1); }
	inline Void _0xED8286F71A819BAA(Vehicle cargobob, float p1) { return _i<Void>(0xED8286F71A819BAA, cargobob, p1); }
	inline Void _0x6D8EAC07506291FB(Vehicle cargobob, float p1) { return _i<Void>(0x6D8EAC07506291FB, cargobob, p1); }
	inline Void _0x66979ACF5102FD2F(Vehicle cargobob, float p1) { return _i<Void>(0x66979ACF5102FD2F, cargobob, p1); }
	inline Void _0x9BDDC73CC6A115D4(Vehicle vehicle, bool p1, bool p2) { return _i<Void>(0x9BDDC73CC6A115D4, vehicle, p1, p2); }
	inline Void _0xE301BD63E9E13CF0(Vehicle vehicle, Vehicle cargobob) { return _i<Void>(0xE301BD63E9E13CF0, vehicle, cargobob); }
	inline Void SetCargobobPickupMagnetStrength(Vehicle cargobob, float strength) { return _i<Void>(0xBCBFCD9D1DAC19E2, cargobob, strength); }
	inline Void _0xCF1182F682F65307(Any p0, float p1) { return _i<Void>(0xCF1182F682F65307, p0, p1); }
	inline Void _0x0D5F65A8F4EBDAB5(Any p0, Any p1) { return _i<Void>(0x0D5F65A8F4EBDAB5, p0, p1); }
	inline Void _0xB9562064627FF9DB(Any p0, Any p1) { return _i<Void>(0xB9562064627FF9DB, p0, p1); }
	inline Void _0xFC40CBF7B90CA77C(Any p0) { return _i<Void>(0xFC40CBF7B90CA77C, p0); }
	inline Void _SetCarHighSpeedBumpSeverityMultiplier(float multiplier) { return _i<Void>(0x84FD40F56075E816, multiplier); }
	inline Void _0xB2E0C0D6922D31F2(Any p0, Any p1) { return _i<Void>(0xB2E0C0D6922D31F2, p0, p1); }
	inline Void SetConvertibleRoof(Vehicle vehicle, bool p1) { return _i<Void>(0xF39C4F538B5124C2, vehicle, p1); }
	inline Void _0x1A78AD3D8240536F(Vehicle vehicle, bool p1) { return _i<Void>(0x1A78AD3D8240536F, vehicle, p1); }
	inline Void _0x97841634EF7DF1D6(Any p0, Any p1) { return _i<Void>(0x97841634EF7DF1D6, p0, p1); }
	inline Void _0x26D99D5A82FD18E8(Any p0) { return _i<Void>(0x26D99D5A82FD18E8, p0); }
	inline Any _0xD4196117AF7BB974(Any p0, Any p1) { return _i<Any>(0xD4196117AF7BB974, p0, p1); }
	inline Void _0xEDBC8405B3895CC9(Any p0, Any p1) { return _i<Void>(0xEDBC8405B3895CC9, p0, p1); }
	inline Any _0x75627043C6AA90AD() { return _i<Any>(0x75627043C6AA90AD); }
	inline Void _0x8235F1BEAD557629(Any p0, Any p1) { return _i<Void>(0x8235F1BEAD557629, p0, p1); }
	inline Void _0x25367DE49D64CF16(Vehicle vehicle, bool p1) { return _i<Void>(0x25367DE49D64CF16, vehicle, p1); }
	inline Void _0xD4B8E3D1917BC86B(bool toggle) { return _i<Void>(0xD4B8E3D1917BC86B, toggle); }
	inline Void _0xB088E9A47AE6EDD5(Vehicle vehicle, bool p1) { return _i<Void>(0xB088E9A47AE6EDD5, vehicle, p1); }
	inline Void _0x91A0BD635321F145(Vehicle vehicle, bool p1) { return _i<Void>(0x91A0BD635321F145, vehicle, p1); }
	inline Void SetDisableVehiclePetrolTankDamage(Vehicle vehicle, bool toggle) { return _i<Void>(0x37C8252A7C92D017, vehicle, toggle); }
	inline Void SetDisableVehiclePetrolTankFires(Vehicle vehicle, bool toggle) { return _i<Void>(0x465BF26AB9684352, vehicle, toggle); }
	inline Void _DisplayDistantVehicles(bool toggle) { return _i<Void>(0xF796359A959DF65D, toggle); }
	inline Void _0xDBC631F109350B8C(Vehicle vehicle, bool p1) { return _i<Void>(0xDBC631F109350B8C, vehicle, p1); }
	inline Void _0x1087BC8EC540DAEB(Any p0, Any p1) { return _i<Void>(0x1087BC8EC540DAEB, p0, p1); }
	inline Void _SetVehicleDoorCanBreak(Vehicle vehicle, int doorIndex, bool isBreakable) { return _i<Void>(0x2FA133A4A9D37ED8, vehicle, doorIndex, isBreakable); }
	inline Void _0xE6C0C80B8C867537(bool p0) { return _i<Void>(0xE6C0C80B8C867537, p0); }
	inline Void SetFarDrawVehicles(bool toggle) { return _i<Void>(0x26324F33423F3CC3, toggle); }
	inline Void _0xA247F9EF01D8082E(Any p0) { return _i<Void>(0xA247F9EF01D8082E, p0); }
	inline Void SetForceHdVehicle(Vehicle vehicle, bool toggle) { return _i<Void>(0x97CE68CB032583F0, vehicle, toggle); }
	inline Void _0xB28B1FE5BFADD7F5(Vehicle vehicle, bool p1) { return _i<Void>(0xB28B1FE5BFADD7F5, vehicle, p1); }
	inline Void _0x4D9D109F63FEE1D4(Any p0, bool p1) { return _i<Void>(0x4D9D109F63FEE1D4, p0, p1); }
	inline Void _0x37EBBF3117BD6A25(Vehicle vehicle, float height) { return _i<Void>(0x37EBBF3117BD6A25, vehicle, height); }
	inline Void _0x428AD3E26C8D9EB0(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0x428AD3E26C8D9EB0, p0, p1, p2, p3, p4); }
	inline Void SetGarbageTrucks(bool toggle) { return _i<Void>(0x2AFD795EEAC8D30D, toggle); }
	inline Void _0x544996C0081ABDEB(Any p0, Any p1) { return _i<Void>(0x544996C0081ABDEB, p0, p1); }
	inline Void _0xFAF2A78061FD9EF4(Any p0, float p1, float p2, float p3) { return _i<Void>(0xFAF2A78061FD9EF4, p0, p1, p2, p3); }
	inline Void _0xAB31EF4DE6800CE9(Any p0, Any p1) { return _i<Void>(0xAB31EF4DE6800CE9, p0, p1); }
	inline Void _0x430A7631A84C9BE7(Any p0) { return _i<Void>(0x430A7631A84C9BE7, p0); }
	inline Void SetHeliBladesFullSpeed(Vehicle vehicle) { return _i<Void>(0xA178472EBB8AE60D, vehicle); }
	inline Void SetHeliBladesSpeed(Vehicle vehicle, float speed) { return _i<Void>(0xFD280B4D7F3ABC4D, vehicle, speed); }
	inline Void _0x94A68DA412C4007D(Any p0, Any p1) { return _i<Void>(0x94A68DA412C4007D, p0, p1); }
	inline Void _0x0A3F820A9A9A9AC5(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x0A3F820A9A9A9AC5, p0, p1, p2, p3); }
	inline Void _SetHelicopterRollPitchYawMult(Vehicle helicopter, float multiplier) { return _i<Void>(0x6E0859B530A365CC, helicopter, multiplier); }
	inline Void _0x4056EA1105F5ABD7(Any p0, Any p1) { return _i<Void>(0x4056EA1105F5ABD7, p0, p1); }
	inline bool _0x3EC8BF18AA453FE9(Vehicle vehicle, Any p1) { return _i<bool>(0x3EC8BF18AA453FE9, vehicle, p1); }
	inline Void _0xFE205F38AAA58E5B(Any p0, Any p1) { return _i<Void>(0xFE205F38AAA58E5B, p0, p1); }
	inline Void _0xE6F13851780394DA(Vehicle vehicle, float p1) { return _i<Void>(0xE6F13851780394DA, vehicle, p1); }
	inline Void _0x28B18377EB6E25F6(Any p0, Any p1) { return _i<Void>(0x28B18377EB6E25F6, p0, p1); }
	inline Void _0x84EA99C62CB3EF0C(Any p0, Any p1, Any p2) { return _i<Void>(0x84EA99C62CB3EF0C, p0, p1, p2); }
	inline Void _0x8EA86DF356801C7D(Any p0, Any p1) { return _i<Void>(0x8EA86DF356801C7D, p0, p1); }
	inline Void _0xC24075310A8B9CD1(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Void>(0xC24075310A8B9CD1, p0, p1, p2, p3, p4); }
	inline Void _0x5B91B229243351A8(Any p0, Any p1) { return _i<Void>(0x5B91B229243351A8, p0, p1); }
	inline Void SetLastDrivenVehicle(Vehicle vehicle) { return _i<Void>(0xACFB2463CC22BED2, vehicle); }
	inline Void _0xBC3CCA5844452B06(float p0) { return _i<Void>(0xBC3CCA5844452B06, p0); }
	inline Void SetMissionTrainAsNoLongerNeeded(Vehicle* train, bool p1) { return _i<Void>(0xBBE7648349B49BE8, train, p1); }
	inline Void SetMissionTrainCoords(Vehicle train, float x, float y, float z) { return _i<Void>(0x591CA673AA6AB736, train, x, y, z); }
	inline Void SetNumberOfParkedVehicles(int value) { return _i<Void>(0xCAA15F13EBD417FF, value); }
	inline Void _0x1B212B26DD3C04DF(Any p0, Any p1) { return _i<Void>(0x1B212B26DD3C04DF, p0, p1); }
	inline Void _0x66E3AAFACE2D1EB8(Any p0, Any p1, Any p2) { return _i<Void>(0x66E3AAFACE2D1EB8, p0, p1, p2); }
	inline Void SetParkedVehicleDensityMultiplierThisFrame(float multiplier) { return _i<Void>(0xEAE6DCC7EEE3DB1D, multiplier); }
	inline Void _SetCargobobHookPosition(Any p0, float p1, float p2, int state) { return _i<Void>(0x877C1EAEAC531023, p0, p1, p2, state); }
	inline Void _0xC0ED6438E6D39BA8(Any p0, Any p1, Any p2) { return _i<Void>(0xC0ED6438E6D39BA8, p0, p1, p2); }
	inline Void _0x2A86A0475B6A1434(Any p0, Any p1) { return _i<Void>(0x2A86A0475B6A1434, p0, p1); }
	inline Any _0x4C815EB175086F84(Any p0, Any p1) { return _i<Any>(0x4C815EB175086F84, p0, p1); }
	inline Void _0xE16142B94664DEFD(Vehicle vehicle, bool p1) { return _i<Void>(0xE16142B94664DEFD, vehicle, p1); }
	inline Void _0xAD2D28A1AFDFF131(Vehicle vehicle, float value) { return _i<Void>(0xAD2D28A1AFDFF131, vehicle, value); }
	inline Void SetPlaybackSpeed(Vehicle vehicle, float speed) { return _i<Void>(0x6683AB880E427778, vehicle, speed); }
	inline Void SetPlaybackToUseAi(Vehicle vehicle, int flag) { return _i<Void>(0xA549C3B37EA28131, vehicle, flag); }
	inline Void SetPlaybackToUseAiTryToRevertBackLater(Any p0, Any p1, Any p2, bool p3) { return _i<Void>(0x6E63860BBB190730, p0, p1, p2, p3); }
	inline Void SetPlayersLastVehicle(Vehicle vehicle) { return _i<Void>(0xBCDF8BAF56C87B6A, vehicle); }
	inline Void _0x4E74E62E0A97E901(Vehicle vehicle, bool p1) { return _i<Void>(0x4E74E62E0A97E901, vehicle, p1); }
	inline Void _0x796A877E459B99EA(Any p0, float p1, float p2, float p3) { return _i<Void>(0x796A877E459B99EA, p0, p1, p2, p3); }
	inline Void SetRandomBoats(bool toggle) { return _i<Void>(0x84436EC293B1415F, toggle); }
	inline Void SetRandomTrains(bool toggle) { return _i<Void>(0x80D9F74197EA47D9, toggle); }
	inline Void SetRandomVehicleDensityMultiplierThisFrame(float multiplier) { return _i<Void>(0xB3B3359379FE77D3, multiplier); }
	inline Void SetRenderTrainAsDerailed(Vehicle train, bool toggle) { return _i<Void>(0x317B11A312DF5534, train, toggle); }
	inline Void _SetVehicleRocketBoostActive(Vehicle vehicle, bool active) { return _i<Void>(0x81E1552E35DC3839, vehicle, active); }
	inline Void _SetVehicleRocketBoostPercentage(Vehicle vehicle, float percentage) { return _i<Void>(0xFEB2DDED3509562E, vehicle, percentage); }
	inline Void _0xEFC13B1CE30D755D(Any p0, Any p1) { return _i<Void>(0xEFC13B1CE30D755D, p0, p1); }
	inline Void _SetVehicleRocketBoostRefillTime(Vehicle vehicle, float time) { return _i<Void>(0xE00F2AB100B76E89, vehicle, time); }
	inline Void SetScriptVehicleGenerator(Any vehicleGenerator, bool enabled) { return _i<Void>(0xD9D620E0AC6DC4B0, vehicleGenerator, enabled); }
	inline Void _0x063AE2B2CC273588(Any p0, bool p1) { return _i<Void>(0x063AE2B2CC273588, p0, p1); }
	inline Void _0x78CEEE41F49F421F(Any p0, Any p1) { return _i<Void>(0x78CEEE41F49F421F, p0, p1); }
	inline Void _0x65B080555EA48149(Any p0) { return _i<Void>(0x65B080555EA48149, p0); }
	inline Void _0x7BBE7FF626A591FE(Any p0) { return _i<Void>(0x7BBE7FF626A591FE, p0); }
	inline Void _JitterVehicle(Vehicle vehicle, bool p1, float yaw, float pitch, float roll) { return _i<Void>(0xC59872A5134879C7, vehicle, p1, yaw, pitch, roll); }
	inline Void _SetPlaneMinHeightAboveGround(Vehicle plane, int height) { return _i<Void>(0xB893215D8D4C015B, plane, height); }
	inline Void SetTaxiLights(Vehicle vehicle, bool state) { return _i<Void>(0x598803E85E8448D9, vehicle, state); }
	inline Void _0x2FA2494B47FDD009(Any p0, Any p1) { return _i<Void>(0x2FA2494B47FDD009, p0, p1); }
	inline Void _0x2A8F319B392E7B3F(Vehicle vehicle, float p1) { return _i<Void>(0x2A8F319B392E7B3F, vehicle, p1); }
	inline Any _0x878C75C09FBDB942() { return _i<Any>(0x878C75C09FBDB942); }
	inline Void _0x95CF53B3D687F9FA(Vehicle vehicle) { return _i<Void>(0x95CF53B3D687F9FA, vehicle); }
	inline Void SetTrainCruiseSpeed(Vehicle train, float speed) { return _i<Void>(0x16469284DB8C62B5, train, speed); }
	inline Void SetTrainSpeed(Vehicle train, float speed) { return _i<Void>(0xAA0BC91BE0B796E3, train, speed); }
	inline Void _0x21973BBF8D17EDFA(Any p0, Any p1) { return _i<Void>(0x21973BBF8D17EDFA, p0, p1); }
	inline Void _0xF06A16CA55D138D8(Any p0, Any p1) { return _i<Void>(0xF06A16CA55D138D8, p0, p1); }
	inline Void _0xDFFCEF48E511DB48(Any p0, bool p1) { return _i<Void>(0xDFFCEF48E511DB48, p0, p1); }
	inline Void _0x21115BCD6E44656A(Any p0, bool p1) { return _i<Void>(0x21115BCD6E44656A, p0, p1); }
	inline Void _0x9BECD4B9FEF3F8A6(Vehicle vehicle, bool p1) { return _i<Void>(0x9BECD4B9FEF3F8A6, vehicle, p1); }
	inline Void _0x1F9FB66F3A3842D2(Vehicle vehicle, bool p1) { return _i<Void>(0x1F9FB66F3A3842D2, vehicle, p1); }
	inline Void SetVehicleExclusiveDriver(Vehicle vehicle, bool p1) { return _i<Void>(0x41062318F23ED854, vehicle, p1); }
	inline Void SetVehicleAlarm(Vehicle vehicle, bool state) { return _i<Void>(0xCDE5E70C1DDB954C, vehicle, state); }
	inline Void _0x7D6F9A3EF26136A0(Vehicle vehicle, bool p1, bool p2) { return _i<Void>(0x7D6F9A3EF26136A0, vehicle, p1, p2); }
	inline Void _0x1DDA078D12879EEE(Any p0, Any p1, Any p2) { return _i<Void>(0x1DDA078D12879EEE, p0, p1, p2); }
	inline Void SetVehicleAllowNoPassengersLockon(Vehicle veh, bool toggle) { return _i<Void>(0x5D14D4154BFE7B2C, veh, toggle); }
	inline Any SetVehicleAutomaticallyAttaches(Vehicle vehicle, Any p1, Any p2) { return _i<Any>(0x8BA6F76BC53A1493, vehicle, p1, p2); }
	inline Void _0xD3301660A57C9272(Any p0) { return _i<Void>(0xD3301660A57C9272, p0); }
	inline Void _0x9F3F689B814F2599(Vehicle vehicle, bool p1) { return _i<Void>(0x9F3F689B814F2599, vehicle, p1); }
	inline Void _0x870B8B7A766615C8(Any p0, Any p1, Any p2) { return _i<Void>(0x870B8B7A766615C8, p0, p1, p2); }
	inline Void SetVehicleBodyHealth(Vehicle vehicle, float value) { return _i<Void>(0xB77D05AC8C78AADB, vehicle, value); }
	inline Void _SetVehicleBombs(Vehicle vehicle, int amount) { return _i<Void>(0xF4B2ED59DEB5D774, vehicle, amount); }
	inline Void _0xE4E2FD323574965C(Any p0, Any p1) { return _i<Void>(0xE4E2FD323574965C, p0, p1); }
	inline Void SetVehicleBrakeLights(Vehicle vehicle, bool toggle) { return _i<Void>(0x92B35082E0B42F66, vehicle, toggle); }
	inline Void _0xC361AA040D6637A8(Vehicle vehicle, bool p1) { return _i<Void>(0xC361AA040D6637A8, vehicle, p1); }
	inline Void _0xF8EBCCC96ADB9FB7(Any p0, float p1, bool p2) { return _i<Void>(0xF8EBCCC96ADB9FB7, p0, p1, p2); }
	inline Void SetVehicleBurnout(Vehicle vehicle, bool toggle) { return _i<Void>(0xFB8794444A7D60FB, vehicle, toggle); }
	inline Void SetVehicleCanBeTargetted(Vehicle vehicle, bool state) { return _i<Void>(0x3750146A28097A82, vehicle, state); }
	inline Void SetVehicleCanBeUsedByFleeingPeds(Vehicle vehicle, bool toggle) { return _i<Void>(0x300504B23BD3B711, vehicle, toggle); }
	inline Void SetVehicleCanBeVisiblyDamaged(Vehicle vehicle, bool state) { return _i<Void>(0x4C7028F78FFD3681, vehicle, state); }
	inline Void SetVehicleCanBreak(Vehicle vehicle, bool toggle) { return _i<Void>(0x59BF8C3D52C92F66, vehicle, toggle); }
	inline Void _0x0CDDA42F9E360CA6(Vehicle vehicle, bool p1) { return _i<Void>(0x0CDDA42F9E360CA6, vehicle, p1); }
	inline Void _0x065D03A9D6B2C6B5(Any p0, Any p1) { return _i<Void>(0x065D03A9D6B2C6B5, p0, p1); }
	inline Void _0x206BC5DC9D1AC70A(Vehicle vehicle, bool p1) { return _i<Void>(0x206BC5DC9D1AC70A, vehicle, p1); }
	inline Void _0x51BB2D88D31A914B(Vehicle vehicle, bool p1) { return _i<Void>(0x51BB2D88D31A914B, vehicle, p1); }
	inline Void _0x192547247864DFDD(Vehicle vehicle, bool p1) { return _i<Void>(0x192547247864DFDD, vehicle, p1); }
	inline Void _0x428BACCDF5E26EAD(Vehicle vehicle, bool p1) { return _i<Void>(0x428BACCDF5E26EAD, vehicle, p1); }
	inline Void SetVehicleCeilingHeight(Vehicle vehicle, float p1) { return _i<Void>(0xA46413066687A328, vehicle, p1); }
	inline Void _SetVehicleEngineTorqueMultiplier(Vehicle vehicle, float value) { return _i<Void>(0xB59E4BD37AE292DB, vehicle, value); }
	inline Void SetVehicleColours(Vehicle vehicle, int colorPrimary, int colorSecondary) { return _i<Void>(0x4F1D4BE3A7F24601, vehicle, colorPrimary, colorSecondary); }
	inline Void SetVehicleColourCombination(Vehicle vehicle, int colorCombination) { return _i<Void>(0x33E8CD3322E2FE31, vehicle, colorCombination); }
	inline Void _SetVehicleCountermeasures(Vehicle vehicle, int amount) { return _i<Void>(0x9BDA23BF666F0855, vehicle, amount); }
	inline Void _0x182F266C2D9E2BEB(Vehicle vehicle, float p1) { return _i<Void>(0x182F266C2D9E2BEB, vehicle, p1); }
	inline Void SetVehicleCustomPrimaryColour(Vehicle vehicle, int r, int g, int b) { return _i<Void>(0x7141766F91D15BEA, vehicle, r, g, b); }
	inline Void SetVehicleCustomSecondaryColour(Vehicle vehicle, int r, int g, int b) { return _i<Void>(0x36CED73BFED89754, vehicle, r, g, b); }
	inline Void SetVehicleDamage(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, bool p6) { return _i<Void>(0xA1DD317EA8FD4F29, vehicle, xOffset, yOffset, zOffset, damage, radius, p6); }
	inline Any _0x4E20D2A627011E8E(Any p0, Any p1) { return _i<Any>(0x4E20D2A627011E8E, p0, p1); }
	inline Void SetVehicleDeformationFixed(Vehicle vehicle) { return _i<Void>(0x953DA1E1B12C0491, vehicle); }
	inline Void SetVehicleDensityMultiplierThisFrame(float multiplier) { return _i<Void>(0x245A6883D966D537, multiplier); }
	inline Void SetVehicleDirtLevel(Vehicle vehicle, float dirtLevel) { return _i<Void>(0x79D3B596FE44EE8B, vehicle, dirtLevel); }
	inline Void _0xAF60E6A2936F982A(Any p0, Any p1) { return _i<Void>(0xAF60E6A2936F982A, p0, p1); }
	inline Void _0x8AA9180DE2FEDD45(Vehicle vehicle, bool p1) { return _i<Void>(0x8AA9180DE2FEDD45, vehicle, p1); }
	inline Void _0x2B6747FAA9DB9D6B(Vehicle vehicle, bool p1) { return _i<Void>(0x2B6747FAA9DB9D6B, vehicle, p1); }
	inline Void _0x76D26A22750E849E(Any p0) { return _i<Void>(0x76D26A22750E849E, p0); }
	inline Void SetVehicleDoorsLocked(Vehicle vehicle, int doorLockStatus) { return _i<Void>(0xB664292EAECF7FA6, vehicle, doorLockStatus); }
	inline Void SetVehicleDoorsLockedForAllPlayers(Vehicle vehicle, bool toggle) { return _i<Void>(0xA2F80B8D040727CC, vehicle, toggle); }
	inline Void _0x9737A37136F07E75(Vehicle vehicle, bool toggle) { return _i<Void>(0x9737A37136F07E75, vehicle, toggle); }
	inline Void SetVehicleDoorsLockedForPlayer(Vehicle vehicle, Player player, bool toggle) { return _i<Void>(0x517AAF684BB50CD1, vehicle, player, toggle); }
	inline Void SetVehicleDoorsLockedForTeam(Vehicle vehicle, int team, bool toggle) { return _i<Void>(0xB81F6D4A8F5EEBA8, vehicle, team, toggle); }
	inline Void SetVehicleDoorsShut(Vehicle vehicle, bool closeInstantly) { return _i<Void>(0x781B3D62BB013EF5, vehicle, closeInstantly); }
	inline Void _0x3B458DDB57038F08(Any p0, Any p1, Any p2) { return _i<Void>(0x3B458DDB57038F08, p0, p1, p2); }
	inline Void SetVehicleDoorBroken(Vehicle vehicle, int doorIndex, bool deleteDoor) { return _i<Void>(0xD4D4F6A4AB575A33, vehicle, doorIndex, deleteDoor); }
	inline Void SetVehicleDoorControl(Vehicle vehicle, int doorIndex, int speed, float angle) { return _i<Void>(0xF2BFA0430F0A0FCB, vehicle, doorIndex, speed, angle); }
	inline Void SetVehicleDoorLatched(Vehicle vehicle, int doorIndex, bool p2, bool p3, bool p4) { return _i<Void>(0xA5A9653A8D2CAF48, vehicle, doorIndex, p2, p3, p4); }
	inline Void SetVehicleDoorOpen(Vehicle vehicle, int doorIndex, bool loose, bool openInstantly) { return _i<Void>(0x7C65DAC73C35C862, vehicle, doorIndex, loose, openInstantly); }
	inline Void SetVehicleDoorShut(Vehicle vehicle, int doorIndex, bool closeInstantly) { return _i<Void>(0x93D9BD300D7789E5, vehicle, doorIndex, closeInstantly); }
	inline Void _SetVehicleCreatesMoneyPickupsWhenExploded(Vehicle vehicle, bool toggle) { return _i<Void>(0x068F64F2470F9656, vehicle, toggle); }
	inline Void SetVehicleEngineCanDegrade(Vehicle vehicle, bool toggle) { return _i<Void>(0x983765856F2564F9, vehicle, toggle); }
	inline Void SetVehicleEngineHealth(Vehicle vehicle, float health) { return _i<Void>(0x45F6D8EEF34ABEF1, vehicle, health); }
	inline Void SetVehicleEngineOn(Vehicle vehicle, bool value, bool instantly, bool otherwise) { return _i<Void>(0x2497C4717C8B881E, vehicle, value, instantly, otherwise); }
	inline Void SetVehicleEnveffScale(Vehicle vehicle, float fade) { return _i<Void>(0x3AFDC536C3D01674, vehicle, fade); }
	inline Void _SetVehicleExclusiveDriver2(Vehicle vehicle, Ped ped, int p2) { return _i<Void>(0xB5C51B5502E85E83, vehicle, ped, p2); }
	inline Void _0xD565F438137F0E10(Any p0, Any p1) { return _i<Void>(0xD565F438137F0E10, p0, p1); }
	inline Void SetVehicleExplodesOnHighExplosionDamage(Vehicle vehicle, bool toggle) { return _i<Void>(0x71B0892EC081D60A, vehicle, toggle); }
	inline Void _0x79DF7E806202CE01(Any p0, Any p1) { return _i<Void>(0x79DF7E806202CE01, p0, p1); }
	inline Void SetVehicleExtra(Vehicle vehicle, int extraId, bool toggle) { return _i<Void>(0x7EE3A3C5E4A40CC9, vehicle, extraId, toggle); }
	inline Void SetVehicleExtraColours(Vehicle vehicle, int pearlescentColor, int wheelColor) { return _i<Void>(0x2036F561ADD12E33, vehicle, pearlescentColor, wheelColor); }
	inline Void _SetVehicleInteriorColour(Vehicle vehicle, int color) { return _i<Void>(0xF40DD601A65F7F19, vehicle, color); }
	inline Void _SetVehicleDashboardColour(Vehicle vehicle, int color) { return _i<Void>(0x6089CDF6A57F326C, vehicle, color); }
	inline Void SetVehicleFixed(Vehicle vehicle) { return _i<Void>(0x115722B1B9C14C1C, vehicle); }
	inline Void _0x30D779DE7C4F6DD3(Any p0, float p1) { return _i<Void>(0x30D779DE7C4F6DD3, p0, p1); }
	inline Void _0x9AA47FFF660CB932(Any p0, float p1) { return _i<Void>(0x9AA47FFF660CB932, p0, p1); }
	inline Void _0xB055A34527CB8FD7(Vehicle vehicle, bool p1) { return _i<Void>(0xB055A34527CB8FD7, vehicle, p1); }
	inline Void SetVehicleForwardSpeed(Vehicle vehicle, float speed) { return _i<Void>(0xAB54A438726D25D5, vehicle, speed); }
	inline Void _0x6501129C9E0FFA05(Any p0, Any p1) { return _i<Void>(0x6501129C9E0FFA05, p0, p1); }
	inline Void SetVehicleFrictionOverride(Vehicle vehicle, float friction) { return _i<Void>(0x1837AF7C627009BA, vehicle, friction); }
	inline Void SetVehicleFullbeam(Vehicle vehicle, bool toggle) { return _i<Void>(0x8B7FD87F0DDB421E, vehicle, toggle); }
	inline Void _0x279D50DE5652D935(Any p0, bool p1) { return _i<Void>(0x279D50DE5652D935, p0, p1); }
	inline Void _0x9A75585FB2E54FAD(float p0, float p1, float p2, float p3) { return _i<Void>(0x9A75585FB2E54FAD, p0, p1, p2, p3); }
	inline Void SetVehicleGravity(Vehicle vehicle, bool toggle) { return _i<Void>(0x89F149B6131E57DA, vehicle, toggle); }
	inline Void SetVehicleHandbrake(Vehicle vehicle, bool toggle) { return _i<Void>(0x684785568EF26A22, vehicle, toggle); }
	inline Void _0x02398B627547189C(Vehicle p0, bool p1) { return _i<Void>(0x02398B627547189C, p0, p1); }
	inline Void SetVehicleHasBeenOwnedByPlayer(Vehicle vehicle, bool owned) { return _i<Void>(0x2B5F9D2AF1F1722D, vehicle, owned); }
	inline Void _SetVehicleSirenSound(Vehicle vehicle, bool toggle) { return _i<Void>(0xD8050E0EB60CF274, vehicle, toggle); }
	inline Void SetVehicleHasStrongAxles(Vehicle vehicle, bool toggle) { return _i<Void>(0x92F0CF722BC4202F, vehicle, toggle); }
	inline Void _0x1AA8A837D2169D94(Vehicle vehicle, bool p1) { return _i<Void>(0x1AA8A837D2169D94, vehicle, p1); }
	inline Void _SetVehicleLightsMode(Vehicle vehicle, int p1) { return _i<Void>(0x1FD09E7390A74D54, vehicle, p1); }
	inline Void _0x10655FAB9915623D(Any p0, Any p1) { return _i<Void>(0x10655FAB9915623D, p0, p1); }
	inline Void _0x06582AFF74894C75(Any p0, bool p1) { return _i<Void>(0x06582AFF74894C75, p0, p1); }
	inline Void SetVehicleIndicatorLights(Vehicle vehicle, int turnSignal, bool toggle) { return _i<Void>(0xB5D45264751B7DF0, vehicle, turnSignal, toggle); }
	inline Void SetPedTargettableVehicleDestroy(Vehicle vehicle, int vehicleComponent, int destroyType) { return _i<Void>(0xBE70724027F85BCD, vehicle, vehicleComponent, destroyType); }
	inline Void _0x0AD9E8F87FF7C16F(Any p0, bool p1) { return _i<Void>(0x0AD9E8F87FF7C16F, p0, p1); }
	inline Void SetVehicleInteriorlight(Vehicle vehicle, bool toggle) { return _i<Void>(0xBC2042F090AF6AD3, vehicle, toggle); }
	inline Void _SetVehicleSilent(Vehicle vehicle, bool toggle) { return _i<Void>(0x9D44FCCE98450843, vehicle, toggle); }
	inline Void SetVehicleIsConsideredByPlayer(Vehicle vehicle, bool toggle) { return _i<Void>(0x31B927BBC44156CD, vehicle, toggle); }
	inline Void _0x07116E24E9D1929D(Vehicle vehicle, bool toggle) { return _i<Void>(0x07116E24E9D1929D, vehicle, toggle); }
	inline Void SetVehicleIsStolen(Vehicle vehicle, bool isStolen) { return _i<Void>(0x67B2C79AA7FF5738, vehicle, isStolen); }
	inline Void SetVehicleIsWanted(Vehicle vehicle, bool state) { return _i<Void>(0xF7EC25A3EBEEC726, vehicle, state); }
	inline Void _SetVehicleJetEngineOn(Vehicle vehicle, bool toggle) { return _i<Void>(0xB8FBC8B1330CA9B4, vehicle, toggle); }
	inline Void _SetVehicleHudSpecialAbilityBarActive(Vehicle vehicle, bool active) { return _i<Void>(0x99C82F8A139F3E4E, vehicle, active); }
	inline Void SetVehicleLights(Vehicle vehicle, int state) { return _i<Void>(0x34E710FF01247C5A, vehicle, state); }
	inline Void SetVehicleLightMultiplier(Vehicle vehicle, float multiplier) { return _i<Void>(0xB385454F8791F57C, vehicle, multiplier); }
	inline Void _0xC50CE861B55EAB8B(Vehicle vehicle, bool p1) { return _i<Void>(0xC50CE861B55EAB8B, vehicle, p1); }
	inline Void _0xA6D3A8750DC73270(Any p0, Any p1) { return _i<Void>(0xA6D3A8750DC73270, p0, p1); }
	inline Void SetVehicleLivery(Vehicle vehicle, int livery) { return _i<Void>(0x60BF608F1B8CD1B6, vehicle, livery); }
	inline Void SetVehicleLodMultiplier(Vehicle vehicle, float multiplier) { return _i<Void>(0x93AE6A61BE015BF1, vehicle, multiplier); }
	inline Void _0xBAA045B4E42F3C06(Any p0, Any p1) { return _i<Void>(0xBAA045B4E42F3C06, p0, p1); }
	inline Void _0xE851E480B814D4BA(Vehicle vehicle, bool p1) { return _i<Void>(0xE851E480B814D4BA, vehicle, p1); }
	inline Void SetVehicleMod(Vehicle vehicle, int modType, int modIndex, bool customTires) { return _i<Void>(0x6AF0636DDEDCB6DD, vehicle, modType, modIndex, customTires); }
	inline Void SetVehicleModelIsSuppressed(Hash model, bool suppressed) { return _i<Void>(0x0FC2D89AC25A5814, model, suppressed); }
	inline Void SetVehicleModColor1(Vehicle vehicle, int paintType, int color, int p3) { return _i<Void>(0x43FEB945EE7F85B8, vehicle, paintType, color, p3); }
	inline Void SetVehicleModColor2(Vehicle vehicle, int paintType, int color) { return _i<Void>(0x816562BADFDEC83E, vehicle, paintType, color); }
	inline Void SetVehicleModKit(Vehicle vehicle, int modKit) { return _i<Void>(0x1F2AA07F00B3217A, vehicle, modKit); }
	inline Void SetVehicleNeedsToBeHotwired(Vehicle vehicle, bool toggle) { return _i<Void>(0xFBA550EA44404EE6, vehicle, toggle); }
	inline Void _SetVehicleNeonLightsColour(Vehicle vehicle, int r, int g, int b) { return _i<Void>(0x8E0A582209A62695, vehicle, r, g, b); }
	inline Void _SetVehicleNeonLightEnabled(Vehicle vehicle, int index, bool toggle) { return _i<Void>(0x2AA720E4287BF269, vehicle, index, toggle); }
	inline Void _0xAB04325045427AAE(Vehicle vehicle, bool p1) { return _i<Void>(0xAB04325045427AAE, vehicle, p1); }
	inline Void _0x5E569EC46EC21CAE(Vehicle vehicle, bool toggle) { return _i<Void>(0x5E569EC46EC21CAE, vehicle, toggle); }
	inline Void SetVehicleNumberPlateText(Vehicle vehicle, String plateText) { return _i<Void>(0x95A88F0B409CDA47, vehicle, plateText); }
	inline Void SetVehicleNumberPlateTextIndex(Vehicle vehicle, int plateIndex) { return _i<Void>(0x9088EB5A43FFB0A1, vehicle, plateIndex); }
	inline Void _0x35BB21DE06784373(Any p0, Any p1) { return _i<Void>(0x35BB21DE06784373, p0, p1); }
	inline bool SetVehicleOnGroundProperly(Vehicle vehicle, Any p1) { return _i<bool>(0x49733E92263139D1, vehicle, p1); }
	inline Void SetVehicleOutOfControl(Vehicle vehicle, bool killDriver, bool explodeOnImpact) { return _i<Void>(0xF19D095E42D430CC, vehicle, killDriver, explodeOnImpact); }
	inline Void SetVehiclePetrolTankHealth(Vehicle vehicle, float health) { return _i<Void>(0x70DB57649FA8D0D8, vehicle, health); }
	inline Void SetVehicleProvidesCover(Vehicle vehicle, bool toggle) { return _i<Void>(0x5AFEEDD9BB2899D7, vehicle, toggle); }
	inline Void _0xCF9159024555488C(Any p0) { return _i<Void>(0xCF9159024555488C, p0); }
	inline Void SetVehicleReduceGrip(Vehicle vehicle, bool toggle) { return _i<Void>(0x222FF6A823D122E2, vehicle, toggle); }
	inline Void _0xC4B3347BD68BD609(Any p0) { return _i<Void>(0xC4B3347BD68BD609, p0); }
	inline Void _0x2311DD7159F00582(Vehicle vehicle, bool p1) { return _i<Void>(0x2311DD7159F00582, vehicle, p1); }
	inline Void SetVehicleRudderBroken(Vehicle vehicle, bool p1) { return _i<Void>(0x09606148B6C71DEF, vehicle, p1); }
	inline Void SetVehicleSearchlight(Vehicle heli, bool toggle, bool canBeUsedByAI) { return _i<Void>(0x14E85C5EE7A4D542, heli, toggle, canBeUsedByAI); }
	inline Void SetVehicleShootAtTarget(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { return _i<Void>(0x74CD9A9327A282EA, driver, entity, xTarget, yTarget, zTarget); }
	inline Void SetVehicleSiren(Vehicle vehicle, bool toggle) { return _i<Void>(0xF4924635A19EB37D, vehicle, toggle); }
	inline Void _0xF051D9BFB6BA39C0(Any p0) { return _i<Void>(0xF051D9BFB6BA39C0, p0); }
	inline Void _0x1CF38D529D7441D9(Vehicle vehicle, bool toggle) { return _i<Void>(0x1CF38D529D7441D9, vehicle, toggle); }
	inline Void _0x9007A2F21DC108D4(Any p0, float p1) { return _i<Void>(0x9007A2F21DC108D4, p0, p1); }
	inline Void SetVehicleSteerBias(Vehicle vehicle, float value) { return _i<Void>(0x42A8EC77D5150CBE, vehicle, value); }
	inline Any _0xDCE97BDF8A0EABC8() { return _i<Any>(0xDCE97BDF8A0EABC8); }
	inline Void _0x6EBFB22D646FFC18(Vehicle vehicle, bool p1) { return _i<Void>(0x6EBFB22D646FFC18, vehicle, p1); }
	inline Void SetVehicleStrong(Vehicle vehicle, bool toggle) { return _i<Void>(0x3E8C8727991A8A0B, vehicle, toggle); }
	inline Void _0x737E398138550FFF(Any p0, Any p1) { return _i<Void>(0x737E398138550FFF, p0, p1); }
	inline Void _0x56B94C6D7127DFBA(Any p0, float p1, bool p2) { return _i<Void>(0x56B94C6D7127DFBA, p0, p1, p2); }
	inline Void SetVehicleTimedExplosion(Vehicle vehicle, Ped ped, bool toggle) { return _i<Void>(0x2E0A74E1002380B1, vehicle, ped, toggle); }
	inline Void _SetTowTruckCraneHeight(Vehicle towTruck, float height) { return _i<Void>(0xFE54B92A344583CA, towTruck, height); }
	inline Void _0x1093408B4B9D1146(Any p0, float p1) { return _i<Void>(0x1093408B4B9D1146, p0, p1); }
	inline Void _0x0581730AB9380412(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return _i<Void>(0x0581730AB9380412, p0, p1, p2, p3, p4, p5); }
	inline Void SetVehicleTyresCanBurst(Vehicle vehicle, bool toggle) { return _i<Void>(0xEB9DC3C7D8596C46, vehicle, toggle); }
	inline Void SetVehicleTyreBurst(Vehicle vehicle, int index, bool onRim, float p3) { return _i<Void>(0xEC6A202EE4960385, vehicle, index, onRim, p3); }
	inline Void SetVehicleTyreFixed(Vehicle vehicle, int tyreIndex) { return _i<Void>(0x6E13FC662B882D1D, vehicle, tyreIndex); }
	inline Void SetVehicleTyreSmokeColor(Vehicle vehicle, int r, int g, int b) { return _i<Void>(0xB5BA80F839791C0F, vehicle, r, g, b); }
	inline Void SetVehicleUndriveable(Vehicle vehicle, bool toggle) { return _i<Void>(0x8ABA6AF54B942B95, vehicle, toggle); }
	inline Void _0xE05DD0E9707003A3(Any p0, bool p1) { return _i<Void>(0xE05DD0E9707003A3, p0, p1); }
	inline Void _0xCAC66558B944DA67(Vehicle vehicle, bool p1) { return _i<Void>(0xCAC66558B944DA67, vehicle, p1); }
	inline Void _0xBB2333BB87DDD87F(Any p0, Any p1) { return _i<Void>(0xBB2333BB87DDD87F, p0, p1); }
	inline Void _0x1D97D1E3A70A649F(Vehicle vehicle, bool p1) { return _i<Void>(0x1D97D1E3A70A649F, vehicle, p1); }
	inline Void _0x41290B40FA63E6DA(Any p0) { return _i<Void>(0x41290B40FA63E6DA, p0); }
	inline Any _0xE023E8AC4EF7C117(Vehicle p0, bool p1, bool p2, bool p3) { return _i<Any>(0xE023E8AC4EF7C117, p0, p1, p2, p3); }
	inline Void _0x88BC673CA9E0AE99(Vehicle vehicle, bool p1) { return _i<Void>(0x88BC673CA9E0AE99, vehicle, p1); }
	inline Void _0xC45C27EF50F36ADC(Vehicle vehicle, bool p1) { return _i<Void>(0xC45C27EF50F36ADC, vehicle, p1); }
	inline Void _0x86B4B6212CB8B627(Any p0, Any p1) { return _i<Void>(0x86B4B6212CB8B627, p0, p1); }
	inline Any _0x45A561A9421AB6AD(Any p0, Any p1) { return _i<Any>(0x45A561A9421AB6AD, p0, p1); }
	inline Void _0x44CD1F493DB2A0A6(Any p0, Any p1, Any p2) { return _i<Void>(0x44CD1F493DB2A0A6, p0, p1, p2); }
	inline Void SetVehicleWheelsCanBreak(Vehicle vehicle, bool enabled) { return _i<Void>(0x29B18B4FD460CA8F, vehicle, enabled); }
	inline Void SetVehicleWheelsCanBreakOffWhenBlowUp(Vehicle vehicle, bool toggle) { return _i<Void>(0xA37B9A517B133349, vehicle, toggle); }
	inline Void SetVehicleWheelType(Vehicle vehicle, int WheelType) { return _i<Void>(0x487EB21CC7295BA1, vehicle, WheelType); }
	inline Void _0xBE5C1255A1830FF5(Vehicle vehicle, bool toggle) { return _i<Void>(0xBE5C1255A1830FF5, vehicle, toggle); }
	inline Void _0x2C4A1590ABF43E8B(Vehicle vehicle, bool p1) { return _i<Void>(0x2C4A1590ABF43E8B, vehicle, p1); }
	inline Void SetVehicleWindowTint(Vehicle vehicle, int tint) { return _i<Void>(0x57C51E6BAD752696, vehicle, tint); }
	inline Void _0x1312DDD8385AEE4E(Any p0, Any p1) { return _i<Void>(0x1312DDD8385AEE4E, p0, p1); }
	inline Void _RaiseLowerableWheels(Vehicle vehicle) { return _i<Void>(0xF660602546D27BA8, vehicle); }
	inline Void _0x5335BE58C083E74E(Any p0) { return _i<Void>(0x5335BE58C083E74E, p0); }
	inline Void SkipTimeInPlaybackRecordedVehicle(Any p0, float p1) { return _i<Void>(0x9438F7AD68771A20, p0, p1); }
	inline Void SkipToEndAndStopPlaybackRecordedVehicle(Any p0) { return _i<Void>(0xAB8E2EDA0C0A5883, p0); }
	inline Void SmashVehicleWindow(Vehicle vehicle, int index) { return _i<Void>(0x9E5B5E4D2CCD2259, vehicle, index); }
	inline Void _0x374706271354CB18(Vehicle vehicle, Entity p1, float p2) { return _i<Void>(0x374706271354CB18, vehicle, p1, p2); }
	inline Void StartPlaybackRecordedVehicle(Vehicle vehicle, int p1, String playback, bool p3) { return _i<Void>(0x3F878F92B3A7A071, vehicle, p1, playback, p3); }
	inline Void StartPlaybackRecordedVehicleUsingAi(Any p0, Any p1, Any* p2, float p3, Any p4) { return _i<Void>(0x29DE5FA52D00428C, p0, p1, p2, p3, p4); }
	inline Void StartPlaybackRecordedVehicleWithFlags(Vehicle vehicle, Any p1, String playback, Any p3, Any p4, Any p5) { return _i<Void>(0x7D80FD645D4DA346, vehicle, p1, playback, p3, p4, p5); }
	inline Void StartVehicleAlarm(Vehicle vehicle) { return _i<Void>(0xB8FF7AB45305C345, vehicle); }
	inline Void StartVehicleHorn(Vehicle vehicle, int duration, Hash mode, bool forever) { return _i<Void>(0x9C8C6504B5B63D2C, vehicle, duration, mode, forever); }
	inline Void StopAllGarageActivity() { return _i<Void>(0x0F87E938BDF29D66); }
	inline Void _0x7C06330BFDDA182E(Any p0) { return _i<Void>(0x7C06330BFDDA182E, p0); }
	inline Void StopPlaybackRecordedVehicle(Any p0) { return _i<Void>(0x54833611C17ABDEA, p0); }
	inline Void _0x83F813570FF519DE(Any p0, Any p1) { return _i<Void>(0x83F813570FF519DE, p0, p1); }
	inline Void _0xF488C566413B4232(Any p0, float p1) { return _i<Void>(0xF488C566413B4232, p0, p1); }
	inline Void SwitchTrainTrack(int intersectionId, bool state) { return _i<Void>(0xFD813BB7DB977F20, intersectionId, state); }
	inline Void ToggleVehicleMod(Vehicle vehicle, int modType, bool toggle) { return _i<Void>(0x2A1F4F37F95BAD08, vehicle, modType, toggle); }
	inline Void TrackVehicleVisibility(Vehicle vehicle) { return _i<Void>(0x64473AEFDCF47DCA, vehicle); }
	inline Void UnpausePlaybackRecordedVehicle(Any p0) { return _i<Void>(0x8879EE09268305D5, p0); }
	inline Void _0x756AE6E962168A04(Any p0, Any p1) { return _i<Void>(0x756AE6E962168A04, p0, p1); }
	inline Void _0x1BBAC99C0BC53656(Any p0, Any p1) { return _i<Void>(0x1BBAC99C0BC53656, p0, p1); }
	inline Void _0x9D30687C57BAA0BB(Any p0) { return _i<Void>(0x9D30687C57BAA0BB, p0); }
	inline Void _VehicleSetCustomParachuteModel(Vehicle vehicle, Hash parachuteModel) { return _i<Void>(0x4D610C6B56031351, vehicle, parachuteModel); }
	inline Void _VehicleSetCustomParachuteTexture(Vehicle vehicle, int colorIndex) { return _i<Void>(0xA74AD2439468C883, vehicle, colorIndex); }
	inline Void _SetRampVehicleReceivesRampDamage(Vehicle vehicle, bool receivesDamage) { return _i<Void>(0x28D034A93FE31BF5, vehicle, receivesDamage); }
	inline Void _SetVehicleParachuteActive(Vehicle vehicle, bool active) { return _i<Void>(0x0BFFB028B3DD0A97, vehicle, active); }
	inline Void GetRandomVehicleModelInMemory(bool p0, Hash* modelHash, int* p2) { return _i<Void>(0x055BF0AC0C34F4FD, p0, modelHash, p2); }
	inline Void SetVehicleNameDebug(Vehicle vehicle, String name) { return _i<Void>(0xBFDF984E2C22B94F, vehicle, name); }
	inline Void _0xB264C4D2F2B0A78B(Vehicle vehicle) { return _i<Void>(0xB264C4D2F2B0A78B, vehicle); }
}

namespace WATER
{
	inline int _0xFDBF4CDBC07E1706(float x, float y, float z, float radius, float unk) { return _i<int>(0xFDBF4CDBC07E1706, x, y, z, radius, unk); }
	inline float _GetWavesIntensity() { return _i<float>(0x2B2A2CC86778B619); }
	inline bool GetWaterHeight(float x, float y, float z, float* height) { return _i<bool>(0xF6829842C06AE524, x, y, z, height); }
	inline bool GetWaterHeightNoWaves(float x, float y, float z, float* height) { return _i<bool>(0x8EE6B53CE13A9794, x, y, z, height); }
	inline Void ModifyWater(float x, float y, float radius, float height) { return _i<Void>(0xC443FD757C3BA637, x, y, radius, height); }
	inline Void _0xB1252E3E59A82AAF(int p0) { return _i<Void>(0xB1252E3E59A82AAF, p0); }
	inline Void _ResetWavesIntensity() { return _i<Void>(0x5E5E99285AE812DB); }
	inline Void _0x547237AA71AB44DE(Any p0) { return _i<Void>(0x547237AA71AB44DE, p0); }
	inline Void _SetWavesIntensity(float intensity) { return _i<Void>(0xB96B00E976BE977F, intensity); }
	inline bool TestProbeAgainstAllWater(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return _i<bool>(0x8974647ED222EA5F, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline bool TestProbeAgainstWater(float x1, float y1, float z1, float x2, float y2, float z2, Vector3* result) { return _i<bool>(0xFFA5D878809819DB, x1, y1, z1, x2, y2, z2, result); }
	inline bool TestVerticalProbeAgainstAllWater(float x, float y, float z, Any p3, Any* p4) { return _i<bool>(0x2B3451FA1E3142E2, x, y, z, p3, p4); }
}

namespace WEAPON
{
	inline Void AddAmmoToPed(Ped ped, Hash weaponHash, int ammo) { return _i<Void>(0x78F0424C34306220, ped, weaponHash, ammo); }
	inline Void _0x2472622CE1F2D45F(Any p0, Any p1, Any p2) { return _i<Void>(0x2472622CE1F2D45F, p0, p1, p2); }
	inline bool CanUseWeaponOnParachute(Hash weaponHash) { return _i<bool>(0xBC7BE5ABC0879F74, weaponHash); }
	inline Void ClearEntityLastWeaponDamage(Entity entity) { return _i<Void>(0xAC678E40BE7C74D2, entity); }
	inline Void ClearPedLastWeaponDamage(Ped ped) { return _i<Void>(0x0E98F88A24C5F4B8, ped); }
	inline Any _0x9DA58CDBF6BDBC08(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { return _i<Any>(0x9DA58CDBF6BDBC08, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	inline Any _0x91EF34584710BE99(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { return _i<Any>(0x91EF34584710BE99, p0, p1, p2, p3, p4, p5, p6, p7); }
	inline Object CreateWeaponObject(Hash weaponHash, int ammoCount, float x, float y, float z, bool showWorldModel, float heading, Any p7, Any p8, Any p9) { return _i<Object>(0x9541D3CF0D398F36, weaponHash, ammoCount, x, y, z, showWorldModel, heading, p7, p8, p9); }
	inline Any _0xCD79A550999D7D4F(Any p0) { return _i<Any>(0xCD79A550999D7D4F, p0); }
	inline bool DoesWeaponTakeWeaponComponent(Hash weaponHash, Hash componentHash) { return _i<bool>(0x5CEE3DF569CECAB0, weaponHash, componentHash); }
	inline Void EnableLaserSightRendering(bool toggle) { return _i<Void>(0xC8B46D7727D864AA, toggle); }
	inline Void ExplodeProjectiles(Ped ped, Hash weaponHash, bool p2) { return _i<Void>(0xFC4BD125DE7611E4, ped, weaponHash, p2); }
	inline Void _0x44F1012B69313374(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x44F1012B69313374, p0, p1, p2, p3); }
	inline bool GetAmmoInClip(Ped ped, Hash weaponHash, int* ammo) { return _i<bool>(0x2E1202248937775C, ped, weaponHash, ammo); }
	inline int GetAmmoInPedWeapon(Ped ped, Hash weaponhash) { return _i<int>(0x015A522136D7F951, ped, weaponhash); }
	inline Hash GetBestPedWeapon(Ped ped, bool p1) { return _i<Hash>(0x8483E98E8B888AE2, ped, p1); }
	inline bool GetCurrentPedVehicleWeapon(Ped ped, Hash* weaponHash) { return _i<bool>(0x1017582BCD3832DC, ped, weaponHash); }
	inline bool GetCurrentPedWeapon(Ped ped, Hash* weaponHash, bool p2) { return _i<bool>(0x3A87E44BB9A01D54, ped, weaponHash, p2); }
	inline Entity GetCurrentPedWeaponEntityIndex(Ped ped) { return _i<Entity>(0x3B390A939AF0B5FC, ped); }
	inline bool GetIsPedGadgetEquipped(Ped ped, Hash gadgetHash) { return _i<bool>(0xF731332072F5156C, ped, gadgetHash); }
	inline float _GetLockonRangeOfCurrentPedWeapon(Ped ped) { return _i<float>(0x840F03E9041E2C9C, ped); }
	inline bool GetMaxAmmo(Ped ped, Hash weaponHash, int* ammo) { return _i<bool>(0xDC16122C7A20C933, ped, weaponHash, ammo); }
	inline Any _0x585847C5E4E11709(Any p0, Any p1, Any p2) { return _i<Any>(0x585847C5E4E11709, p0, p1, p2); }
	inline int GetMaxAmmoInClip(Ped ped, Hash weaponHash, bool p2) { return _i<int>(0xA38DCFFCEA8962FA, ped, weaponHash, p2); }
	inline float GetMaxRangeOfCurrentPedWeapon(Ped ped) { return _i<float>(0x814C9D19DFD69679, ped); }
	inline int GetPedAmmoByType(Ped ped, Any ammoType) { return _i<int>(0x39D22031557946C1, ped, ammoType); }
	inline Hash GetPedAmmoTypeFromWeapon(Ped ped, Hash weaponHash) { return _i<Hash>(0x7FEAD38B326B9F74, ped, weaponHash); }
	inline bool GetPedLastWeaponImpactCoord(Ped ped, Vector3* coords) { return _i<bool>(0x6C4D0409BA1A2BC2, ped, coords); }
	inline Hash _GetPedAmmoTypeFromWeapon2(Ped ped, Hash weaponHash) { return _i<Hash>(0xF489B44DD5AF4BD9, ped, weaponHash); }
	inline Hash GetPedWeapontypeInSlot(Ped ped, Hash weaponSlot) { return _i<Hash>(0xEFFED78E9011134D, ped, weaponSlot); }
	inline Any _0xA2C9AC24B4061285(Any p0, Any p1) { return _i<Any>(0xA2C9AC24B4061285, p0, p1); }
	inline Any _0xF0A60040BE558F2D(Any p0, Any p1, Any p2) { return _i<Any>(0xF0A60040BE558F2D, p0, p1, p2); }
	inline int GetPedWeaponTintIndex(Ped ped, Hash weaponHash) { return _i<int>(0x2B9EEDC07BD06B9F, ped, weaponHash); }
	inline Hash GetSelectedPedWeapon(Ped ped) { return _i<Hash>(0x0A6DB4965674D243, ped); }
	inline Hash GetWeapontypeGroup(Hash weaponHash) { return _i<Hash>(0xC3287EE3050FB74C, weaponHash); }
	inline Hash GetWeapontypeModel(Hash weaponHash) { return _i<Hash>(0xF46CDC33180FDA94, weaponHash); }
	inline Hash GetWeapontypeSlot(Hash weaponHash) { return _i<Hash>(0x4215460B9B8B7FA0, weaponHash); }
	inline int GetWeaponClipSize(Hash weaponHash) { return _i<int>(0x583BE370B1EC6EB4, weaponHash); }
	inline bool GetWeaponComponentHudStats(Hash componentHash, int* outData) { return _i<bool>(0xB3CAF387AE12E9F8, componentHash, outData); }
	inline Hash GetWeaponComponentTypeModel(Hash componentHash) { return _i<Hash>(0x0DB57B41EC1DB083, componentHash); }
	inline Any _0x6558AC7C17BFEF58(Any p0) { return _i<Any>(0x6558AC7C17BFEF58, p0); }
	inline Any _0x4D1CB8DC40208A17(Any p0, Any p1) { return _i<Any>(0x4D1CB8DC40208A17, p0, p1); }
	inline float _0x3133B907D8B32053(Any p0, Any p1) { return _i<float>(0x3133B907D8B32053, p0, p1); }
	inline int GetWeaponDamageType(Hash weaponHash) { return _i<int>(0x3BE0BB12D25FB305, weaponHash); }
	inline bool GetWeaponHudStats(Hash weaponHash, int* outData) { return _i<bool>(0xD92C739EE34C9EBA, weaponHash, outData); }
	inline Any _0xB3EA4FEABF41464B(Any p0, Any p1) { return _i<Any>(0xB3EA4FEABF41464B, p0, p1); }
	inline Object GetWeaponObjectFromPed(Ped ped, bool p1) { return _i<Object>(0xCAE1DC9A0E22A16D, ped, p1); }
	inline int GetWeaponObjectTintIndex(Object weapon) { return _i<int>(0xCD183314F7CD2E57, weapon); }
	inline int GetWeaponTintCount(Hash weaponHash) { return _i<int>(0x5DCF6C5CAB2E9BF7, weaponHash); }
	inline Void GiveDelayedWeaponToPed(Ped ped, Hash weaponHash, int time, bool equipNow) { return _i<Void>(0xB282DC6EBD803C75, ped, weaponHash, time, equipNow); }
	inline Void _0x68F8BE6AF5CDF8A6(Any p0, Any p1) { return _i<Void>(0x68F8BE6AF5CDF8A6, p0, p1); }
	inline Void GiveWeaponComponentToPed(Ped ped, Hash weaponHash, Hash componentHash) { return _i<Void>(0xD966D51AA5B28BB9, ped, weaponHash, componentHash); }
	inline Void GiveWeaponComponentToWeaponObject(Object weaponObject, Hash addonHash) { return _i<Void>(0x33E179436C0B31DB, weaponObject, addonHash); }
	inline Void GiveWeaponObjectToPed(Object weaponObject, Ped ped) { return _i<Void>(0xB1FA61371AF7C4B7, weaponObject, ped); }
	inline Void GiveWeaponToPed(Ped ped, Hash weaponHash, int ammoCount, bool isHidden, bool equipNow) { return _i<Void>(0xBF0FD6E56C964FCB, ped, weaponHash, ammoCount, isHidden, equipNow); }
	inline bool HasEntityBeenDamagedByWeapon(Entity entity, Hash weaponHash, int weaponType) { return _i<bool>(0x131D401334815E94, entity, weaponHash, weaponType); }
	inline bool HasPedBeenDamagedByWeapon(Ped ped, Hash weaponHash, int weaponType) { return _i<bool>(0x2D343D2219CD027A, ped, weaponHash, weaponType); }
	inline bool HasPedGotWeapon(Ped ped, Hash weaponHash, bool p2) { return _i<bool>(0x8DECB02F88F428BC, ped, weaponHash, p2); }
	inline bool HasPedGotWeaponComponent(Ped ped, Hash weaponHash, Hash componentHash) { return _i<bool>(0xC593212475FAE340, ped, weaponHash, componentHash); }
	inline bool HasVehicleGotProjectileAttached(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3) { return _i<bool>(0x717C8481234E3B88, driver, vehicle, weaponHash, p3); }
	inline bool HasWeaponAssetLoaded(Hash weaponHash) { return _i<bool>(0x36E353271F0E90EE, weaponHash); }
	inline bool HasWeaponGotWeaponComponent(Object weapon, Hash addonHash) { return _i<bool>(0x76A18844E743BF91, weapon, addonHash); }
	inline Void HidePedWeaponForScriptedCutscene(Ped ped, bool toggle) { return _i<Void>(0x6F6981D2253C208F, ped, toggle); }
	inline Any _0xDAB963831DBFD3F4(Any p0, Any p1, Any p2, Any p3, Any p4) { return _i<Any>(0xDAB963831DBFD3F4, p0, p1, p2, p3, p4); }
	inline bool IsFlashLightOn(Ped ped) { return _i<bool>(0x4B7620C47217126C, ped); }
	inline bool IsPedArmed(Ped ped, int p1) { return _i<bool>(0x475768A975D5AD17, ped, p1); }
	inline bool IsPedCurrentWeaponSilenced(Ped ped) { return _i<bool>(0x65F0C5AE05943EC7, ped); }
	inline bool IsPedWeaponComponentActive(Ped ped, Hash weaponHash, Hash componentHash) { return _i<bool>(0x0D78DE0572D3969E, ped, weaponHash, componentHash); }
	inline bool IsPedWeaponReadyToShoot(Ped ped) { return _i<bool>(0xB80CA294F2F26749, ped); }
	inline bool IsWeaponValid(Hash weaponHash) { return _i<bool>(0x937C71165CF334B3, weaponHash); }
	inline bool MakePedReload(Ped ped) { return _i<bool>(0x20AE33F3AC9C0033, ped); }
	inline bool _PedSkipNextReloading(Ped ped) { return _i<bool>(0x8C0D57EA686FAD87, ped); }
	inline Any _0x0ABF535877897560(Any p0) { return _i<Any>(0x0ABF535877897560, p0); }
	inline Void _0x1E45B34ADEBEE48E() { return _i<Void>(0x1E45B34ADEBEE48E); }
	inline Void RemoveAllPedWeapons(Ped ped, bool p1) { return _i<Void>(0xF25DF915FA38C5F3, ped, p1); }
	inline Void RemoveAllProjectilesOfType(Hash weaponHash, bool p1) { return _i<Void>(0xFC52E0F37E446528, weaponHash, p1); }
	inline Void RemoveWeaponAsset(Hash weaponHash) { return _i<Void>(0xAA08EF13F341C8FC, weaponHash); }
	inline Void RemoveWeaponComponentFromPed(Ped ped, Hash weaponHash, Hash componentHash) { return _i<Void>(0x1E8BE90C74FB4C09, ped, weaponHash, componentHash); }
	inline Void RemoveWeaponComponentFromWeaponObject(Any p0, Any p1) { return _i<Void>(0xF7D82B0D66777611, p0, p1); }
	inline Void RemoveWeaponFromPed(Ped ped, Hash weaponHash) { return _i<Void>(0x4899CB088EDF59B8, ped, weaponHash); }
	inline Void RequestWeaponAsset(Hash weaponHash, int p1, int p2) { return _i<Void>(0x5443438F033E29C3, weaponHash, p1, p2); }
	inline Void RequestWeaponHighDetailModel(Entity weaponObject) { return _i<Void>(0x48164DBB970AC3F0, weaponObject); }
	inline bool SetAmmoInClip(Ped ped, Hash weaponHash, int ammo) { return _i<bool>(0xDCD2A934D65CB497, ped, weaponHash, ammo); }
	inline Void _0xEFF296097FF1E509(Any p0, Any p1) { return _i<Void>(0xEFF296097FF1E509, p0, p1); }
	inline Void _0xB4771B9AAF4E68E4(Any p0, Any p1, Any p2) { return _i<Void>(0xB4771B9AAF4E68E4, p0, p1, p2); }
	inline bool SetCurrentPedVehicleWeapon(Ped ped, Hash weaponHash) { return _i<bool>(0x75C55983C2C39DAA, ped, weaponHash); }
	inline Void SetCurrentPedWeapon(Ped ped, Hash weaponHash, bool equipNow) { return _i<Void>(0xADF692B254977C0C, ped, weaponHash, equipNow); }
	inline Void _0xE4DCEC7FD5B739A5(Ped ped) { return _i<Void>(0xE4DCEC7FD5B739A5, ped); }
	inline Any SetFlashLightFadeDistance(float distance) { return _i<Any>(0xCEA66DAD478CD39B, distance); }
	inline Void SetPedAmmo(Ped ped, Hash weaponHash, int ammo, Any p3) { return _i<Void>(0x14E56BC5B5DB6A19, ped, weaponHash, ammo, p3); }
	inline Void SetPedAmmoByType(Ped ped, Any ammoType, int ammo) { return _i<Void>(0x5FD1E1F011E76D7E, ped, ammoType, ammo); }
	inline Void SetPedAmmoToDrop(Any p0, Any p1) { return _i<Void>(0xA4EFEF9440A5B0EF, p0, p1); }
	inline Void SetPedChanceOfFiringBlanks(Ped ped, float xBias, float yBias) { return _i<Void>(0x8378627201D5497D, ped, xBias, yBias); }
	inline Void SetPedCurrentWeaponVisible(Ped ped, bool visible, bool deselectWeapon, bool p3, bool p4) { return _i<Void>(0x0725A4CCFDED9A70, ped, visible, deselectWeapon, p3, p4); }
	inline Void SetPedDropsInventoryWeapon(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, Any p5) { return _i<Void>(0x208A1888007FC0E6, ped, weaponHash, xOffset, yOffset, zOffset, p5); }
	inline Void SetPedDropsWeapon(Ped ped) { return _i<Void>(0x6B7513D9966FBEC0, ped); }
	inline Void SetPedDropsWeaponsWhenDead(Ped ped, bool toggle) { return _i<Void>(0x476AE72C1D19D1A8, ped, toggle); }
	inline Void SetPedGadget(Ped ped, Hash gadgetHash, bool p2) { return _i<Void>(0xD0D7B1E680ED4A1A, ped, gadgetHash, p2); }
	inline Void SetPedInfiniteAmmo(Ped ped, bool toggle, Hash weaponHash) { return _i<Void>(0x3EDCB0505123623B, ped, toggle, weaponHash); }
	inline Void SetPedInfiniteAmmoClip(Ped ped, bool toggle) { return _i<Void>(0x183DADC6AA953186, ped, toggle); }
	inline Entity _0xB4C8D77C80C0421E(Ped ped, float p1) { return _i<Entity>(0xB4C8D77C80C0421E, ped, p1); }
	inline Void _0x9FE5633880ECD8ED(Any p0, Any p1, Any p2, Any p3) { return _i<Void>(0x9FE5633880ECD8ED, p0, p1, p2, p3); }
	inline Void SetPedWeaponTintIndex(Ped ped, Hash weaponHash, int tintIndex) { return _i<Void>(0x50969B9B89ED5738, ped, weaponHash, tintIndex); }
	inline Void _0xE620FD3512A04F18(float p0) { return _i<Void>(0xE620FD3512A04F18, p0); }
	inline Void _0xECDC202B25E5CF48(Any p0, Any p1, Any p2) { return _i<Void>(0xECDC202B25E5CF48, p0, p1, p2); }
	inline Void SetWeaponAnimationOverride(Ped ped, Hash animStyle) { return _i<Void>(0x1055AC3A667F09D9, ped, animStyle); }
	inline Void _0x4757F00BC6323CFE(Any p0, Any p1) { return _i<Void>(0x4757F00BC6323CFE, p0, p1); }
	inline Void _0x977CA98939E82E4B(Any p0, Any p1) { return _i<Void>(0x977CA98939E82E4B, p0, p1); }
	inline Void _0x5DA825A85D0EA6E6(Any p0, Any p1, Any p2) { return _i<Void>(0x5DA825A85D0EA6E6, p0, p1, p2); }
	inline Void SetWeaponObjectTintIndex(Object weapon, int tintIndex) { return _i<Void>(0xF827589017D4E4A9, weapon, tintIndex); }
}

namespace ZONE
{
	inline Void ClearPopscheduleOverrideVehicleModel(int scheduleId) { return _i<Void>(0x5C0DE367AA0D911C, scheduleId); }
	inline Hash GetHashOfMapAreaAtCoords(float x, float y, float z) { return _i<Hash>(0x7EE64D51E8498728, x, y, z); }
	inline String GetNameOfZone(float x, float y, float z) { return _i<String>(0xCD90657D4C30E1CA, x, y, z); }
	inline int GetZoneAtCoords(float x, float y, float z) { return _i<int>(0x27040C25DE6CB2F4, x, y, z); }
	inline int GetZoneFromNameId(String zoneName) { return _i<int>(0x98CD1D2934B76CC1, zoneName); }
	inline int GetZonePopschedule(int zoneId) { return _i<int>(0x4334BC40AA0CB4BB, zoneId); }
	inline int GetZoneScumminess(int zoneId) { return _i<int>(0x5F7B268D15BA0739, zoneId); }
	inline Void OverridePopscheduleVehicleModel(int scheduleId, Hash vehicleHash) { return _i<Void>(0x5F7D596BAC2E7777, scheduleId, vehicleHash); }
	inline Void SetZoneEnabled(int zoneId, bool toggle) { return _i<Void>(0xBA5ECEEA120E5611, zoneId, toggle); }
}