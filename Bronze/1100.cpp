#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*го╬А д╜ 1100*/
	int cnt = 0;
	char val;
	vector<vector<char>> vecCol;
	vector<char> vecRow;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> val;
			vecRow.push_back(val);
		}
		vecCol.push_back(vecRow);
		vecRow.clear();
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (!(i % 2) && !(j % 2) && vecCol[i][j] == 'F') cnt++;
			else if ((i % 2) && (j % 2) && vecCol[i][j] == 'F') cnt++;
		}
	}
	cout << cnt;
}