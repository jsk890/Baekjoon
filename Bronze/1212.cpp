#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*8진수 2진수 1212*/
	string s, total = "";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		string t = "";
		//제일 큰자리 수 부터 받기
		int c = s[i] - '0';
		do
		{
			t += (c % 2 + '0');
			c = c / 2;
			if (c == 1) {
				t += '1'; t += '0';
			}
		} while (c > 1);
		reverse(t.begin(), t.end());
		c = stoi(t);
		//c가 세자리 미만이라면
		if (i && c < 10) total += "00";
		else if (i && c < 100) total += '0';
		t = to_string(c);
		total += t;
	}
	cout << total << "\n";

}