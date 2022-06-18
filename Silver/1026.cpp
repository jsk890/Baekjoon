#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*º¸¹° 1026 */
	int size, num, sum = 0;
	vector<int> vecArrA;
	vector<int> vecArrB;
	
	cin >> size;
	for (int i = 0; i < size*2; i++)
	{
		cin >> num;
		if (i < size) vecArrA.push_back(num);
		else vecArrB.push_back(num);
	}
	sort(vecArrA.rbegin(), vecArrA.rend());
	sort(vecArrB.begin(), vecArrB.end());

	for (int i = 0; i < size; i++) cout << vecArrA[i] << " ";
	cout << "\n";
	for (int i = 0; i < size; i++) cout << vecArrB[i] << " ";
	cout << "\n";

	for (int i = 0; i < size; i++)
	{
		sum += vecArrA[i] * vecArrB[i];
	}
	cout << sum;
}