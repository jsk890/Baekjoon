#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	//Á÷°¢»ï°¢Çü 4153
	int a, b, c;
	do
	{
		cin >> a >> b >> c;
		if (!a && !b && !c) break;
		if ((pow(a, 2) + pow(b, 2) == pow(c, 2) ||
			pow(a, 2) == pow(b, 2) + pow(c, 2) ||
			pow(a, 2) + pow(c, 2) == pow(b, 2))) cout << "right\n";
		else cout << "wrong\n";
	} while (a || b || c);

}