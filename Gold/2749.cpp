#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*피보나치 수 3 2749 */
	long long input;
	int pulse = 15 * (1000000 / 10);
	vector<int> vecArr;
	cin >> input;
	if (!input) cout << "0";
	else if (input == 1) cout << "1";
	else {
		vecArr.push_back(0);
		vecArr.push_back(1);
		for (int i = 2; i < pulse; i++)
		{
			vecArr.push_back((vecArr[i - 2] + vecArr[i - 1]) % 1000000);
		}
		cout << vecArr[input % pulse];
	}
	


	//while (true)
	//{
	//	//피보나치 수행
	//	nextVal = (ll)(stoi(nowVal) + prevVal);
	//	prevVal = (ll)(stoi(nowVal));
	//	nowVal = to_string(nextVal);
	//	s = to_string(nextVal);
	//	//다음 피보나치 수를 현재에 저장
	//	reverse(s.begin(), s.end());
	//	nowVal = "";
	//	for (int i = 0; i < s.length(); i++)
	//	{
	//		nowVal += s[i];
	//		if (i + 1 == 6) break;
	//	}

	//	if (cnt + 1 == stoi(input)) break;
	//	reverse(nowVal.begin(), nowVal.end());
	//	cnt++;
	//}
	//reverse(nowVal.begin(), nowVal.end());
	//cout << stoi(nowVal);

}
