#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* 시험점수 5596 */
	int g = 0, s = 0, num;
	for (int i = 0; i < 8; i++)
	{
		cin >> num;
		if (i < 4) g += num;
		else s += num;
	}
	if (g >= s) cout << g << "\n";
	else cout << s << "\n";
}