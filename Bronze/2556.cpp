#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*º° Âï±â-14 2556*/
	int num;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		for (int i = 0; i < num; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}