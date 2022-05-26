#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	//ÆÑÅä¸®¾ó 10872
	int f = 0, num = 1;
	cin >> f;
	for (int i = 1; i <= f; i++) num *= i;
	cout << num;
	
}