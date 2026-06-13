#include <iostream>
using namespace std;

int F(int arr[], int n)
{
    for(int i=n; i>=0; i--)
    {
        if(arr[i] > arr[n])
            return F(arr, i);
    }
    return arr[n];
}
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[100];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << F(arr, n-1);
    return 0;
}