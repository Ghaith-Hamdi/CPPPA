//What is the output of the following snippet ?

#include <iostream>
#include <string>
using namespace std;
class X {
public:
    string n;
    X(string s) : n(s) {}
    void operator() (X x) {
        cout << x.n;
    }
};
int main(void) {
    X x("a"), y("b");
    x(y);//b
    y(x);//a
    return 0;
}