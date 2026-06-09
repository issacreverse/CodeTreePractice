#include <iostream>
using namespace std;
void Func();

int main() {
    // Please write your code here.
    for(int i=0; i<5; i++)
    {
        Func();
        cout << endl;
    }
    return 0;
}
void Func()
{
    for(int i=0; i<10; i++)
    {
        cout << "*";
    }
}