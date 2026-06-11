#include <iostream>
using namespace std;
bool Func(int n1, int n2, int arr1[], int arr2[])
{
    int flag = 0;
    for(int i=0; i<n1; i++)
    {
        flag = 0;
        int cnt = 0;
        int cnt2 = i;
        while(cnt < n2)
        {
            if(arr1[cnt2++] != arr2[cnt++])
            {
                flag = 1;
            }
        }
        if(flag == 1)
            continue;
        return true;
    }
    return false;
}
int main() {
    // Please write your code here.
    int n1, n2;
    int arr1[100];
    int arr2[100];

    cin >> n1 >> n2;
    for(int i=0; i<n1; i++)
    {
        cin >> arr1[i];
    }
    for(int i=0; i<n2; i++)
    {
        cin >> arr2[i];
    }
    if(Func(n1, n2, arr1, arr2))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}