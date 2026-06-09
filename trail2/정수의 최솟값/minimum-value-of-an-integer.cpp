#include <iostream>
using namespace std;

int Min(int a, int b, int c)
{
    int num = (a<b ? a : b);
    return num < c ? num : c;
}
int main() {
    // Please write your code here.
    int a, b, c;
    cin >> a >> b >> c;
    cout << Min(a, b, c);
    return 0;
}