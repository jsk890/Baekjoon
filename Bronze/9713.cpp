#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* Sum of Odd Sequence 9713 */
	int sum=0, n, cnt = 0;
	vector<int> vecArr;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> n;
		vecArr.push_back(n);
		
	}
	for (int i = 0; i < vecArr.size(); i++)
	{
		for (int j = 1; j <= vecArr[i]; j +=2)
		{
			sum += j;
			//vecArr.push_back(sum);
		}
		cout << sum << "\n";
		sum = 0;
	}
	
}