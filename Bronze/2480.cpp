#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*주사위세개 2480*/
    int num[3] = {}, maxNum = 0, price = 0, temp=0, tmpCnt=0, cnt=0;
    cin >> num[0] >> num[1] >> num[2];
    
    //같은 눈 검사
    for (int i = 0; i < 3; i++)
    {
        temp = num[i];
        if (maxNum <= num[i]) maxNum = num[i];
        for (int j = 0; j < 3; j++)
        {
            if (num[j] == temp) tmpCnt++;
            if (cnt <= tmpCnt) {
                cnt = tmpCnt;
                if (cnt == 1) {
                    if (maxNum <= num[j]) {
                        maxNum = num[j];
                        price = maxNum * 100;
                    }
                }
                else price = (10 * pow(10, cnt)) + (temp * pow(10, cnt));
            }
        }
        tmpCnt = 0;
    }
    cout << price;
}