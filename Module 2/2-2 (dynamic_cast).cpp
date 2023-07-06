//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class X
{
public:
    void shout() { cout << "X"; }
};
class Y : public X
{
public:
    virtual void shout() { cout << "Y"; }
};
class Z : public Y
{
public:
     void shout() { cout << "Z"; }
};

int main()
{
    Y* y = new Z();//creates object of class Z. assigns its adress to a pointer variable y of type Y*
    //upcasting : object of derived class is assigned to a pointer variable of base class type.
    //The upcasting from Z* to Y* is allowed because Z is a subclass of Y => Z object can be treated as a Y object
    dynamic_cast<X*>(y)->shout();//output is X // UPP
    return 0;
}