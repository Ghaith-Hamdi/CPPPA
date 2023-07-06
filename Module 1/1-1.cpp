//What is the output of the following snippet ?

#include <iostream>
using namespace std;

class A
{
public:
    float v;
    A() { v = 1.0; }//default constructor
    A(A& a) { A::v = a.v; cout << "1"; }//copy constructor
    ~A() { cout << "0"; }//destructor : outputs 0 when an object
                        //goes out of scope
};

int main()
{
    //A a,b;//=>00

    A a, b = a;//=>100
    //1 : copy constructor is called because of b = a
    // 00 : destructor is called twice because a and b went out
    //of scope
}