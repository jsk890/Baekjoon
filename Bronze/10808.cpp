#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* ¾ËÆÄºª °³¼ö 10808 */
	string s;
	cin >> s;
	map<char, int> mapArr;
	for (int i = 0; i < s.size(); i++)
	{
		if (!mapArr.count(s[i])) mapArr.insert({ s[i],1 });
		else mapArr.insert({ s[i], mapArr.find(s[i])->second++ });
	}
	for (char i = 97; i < 123; i++)
	{
		if (mapArr.count(i)) cout << mapArr.find(i)->second;
		else cout << "0";
		if (i < 123) cout << " ";
	}
	
}