#include <iostream>
using namespace std;

int main()
{
    /*³ª¸ÓÁö 10430*/
    int num1, num2, num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    cout << (num1 + num2) % num3 << endl;
    cout << ((num1 % num3) + (num2 % num3)) % num3 << endl;
    cout << (num1 * num2) % num3 << endl;
    cout << (num1 % num3) * (num2 % num3) % num3 << endl;

    return 0;
}