//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    A() { v = 2.5; }
    float v;
    float set(float v)
    {
        A::v += 1.0;
        return v;
    }
    float get(float v)
    {
        v += A::v;
        return v;
    }
};

int main()
{
    A a;//a.v = 2.5
    //a.set(1.5);//returns 1.5 but A::v = 3.5
    //a.get(1.5);//v += 3.5 => returns 5
    cout << a.get( a.set(1.5) );
    return 0;
}