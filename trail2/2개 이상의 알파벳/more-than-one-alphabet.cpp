#include <iostream>
#include <string>
using namespace std;

bool Func(string& str)
{
    int cnt = 0;
    int arr[26] = {0,};
    for(int i=0; i<str.length(); i++)
    {
        arr[str[i]-97]++;
    }
    for(int i=0; i<26; i++)
    {
        if(arr[i] >= 1)
            cnt++;
    }
    return(cnt >= 2);
}
int main() {
    // Please write your code here.
    string A;
    cin >> A;

    if(Func(A))
        cout << "Yes";
    else
        cout << "No";
    return 0;
}