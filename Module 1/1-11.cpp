//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    float v;
    float set(float v)
    {
        v += 1.0;
        this->v = v;
        return v;
    }
    float get(float d)
    {
        v += 1.0;
        return v;
    }
};

int main()
{
    A a;
    //a.set(0.5);//a.v = 1.5
    //a.set(1.5);//a.v = 2.5
    //a.get(2.5);//a.v = 3.5
    cout << a.get ( a.set( a.set(0.5) ) );
    return 0;
}