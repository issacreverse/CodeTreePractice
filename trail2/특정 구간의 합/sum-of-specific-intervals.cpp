#include <iostream>
using namespace std;

int A[100];
int Func(int arr[][2], int num)
{
    int total = 0;
    for(int i=arr[num][0]; i<=arr[num][1]; i++)
    {
        total += A[i-1];
    }
    return total;
}
int main() {
    // Please write your code here.
    int N, M;
    cin >> N >> M;
  
    int arr[100][2];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    for(int i=0; i<M; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    for(int i=0; i<M; i++)
    {
        cout << Func(arr, i) << endl;
    }
    return 0;
}