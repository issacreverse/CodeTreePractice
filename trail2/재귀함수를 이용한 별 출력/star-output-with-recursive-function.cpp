#include <iostream>
using namespace std;
void F(int n)
{
    if(n==0)
        return;
    F(n-1);
    for(int i=0; i<n; i++)
        cout << "*";
    cout << endl;
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    F(N);
    return 0;
}