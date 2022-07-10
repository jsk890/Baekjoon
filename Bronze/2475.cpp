#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* °ËÁõ¼ö 2475*/
	int num,tmp;
	vector<int> vecArr;
	for (int i = 0; i < 5; i++)
	{
		cin >> num;
		tmp = pow(num % 10, 2);
		vecArr.push_back(tmp % 10);
	}
	tmp = 0;
	for (int i = 0; i < vecArr.size(); i++)
		tmp += vecArr[i];
	
	cout << tmp % 10;
}