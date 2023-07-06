//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    A(A& a) { v = a.get(0.0); }
    A(float v) { A::v = v; }
    float v;
    float set(float v)
    {
        A::v += v;
        return v;
    }
    float get(float v)
    {
        return A::v + v;
    }
};

int main()
{
    A a(0.), b = a;//a.v = 0.0 - b.v = 0.0
    //b.set(1.5);//b.v = 1.5 but returns 1.5
    //a.get(1.5);//returns a.v + 1.5 = 0 + 1.5 = 1.5
    cout << a.get ( b.set(1.5) );
    return 0;
}