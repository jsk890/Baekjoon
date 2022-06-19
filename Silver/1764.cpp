#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*µË∫∏¿‚ 1764 */
	int cnt, cnt2;
	string s;
	map<string, int> mapNameArr;
	map<string, int> mapNameArr2;
	auto it = mapNameArr2.begin();
	cin >> cnt >> cnt2;
	for (int i = 1; i <= cnt; i++)
	{
		cin >> s;
		mapNameArr.insert({ s,i });

	}
	for (int i = 0; i < cnt2; i++)
	{
		cin >> s;
		if (mapNameArr.count(s))
			mapNameArr2.insert({ s,i });
	}
	cout << mapNameArr2.size() << "\n";
	for (it = mapNameArr2.begin(); it != mapNameArr2.end(); it++)
	{
		cout << it->first << "\n";
	}
}