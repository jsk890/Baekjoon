#include <iostream>
using namespace std;
void Phrase(int n);
void Bottle(int n);
int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/*¸ÆÁÖ 99º´ 17293 */
	int n;
	cin >> n;
	Phrase(n);
	cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
	cout << "Go to the store and buy some more, ";
	Bottle(n + 1);
	cout << "of beer on the wall.";
}

void Phrase(int n) {
	Bottle(n + 1);
	cout << "of beer on the wall, ";
	Bottle(n + 1);
	cout << "of beer.\n";
	cout << "Take one down and pass it around, ";
	Bottle(n);
	cout << "of beer on the wall.\n\n";
	if (n > 1) Phrase(n - 1);
	else return;
}
void Bottle(int n) {
	if (n > 2) cout << n - 1 << " bottles ";
	else if (n == 2) cout << n - 1 << " bottle ";
	else if (n == 1) cout << "no more bottles ";
}