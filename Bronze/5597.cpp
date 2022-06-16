#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*과제 안내신 분..? 5597*/
	int num;
	map<int, int> mapArr;
	for (int i = 0; i < 28; i++)
	{
		cin >> num;
		mapArr.insert({ num, true });
	}
	for (int i = 1; i <= 30; i++)
	{
		if (!mapArr.count(i)) cout << i << "\n";
	}
}