#include <iostream>
#include <string>
using namespace std;
int boo(int v)
{
    v++;
    return ++v;
}
int main()
{
    float x = 3;
    x = boo(x);//x=5
    cout << x;
    return 0;
}