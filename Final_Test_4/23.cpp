#include <iostream>
#include <string>
using namespace std;
struct Who
{
    string nick;
};

class She
{
    Who* who;
public:
    She()
    {
        who = new Who;
        who->nick = "Jane";
    }
    string out()
    {
        return who->nick;
    }
};

int main()
{
    She they[2];
    for (int i = 0; i < 2; i++)//0 1
        cout << they[i].out();//JaneJane
    return 0;
}