#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*피보나치 수 2747 */
	int num, q, cnt;
	vector<int> vecArr;
	vecArr.push_back(0);
	vecArr.push_back(1);
	cin >> num;

	for (int i = 2; i <= num; i++)
	{
		vecArr.push_back((vecArr[i - 2] + vecArr[i - 1]));
	}
	cout << vecArr[num];
}