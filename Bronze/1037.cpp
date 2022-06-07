#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*¾à¼ö 1037*/
	int a, cnt, min, max;
	vector<int> vecArr;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		int num;
		cin >> num;
		vecArr.push_back(num);
	}
	sort(vecArr.begin(), vecArr.end());
	min = vecArr[0];
	max = vecArr.back();

	cout << min * max;
}