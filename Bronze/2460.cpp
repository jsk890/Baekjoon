#include <iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*지능형 기차 2 2460*/
	int up, down, riding = 0, max=0;
	for (int i = 0; i < 10; i++)
	{
		cin >> down >> up;
		riding += -down + up;
		if (riding >= max) max = riding;
	}	
	cout << max;
}