#include <iostream>
using namespace std;
//Variable r in class C3, will be...
//none of those (not accessible)

class C1
{
public :   int p;
private:   int q;
protected :int r;
};

class C2 : private C1 {};

class C3 : public C2 {};