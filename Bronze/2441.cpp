#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*º° Âï±â-4 2441*/
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int k = 0; k < i; k++)
		{
			cout << " ";
		}
		for (int j = 0; j < num - i; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}