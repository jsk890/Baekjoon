#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*¹úÁý 2292*/
    long long int num = 0, min = 0, max = 1, cnt = 1;
    //int cnt = 0;
    cin >> num;
    while (num != 1)
    {
        max += (cnt -1 ) * 6;
        min = max - (cnt - 1) * 5 - cnt + 2;
        if (min  <= num && max >= num )
        {
            cout << cnt;
            return 0;
        }
        cnt++;
    }
    cout << cnt;
}