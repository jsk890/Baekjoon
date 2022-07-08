#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*Cupcake Party 24568*/
	int r, s, t;
	cin >> r >> s;
	t = (r * 8 + s * 3) - 28;
	cout << (t > 0? t : 0);
}