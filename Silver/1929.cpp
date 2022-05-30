#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*소수 구하기 1929*/
	int start = 0, end = 0;

	cin >> start >> end;
	int* arr = new int[end + 1];

	for (int i = 0; i <= end; i++) arr[i] = i;

	for (int i = 2; i <= sqrt(end); i++)
	{
		if (arr[i] == 0) continue;
		for (int j = i * 2; j <= end; j += i) {
			arr[j] = false;
		}
	}

	for (int i = start; i <= end; i++) {
		if (arr[i] && arr[i] != 1) cout << arr[i] << "\n";
	}

	delete[] arr;
}