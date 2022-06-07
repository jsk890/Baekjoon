#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*¼¼ ¼ö 10817*/
	int num;
	vector<int> vecArr;
	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		vecArr.push_back(num);
	}
	sort(vecArr.begin(), vecArr.end());
	cout << vecArr[1];
}