#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*³ª¸ÓÁö 3052*/
    int mod[10] = { 0 }, num = 0, cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> num;
        mod[i] = num % 42;
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1 ; j < 10; j++)
        {
            if (mod[i] == mod[j]) {
                mod[j] = -1;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (mod[i] != -1) cnt++;
    }
    cout << cnt;
}