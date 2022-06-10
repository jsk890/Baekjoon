#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	/*세수정렬 2752*/
	int num;
	vector<int> vecArr;
	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		vecArr.push_back(num);
	}
	sort(vecArr.begin(), vecArr.end());
	for (int i = 0; i < vecArr.size(); i++)
	{
		cout << vecArr[i];
	}
}