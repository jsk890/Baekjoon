#include <iostream>
using namespace std;

int main()
{
    /*두 수 비교하기 1330*/
    int num1, num2;
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "==";
    }
    else if (num1 > num2) {
        cout << ">";
    }
    else {
        cout << "<";
    }

    return 0;
}