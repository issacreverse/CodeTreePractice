#include <iostream>
using namespace std;
int total = 0;
void Func(int arr[],int m)
{
    total += arr[m-1];
    while(m!=1)
    {
        if(m%2==1)
            m--;
        else
            m/=2;

        total += arr[m-1];
    }
}
int main() {
    // Please write your code here.
    int N , M;
    cin >> N >> M;
    int A[100];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    Func(A,M);
    cout << total;
    return 0;
}