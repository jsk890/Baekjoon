#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*숫자 맞추기 게임 4892 */
	int a, n1, n2, n3, n4, cnt = 0;
	while (true)
	{
		cin >> a;
		if (!a) break;
		cnt++;
		n1 = a * 3;
		(n1 % 2) ? n2 = (n1 + 1) / 2 : n2 = n1 / 2;
		n3 = n2 * 3;
		n4 = n3 / 9;
		if (n1 % 2) cout << cnt << ". " << "odd " << n4 << "\n";
		else cout << cnt << ". " << "even " << n4 << "\n";
	}
}