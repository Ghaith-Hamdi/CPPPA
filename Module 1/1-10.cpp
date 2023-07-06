//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A 
{
public:
    A(A*v) { A::v = v; }
    //A(float v) { A::v = v; } => Correction 
    A() { A::v = 1.0; }
    float v;
    float set(float v)
    {
        A::v = v;
        return v;
    }
    float get(float v)
    {
        return A::v;
    }
};

int main()
{
    //A* a = new A(); => Correction
    A a;
    A *b = new A(a); 
    cout << a->get(b->set(a->v));
    //cout << a.get(b->set(a.v)); //=> Correction
    return 0;
}