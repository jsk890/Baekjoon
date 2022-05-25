#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*ЦђБе 1546*/
    int  num = 0;
    float sub[1000] = { 0 }, fixSub[1000] = { 0.0 }, sum = 0, max = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
        cin >> sub[i];
    max = sub[0];
    for (int i = 0; i < num; i++)
        if (sub[i] >= max) max = sub[i];
        
    for (int i = 0; i < num; i++)
        fixSub[i] = sub[i] / max * 100;
    
    for (int i = 0; i < num; i++)
        sum += fixSub[i];
    cout << sum / num;
}