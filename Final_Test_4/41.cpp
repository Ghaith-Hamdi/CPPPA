#include <iostream>
using namespace std;
class Alpha 
{
public: char out() { return 'A'; }
};
class Beta : public Alpha //no virtual here
{
public: virtual char out() { return 'B'; }
};
class Gamma : public Beta 
{
public: char out() { return 'G'; }
};
int main()
{
    Alpha* a = new Alpha();//we see the pointer variable Alpha* a
    Alpha* b = new Beta();//we see the pointer variable Alpha* a
    Alpha* c = new Gamma();//we see the pointer variable Alpha* a
    cout << ( a->out() ) << (b->out() ) << (c->out() );//AAA but if virtual ABG
    return 0;
}