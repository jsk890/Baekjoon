#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*우유가 넘어지면? 17363 */
	int a, b;
	string val, s;
	vector<string> vecArr;
	cin >> a >> b;

	for (int x = 0; x < a; x++)
	{
		cin >> val;
		vecArr.push_back(val);
	}

	for (int x = 0; x < a; x++)
	{
		s = vecArr[x];
		for (int y = 0; y < b; y++)
		{
			if (s[y] == '-') vecArr[x][y] = '|';
			else if (s[y] == '|') vecArr[x][y] = '-';
			else if (s[y] == '/') vecArr[x][y] = '\\';
			else if (s[y] == '\\')vecArr[x][y] ='/';
			else if (s[y] == '^') vecArr[x][y] = '<';
			else if (s[y] == '<') vecArr[x][y] = 'v';
			else if (s[y] == 'v') vecArr[x][y] = '>';
			else if (s[y] == '>') vecArr[x][y] = '^';
		}
	}
	for (int i = b - 1; i >= 0; i--)
	{
		for (int j = 0; j < a; j++)
		{
			cout << vecArr[j][i];
		}
		cout << "\n";
	}
}