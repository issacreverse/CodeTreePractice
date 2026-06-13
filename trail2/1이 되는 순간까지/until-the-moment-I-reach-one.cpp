#include <iostream>
using namespace std;
int F(int n)
{
    if(n == 1)
        return 0;
    if(n%2==0)
    {
        return 1+F(n/2);
    }
    else
    {
        return 1+F(n/3);
    }
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}