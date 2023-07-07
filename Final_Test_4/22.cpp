#include <iostream>
#include <string>
//output : by
using namespace std;
class Uno 
{
protected: char y;
public:    char z;
};
// insert code here
class Due : public Uno//OK
//class Due//NOK
//class Due : protected Uno//OK
//class Due : private Uno//OK
{
public:
    
    void set() 
    {
        y = 'a';  z = 'z';
    }
    void out() { cout << ++y << --z; }
};

int main() {
    Due b;
    b.set();
    b.out();
    return 0;
}