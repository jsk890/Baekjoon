#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*대칭 차집합 1269 */
	int cnt, cnt2, num;
	string s;
	map<int, int> mapIntArr;
	map<int, int> mapIntArr2;
	cin >> cnt >> cnt2;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		mapIntArr.insert({ num,i });

	}
	for (int i = 0; i < cnt2; i++)
	{
		cin >> num;
		//B-A
		if (!mapIntArr.count(num))  mapIntArr2.insert({ num,i });
		//A-B
		else mapIntArr.erase(num);
	}
	cout << mapIntArr.size() + mapIntArr2.size() << "\n";
}