#include <iostream>
using namespace std;

void Func(int n, int m)
{
    if(n>=m)
    {
        for(int i=n; i<n*m; i++)
        {
            if(i%n==0 && i%m==0)
            {
                cout << i;
                return;
            }
        }
    }
    else
    {
        for(int i=m; i<n*m; i++)
        {
            if(i%n==0 && i%m==0)
            {
                cout << i;
                return;
            }
        }
    }
}
int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    Func(n,m);
    return 0;
}