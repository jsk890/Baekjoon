#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*∫Ì∑¢¿Ë 2798*/
	int num, index, sum = 0, total, size;
	vector<int> vecArr;
	map<int, int> mapSumArr;
	cin >> size >> total;
	for (int i = 0; i < size; i++)
	{
		cin >> num;
		vecArr.push_back(num);
	}
	sort(vecArr.rbegin(), vecArr.rend());
	for (int i = 0; i < vecArr.size()-2; i++)
	{
		for (int j = i + 1; j < vecArr.size()-1; j++)
		{
			for (int k = j + 1; k < vecArr.size(); k++)
			{
				sum = vecArr[i] + vecArr[j] + vecArr[k];
				mapSumArr.insert({ sum,1 });
				if (sum < total) break;
			}
		}
	}
	if (!mapSumArr.count(total))
	{
		mapSumArr.insert({ total,1 });
		index = distance(begin(mapSumArr), mapSumArr.find(total)) - 1;
		auto it = mapSumArr.begin();
		advance(it, index);
		cout << it->first;
	}
	else
	{
		cout << total;
	}

}