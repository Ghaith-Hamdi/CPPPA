//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    int data[3];
private:
    int cnt;
public:
    void put(int v) { data[cnt++] = v; }
    int take() { int c = cnt; cnt = 0; return c; }
};

int main() 
{
    A a;
    a.take();
    a.put(a.take());//data[0] = 0
    a.put(1);//data[1] = 1
    cout << a.data[0];// 0
    return 0;
}