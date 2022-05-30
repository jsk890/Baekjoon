#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*암호 만들기 1759*/
	vector<int> r_v;
	vector<char> s_v, test;
	char s;
	int r, n, c_cnt = 0, v_cnt = 0;
	cin >> r >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		s_v.push_back(s);
	}

	sort(s_v.begin(), s_v.end());
	for (int i = 0; i < r; i++) r_v.push_back(1);
	for (int i = 0; i < s_v.size() - r; i++) r_v.push_back(0);

	//조합
	do {
		c_cnt = 0, v_cnt = 0;
		test.clear();
		for (int i = 0; i < r_v.size(); i++) {
			if (r_v[i] == 1) {
				test.push_back(s_v[i]);
			}
		}
		for (int i = 0; i < test.size(); i++)
		{
			if (test[i] == 'a' || test[i] == 'e' || test[i] == 'i' ||
				test[i] == 'o' || test[i] == 'u') v_cnt++;

			if (test[i] != 'a' && test[i] != 'e' && test[i] != 'i' &&
				test[i] != 'o' && test[i] != 'u') c_cnt++;

		}
		if (c_cnt >= 2 && v_cnt >= 1) {
			for (int i = 0; i < r; i++)
			{
				cout << test[i];

			}
			cout << "\n";
		}

	} while (prev_permutation(r_v.begin(), r_v.end()));
}