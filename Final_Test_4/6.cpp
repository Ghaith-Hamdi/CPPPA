#include <iostream>
#include <string>
using namespace std;
class cmplx 
{
    double re, im;
public:
    cmplx() : re(1), im(1) {}
    cmplx(double r, double i) : re(r), im(i) {}
    cmplx operator+(cmplx&);
    void out() { cout << "(" << re << "," << im << ")"; }
};

cmplx cmplx::operator+ (cmplx& a)
{
    cmplx c(this->re + a.re, this->im + a.im);
    return c;
}

int main()
{
    cmplx x(1, 2), y, z;//x.re = 1 , x.im = 2 //y.re = z.re = 1 //y.im = z.im = 1
    z = x + y;// z.re = x.re + y.re = 1 + 1 = 2 // z.im = x.im + z.im = 2 + 1 = 3
    z.out();
    return 0;
}