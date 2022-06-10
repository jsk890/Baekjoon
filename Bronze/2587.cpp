#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	/*´ëÇ¥°ª2 2587*/
	int num, sum = 0;
	vector<int> vecArr;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		sum += num;
		vecArr.push_back(num);
	}
	sort(vecArr.begin(), vecArr.end());

	cout << sum / 5 << "\n";
	cout << vecArr[2];
}