#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

class BigInt {
    int base;
    
    public:
        char* display(int num);
};

char* BigInt::display(int num) {
    return (char*)itoa(num);
}