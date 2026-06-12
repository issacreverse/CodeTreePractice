#include <iostream>
using namespace std;

void Func(int *arr, int num)
{
    for(int i=0; i<num; i++)
    {
        if(arr[i] < 0)
        {
            arr[i] = arr[i]*(-1);
        }
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
        cout <<  arr[i] << " ";
    }
    return 0;
}