#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*µÚÁýÈù µ¡¼À 1357*/
	int a, b, sum = 0;
	string s, sX, sY;
	cin >> sX >> sY;
	reverse(sX.begin(), sX.end());
	reverse(sY.begin(), sY.end());
	a = stoi(sX); b = stoi(sY);
	sum = a + b;
	s = to_string(sum);
	reverse(s.begin(), s.end());
	cout << stoi(s);
}