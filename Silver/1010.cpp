#include<iostream>

using namespace std;
int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int rep, n, r, cnt;
	cin >> rep;
	for (int i = 0; i < rep; i++)
	{
		cnt = 1;
		cin >> n >> r;
		for (int j = 0; j < n; j++)
		{
			cnt *= r - j;
			cnt /= 1 + j;
		}
		cout << cnt << "\n";
	}
}