// RustTestStatic.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "RustTestStatic.h"
#include <cstdio>
#include <string>


size_t print_int_val(int value)
{
#ifdef _DEBUG
    std::string profile = "DEBUG";
#else
    std::string profile = "RELEASE";
#endif
    printf("Profile is: %s\n", profile.c_str());
    auto num_printed = printf("Value is: %d\n", value);
    return num_printed;
}
