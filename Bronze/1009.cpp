#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*분산처리 1009*/
	int a, b, cnt, power;
	short digit;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		digit = 1;
		cin >> a >> b;
		for (int i = 0; i < b; i++) digit = (digit * a) % 10;
		if (!digit) digit = 10;
		cout << digit << "\n";
	}
}