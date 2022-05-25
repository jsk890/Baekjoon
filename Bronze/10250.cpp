#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	//ACMÈ£ÅÚ 10250
	int cnt = 0, num = 0, room = 0,w = 0, h = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> h >> w >> num;
		room = ((num % h == 0)? h : num % h) * 100 + ceil(num / h) + ((num % h == 0) ? 0 : 1);
		cout << room << "\n";
	}
}

