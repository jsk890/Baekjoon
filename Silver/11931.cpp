#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*수 정렬하기 4 11931*/
	int num, cnt;
	vector<int> vecArr;
	cin >> cnt;;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		vecArr.push_back(num);
	}
	sort(vecArr.rbegin(), vecArr.rend());
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i] << "\n";
	}
	
}