//What is the output of the following snippet ?

#include <iostream>
using namespace std;
int main()
{
    char i = '1';
    switch (i)
    {
    case '1':
        cout << "Hello ";
    case '2':
        cout << "world "; break;
    case '3':
        cout << "!";
    }        return 0;
}

