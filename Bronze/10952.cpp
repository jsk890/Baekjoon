#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*A+B-5 10952*/
    int a = 0, b = 0;
    while (true)
    {
        cin >> a >> b;
        if (a + b == 0) break;
        cout << a + b << "\n";
    }
}