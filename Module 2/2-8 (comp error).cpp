//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
    friend void f();//should be f(A& a)
private:
    int field;
public:
    int set(int x) { return field = ++x; }
    int get() { return ++field; }
};

void f(A& a) { a.field /= 2; }//friend function

int main()
{
    A a;
    a.set(2);
    f(a);
    cout << a.get();
    return 0;
}