#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*º° Âï±â -1 2438*/
    int cnt = 0;
    cin >> cnt;
    for (int i = 1; i <= cnt; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}