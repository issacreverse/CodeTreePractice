#include <iostream>
using namespace std;

void Func(int n, int m)
{
    int num;
    if(n>=m)
    {
        for(int i=1; i<=m; i++)
        {
            if(n%i==0 && m%i==0)
            {
                num = i;
            }
        }
    }
    else
    {
        for(int i=1; i<=n; i++)
        {
            if(n%i==0 && m%i==0)
            {
                num = i;
            }
        }
    }
    cout << num;
}
int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    Func(n,m);
    return 0;
}