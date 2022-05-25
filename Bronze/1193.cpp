#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
    //분수찾기 1193
	int num = 0, col = 1, row = 1, cnt = 1;
	cin >> num;
	while (true)
	{
		//우상향 대각선으로 증가, 행이 위쪽 벽면에 부딪힐 때 까지
		for (row = 1; col >= 1; row++, cnt++)
		{
			//행이 모두 감소 되면 열을 하나 증가 시키고 퇴장
			if (col == 1) {
				row++;
				break;
			}
			//열은 증가 시키고 행은 감소
			if (col != 1) col--;
			//이동 수와 지정 수가 같아 지면 종료
			if (cnt == num) {
				cout << row << "/" << col;
				return 0;
			}
		}
		//좌하향 대각선으로 증가, 열이 왼쪽 벽면에 부딪힐 때 까지
		for (col = 1; row >= 1; col++, cnt++)
		{
			//열이 모두 감소 되면 행을 하나 증가 시키고 퇴장
			if (row == 1) {
				col++;
				break;
			}
			//열은 증가 시키고 행은 감소
			if (row != 1) row--;
			//이동 수와 지정 수가 같아 지면 종료
			if (cnt == num) {
				cout << row << "/" << col;
				return 0;
			}
		}
		
	}
}