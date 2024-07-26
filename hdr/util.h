#pragma once
#include <Windows.h>
#include <string>
#include <lmcons.h>
#include <TlHelp32.h>

namespace util
{
	// string to wide
	std::wstring string_to_wide(const std::string& s);

	// wide to string
	std::string wide_to_string(const std::wstring& s);

	// program debug privileges
	bool set_privilege(LPCSTR privilege, BOOL enable);
	char sub_43604B();

	// get current username
	std::string get_user();

	// get current path of process
	std::string get_current_path();

	// get target process id
	DWORD get_pid(std::string process_name);
}