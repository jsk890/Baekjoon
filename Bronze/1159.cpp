#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*³ó±¸ °æ±â 1159*/
	int cnt;
	bool chk = false;
	string s;
	map<char, int> mapArr;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> s;
		if (!mapArr.count(s[0])) mapArr.insert({ s[0], 1 });
		else mapArr.insert({ s[0], mapArr.find(s[0])->second++ });
	}

	auto it = mapArr.begin();
	
	for (int i = 0; i < mapArr.size(); i++)
	{
		it = mapArr.begin();
		advance(it, i);
		if (it->second >= 5) {
			chk = true;
			cout << it->first;
		}
		else if (i + 1 == mapArr.size() && !chk) {
			cout << "PREDAJA";
		}
	}
}