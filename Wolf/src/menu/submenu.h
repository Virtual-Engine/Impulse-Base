#pragma once

class Submenu {
protected:
	vector<string> Strings;
	vector<TranslationString> m_strings;
	vector<shared_ptr<Option>> Options;
	string Name;
	Submenu* pParentSubmenu;

public:
	bool bCanBeSearched;
	int nOldCurrentOption;
	int nOldScrollOffset;

	virtual ~Submenu();
	Submenu() : Name(string("")), pParentSubmenu(nullptr), bCanBeSearched(false), nOldCurrentOption(0), nOldScrollOffset(0) {}

	vector<shared_ptr<Option>> GetOptions() { return Options; }

	void MenuUpdate(bool withInput);

	virtual void Init();
	virtual void UpdateOnce();
	virtual void Update();
	virtual void FeatureUpdate();

	template<typename T>
	shared_ptr<T> addOption(T& option) {
		shared_ptr<T> ptr = make_shared<T>(option);
		Options.push_back(ptr);
		return ptr;
	}

	template<typename T>
	shared_ptr<T>& addOption(shared_ptr<T>& option) {
		Options.push_back(option);
		return option;
	}

	template<typename T>
	void setParentSubmenu() {
		pParentSubmenu = T::GetInstance();
	}

	Submenu* GetParentSubmenu() { return pParentSubmenu; }

	void setName(const char* name) {
		Name = name;
	}
	String getString(String str) {
		for (auto& s : m_strings) if (strcmp(str, s.Get()) == 0) return s.Get();
		return va("~r~[~s~%s~r~]", str);
	}
	string& GetName() { return Name; }
	vector<string> GetStrings() { return Strings; }

	void ClearOptions() {
		Options.clear();
	}

	void ClearOptionsOffset(int offset) {
		if (offset > Options.size()) return;
		Options.resize(offset);
	}
};