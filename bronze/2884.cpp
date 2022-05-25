#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*알람시계 2884*/
    int hour=0, minute=0, conHourintoMin=0;
    cin >> hour >> minute;

    conHourintoMin = hour * 60 + minute;
    if (conHourintoMin >= 45) conHourintoMin -= 45;
    else conHourintoMin = 24 * 60 - 45 + minute;
    minute = conHourintoMin % 60;
    hour = (int)(conHourintoMin / 60);

    cout << hour << " " << minute << endl;
}
