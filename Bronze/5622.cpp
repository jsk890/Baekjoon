#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*´ÙÀÌ¾ó 5622*/
	string str;
	int sec = 0;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++)
	{
		switch (str.at(i))
		{
		case 87: case 88: case 89: case 90: //WXYZ
			sec++;
		case 84: case 85: case 86: //TUV
			sec++;
		case 80: case 81: case 82: case 83: //PQRS
			sec++;
		case 77: case 78: case 79: //MNO
			sec++;
		case 74: case 75: case 76: //JKL
			sec++;
		case 71: case 72: case 73: //GHI
			sec++;
		case 68: case 69: case 70: //DEF
			sec++;
		case 65: case 66: case 67: //ABC
			sec++;
		}
		sec += 2;
	}
	cout << sec;
}