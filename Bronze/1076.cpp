#include <iostream>
#include <string>
using namespace std;

enum {
	black = 0, brown, red, orange, yellow,
	green, blue, violet, grey, white
};

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*ÀúÇ× 1076*/
	int index = 0, intOutput = 0;
	char* intstr;
	string input, output;
	for (int i = 0; i < 3; i++)
	{
		cin >> input;
		if (input == "black")		index = black;
		else if (input == "brown")	index = brown;
		else if (input == "red")	index = red;
		else if (input == "orange")	index = orange;
		else if (input == "yellow")	index = yellow;
		else if (input == "green")	index = green;
		else if (input == "blue")	index = blue;
		else if (input == "violet")	index = violet;
		else if (input == "grey")	index = grey;
		else if (input == "white")	index = white;

		if (i < 2) output += '0' + index;
		else {
			intOutput = stoi(output);
			output.clear();
			output += to_string(intOutput);
			if (intOutput)
				for (int i = 0; i < index; i++) output += '0' + 0;
			else
				output = "0";
		}
	}
	cout << output;
}