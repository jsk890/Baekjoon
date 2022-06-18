#include <iostream>
#include <vector>

#define ll long long
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*시험 감독 13458 */
	ll cnt, stu, b, c, sum = 0;
	vector<ll> vecArr;
	cin >> cnt;
	for (ll i = 0; i < cnt; i++)
	{
		cin >> stu;
		vecArr.push_back(stu);
	}
	cin >> b >> c;
	for (ll i = 0; i < vecArr.size(); i++)
	{
		sum++;
		if (vecArr[i]> b) {
			sum += (vecArr[i] - b) / c;
			if ((vecArr[i] -b)% c > 0) sum++;
		}
	}
	cout << sum;
}