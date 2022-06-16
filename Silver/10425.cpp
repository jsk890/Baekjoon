#include <iostream>
#include <string>
#include <algorithm>

#define ll unsigned long long
#define SIZE 9

using namespace std;


int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*�Ǻ���ġ �ι��� 10425 */
	string input, nowVal="1", tempInput, s;
	bool flag = true;
	int t;
	ll nextVal, prevVal = 0, cnt=1;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		flag = true;
		tempInput = "";
		nowVal = "1";
		prevVal = 0, cnt = 1;
		cin >> input;
		//Size ��ŭ ���ڸ��� �߶� ���
		reverse(input.begin(), input.end());
		for (int i = 0; i < input.length(); i++)
		{
			tempInput += input[i];
			if (i == SIZE) break;
		}
		// ��ǲ�� 1�� �ƴ϶��
		if (input != "1")
			while (flag)
			{
				//�Ǻ���ġ ����
				nextVal = (ll)(stoi(nowVal) + prevVal);
				prevVal = (ll)(stoi(nowVal));
				nowVal = to_string(nextVal);
				s = to_string(nextVal);
				//���� �Ǻ���ġ ���� ���翡 ����
				reverse(s.begin(), s.end());
				nowVal = "";
				for (int i = 0; i < s.length(); i++)
				{
					nowVal += s[i];
					if (i + 1 == SIZE) break;
				}
				//Size��ŭ ��ǲ ���� ��
				for (int i = 0; i < SIZE; i++)
				{
					//�ϳ��� �ٸ��� break;
					if (nowVal[i] != input[i]) break;
					//Size��ŭ ������ �� ���� �� ��� ���ٸ� while�� break;
					else if (i + 1 == SIZE ||
						(i + 1 == nowVal.length() && nowVal.length() == tempInput.length())) {
						flag = false; break;
					}
				}
				reverse(nowVal.begin(), nowVal.end());
				cnt++;
			}
		else cnt = 2;
		cout << cnt << "\n";
	}
	
}

