#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*CASIO 15963*/
	long long int n, m;
	cin >> n >> m;
	cout << !(n ^ m);
}