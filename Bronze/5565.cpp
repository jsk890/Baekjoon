#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*¿µ¼öÁõ 5565 */
	int mon, b;
	cin >> mon;
	for (int i = 0; i < 9; i++)
	{
		cin >> b;
		mon -= b;
	}
	cout << mon;

	
}