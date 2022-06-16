#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void SumdigitUp(string* xVal, string* yVal, string* sumVal, bool* up, int digit);

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*피보나치 수 4150 */
	int num;
	bool up = false;
	vector<int> vecArr;
	string before, now ,next;
	before = "1";
	now = "1";
	cin >> num;
	for (int i = 0; i < num-2; i++)
	{
		reverse(before.begin(), before.end());
		reverse(now.begin(), now.end());
		for (int j = 0; j < now.length(); j++)
		{
			SumdigitUp(&before, &now, &next, &up, j);
			if (up && j + 1 == now.length()) next += "1";
		}
		reverse(before.begin(), before.end());
		reverse(now.begin(), now.end());
		reverse(next.begin(), next.end());
		before = now;
		now = next;
		next = "";
		up = false;
	}
	cout << now;
}

void SumdigitUp(string* xVal, string* yVal, string* sumVal, bool* up, int digit) {
	int xDigit = digit, yDigit = digit;
	string t_xVal = *xVal, t_yVal = *yVal;
	if ((digit < t_xVal.length() && digit < t_yVal.length()));
	else if (t_xVal.length() > t_yVal.length()) { yDigit = 0; t_yVal[yDigit] = '0'; }
	else if (t_xVal.length() < t_yVal.length()) { xDigit = 0; t_xVal[xDigit] = '0'; }

	if ((t_xVal[xDigit] - '0' + t_yVal[yDigit] - '0' + *up) < 10)
	{
		*sumVal += to_string(t_xVal[xDigit] - '0' + t_yVal[yDigit] - '0' + *up);
		*up = false;
	}
	else {
		*sumVal += to_string((t_xVal[xDigit] - '0' + t_yVal[yDigit] - '0' + *up) % 10);
		*up = true;
	}
}