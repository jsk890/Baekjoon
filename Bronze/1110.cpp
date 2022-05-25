#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*더하기 사이클 1110*/
    int num = 0, newNum = 0, cnt = 1, temp = 0;
    cin >> num;
    newNum = num;
    while (true)
    {
        temp = newNum / 10 + newNum % 10;
        newNum = (newNum % 10) * 10 + temp % 10;
        if (newNum == num) break;
        cnt++;
    }
    cout << cnt;
}