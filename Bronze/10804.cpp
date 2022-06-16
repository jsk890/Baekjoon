#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*카드 역배치 10804 */
	vector<int> vecArr;
	int sn, en;
	for (int i = 1; i <= 20; i++) vecArr.push_back(i);
	for (int i = 0; i < 10; i++)
	{
		cin >> sn >> en;
		auto startIt = vecArr.begin();
		auto endIt = vecArr.begin();
		advance(startIt, sn - 1);
		advance(endIt, en);
		reverse(startIt, endIt);
	}

	for (int i = 0; i < vecArr.size(); i++) cout << vecArr[i] << " ";
}