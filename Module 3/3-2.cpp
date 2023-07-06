//What is the output of the following snippet ?

#include <iostream>
#include <exception>

using namespace std;

int main() {
    try {
        throw 2. / 4;
    }
    catch (int i) {
        cout << i;
    }
    return 0;
}