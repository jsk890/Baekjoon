#include <iostream>

using namespace std;

int gcdF(int, int );

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* 분수 합 1735 */
	int a, b, ja = 1, mo = 1, gcd;
	// 두 분수 통분하여 합하기
	for (int i = 0; i < 2; i++)
	{
		cin >> a >> b;
		ja *= b;
		ja += a * mo;
		mo *= b;
		if (i==0) ja = a;
	}

	gcd = gcdF(ja, mo);
	cout << ja / gcd << " " << mo / gcd;
}

int gcdF(int num, int num2) {
	int mod = 0;
	if (!(num % num2)) {
		if (num > num2) return num2;
		else return num;
	}
	//유클리드 호제법
	while ((num % num2))
	{
		mod = num % num2;
		num = num2;
		num2 = mod;
	}
	return mod;
}