#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*µ¿Çõ ÇÇÀÚ 6502*/
	double r, w, l, cnt = 1;
	while (true)
	{
		cin >> r;
		if (r) cin >> w >> l;
		else break;

		if ((double)sqrt(pow(w, 2) + pow(l, 2)) / 2 <= r)
			cout << "Pizza " << cnt << " fits on the table." << "\n";
		else
			cout << "Pizza " << cnt << " does not fit on the table." << "\n";
		cnt++;
	}
}