#include <iostream>
#include <string>
using namespace std;
string fun(string s1, string s2)
{
    return s1 + s2;
}
int main()
{
    string s = "1", * t = &s;
    cout << fun("1", *t) << endl;//11
    cout << fun(*t, s) << endl;//11
    cout << fun(*t, "2") << endl;//12
    //printing *t gives us the value of s (value it is pointing to since
    //we dereferenced t by typing *t
    return 0;
}