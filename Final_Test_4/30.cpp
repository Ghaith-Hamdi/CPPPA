#include <iostream>
using namespace std;
int doit(int a, float b)
{
    return a / b;
}
//int << long << float
int main()
{
    float x = doit(1.5f, 2l);// 1/2.0 = 0.5
    cout << x << ":" << doit(1, 1.f);// 0.5 : 1.0
    return 0;
}