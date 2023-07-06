#include <iostream>
#include <string>
using namespace std;
class Uno
{
    int val;
public: Uno(int x) { val = x; }
      int out() { return val; }
      void operator++(int var)
      {
          val += val;
      }
};
ostream& operator<<(ostream& o, Uno u)
{
    return o << u.out();
}

int main()
{
    Uno i(2);//i.val = 2
    i++;//i.val = 2 + 2 = 4
    cout << i;
    return 0;
}
