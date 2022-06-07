#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*수 정렬하기 3 10989*/
	int cnt, num;
	map<int, int> mapArr;
	map<int, int>::iterator mapArrIter;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		if (mapArr.count(num) == NULL)
			mapArr.insert({ num, 1 });
		else
			mapArr.insert({ num, mapArr.find(num)->second++ });
	}
	for (mapArrIter = mapArr.begin(); mapArrIter != mapArr.end(); mapArrIter++)
	{
		for (int j = 0; j < mapArrIter->second; j++)
		{
			cout << mapArrIter->first << "\n";
		}
	}
}