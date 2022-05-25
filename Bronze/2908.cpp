#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*»ó¼ö 2908*/
	string a, b;
	int r_a = 0, r_b = 0, sq = 0;
	cin >> a >> b;
	for (int i = a.length() - 1; i >= 0; --i) {
		sq = pow(10, i);
		r_a += (a[i] - '0') * sq;
		r_b += (b[i] - '0') * sq;
	}
	if (r_a > r_b) cout << r_a;
	else cout << r_b;
}