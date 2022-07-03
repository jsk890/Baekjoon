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
	//is : 전체 입력 값에 FBI가 있는지
	bool isThere = false;
	for (int i = 0; i < 5; i++)
	{
		cin >> s;
		vecArr.push_back(s);
	}
	for (int i = 0; i < vecArr.size(); i++)
	{
		// 입력값 길이가 3자 초과라면 길이 -2 미만까지 반복
		// 아니라면 한번만 실행
		for (int j = 0; j < (vecArr[i].length()> 3? vecArr[i].length() - 2: 1); j++)
		{
			//3칸씩 잘라 입력
			string temp = vecArr[i].substr(j, 3);
			if (temp == "FBI") { cout << i + 1 << " "; isThere = true; break; }
		}
	}
	// 하나라도 발견이 안되면
	if (!isThere) cout << "HE GOT AWAY!" << "\n";
}