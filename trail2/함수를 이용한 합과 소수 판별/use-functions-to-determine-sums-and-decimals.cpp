#include <iostream>
using namespace std;

bool Func1(int n)
{
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            cnt++;
    }
    return (cnt == 2);
}
bool Func2(int n)
{
    int n3 = n/100;
    int n2 = (n%100) / 10;
    int n1 = n%10;

    return ((n3+n2+n1)%2==0);
}
bool Func(int n)
{
    return (Func1(n) && Func2(n));
}
int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    int cnt = 0;
    for(int i=A; i<=B; i++)
    {
        if(Func(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}