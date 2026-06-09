#include <iostream>
using namespace std;

void Func(int N)
{
    int cnt = 0;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cnt += 1;
            if(cnt == 10) cnt = 1;
            cout << cnt << " ";
        }
        cout << endl;
    }
}
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    Func(N);
    return 0;
}