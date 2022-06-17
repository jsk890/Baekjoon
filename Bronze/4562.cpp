#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*No Brainer 4562 */
	int a, b, t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		a >= b ? cout << "MMM BRAINS" << "\n" : cout << "NO BRAINS" << "\n";

	}
}