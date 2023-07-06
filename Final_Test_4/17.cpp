#include <iostream>
using namespace std;
int main(int argc, const char* argv[])
{
    float B = 32;
    { 
        char B = '1'; 
        cout << B;//1
    }
    { 
        int B = 2;
        cout << B;//2
    }
    cout << B;//32
    return 0;
}