#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*귀여운 수~ε٩(๑> ₃ <)۶з 17294*/
	int dif;
	bool flag = true;
	string s;
	cin >> s;
	dif = s[0] - s[1];
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (dif != s[i] - s[i + 1]) {
			cout << "흥칫뿡!! <(￣ ﹌ ￣)>" << "\n";
			flag = false;
			break;
		}
	}
	if (flag)
		cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!" << "\n";
}