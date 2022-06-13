#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*그대로 출력하기 2 11719*/
	string s;
	while (!cin.eof())
	{
		getline(cin, s);
		cout << s << "\n";
	}
}