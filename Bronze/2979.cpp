#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* 트럭 주차 2979 */
	int s,e, num;
	vector<int> vecArr = {0};
	vector<int> vecArrFee;
	vecArrFee.push_back(0);
	for (int i = 0; i < 100; i++)
	{
		vecArr.push_back(0);
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> num;
		vecArrFee.push_back(num);
	}
	for (int i = 0; i < 3; i++)
	{
		cin >> s >> e;
		for (int j = s; j < e; j++)
		{
			vecArr[j]++;
		}
	}
	num = 0;
	for (int i = 0; i < vecArr.size(); i++)
	{
		num += vecArr[i] * vecArrFee.at(vecArr[i]);
		
	}
	cout << num;
}