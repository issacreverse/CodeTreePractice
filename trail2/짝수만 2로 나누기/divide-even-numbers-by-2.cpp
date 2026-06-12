#include <iostream>
using namespace std;
void Func(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
            arr[i]/=2;
    }
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    int arr[50];
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    Func(arr, N);
    for(int i=0; i<N; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}