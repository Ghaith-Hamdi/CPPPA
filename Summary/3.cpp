//What is the output of the following snippet ?

#include <iostream>
using namespace std;
class C1 {
    friend class C2;
protected:  int y;
public:     int z;
private:    int x;
public:     C1() { x = y = z = 11; }
};

class C2 {
public: C1 a;
      C2() { a.x = 22; };
      void foo() {
          cout << a.x << a.y << a.z;
      }
};
int main()
{
    C2 c;
    c.foo();
    return 0;
}

