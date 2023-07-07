#include <iostream>
using namespace std;
class Sup
{
public: virtual void out() { cout << "p"; }
};
class Sub : public Sup
{
public: virtual void out() { cout << "b"; }
};
int main()
{
    Sub sub;
    Sup* sup;
    sup = &sub;
    sup->out();//b since sup points to the sub object
    //dynamic dispatch
    sub.out();//b
    return 0;
}