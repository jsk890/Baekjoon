#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*숫자의 개수 2577*/
    int arr[9] = { 0 }, a = 0, b = 0, c = 0, mul = 0, temp = 0, sum = 0;
    string sMul = "";
    cin >> a >> b >> c;
    mul = a * b * c;
    sMul = to_string(mul);
    for (int i = 0; i < sMul.size(); i++)
    {
        temp = pow(10, i+1);
        arr[i] = (mul % temp) / (temp/10);

    }
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j < sMul.size(); j++)
        {
            if (i == arr[j]) sum++;;
        }
        cout << sum << "\n";
        sum = 0;
    }
}