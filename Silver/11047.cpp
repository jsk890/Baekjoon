#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*���� 0 11047*/
	int cnt, type, money = 0, total = 0;
	vector<int> vecCoin;
	vector<int>::iterator vecCoinIter;
	
	cin >> cnt >> money;
	for (int i = 0; i < cnt; i++)
	{
		cin >> type;
		vecCoin.push_back(type);
	}
	sort(vecCoin.begin(), vecCoin.end());
	reverse(vecCoin.begin(), vecCoin.end());
	vecCoinIter = vecCoin.begin();
	while (money > 0)
	{
		//������ ������ ���
		if (!(money % *vecCoinIter))
		{
			total += money / *vecCoinIter;
			money = 0;
		}
		//������ �������� ���� ���
		else {
			total += money / *vecCoinIter;
			money = money % *vecCoinIter;
		}
		vecCoinIter++;
	}
	cout << total;
}