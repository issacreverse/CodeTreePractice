#include <iostream>
using namespace std;
void Func(int a, int b)
{
    int num = 1;

    for(int i=0; i<b; i++)
    {
        num *= a;
    }
    cout << num;
}
int main() {
    // Please write your code here.
    int a, b;
    cin >> a >> b;
    Func(a, b);
    return 0;
}