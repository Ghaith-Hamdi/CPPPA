#include <iostream>
using namespace std;
int k = -1;
class Class
{
public: char* adr;
      Class() { adr = new char[k]; }//k = -1 ==> allocate array with negative size => not allowed
      ~Class() { delete[] adr; }
};

float fun(void)
{
    Class object;
    return 0.5f;
}

int main()
{
    fun();
    return 0;
}