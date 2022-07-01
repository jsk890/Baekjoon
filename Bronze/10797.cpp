#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* 10∫Œ¡¶ 10797 */
	int d, n, cnt=0;
	vector<int> vecArr;
	cin >> d;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		vecArr.push_back(n);
	}
	for (int i = 0; i < vecArr.size(); i++)
	{
		if (vecArr[i] == d) cnt++;
	}
	cout << cnt << "\n";
}