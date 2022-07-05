#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* 개수 세기 10807 */
	int cnt, num;
	vector<int> vecArr;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		vecArr.push_back(num);
	}
	cin >> cnt;
	cout << count(vecArr.begin(), vecArr.end(), cnt);

}