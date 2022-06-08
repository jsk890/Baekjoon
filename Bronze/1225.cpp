#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*ÀÌ»óÇÑ °ö¼À 1225*/
	string sa, sb;
	unsigned long long a = 0, b = 0;
	vector<int> vecArr;
	cin >> sa >> sb;
	for (int i = 0; i < sa.length(); i++) a += (sa[i] - '0');
	for (int i = 0; i < sb.length(); i++) b += (sb[i] - '0');

	cout << to_string(a * b);
}