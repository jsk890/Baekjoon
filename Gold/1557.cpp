#include<iostream>
#include<cmath>
using namespace std;

bool eratosthenes[1000000];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*�������� 1557*/
	long long min, max, min_start = 0, p_num = 0, cnt = 0;
	cin >> min >> max;
	//�ִ���� ���������� �ִ� ���������� �����ָ� ��
	long long last = (long long)ceil(sqrt((double)max));
	for (long long i = 2; i <= last; i++) {
		// ������ ������
		p_num = (long long)pow(i, 2);
		min_start = ceil((double)min / (double)p_num) * p_num;
		if (min_start > max) continue;
		// �����佺�׳׽�
		for (min_start; min_start <= max; min_start += p_num) {
			eratosthenes[min_start - min] = true;
		}
	}

	for (long long i = 0; i < (long long)(max - min + 1); i++) {
		if (!eratosthenes[i]) cnt++;
	}
	cout << cnt;
}