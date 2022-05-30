#include <iostream>
#include <string.h>

using namespace std;

void repeat(int rep);
int answer(int rep, int cnt);

int main()
{
	//cin.tie(NULL);
	//ios_base::sync_with_stdio(false);
	/*재귀함수가 뭔가요? 17478*/
	int rep = 0, cnt = 0;
	cin >> rep;
	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << "\n";
	answer(rep, cnt);
}

int answer(int rep, int cnt) {
	repeat(cnt); cout << "\"재귀함수가 뭔가요?\"" << "\n";
	if (!rep) {
		repeat(cnt); cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << "\n";
		repeat(cnt); cout << "라고 답변하였지." << "\n";
		return 0;
	}
	repeat(cnt); cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << "\n";
	repeat(cnt); cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << "\n";
	repeat(cnt); cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << "\n";
	cnt++;
	//재귀 진입 시작
	answer(rep - 1, cnt);
	//재귀 탈출 시작
	cnt--;
	repeat(cnt); cout << "라고 답변하였지." << "\n";
	return 0;
}
void repeat(int rep) {
	printf("%s", string(rep * 4, '_').c_str());
}