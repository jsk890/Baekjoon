#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*서로 다른 부분 문자열의 개수 11478 */
	string s;
	set<string> setIntArr;
	cin >> s;
	for (int i = 1; i <= s.size(); i++)
	{
		for (int j = 0; j <= s.size() - i; j++)
		{
			setIntArr.insert( s.substr(j, i));
		}
	}
	cout << setIntArr.size() << "\n";
}

//#include <iostream>
//#include <string>
//#include <map>
//using namespace std;
//
//int main()
//{
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	/*서로 다른 부분 문자열의 개수 11478 */
//	string s;
//	map<string, int> mapIntArr;
//	cin >> s;
//	for (int i = 1; i <= s.size(); i++)
//	{
//		for (int j = 0; j <= s.size() - i; j++)
//		{
//			mapIntArr.insert({ s.substr(j, i),1 });
//		}
//	}
//	cout << mapIntArr.size()<<"\n";
//}