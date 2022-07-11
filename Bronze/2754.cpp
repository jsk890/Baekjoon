#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* 학점계산 2754*/
	string t;
	double score = 0;
	cin >> t;
	if (t[0] == 'A') score += 4;
	else if (t[0] == 'B') score += 3;
	else if (t[0] == 'C') score += 2;
	else if (t[0] == 'D') score += 1;

	if (t[1] == '+') score += 0.3;
	else if (t[1] == '0') score += 0.0;
	else if (t[1] == '-') score -= 0.3;

	cout << fixed;
	cout.precision(1);
	cout << score;
}