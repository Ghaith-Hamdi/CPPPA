//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    float v;
    A() { v = 1.0; }
    A(A& a) { A::v = a.v; cout << "1"; }
    ~A() { cout << "0"; }
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
    A a;
    A *b = new A(a);//cout << 1
    //Dynamically allocate memory for instance of class A using new
    //Constructor A(A& a) is invoked
    //A::v = a.v = 1.0 + prints 1
    //The object is assigned to the pointer b
    A *c = new A( *b );////cout << 1

    c->get(b->get(a.set(1.0)));
    //-> is used to dereference the pointer
    //and access member functions
    //Memory deallocated for static object a => cout << 0 - ~A()
    delete b;//cout << 0 - ~A()
    delete c;//cout << 0 - ~A()

    //11 0 00
    return 0;
}