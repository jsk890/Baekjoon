#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* Zadanie próbne 8545 */
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	cout << s;
}