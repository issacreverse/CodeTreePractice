#include <iostream>
using namespace std;

bool isYoon(int y)
{
    if(y%4!=0)
        return false;
    if(y%100==0 && y%400!=0)
        return false;
    
    return true;
}
bool check(int y, int m, int d, bool c)
{
    if(m == 2 || m==4 || m==6 || m == 9 || m == 11)
    {
        if(d>30)
            return false;
    }
    if(m == 2 && c)
        if(d>29)
            return false;
    if(m == 2 && !c)
    {
        if(d>28)
            return false;
    }
    return true;
}
bool Func(int y, int m, int d)
{
    if(isYoon(y))
    {
        return check(y,m,d,true);
    }
    else
    {
        return check(y,m,d,false);
    }
}
int main() {
    // Please write your code here.
    int Y,M,D;
    cin >> Y>> M >> D;
    if(Func(Y,M,D))
    {
        if(M >=3 && M <= 5)
            cout << "Spring";
        else if(M >=6 && M <= 8)
            cout << "Summer";
        else if(M >=9 && M <= 11)
        cout << "Fall";
        else
        cout << "Winter";
    }
    else
    {
        cout << -1;
    }

    return 0;
}