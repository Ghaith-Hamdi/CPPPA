#include <iostream>
using namespace std;
int main()
{
    int x = -2, y;
    float f = 2.5, g;
    g = x;//g = -2.0
    y = f;//y = 2
    cout << (int)g / y;//-2 / 2 = -1
    return 0;
}