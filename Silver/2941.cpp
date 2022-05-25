#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*크로아티아 알파벳 2941*/
	string str;
	int cnt = 0;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++)
	{
		if (str.substr(i, 2) == "c=") { i++; }
		else if (str.substr(i, 2) == "c-") { i++; }
		else if (str.substr(i, 3) == "dz=") { i += 2; }
		else if (str.substr(i, 2) == "d-") { i++; }
		else if (str.substr(i, 2) == "lj") { i++; }
		else if (str.substr(i, 2) == "nj") { i++; }
		else if (str.substr(i, 2) == "s=") { i++; }
		else if (str.substr(i, 2) == "z=") { i++; }
		cnt++;
	}
	cout << cnt;
}