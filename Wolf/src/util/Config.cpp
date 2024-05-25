#include "stdafx.h"

char Config::m_appdata[260];
char Config::m_documents[260];
char Config::m_log[260];
char Config::m_ytd[260];
char Config::m_config[260];
char Config::m_themes[260];
char Config::m_ytdConfig[260];
char Config::m_ytdHeader[260];
char Config::m_languages[260];
char Config::m_outfits[260];

Config g_config;

Config* GetConfig() { return &g_config; }