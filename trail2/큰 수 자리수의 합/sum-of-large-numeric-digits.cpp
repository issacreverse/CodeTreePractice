#include <iostream>
using namespace std;
int F(int n)
{
    if(n/10 == 0)
        return n%10;
    return F(n/10) + n%10;
}
int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    cout << F(a*b*c);
    return 0;
}