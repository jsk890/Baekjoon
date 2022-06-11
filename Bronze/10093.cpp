#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	/*¼ıÀÚ 10093*/
	__int64 num, num2;
	vector<__int64> vecArr;

	cin >> num >> num2;

	if (num2> num)
		for (__int64 i = num + 1 ; i < num2; i++) vecArr.push_back(i);
	else 
		for (__int64 i = num2 + 1; i < num; i++) vecArr.push_back(i);

	if (num != num2)
	{
		cout << abs(num2 - num) - 1 << "\n";
	}
	else
	{
		cout << 0 << "\n";
	}
	
	for (__int64 i = 0; i < vecArr.size(); i++)
		cout << vecArr[i] << " ";
}