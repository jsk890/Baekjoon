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
	/*피보나치 인버스 10425 */
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
		//Size 만큼 뒷자리만 잘라 사용
		reverse(input.begin(), input.end());
		for (int i = 0; i < input.length(); i++)
		{
			tempInput += input[i];
			if (i == SIZE) break;
		}
		// 인풋이 1이 아니라면
		if (input != "1")
			while (flag)
			{
				//피보나치 수행
				nextVal = (ll)(stoi(nowVal) + prevVal);
				prevVal = (ll)(stoi(nowVal));
				nowVal = to_string(nextVal);
				s = to_string(nextVal);
				//다음 피보나치 수를 현재에 저장
				reverse(s.begin(), s.end());
				nowVal = "";
				for (int i = 0; i < s.length(); i++)
				{
					nowVal += s[i];
					if (i + 1 == SIZE) break;
				}
				//Size만큼 인풋 값과 비교
				for (int i = 0; i < SIZE; i++)
				{
					//하나라도 다르면 break;
					if (nowVal[i] != input[i]) break;
					//Size만큼 끝까지 비교 했을 때 모두 같다면 while문 break;
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

