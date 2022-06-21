#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*네 번째 점 3009 */
	int x, y;
	map<int, int> mapXArr;
	map<int, int> mapYArr;
	map<int, int>::iterator mapArrIter;
	for (int i = 0; i < 3; i++)
	{
		cin >> x >> y;
		if (mapXArr.count(x) == NULL) mapXArr.insert({ x, 1 });
		else mapXArr.insert({ x, mapXArr.find(x)->second++ });
		if (mapYArr.count(y) == NULL) mapYArr.insert({ y, 1 });
		else mapYArr.insert({ y, mapYArr.find(y)->second++ });
	}

	for (mapArrIter = mapXArr.begin(); mapArrIter != mapXArr.end(); mapArrIter++)
		if (mapArrIter->second == 1) cout << mapArrIter->first << " ";
	
	for (mapArrIter = mapYArr.begin(); mapArrIter != mapYArr.end(); mapArrIter++)
		if (mapArrIter->second == 1) cout << mapArrIter->first;
}