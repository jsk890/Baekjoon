#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*¾ËÆÄºªÃ£±â 10809*/
    bool isFind = false;
    string s;
    cin >> s;
    for (int i = 0; i < 26; i++)
    {
        for (int k = 0; k < s.size(); k++)
        {
            if (s.at(k) == 'a' + i) { 
                cout << k << " "; 
                isFind = true; 
                break;
            } 
            if(k == s.size() - 1 && isFind == false)
                cout << -1 << " ";
        }
        isFind = false;
    }
}