#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	/*À½°è 2920*/
	int num;
	string s;
	vector<int> vecArr;

	for (int i = 0; i < 8; i++)
	{
		cin >> num;
		vecArr.push_back(num);
	}
	for (int i = 0; i < 7; i++)
	{
		if (vecArr[i] + 1 == vecArr[i + 1]) s = "ascending";
		else if (vecArr[i] - 1 == vecArr[i+1]) s = "descending";
		else { s = "mixed"; break; }
	}
	cout << s;
}