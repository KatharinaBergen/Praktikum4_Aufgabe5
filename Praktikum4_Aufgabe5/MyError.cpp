/*
	Author: Kat Bergen
	v01 26.06.2020

	cpp error handling

	PAD 1 P4A5
*/

#include "MyError.h"


void error(const std::string& s)
{
	throw std::runtime_error{ s };
}