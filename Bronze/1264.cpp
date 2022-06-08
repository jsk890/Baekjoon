#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*모음의 개수 1264*/
	int cnt;
	string s;
	while (1)
	{
		getline(cin, s); cnt = 0;
		if (s == "#") break;
		for (int i = 0; i < s.length(); i++)
		{
			switch (s[i])
			{
			case 'a': case 'A': cnt++; break;
			case 'e': case 'E': cnt++; break;
			case 'i': case 'I': cnt++; break;
			case 'o': case 'O': cnt++; break;
			case 'u': case 'U': cnt++; break;
			default: break;
			}
		}
		cout << cnt << "\n";
	}
}