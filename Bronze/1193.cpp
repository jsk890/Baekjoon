#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
    //�м�ã�� 1193
	int num = 0, col = 1, row = 1, cnt = 1;
	cin >> num;
	while (true)
	{
		//����� �밢������ ����, ���� ���� ���鿡 �ε��� �� ����
		for (row = 1; col >= 1; row++, cnt++)
		{
			//���� ��� ���� �Ǹ� ���� �ϳ� ���� ��Ű�� ����
			if (col == 1) {
				row++;
				break;
			}
			//���� ���� ��Ű�� ���� ����
			if (col != 1) col--;
			//�̵� ���� ���� ���� ���� ���� ����
			if (cnt == num) {
				cout << row << "/" << col;
				return 0;
			}
		}
		//������ �밢������ ����, ���� ���� ���鿡 �ε��� �� ����
		for (col = 1; row >= 1; col++, cnt++)
		{
			//���� ��� ���� �Ǹ� ���� �ϳ� ���� ��Ű�� ����
			if (row == 1) {
				col++;
				break;
			}
			//���� ���� ��Ű�� ���� ����
			if (row != 1) row--;
			//�̵� ���� ���� ���� ���� ���� ����
			if (cnt == num) {
				cout << row << "/" << col;
				return 0;
			}
		}
		
	}
}