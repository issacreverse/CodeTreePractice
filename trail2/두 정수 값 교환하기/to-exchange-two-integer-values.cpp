#include <iostream>
using namespace std;
void Func(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    // Please write your code here.
    int n, m;
    cin >> n >> m;
    Func(n,m);
    cout << n << " " << m;
    
    return 0;
}