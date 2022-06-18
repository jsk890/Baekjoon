#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*핸드폰 번호 궁합 17202 */
	string a, b;
	vector<int> vecArr;
	cin >> a >> b;

	for (int i = 0; i < a.size(); i++)
	{
		vecArr.push_back(a[i]-'0');
		vecArr.push_back(b[i]-'0');
	}
	for (int j = vecArr.size(); j > 2 ; j--)
	{
		for (int i = 0; i < vecArr.size() - 1; i++)
		{
			vecArr.at(i) = (vecArr[i + 1] + vecArr[i]) % 10;
		}
		vecArr.pop_back();
	}
	cout << vecArr[0] << vecArr[1];


	
}