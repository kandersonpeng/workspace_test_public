#pragma once

#include <cstdint>

// Make a guard to ensure the library is linked correctly
#ifndef RUSTTESTSTATIC_LIB
#ifdef _DEBUG
#pragma comment(lib, "RustTestStatic_d.lib")
#else
#pragma comment(lib, "RustTestStatic.lib")
#endif
#endif // !RUSTTESTSTATIC_LIB

extern "C"
{
    extern size_t print_int_val(int value);
}
