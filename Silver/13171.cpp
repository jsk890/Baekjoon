#include <iostream>
#include <vector>
#define ull unsigned long long
#define div 1000000007
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*A 13171 */
	ull a, x, i, powval;
	int mul = 1, digit = 1;
	vector<ull> vecArr;
	cin >> a >> x;
	i = x;
	powval = a % div;
	while (i)
	{
		if (i & 1) vecArr.push_back(powval % div);
		powval = powval * powval % div;
		i >>= 1;
	}
	for (int i = 0; i < vecArr.size(); i++)
	{
		mul = mul * vecArr[i] % div;
	}
	cout << mul;
}