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
    void shout() { cout << "Y"; }
};

int main()
{
    X* x = new Y(); //upcasting :adress of object of Y is assigned to pointer variable x of class X*
    static_cast<Y*>(x)->shout();//downcasting
    return 0;
}