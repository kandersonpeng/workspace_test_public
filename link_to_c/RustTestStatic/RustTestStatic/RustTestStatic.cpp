// RustTestStatic.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "RustTestStatic.h"
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::cout;
using std::endl;

size_t print_int_val(int value)
{
#ifdef _DEBUG
    std::string profile = "DEBUG";
#else
    std::string profile = "RELEASE";
#endif
    cout << "Profile is: " << profile << endl;
    std::vector<double> myvec{};
    myvec.push_back(0.5);
    myvec.push_back(10.3);
    myvec.push_back(static_cast<double>(value));
    for (auto& val : myvec) {
        cout << val << ", ";
    }
    auto front = myvec.begin();
    myvec.erase(front);
    for (auto& val : myvec) {
        cout << val << ", ";
    }
    std::ostringstream ss{};
    ss << "Value is: " << value << "\n";
    auto num_printed = ss.str().size();
    cout << ss.str();
    cout.flush();

    return num_printed;
}
