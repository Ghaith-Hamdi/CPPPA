#include <iostream>
using namespace std;
int X = 5;
int main()
{
    cout << "HI!";//6 times
    if (X-- > 0)
        main();
    return 0;
}