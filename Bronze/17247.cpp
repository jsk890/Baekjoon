#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*택시 거리 17247 */
	int a, b, c, r, num;
	bool flag = false;
	vector<vector<int>> vecArr;
	vector<int> vecRowArr;
	cin >> a >> b;

	for (int x = 0; x < a; x++)
	{
		for (int y = 0; y < b; y++)
		{
			cin >> num;
			vecRowArr.push_back(num);
		}
		vecArr.push_back(vecRowArr);
		vecRowArr.clear();
	}

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			if (vecArr[i][j] && !flag) {
				c = i;
				r = j;
				flag = true;
			}
			else if (vecArr[i][j] && flag) {
				cout << abs(c - i) + abs(r - j);
				return 0;
			}
		}
	}
}