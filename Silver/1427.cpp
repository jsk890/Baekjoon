#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*��Ʈ�λ��̵� 1427*/
	string s;
	getline(cin, s);
	sort(s.rbegin(), s.rend());
	cout << s;
}