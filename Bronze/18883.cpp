#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*N M Âï±â 18883 */
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << (i * m) + j;
			if (j < m) cout << " ";
		}
		cout << "\n";
	}
}