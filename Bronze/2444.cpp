#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*º° Âï±â-7 2444*/
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int k = num - 1; k > i; k--)
		{
			cout << " ";
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k <= i; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < num * 2 - (i) * 2 - 3; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}