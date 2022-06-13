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
	/* 단어 정렬 1181 */
	int cnt;
	string s;
	vector<pair<int, string>> vecArr;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> s;
		vecArr.push_back(make_pair(s.length(),s));
	}
	stable_sort(vecArr.begin(), vecArr.end());
	vecArr.erase(unique(vecArr.begin(), vecArr.end()), vecArr.end());
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i].second << "\n";
	}
}