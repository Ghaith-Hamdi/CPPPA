//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    float v;
    A() : v(1.0) {}
    A(A& a) : v(2.0) {}
    A(float f) : v(3.0) {}
    float get()
    {
        return A::v;
    }
};

int main()
{
    A a;//a.v = 1.0
    A b( a.get() );//b.v = 3.0
    A c(b);//c.v = 2.0
    cout << a.v + b.v + c.v;
    return 0;
}