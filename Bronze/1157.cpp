#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*단어공부 1157*/
    int cntChar[26] = {}, large = 0;
    string s;
    cin >> s;
    for (int i = 0; i < 26; i++)
        for (int j = 0; j < s.size(); j++)
            if (s.at(j) == 65 + i || s.at(j) == 97 + i) cntChar[i]++;

    for (int i = 0; i < 26; i++) if (cntChar[i] > cntChar[large]) large = i;
    for (int i = 0; i < 26; i++)
    {
        if (large == i) i++;
        if (cntChar[i] == cntChar[large] && cntChar[i] != 0) {
            cout << "?";
            return 0;
        }
    }
    cout << (char)(65 + large);
}