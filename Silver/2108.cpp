#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*����� 2108*/
	double cnt, num, maxCnt = 0, max, min, sum = 0;
	double mean;
	vector<int> vecInputArr;
	vector<int> vecArr;
	map<int, int> mapArr;
	cin >> cnt;
	//�Է�
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		sum += num;
		if (!mapArr.count(num))	mapArr.insert({ num, 1 });
		else mapArr.insert({ num, mapArr.find(num)->second++ });
		vecInputArr.push_back(num);
		if (mapArr.find(num)->second > maxCnt) maxCnt++;
	}
	//���� ����
	sort(vecInputArr.begin(), vecInputArr.end());
	//�ִ밪 �ּҰ� ����
	auto it = mapArr.begin();
	advance(it, 0); min = it->first;
	advance(it, mapArr.size() - 1); max = it->first;
	//��հ� ����
	if (sum > 0)
		mean = (double)(sum / vecInputArr.size());
	else
		mean = ((double)(-1 * sum) / (double)vecInputArr.size()) * -1;
	if (mean > -0.5 && mean < 0.5) mean = 0;
	cout << round(mean) << "\n";
	//�߾Ӱ� ���
	cout << vecInputArr[((vecInputArr.size() + 1) / 2) - 1] << "\n";
	//�󵵼� ���� �� ���
	for (it = mapArr.begin(); it != mapArr.end(); it++)
	{
		if (it->second == maxCnt)
			vecArr.push_back(it->first);
	}
	cout << ((vecArr.size() > 1) ? vecArr[1] : vecArr[0]) << "\n";
	//���� ���
	cout << max - min << "\n";
}