#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* ť 10845 */
	int num, cnt;
	string s;
	queue<int> q;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> s;
		if (s == "push")
		{
			cin >> num;
			q.push(num);
		}
		else if (s == "pop")
		{
			if (q.size()) { cout << q.front() << "\n"; q.pop(); }
			else cout << -1 << "\n";
		}
		else if (s == "size")
		{
			cout << q.size() << "\n";
		}
		else if (s == "empty")
		{
			if (q.size()) cout << 0 << "\n";
			else cout << 1 << "\n";
		}
		else if (s == "front")
		{
			if (q.size()) cout << q.front() << "\n";
			else cout << -1 << "\n";
		}
		else if (s == "back")
		{
			if (q.size()) cout << q.back() << "\n";
			else cout << -1 << "\n";
		}
	}
}