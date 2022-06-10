#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	/*È¦¼ö 2576*/
	int num, sum = 0;
	vector<int> vecArr;
	for (int i = 0; i < 7; i++)
	{
		cin >> num;
		if (num % 2) {
			sum += num;
			vecArr.push_back(num);
		}
	}
	sort(vecArr.begin(), vecArr.end());

	if (vecArr.size()) {
		cout << sum << "\n";
		cout << vecArr[0];
	}
	else cout << -1;
}