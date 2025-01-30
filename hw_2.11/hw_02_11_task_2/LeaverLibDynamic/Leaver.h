// ���� Leaver.h
#pragma once

#ifdef LEAVERLIBDYNAMIC_EXPORTS
#define LEAVERLIB_API __declspec(dllexport)
#else
#define LEAVERLIB_API __declspec(dllimport)
#endif

#include <iostream>

namespace Leaverns
{
	class Leaver
	{
	public:
		LEAVERLIB_API std::string leave(std::string leave_string);
	};
}
