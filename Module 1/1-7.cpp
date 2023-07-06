//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    A(float v) { A::v = v; }
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
    A *a = new A(1.0);//*a.v = 1.0
    A *b = new A(*a);//*b.v = 1.0
    //b->set(a->v);//b->set(1.0) : *b.v = 1.0
    //a->get(1.0);// returns *a.v = 1.0
    cout << a->get(b->set(a->v));
    return 0;
}