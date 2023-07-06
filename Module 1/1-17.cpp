//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
//private by default
    int cnt;
    void put(int v) { cout << cnt++; }
};

int main() 
{
    A a;
    a.cnt = 0;
    a.put(1);
    a.put(1);
    return 0;
}