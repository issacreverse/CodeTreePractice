#include <iostream>
using namespace std;
bool Func(int n)
{
    if(n%2==0)
        return false;
    if(n%10 == 5)
        return false;
    if(n%3==0 && n%9!=0)
        return false;
    return true;
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