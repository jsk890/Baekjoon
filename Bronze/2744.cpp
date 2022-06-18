#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*대소문자 바꾸리 2744 */
	string a, b;
	cin >> a;

	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] < 97) a[i] = tolower(a[i]);
		else a[i] = toupper(a[i]);
	}
	cout << a;
}