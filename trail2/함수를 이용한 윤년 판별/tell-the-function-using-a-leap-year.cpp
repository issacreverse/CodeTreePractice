#include <iostream>
using namespace std;
bool Func(int y)
{
    if(y%4!=0)
        return false;
    if(y%100==0 && y%400!=0)
        return false;
    
    return true;
}
int main() {
    // Please write your code here.
    int y;
    cin >> y;
    
    if(Func(y))
        cout << "true";
    else
        cout << "false";
    return 0;
}