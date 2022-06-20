#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*이상한 기호 15964 */
	int a, b;
	cin >> a >> b;
	cout << (a + b) * (a - b) << "\n";
}