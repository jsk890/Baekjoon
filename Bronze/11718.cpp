#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*�״�� ����ϱ� 11718*/
	string s;
	while (true)
	{
		getline(cin, s);
		if (s == "") break;
		cout << s << "\n";
	}
}