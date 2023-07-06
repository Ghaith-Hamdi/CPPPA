#include <iostream>
using namespace std;
class cmplx
{
    double re, im;
public:
    cmplx() : re(0), im(0) {}
    cmplx(double x) { re = im = x; }
    cmplx(double x, double y) { re = x; im = y; }
    void out() { cout << "(" << re << "," << im << ")"; }
};

int main()
{
    cmplx c(1, 2), cc(c);
    cc.out();
    return 0;
}
//the copy constructor is implicitly defined by the compiler because
//the cmplx class does not provide an explicit copy constructor.
//The default copy constructor simply copies the member variables of the object being copied.