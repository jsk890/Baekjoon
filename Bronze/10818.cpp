#include <iostream>
using namespace std;
// 배열의 크기가 너무 클 경우 지역변수로 스택에 저장이 되지 않으므로
// 전역변수 정적메모리나 동적할당으로 힙메모리에 저장
 int arr[1000000] = { 0 }; //전역에 저장
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*최소, 최대 10818*/
    int min = 0, max = 0, cnt = 0;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < cnt; i++)
    {
        if (arr[i] >= max) max = arr[i];
        if (arr[i] <= min) min = arr[i];
    }
    cout << min << " " << max;
}