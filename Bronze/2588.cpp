#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*°ö¼Á 2588*/
    int num1, num2;
    cin >> num1 >> num2;

    cout << num1 * (int(num2 / pow(10, 0)) % 10) << endl;
    cout << num1 * (int(num2 / pow(10, 1)) % 10) << endl;
    cout << num1 * (int(num2 / pow(10, 2)) % 10) << endl;
    cout << num1 * num2 << endl;

    return 0;
}