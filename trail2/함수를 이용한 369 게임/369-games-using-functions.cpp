#include <iostream>
using namespace std;

bool Func2(int n)
{   
    int arr[7];
    int num[7] = {1,10,100,1000,10000,100000,1000000};
    for(int i=6; i>=0; i--)
    {
       if(i==6)
       {
        arr[i] = n/num[i];
       }
       else
       {
        arr[i] = n%num[i+1]  / num[i];
       }
    }

    int cnt = 0;
    for(int i=0; i<7; i++)
    {
        if(arr[i] == 3 || arr[i] == 6 || arr[i] == 9)
            cnt++;
    }
    return (cnt >= 1);
}
int Func(int a, int b)
{
    int cnt = 0;
    for(int i=a; i<=b; i++)
    {
        if(Func2(i) || i%3==0)
            cnt++;
    }
    return cnt;
}
int main() {
    // Please write your code here.
    int A, B;
    cin >> A >> B;
    cout << Func(A, B);

    return 0;
}