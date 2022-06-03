#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*ATM 11399*/
	int cnt, num, sum = 0;
	vector<int> vecArr;
	cin >> cnt;
	for (int personNum = 0; personNum < cnt; personNum++)
	{
		cin >> num;
		vecArr.push_back(num);
	}
	sort(vecArr.begin(), vecArr.end());

	for (int i = 0; i <= vecArr.size(); i++)
		for (int j = 0; j < i; j++)
			sum += vecArr[j];
	
	cout << sum;
}