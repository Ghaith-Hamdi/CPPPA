//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class X
{
protected:
    int v;
    X() : v(0) {};
};

class Y : protected X 
{
public:
    Y() : X() {}
};

int main()
{
    Y* y = new Y();
    cout << y->v;
    delete y;
    return 0;
}
