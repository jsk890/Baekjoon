#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*16Áø¼ö 1550*/
	string s;
	cin >> s;
	int t = 0;
	for (int i = 0; i < s.size(); i++)
	{
		t *= 16;
		char c = s[i];
		if (c >= '0' && c <= '9')
			t += (c - '0');
		else
			t += (c - 'A') + 10;
	}
	cout << t << endl;

}