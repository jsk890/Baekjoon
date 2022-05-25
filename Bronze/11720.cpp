#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*숫자의합 11720*/
    int cnt = 0, sum = 0 ;
    string sNum;
    cin >> cnt;
    cin >> sNum;
    for (int i = 0; i < cnt; i++) sum += sNum.at(i) - '0';
    cout << sum;
}