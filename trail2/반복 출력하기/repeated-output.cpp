#include <iostream>
using namespace std;
void Func()
{
    cout << "12345^&*()_";
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        Func();
        cout << endl;
    }
    return 0;
}