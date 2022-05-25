#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*A+B-4 10951*/
    int a = 0, b = 1;
    while (true)
    {
        cin >> a >> b;
        if (cin.eof()) break;
        cout << a + b << "\n";
    }
}