//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    A() { v = 2.5; }
    A(float v) { A::v = v + 1.0; }
    float v;
    float set(float v) 
    {
        A::v += 1.0;
        return v;//v is unchanged
    }
    float get(float v) 
    {
        v += A::v;//A::v is set initially to 2.5 (default constr)
        return v;//v is changed
    }
};

int main() 
{
    A a, b(1.0);
    //A a : a.v = 2.5
    //A b(1.0) : A::v = 1.0 + 1.0 = 2.0 = b.v
    //b.set(1.5);returns 1.5 / A::v = 2.0 + 1.0 = 3.0
    //cout << a.get(1.5);// v += A::v => v+= 2.5 => v = 1.5 + 2.5 = 4      
    cout << a.get(b.set(1.5)); //b.set(1.5) : v = 4.5
    return 0;
}