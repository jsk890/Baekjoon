#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*ÆÓ¸°µå·Ò¼ö 1259*/
	int a;
	string sNum = "1";
	bool eo, isEqual = true;
	while (sNum[0] - '0')
	{
		cin >> sNum;
		a = stoi(sNum);
		sNum = to_string(a);
		eo = sNum.length() % 2;
		isEqual = true;
		for (int i = 0; i < (sNum.length() + 1)/2 - eo; i++)
		{
			isEqual = (sNum[i] == sNum[sNum.length() - i - 1]);
			if (!isEqual) {
				cout << "no" << "\n";
				break;
			}
		}
		if (isEqual && sNum != "0") cout << "yes" << "\n";
	}
}