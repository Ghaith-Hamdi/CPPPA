//What is the output of the following snippet ?

#include <iostream>
using namespace std;
void foo(int& parameter)
{
    parameter *= 2;
}
int main()
{
    int var = 2;
    foo(var);
    cout << var;
    return 0;
}

