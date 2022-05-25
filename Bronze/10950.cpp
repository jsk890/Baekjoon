#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*A+B-3 10950*/
    int a = 0, b = 0, testCnt = 0;
    cin >> testCnt;
    for (int i = 0; i < testCnt; i++)
    {
        cin >> a >> b;
        cout << a + b << endl;
    }
}