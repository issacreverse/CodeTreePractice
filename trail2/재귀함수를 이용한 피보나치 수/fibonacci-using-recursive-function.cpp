#include <iostream>
using namespace std;

int F(int n)
{
    if(n==1 || n == 2)
        return 1;
    return F(n-1)+F(n-2);
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}