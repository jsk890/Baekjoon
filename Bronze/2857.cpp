#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*FBI 2857*/
	string s;
	vector<string> vecArr;
	//is : ��ü �Է� ���� FBI�� �ִ���
	bool isThere = false;
	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		vecArr.push_back(s);
	}
	for (int i = 0; i < vecArr.size(); i++)
	{
		// �Է°� ���̰� 3�� �ʰ���� ���� -2 �̸����� �ݺ�
		// �ƴ϶�� �ѹ��� ����
		for (int j = 0; j < (vecArr[i].length()> 3? vecArr[i].length() - 2: 1); j++)
		{
			//3ĭ�� �߶� �Է�
			string temp = vecArr[i].substr(j, 3);
			if (temp == "FBI") { cout << i + 1 << " "; isThere = true; break; }
		}
	}
	// �ϳ��� �߰��� �ȵǸ�
	if (!isThere) cout << "HE GOT AWAY!" << "\n";
}