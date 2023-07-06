#include <iostream>
using namespace std;

class C1
{
    public    int p;
    private   int q;
    protected int r;
};

class C2 : private C1 {};

class C3 : public C2 {};

