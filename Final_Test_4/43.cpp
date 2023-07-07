#include <iostream>
using namespace std;
struct S
{
    int  a;
    char b;
    struct
    {
        float a;
        int   b;
    }c;
};
int main(int argc, const char* argv[])
{
    S s = { 1, 2, 3, 4 };// = {s.a, s.b, s.c.a, s.c.b}
    cout << s.c.a << s.c.b;
}