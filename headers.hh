#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

class BigInt {
    int base;
    
    public:
        char* display_as_string(int num);
};