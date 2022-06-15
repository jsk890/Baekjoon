#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*2차원 배열의 합 2167*/
	int n, m, num, testNum, sum = 0;
	int s_CoorX, s_CoorY, e_CoorX, e_CoorY;
	vector<vector<int>> vecColArr;
	vector<int>vecRowArr;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> num;
			vecRowArr.push_back(num);
		}
		vecColArr.push_back(vecRowArr);
		vecRowArr.clear();
	}
	cin >> testNum;
	
	for (int i = 0; i < testNum; i++)
	{
		cin >> s_CoorX >> s_CoorY >> e_CoorX >> e_CoorY;
		for (int x = s_CoorX; x <= e_CoorX; x++)
		{
			for (int y = s_CoorY; y <= e_CoorY; y++)
			{
				sum += vecColArr[x - 1][y - 1];
			}
		}
		cout << sum << "\n";
		sum = 0;
	}
	

}