//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    float v;
    float set(float v) 
    {
        A::v += 1.0;
        A::v = v + 1.0;//Re-affectation
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
    A a;
    //a.set(0.5);//a.v = 1.5 but returns 0.5
    //a.set(0.5);//a.v = 1.5 but returns 0.5
    //a.get(0.5);//a.v = 1.5 + 0.5 = 2
    cout << a.get ( a.set( a.set(0.5) ) );
    return 0;
}