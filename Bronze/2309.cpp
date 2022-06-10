#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	/*¿œ∞ˆ ≥≠¿Ô¿Ã 2309*/
	int num, sum = 0;
	vector<int> vecArr;
	for (int i = 0; i < 9; i++)
	{
		cin >> num;
		sum += num;
		vecArr.push_back(num);
	}
	sort(vecArr.begin(), vecArr.end());

	while (true)
	{
		int temp = sum, i,j;
		for (i = 0; i < 8; i++)
		{
			for (j = i + 1; j < 9; j++)
			{
				temp = sum - (vecArr[i] + vecArr[j]);
				if (temp == 100) break;
			}
			if (temp == 100) break;
		}
		if (temp == 100) {
			vecArr.erase(vecArr.begin() + i);
			vecArr.erase(vecArr.begin() + j - 1);

			for (int k = 0; k < 7; k++)
			{
				cout << vecArr[k] << "\n";
			}
			break;
		}
	}
}