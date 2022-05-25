#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*º° Âï±â -2 2439*/
    int cnt = 0;
    cin >> cnt;
    for (int i = 1; i <= cnt; i++)
    {
        for (int j = cnt; j >= i+1; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}