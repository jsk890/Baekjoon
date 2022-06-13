#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* 좌표 정렬하기 11650 */
	int cnt, n, m;
	vector<pair<int, int>> vecArr;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> n >> m;
		vecArr.push_back(make_pair(n, m));
	}
	sort(vecArr.begin(), vecArr.end());
	vecArr.erase(unique(vecArr.begin(), vecArr.end()), vecArr.end());
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i].first << " " << vecArr[i].second << "\n";
	}
}