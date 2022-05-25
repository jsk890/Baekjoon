#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*OXÄûÁî 8958*/
    int num, cnt, sum = 0;
    cin >> num;
    string str = {};
    for (int i = 0; i < num; i++) {
        cin >> str;
        sum = 0; cnt = 0;
        for (int j = 0; j < str.size(); j++)
        {
            if (str.at(j) == 79 || str.at(j) == 111) { cnt++; sum += cnt; }
            else cnt = 0;
        }
        cout << sum << "\n";
    }
}