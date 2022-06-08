#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*집 주소 1284*/
	int a, b, sum = 0;
	map<int,int> mapArr;
	string s;
	mapArr.insert({0, 4});
	mapArr.insert({1, 2});
	for (int i = 2; i < 10; i++) mapArr.insert({ i, 3 });

	//s가 0이 아닌 동안
	do
	{
		sum = 1;
		getline(cin, s);
		if (!(s[0] - '0')) break;
		for (int i = 0; i < s.size(); i++)
		{
			sum += mapArr.find(s[i]-'0')->second;
			sum++;
		}
		cout << sum << "\n";
		
	} while (1);
}