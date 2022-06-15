#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void disNum(char, string *s);

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*¼ýÀÚ³îÀÌ 1755*/
	int startNum, endNum;
	string sSNum, sENum;
	string* s = new string;
	cin >> sSNum >> sENum;
	startNum = stoi(sSNum);
	endNum = stoi(sENum);
	vector<pair<string, int>> vecArr;
	
	for (int i = startNum; i <= endNum; i++)
	{
		string temp = to_string(i);
		for (int j = 0; j < temp.length(); j++)
		{
			disNum(temp[j], s);
		}
			
		vecArr.push_back(make_pair(*s, i));
		*s = "";
	}
	sort(vecArr.begin(), vecArr.end());
	for (int i = 1; i <= vecArr.size(); i++)
	{
		cout << vecArr[i - 1].second << " ";
		if (!(i % 10)) cout << "\n";
	}

	delete s;
}

void disNum(char num, string *s) {
	if (num == '0') *s += "zero";
	else if (num == '1') *s += "one";
	else if (num == '2') *s += "two";
	else if (num == '3') *s += "three";
	else if (num == '4') *s += "four";
	else if (num == '5') *s += "five";
	else if (num == '6') *s += "six";
	else if (num == '7') *s += "seven";
	else if (num == '8') *s += "eight";
	else if (num == '9') *s += "nine";
}