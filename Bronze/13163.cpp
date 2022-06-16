#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*닉네임에 갓 붙이기 13163*/
	bool flag = false;
	int cnt = 0, num;
	string s, total = "god";
	cin >> num;
	for (int i = 0; i <= num; i++)
	{
		getline(cin, s);
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == ' ') { flag = true; continue; }
			if (flag) total += s[j];
		}
		if (s != "") {
			cout << total << "\n";
			total = "god";
			flag = false;
		}
	}
}