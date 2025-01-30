// ���� Greeter.cpp

#include <iostream>
#include "Greeter.h"

namespace Greeterns
{
	std::string Greeter::greet(std::string greet_string)
	{
		return "������������, " + greet_string + "!";
	}
}