#include <iostream>

using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
	/*���ͺб��� 1712*/
	long long int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;

	//���ͺб� �߻����� �ʴ� ����
	if (b >= c) {
		cout << -1;
		return 0;
	}
	//�߻��� ���ͺб���
	else cout << -a / (b - c) + 1;
}