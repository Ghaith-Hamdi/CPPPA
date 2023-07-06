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
        return v;
    }
    float set(void) 
    {
        A::v = v + 1.0;
        return 0.0;
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
    //a.set();//a.v = 1.0
    //a.set(0.0);//a.v = 2.0 but returns 0.0
    //a.set(0.0);//a.v = 3.0 but returns 0.0
    //a.get(0.0);//v = 3.0
    cout << a.get ( a.set( a.set( a.set() ) ) );
    return 0;
}