#include <iostream>
#include <list>
#include <vector>
#include <algorithm>


using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}


int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*나이순 정렬 10814*/
	int age, cnt;
	string name;
	vector< pair<int, string>> vecArr;
	vector< pair<int, string>>::iterator vecArrIter;
	pair<int, string> pairArr;
	
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> age >> name;
		pairArr.first = age; pairArr.second = name;
		vecArr.push_back(pairArr);
		
	}
	
	stable_sort(vecArr.begin(), vecArr.end(), compare);

	for (vecArrIter = vecArr.begin(); vecArrIter != vecArr.end(); vecArrIter++)
	{
		cout << vecArrIter->first << " " << vecArrIter->second << "\n";
	}
}