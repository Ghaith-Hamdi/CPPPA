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
    //empty but herits from X everything..
};
class Z : public Y
{
public:
    void shout() { cout << "Z"; }
};

int main()
{
    Z* z = new Z();
    static_cast<Y*>(z)->shout();
    return 0;
}