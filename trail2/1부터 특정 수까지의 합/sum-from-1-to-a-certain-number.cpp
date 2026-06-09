#include <iostream>
using namespace std;

int Mean(int N)
{
    int cnt = 0;
    for(int i=1; i<=N; i++)
    {
        cnt += i;
    }
    return cnt/10;
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    cout << Mean(N);
    return 0;
}