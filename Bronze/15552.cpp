#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*ºü¸¥ A+B 15552*/
    int cnt = 0, a = 0, b = 0;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> a >> b;
        cout << a + b << "\n";
    }
}