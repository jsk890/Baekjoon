#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*쉽게 푸는 문제 1292*/
	int a, b, sum = 0;
	vector<int> vecArr;

	cin >> a >> b;
	for (int i = 0; i < 46; i++)
	{
		for (int j = 0; j < i; j++)
		{
			vecArr.push_back(i);
		}
	}
	for (int i = 0; i < vecArr.size(); i++)
	{
		if (a - 1 <= i && i <= b - 1) sum += vecArr[i];
	}
	cout << sum;
}