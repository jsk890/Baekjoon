#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*피보나치 9711 */
	long long num, q , cnt;
	vector<long long> vecArr;
	vecArr.push_back(1);
	vecArr.push_back(1);
	cin >> cnt;

	for (long long i = 0; i < cnt; i++)
	{
		cin >> num >> q;
		for (long long j = 2; j < num; j++)
		{
			vecArr.push_back((vecArr[j - 2] + vecArr[j - 1]) % q);
		}
		if (q == 1) cout << "Case #" << i + 1 << ": " << 0 << "\n";
		else cout << "Case #" << i + 1 << ": " << vecArr.back() << "\n";
		vecArr.erase(vecArr.begin()+2, vecArr.end());
	}
}