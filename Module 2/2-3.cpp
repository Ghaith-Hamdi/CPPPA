//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
    int* val;
public:
    A() { val = new int; *val = 0; }//dyn alloc
    A(A& a) { val = new int; *val = a.get(); }
    //
    int get() { return ++(*val); }
};

int main()
{
    A a, b = a;
    //A a : a->val = 0
    //b = a : b->val = a.get() = ++(*val) = 1
    cout << a.get() << b.get();
    return 0;
}