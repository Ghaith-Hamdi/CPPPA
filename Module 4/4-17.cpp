//What is the output of the following snippet ?

#include <iostream>

using namespace std;

string operator>(float l, float r) { if (int(l) > int(r)) return "true"; else return "false"; }

int main() {
    float l = 2.0, r = 2.9999;
    cout << (l > r);
    return 0;
}