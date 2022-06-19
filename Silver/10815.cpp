#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*숫자 카드 10815 */
	int cnt, cnt2, num;
	vector<pair<int, int>> vecArr;
	map<int, int> mapArr;
	map<int, int> mapArr2;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		mapArr.insert({ num,1 });
	}
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		if (mapArr.count(num)) vecArr.push_back(make_pair(num, 1));
		else vecArr.push_back(make_pair(num, 0));
	}
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i].second<<" ";
	}

}