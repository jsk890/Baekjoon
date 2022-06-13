#include <iostream>
using namespace std;

int gcdF(int num, int num2);

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*최대공약수와 최소공배수 2609*/
	int num, num2, gcd, lcm;
	cin >> num >> num2;
	gcd = gcdF(num, num2);
	cout << gcd << "\n";
	cout << num * num2 / gcd << "\n";
}

int gcdF(int num, int num2) {
	int mod = 0;
	if (!(num % num2)) {
		if (num> num2) return num2;
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