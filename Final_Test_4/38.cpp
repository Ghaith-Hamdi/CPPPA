#include <iostream>
using namespace std;
//bool char short int long float double
bool compare(bool t, bool u)
{
    return t < u;
}
int main()
{
    cout << compare(true, false);
    return 0;
}