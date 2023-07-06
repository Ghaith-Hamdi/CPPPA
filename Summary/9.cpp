//Which code, inserted into function main, generates the output abba ? Choose all correct answers.

#include <iostream>
#include <string>
using namespace std;
string fun(string s)
{
    return s.substr(0, 1) + s.substr(1, 1) + s.substr(1, 1) + s.substr(0, 1);
}
int main()
{
    string* s = new string("ab");
    //insert code here
    return 0;
}

//cout << fun(“abba”);
//cout << fun(*s);
//cout << fun(“ab”);
//cout << fun(s);