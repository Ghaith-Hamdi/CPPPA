#include <iostream>
#include <cstdarg>
using namespace std;
int calculate(int& val, int arg)
{
    val *= arg;//val = val * arg = 2
    return arg;//2
}

int main()
{
    int i = 1;
    int j = calculate(i, 2);//j = 2
    cout << i << j;
    return 0;
}