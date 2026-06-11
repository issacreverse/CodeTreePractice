#include <iostream>
using namespace std;

bool Func(int n)
{
    //소수인지 체크 
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            cnt++;
    }
    return (cnt==2);
}
int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for(int i=a; i<=b; i++)
    {
        if(Func(i))
            sum+=i;
    }
    cout << sum;
    return 0;
}