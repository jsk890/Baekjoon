#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*²¿¸¶ Á¤¹Î 11382 */
	int a, b;
	while (true)
	{
		cin >> a >> b;
		if (a || b) a > b ? cout << "Yes" << "\n" : cout << "No" << "\n";
		else break;
	}
}