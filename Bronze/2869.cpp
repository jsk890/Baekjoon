
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	//�����̴� �ö󰡰� �ʹ� 2869
	double up = 0, slip = 0, height = 0;

	cin >> up >> slip >> height;

	cout << (int)ceil((height - slip) / (up - slip));
}

