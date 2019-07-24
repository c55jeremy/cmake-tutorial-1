//============================================================================
// Name        : hello_cmake.cpp
// Author      : c55jeremy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
#ifdef DEF_IN_CMAKE
    cout << "!!!Hello CMake!!!" << endl;
#else
    cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
#endif
    return 0;
}
