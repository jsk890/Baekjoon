#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*���¾� ���ϸ� ������ �̴ټ� 1620 */
	int cnt, cnt2, num;
	string s;
	map<int, string> mapArr;
	map<string, int> mapNameArr;
	cin >> cnt >> cnt2;
	for (int i = 1; i <= cnt; i++)
	{
		cin >> s;
		mapArr.insert({ i,s });
		mapNameArr.insert({ s,i });
	}
	for (int i = 0; i < cnt2; i++)
	{
		cin >> s;
		try
		{
			cout << mapArr.find(stoi(s))->second << "\n";
		}
		catch (const std::exception&)
		{
			cout << mapNameArr.find(s)->second<< "\n";
		}
	}
}



/*
//������ Ű ã��
			for (auto const& val : mapArr)
			{
				if (!val.second.compare(s))
					cout << val.first << "\n";
			}
*/