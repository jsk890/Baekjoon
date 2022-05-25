#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*A+B-8 11022*/
    int a = 0, b = 0, cnt = 0;
    cin >> cnt;
    for (int i = 1; i <= cnt; i++)
    {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
    }
}