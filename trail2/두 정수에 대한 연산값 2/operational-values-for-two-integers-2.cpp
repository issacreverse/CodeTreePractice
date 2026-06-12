#include <iostream>
using namespace std;
void Func(int& a, int& b)
{
    if(a>b)
    {
        b+=10;
        a*=2;
    }
    else
    {
        a+=10;
        b*=2;
    }
}
int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;

    Func(a,b);
    cout << a << " " << b;
    return 0;
}