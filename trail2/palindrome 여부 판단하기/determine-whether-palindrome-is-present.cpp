#include <iostream>
#include <string>
using namespace std;
bool Func(string& str)
{
    for(int i=0; i<str.length(); i++)
    {
        if(str[i] != str[str.length()-1-i])
            return false;
    }
    return true;
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