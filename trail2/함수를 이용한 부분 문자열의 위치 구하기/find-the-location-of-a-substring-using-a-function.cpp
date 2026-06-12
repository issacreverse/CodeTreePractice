#include <iostream>
#include <string>
using namespace std;
int Func(string& n, string& m)
{
    bool flag = false;
    for(int i=0; i<n.length(); i++)
    {
        int temp = i;
        for(int j=0; j<m.length(); j++)
        {
            flag = true;
            if(n[temp++] != m[j])
            {
                flag = false;
                break;
            }
        }
        if(flag)
            return i;
    }
    return -1;
}
int main() {
    // Please write your code here.
    string N, M;
    cin >> N >> M;

    cout << Func(N,M);
    return 0;
}