#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*문자열반복 2675*/
    int cnt = 0, rpt = 0;
    string s;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> rpt >> s;
        for (int k = 0; k < s.size(); k++)
            for (int j = 0; j < rpt; j++)
                cout << s.at(k);
        cout << "\n";
    }
}