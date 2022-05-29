#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*직사각형에서 탈출 1085*/
	int x = 0, y = 0, w = 0, h = 0;

	cin >> x >> y >> w >> h;

	(x * 2 > w) ? x = w - x : x = x - 0;
	(y * 2 > h) ? y = h - y : y = y - 0;
	cout << min(x, y);

}