#include <iostream>

using namespace std;

int main()
{
    int i = 2, j = i++, k = i++;

    cin >> i;//3
    cout << k - i << j - i;
}

