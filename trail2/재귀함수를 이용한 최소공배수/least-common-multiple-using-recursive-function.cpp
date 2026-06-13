#include <iostream>
using namespace std;
int F(int arr[], int n)
{
    if(n == 0)
        return arr[0];
    int n1 = arr[n];
    int n2 = arr[n-1];
    while(n1 != n2)
    {
        if(n1>n2)
            n2+=arr[n-1];
        else
            n1+=arr[n];
    }
    arr[n-1] = n1;
    return F(arr, n-1);
}
int main() {
    // Please write your code here.
    int n;
    cin >> n;
    int arr[10];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << F(arr,n-1);
    return 0;
}