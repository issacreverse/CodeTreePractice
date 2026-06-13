#include <iostream>
using namespace std;
int F(int n)
{
    if(n==0 || n== -1)
        return 0;
    if(n%2==0)
    {
        return F(n-2) + n;
    }
    else
    {
        return F(n-2) + n;
    }
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}