#include <iostream>
using namespace std;
void F1(int n)
{
    if(n==0)
        return;
        F1(n-1);
    cout << n << " ";
}
void F2(int n)
{
    if(n==0)
        return;
    cout << n << " ";
    F2(n-1);
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    F1(N);
    cout << endl;
    F2(N);
    return 0;
}