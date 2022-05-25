#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*평균은 넘겠지 4344*/
    int score[1000] = { 0 }, cnt = 0;
    float stNum = 0.0, passStudent = 0.0, sum = 0.0;
    cin >> cnt;
    cout.precision(5);
    for (int i = 0; i < cnt; i++) {
        sum = 0;
        passStudent = 0;
        cin >> stNum;
        for (int j = 0; j < stNum; j++) cin >> score[j];
        
        for (int k = 0; k < stNum; k++) sum += score[k];

        for (int l = 0; l < stNum; l++) if (score[l] > sum / stNum) passStudent++;
        printf("%.3f%%\n", passStudent / stNum * 100);
    }
}