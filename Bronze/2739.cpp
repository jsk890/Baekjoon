#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*±¸±¸´Ü 2739*/
    int dan = 0;
    cin >> dan;
    for (int i = 0; i < 9; i++)
    {
        cout << dan << " * " << i + 1 << " = " << dan * (i + 1) << endl;
    }
}