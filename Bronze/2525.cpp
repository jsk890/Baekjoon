#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*¿Àºì½Ã°è 2525*/
    int hour = 0, minute = 0, cookingTime = 0, conHourintoMin = 0;
    cin >> hour >> minute;
    cin >> cookingTime;
    conHourintoMin = hour * 60 + minute + cookingTime;

    if (conHourintoMin >= 24 * 60) conHourintoMin -= 24 * 60;
    minute = conHourintoMin % 60;
    hour = (int)(conHourintoMin / 60);

    cout << hour << " " << minute << endl;
}
