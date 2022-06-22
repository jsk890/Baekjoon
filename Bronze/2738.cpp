#include <iostream>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*Çà·Ä µ¡¼À 2738 */
	int x, y, num;
	vector<int> vecArr;
	vector<int> vecArr2;
	vector<int> vecArr3;
	cin >> x >> y;
	for (int i = 0; i < x * y * 2; i++)
	{
		cin >> num;
		if (i < x * y) vecArr.push_back(num);
		else vecArr2.push_back(num);
	}
	for (int i = 0; i < vecArr.size(); i++)
	{
		vecArr3.push_back(vecArr[i] + vecArr2[i]);
	}
	for (int i = 0; i < x * y; i++)
	{
		
		cout << vecArr3[i];
		if (!((i + 1) % 3)) cout << "\n";
		else cout << " ";
		
	}
}