#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	/*¿∑≥Ó¿Ã 2490*/
	int num, sum = 0;
	vector<int> vecArr;
	for (int i = 0; i < 3; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			cin >> num;
			sum += num;
		}
		switch (sum)
		{
		case 3: cout << "A" << "\n"; break;
		case 2: cout << "B" << "\n"; break;
		case 1: cout << "C" << "\n"; break;
		case 0: cout << "D" << "\n"; break;
		default: cout << "E" << "\n"; break;
		}
		sum = 0;
	}
}