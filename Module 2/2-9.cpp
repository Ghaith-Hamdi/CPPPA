//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    int v;
    A(int x) : v(x + 1) {}
    int get() const { return v; }
};

int main()
{
    A a(2);//a.v = 3
    A b(a);//b.v = 3
    cout << a.get() << b.get();
    return 0;
}