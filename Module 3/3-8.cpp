//What is the output of the following snippet ?

#include <iostream>
#include <exception>

using namespace std;

int main() {
    try {
        throw 3.14;
    }
    catch (double x) {
        x *= 2;
    }
    cout << x;
    return 0;
}
