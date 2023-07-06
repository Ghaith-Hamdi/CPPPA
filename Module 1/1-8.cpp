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
    A *a = new A(1.0);//a->v = 1.0
    A *b = new A(*a);//b->v = 1.0
    //cout << b->set(a->v); //1
    //cout << a->get(1);
    
    cout << a->get ( b->set(a->v) );
    return 0;
}