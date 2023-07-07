#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    float f = 2.5;
    cout << float(i) / int(f);//10.0 / 2 = 5.0 (cout prints 5)
    return 0;
}