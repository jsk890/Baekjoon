#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*À±³â 2753*/
    int year;
    cin >> year;

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        cout << 1;
    }
    else {
        cout << "0";
    }

    return 0;
}