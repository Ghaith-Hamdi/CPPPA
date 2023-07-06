#include <iostream>
using namespace std;
#define CALL(param) { if(param) cout << param++; }
int main()
{
    int i = 1;
    CALL(i);
    cout << i;
    return 0;
}


///#include <iostream>
//using namespace std;
//#define CALL(param) if(param) cout << param++
//int main()
//{
//    int i = 1;
//    CALL(i);
//else
//{
//    cout << "uuuu";
//}
//    cout << i;
//    return 0;
//}