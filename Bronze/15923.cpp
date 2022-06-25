#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*욱제는 건축왕이야!! 15923*/
	int cnt, num1, num2, sum = 0, x, y;
	vector<pair<int, int>> vecArr;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num1 >> num2;
		vecArr.push_back(make_pair(num1, num2));
	}
	auto i = vecArr.begin();
	while (true)
	{
		x = i->first; y = i->second;
		i++;
		if (i != vecArr.end())
		{
			num1 = x - i->first; num2 = y - i->second;
			sum += sqrt(pow(num1, 2) + pow(num2, 2));

		}
		else {
			num1 = x - vecArr.begin()->first;
			num2 = y - vecArr.begin()->second;
			sum += sqrt(pow(num1, 2) + pow(num2, 2));
			break;
		}
	}
	cout << sum;
}