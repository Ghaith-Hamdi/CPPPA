#include <iostream>
#include <string>
using namespace std;
class One
{
    char value;
public:
    One() { value = 'A'; }
    One(char v) : value(v) {}
    void set(char c) { this->value = c; }
    void set() { this->value = 'd'; }
    char get() { return value; }
};
int main()
{
    One o1, *o2;//o1.value = A
    o2 = new One('b');//o2.value = b
    One *p; p = &o1; //same as One* p = &o1;
    p->set();//o1.value = d
    p = o2;//same as p = &o2
    p->set('c');//o2.value = c
    cout << o2->get() - o1.get();// c - d = -1
    return 0;
}