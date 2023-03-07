#include <iostream>
using namespace std;

int main()
{
    string ch;
    cin >> ch;

    for (int i = 0; i < sizeof(ch); i++)
    {
        putchar(towlower(ch[i]));
    }
    cout<<endl;
    return (0);
}