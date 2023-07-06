//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    float v;
    A(float x) : v(x) {}
};

class B
{
public:
    A a;
    float b;
    B(float x) : a(x + 1) { b = a.v; }
    //a(x + 1) : constructor of A

};

int main()
{
    B b(2.0);
    cout << b.b;//3
    return 0;
}