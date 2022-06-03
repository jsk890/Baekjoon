#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*수 정렬하기 2 2751*/
	unsigned int cnt, num;
	vector<int> vec;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> num;
		vec.push_back(num);
	}

	sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << "\n";
	}
}