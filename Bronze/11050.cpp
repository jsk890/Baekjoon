#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*이항 계수 1 11050*/
	int num , num2, mul = 1;
	cin >> num >> num2;
	for (int i = 0; i < num2; i++)
	{
		mul *= (num - i);
		mul /= (i + 1);
	}
	cout << mul;
}