#include <iostream>
using namespace std;

int main()
{
    /*A/B 1008*/
    double num1;
    double num2;
    cin >> num1 >> num2;

    cout << fixed;
    cout.precision(9);
    cout << num1 / num2;

    return 0;
}