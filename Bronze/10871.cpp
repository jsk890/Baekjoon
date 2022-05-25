#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*X보다 작은 수 10871*/
    int cnt = 0, num = 0, arr[10000] = {};
    cin >> cnt >> num;
    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < cnt; i++)
    {
        if (arr[i] < num) cout << arr[i] << " ";
    }
}