#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*ÇÃ·¯±× 2010*/
	int num, cnt, sum = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << sum - (cnt - 1);

}