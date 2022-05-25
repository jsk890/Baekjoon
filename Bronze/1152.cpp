#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*단어의개수 1152*/
    int cnt = 0;
    bool space = true;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == 32 && space == false) space = true;
        if (s.at(i) != 32 && space == true)
        {
            cnt++;
            space = false;
        }
    }
    cout << cnt;
}