//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class X 
{
private://problem
    int v;
};

class Y : public X
{
    Y() : v(0) {}
};

int main() 
{
    Y y;
    cout << y.v;
    return 0;
}