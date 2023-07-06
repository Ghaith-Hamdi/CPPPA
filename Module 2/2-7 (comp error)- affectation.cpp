//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class X { };
class Y : public X { };
class Z : public X { };

int main() 
{
    Z* z = new Z();
    Y* y = new Y();
    z = y;//type mismatch
    cout << (z == y);
    return 0;
}