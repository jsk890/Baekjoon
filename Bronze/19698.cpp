#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*Çê°£ Ã»¾à 19698 */
	int n, w, h, l, max;
	cin >> n >> w >> h >> l;
	max = (w / l) * (h / l);
	if (max >= n) cout << n << "\n";
	else cout << max << "\n";

}