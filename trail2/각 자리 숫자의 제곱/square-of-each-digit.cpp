#include <iostream>
using namespace std;
int F(int n)
{
    if(n/10==0)
        return n*n;
    int last = n%10;
    return F(n/10) + last*last;
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}