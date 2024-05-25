#pragma once
#include <shlobj.h>
#include <shlwapi.h>
#include <direct.h>

class Config {
private:
	static char m_appdata[260];
	static char m_documents[260];
	static char m_log[260];
	static char m_ytd[260];
	static char m_config[260];
	static char m_themes[260];
	static char m_ytdConfig[260];
	static char m_ytdHeader[260];
	static char m_languages[260];
	static char m_outfits[260];

public:
	String GetPathAppdata() { return m_appdata; }
	String GetLogPath() { return m_log; }
	String GetYTDPath() { return m_ytd; }
	String GetConfigPath() { return m_config; }
	String GetThemesPath() { return m_themes; }
	String GetYTDConfigPath() { return m_ytdConfig; }
	String GetYTDHeaderPath() { return m_ytdHeader; }
	String GetLanguagesPath() { return m_languages; }
	String GetPathMyDocuments() { return m_documents; }
	String GetOutfitsPath() { return m_outfits; }

	void Initialize() {
		SHGetFolderPathA(NULL, CSIDL_APPDATA, NULL, SHGFP_TYPE_CURRENT, m_appdata);
		SHGetFolderPathA(NULL, CSIDL_PERSONAL, NULL, SHGFP_TYPE_CURRENT, m_documents);

		vaBuff(m_config, 260, "%s\\Pegasus\\Config.ini", m_documents);
		vaBuff(m_log, 260, "%s\\Pegasus\\Pegasus.log", m_documents);
		vaBuff(m_ytd, 260, "%s\\Pegasus\\YTD", m_documents);
		vaBuff(m_ytdConfig, 260, "%s\\Pegasus\\YTD\\config.json", m_documents);
		vaBuff(m_ytdHeader, 260, "%s\\Pegasus\\YTD\\header.ytd", m_documents);
		vaBuff(m_themes, 260, "%s\\Pegasus\\Themes", m_documents);
		vaBuff(m_languages, 260, "%s\\Pegasus\\Languages", m_documents);
		vaBuff(m_outfits, 260, "%s\\Pegasus\\Outfits", m_documents);
		CreateAppdataFolder("//Microsoft FxCop");

		CreateDocumentsFolder("//Pegasus");
		CreateDocumentsFolder("//Pegasus//YTD");
		CreateDocumentsFolder("//Pegasus//Themes");
		CreateDocumentsFolder("//Pegasus//Languages");
		CreateDocumentsFolder("//Pegasus//Outfits");
	}

	void CreateAppdataFolder(String path) {
		_mkdir(va("%s%s", m_appdata, path));
	}

	void CreateDocumentsFolder(String path) {
		_mkdir(va("%s%s", m_documents, path));
	}

	void GetFilesFromDirectory(vector<string>& buffer, string folder, string extention) {
		buffer.clear();
		string loc = folder + "\\*" + extention;
		WIN32_FIND_DATAA fd;
		HANDLE hFind = ::FindFirstFileA(loc.c_str(), &fd);
		if (hFind != INVALID_HANDLE_VALUE) {
			do {
				if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)) {
					string orig = fd.cFileName;
					string newstring = orig.substr(0, orig.size() - extention.size());
					buffer.push_back(newstring.c_str());
				}
			} while (::FindNextFileA(hFind, &fd));
			::FindClose(hFind);
		}
	}

	bool DoesFileExist(String file) {
		ifstream i(file);
		return i.good();
	}

	//.ini
	void RemoveString(String section, String key) {
		WritePrivateProfileStringA(section, key, nullptr, GetConfigPath());
	}

	String ReadString(String section, String key, String defaultReturn, String path = m_config) {
		static char currentOptionBuffer[255];
		GetPrivateProfileStringA(section, key, defaultReturn, currentOptionBuffer, 255, path);
		return currentOptionBuffer;
	}

	String ReadStringCustomDefault(String section, String key, String defaultReturn, String path = m_config) {
		char currentOptionBuffer[255];
		GetPrivateProfileStringA(section, key, defaultReturn, currentOptionBuffer, 255, path);
		return currentOptionBuffer;
	}

	void WriteString(String section, String key, String value, String path = m_config) {
		WritePrivateProfileStringA(section, key, value, path);
	}

	template<typename Type>
	Type ReadNumber(String section, String key, String format, Type defaultVal, Type(*func)(String text), String path = m_config) {
		char resultBuffer[255];
		char defaultBuffer[255];
		sprintf_s(defaultBuffer, format, defaultVal);
		GetPrivateProfileStringA(section, key, defaultBuffer, resultBuffer, 255, path);
		return func(resultBuffer);
	}

	int ReadInt(String section, String key, int defaultReturn, String path = m_config) {
		return ReadNumber<int>(section, key, "%d", defaultReturn, [](String text) {return atoi(text); }, path);
	}

	float ReadFloat(String section, String key, float defaultReturn, String path = m_config) {
		return ReadNumber<float>(section, key, "%f", defaultReturn, [](String text) {return (float)atof(text); }, path);
	}

	int64_t ReadInt64(String section, String key, int64_t defaultReturn, String path = m_config) {
		return ReadNumber<int64_t>(section, key, "%lld", defaultReturn, [](String text) {return _atoi64(text); }, path);
	}

	template<typename Type>
	void WriteNumber(String section, String key, String format, Type value, String path = m_config) {
		char buffer[255];
		sprintf_s(buffer, format, value);
		WritePrivateProfileStringA(section, key, buffer, path);
	}

	void WriteInt(String section, String key, int value) {
		WriteNumber<int>(section, key, "%d", value);
	}

	void WriteFloat(String section, String key, float value) {
		WriteNumber<float>(section, key, "%f", value);
	}

	void WriteInt64(String section, String key, int64_t value, String path = m_config) {
		WriteNumber<int64_t>(section, key, "%lld", value, path);
	}

	void WriteBool(String section, String key, bool value) {
		WritePrivateProfileStringA(section, key, value ? "true" : "false", GetConfigPath());
	}

	void WriteBool(String section, String key, bool value, String path) {
		WritePrivateProfileStringA(section, key, value ? "true" : "false", path);
	}

	bool ReadBool(String section, String key, bool defaultReturn, String path = m_config) {
		char currentOptionBuffer[255];
		GetPrivateProfileStringA(section, key, defaultReturn ? "true" : "false", currentOptionBuffer, 255, path);
		return strcmp(currentOptionBuffer, "true") == 0;
	}

	void WriteColor(String section, String key, Color color) {
		WritePrivateProfileStringA(section, key, va("%d;%d;%d;%d;", color.m_r, color.m_g, color.m_b, color.m_a), GetConfigPath());
	}

	void ReadColor(String section, String key, Color* color) {
		string temp = ReadString(section, key, "null");
		if (temp != "null") {
			vector<string> SC = split(temp, ";");
			if (SC.size() == 4) *color = { stoi(SC.at(0)), stoi(SC.at(1)), stoi(SC.at(2)), stoi(SC.at(3)) };
		}
	}
};

Config* GetConfig();