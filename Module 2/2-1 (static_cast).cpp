//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class X 
{
public:
    virtual void shout() { cout << "X"; }
};
class Y : public X 
{
public:
     void shout() { cout << "Y"; }
};
class Z : public Y 
{
public:
    void shout() { cout << "Z"; }
};

int main()
{
    Z* z = new Z();
    static_cast<Y*>(z)->shout();//output is Z because there is virtual in X (base class that Y and Z inherit from)
    
    
    
    //virtual makes overwriting functions possible
    //Y* y = new Z();
    //dynamic_cast<Z*>(y)->shout();
    return 0;
}