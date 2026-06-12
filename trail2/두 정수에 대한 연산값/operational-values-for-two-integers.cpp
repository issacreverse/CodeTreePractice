#include <iostream>
using namespace std;
void Func(int& a, int& b)
{
    if(a>=b)
    {
        a+=25;
        b*=2;
    }
    else
    {
        b+=25;
        a*=2;
    }
}
int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    Func(a, b);
    cout << a << " " << b;
    return 0;
}