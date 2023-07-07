#include <iostream>
using namespace std;
class A
{
public: void out() { cout << "A"; }
};
class B : public A
{
public: void out() { cout << "B"; }
};
int main()
{
    A* a;
    a = new A();
    a->out();//A
    a = new B();
    a->out();//A //no virtual => type of pointer
    //B if virtual => type of object pointed to
    return 0;
}