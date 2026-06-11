#include <iostream>
using namespace std;

bool Func(int M, int D)
{
    if(M>12)
        return false;
    if(D>31)
        return false;
    if(M == 2 || M == 4 || M==6 || M==9 || M == 11)
    {
        if(D>30)
            return false;
    }
    if(M == 2)
    {
        if(D>28)
            return false;
    }
    return true;
}
int main() {
    // Please write your code here.
    int M, D;
    cin >> M >> D;
    if(Func(M,D))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}