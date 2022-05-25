#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	/*손익분기점 1712*/
	long long int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;

	//손익분기 발생하지 않는 조건
	if (b >= c) {
		cout << -1;
		return 0;
	}
	//발생시 손익분기점
	else cout << -a / (b - c) + 1;
}