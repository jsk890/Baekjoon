#include <iostream>
#include <string.h>

using namespace std;

void repeat(int rep);
int answer(int rep, int cnt);

int main()
{
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	/*����Լ��� ������? 17478*/
	int rep = 0, cnt = 0;
	cin >> rep;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << "\n";
	answer(rep, cnt);
}

int answer(int rep, int cnt) {
	repeat(cnt); cout << "\"����Լ��� ������?\"" << "\n";
	if (!rep) {
		repeat(cnt); cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << "\n";
		repeat(cnt); cout << "��� �亯�Ͽ���." << "\n";
		return 0;
	}
	repeat(cnt); cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���." << "\n";
	repeat(cnt); cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << "\n";
	repeat(cnt); cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << "\n";
	cnt++;
	//��� ���� ����
	answer(rep - 1, cnt);
	//��� Ż�� ����
	cnt--;
	repeat(cnt); cout << "��� �亯�Ͽ���." << "\n";
	return 0;
}
void repeat(int rep) {
	printf("%s", string(rep * 4, '_').c_str());
}