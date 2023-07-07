#include <iostream>
#include <string>
using namespace std;
int main()
{
    bool t[] = { false, true, false & true };//0,1,0
    string u[2] = { "false", "true" };
    bool* p;
    p = t + 2;//third element
    cout << u[*p];//"false" = u[0]
    return 0;
}