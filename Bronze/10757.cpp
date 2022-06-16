#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
void digitUp(string* xVal, string* yVal, string* sumVal, bool* up, int digit);

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*Å« ¼ö A+B 10757 */
	int length = 0;
	bool up = 0;
	string xVal, yVal, sumVal="";
	cin >> xVal >> yVal;

	length = xVal.length();
	if (yVal.length() >= length) length = yVal.length();

	reverse(xVal.begin(), xVal.end());
	reverse(yVal.begin(), yVal.end());

	for (int i = 0; i < length; i++)
	{
		digitUp(&xVal, &yVal, &sumVal, &up, i);
		if (up && i + 1 == length) sumVal += "1";
	}
	
	reverse(sumVal.begin(), sumVal.end());
	cout << sumVal;
}

void digitUp(string *xVal, string* yVal, string *sumVal,bool *up, int digit) {
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