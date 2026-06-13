#include <iostream>
using namespace std;
void F(int n)
{
    if(n==0)   
        return;
    cout << n << " ";
    F(n-1);
    cout << n << " ";

}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    F(N);
    return 0;
}