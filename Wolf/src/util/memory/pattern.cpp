#include "stdafx.h"

namespace Pattern {
	map<string, uint64_t> m_storedAddresses;

	uint64_t StringToUint64(string str) {
		istringstream iss(str);
		uint64_t ret;
		if (iss >> hex >> ret) {
			return (uint64_t)ret;
		}
		return 0;
	}

	std::string jsonto_string(const json &j) {
		if (j.type() == json::value_t::string) {
			return j.get<std::string>();
		}

		return j.dump();
	}

	vector<DWORD64> getStringAddress(string str) {
		string currentMask;
		String to_scan = str.c_str();
		for (uint8_t i = 0; i < strlen(to_scan); i++) currentMask += "x";
		const char *mask = currentMask.c_str();
		vector<DWORD64> foundAddrs;
		for (uint32_t i = 0; i < Backend::GetGameSize(); ++i) {
			auto address = Backend::GetGameBase() + i;
			if (compare((BYTE *)(address), (BYTE *)to_scan, mask)) {
				foundAddrs.push_back((address));
			}
		}
		return foundAddrs;
	}
}