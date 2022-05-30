#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*소수찾기 1978*/
	int p[100] = {}, r = 0, cnt = 0;
	cin >> r;
	for (int i = 0; i < r; i++) cin >> p[i];

	for (int i = 0; i < r; i++)
	{
		int count = 0;
		for (int j = 1; j <= p[i]; j++)
		{
			if (p[i] % j == 0)
				count++;
		}
		if (count == 2)
			cnt++;
	}
	cout << cnt;
}