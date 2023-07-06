//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
    friend class B;
private:
    int field;
public:
    int set(int x) { return field = ++x; }
    int get() { return ++field; }
};

class B
{
public:
    void kill(A& a) { a.field = 0; }
};

int main()
{
    A a; B b;
    a.set(1);//a.field = 2
    b.kill(a);//a.field = 0;
    cout << a.get();
    return 0;
}