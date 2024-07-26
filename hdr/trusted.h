#pragma once
#include <Windows.h>
#include <string>
#include <sddl.h>
#include <iostream>
#include "../hdr/util.h"

namespace trusted
{
	bool enable_privilege(std::string privilege);
	bool impersonate_system();
	DWORD start_trusted();
	bool create_process(std::string commandLine);
	bool is_system_group();
	bool has_admin();
}