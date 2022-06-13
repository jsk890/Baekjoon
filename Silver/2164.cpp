#include <iostream>
#include <queue>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	/* Ä«µå2 2164 */
	int cnt;
	queue<int> q;
	cin >> cnt;
	for (int i = 1; i <= cnt; i++)
	{
		q.push(i);
	}
	for (int i = 0; q.size() > 1; i++)
	{
		q.pop();
		q.push(q.front());
		q.pop();
	}
	cout << q.front();
}