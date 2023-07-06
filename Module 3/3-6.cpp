//What is the output of the following snippet ?

#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class E {};

class X {
    static int c;
public:
    X() { if (c++ > 2) throw new E; }
    ~X() { if (c++ > 2) throw new E; }
};

int X::c = 0;

void f(int i) {
    X a, b;
    cout << i;
}

int main(void) {
    try {
        f(0);
        f(1);
    }
    catch (...) {
        cout << 1;
    }
    return 0;
}