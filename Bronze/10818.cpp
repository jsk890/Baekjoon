#include <iostream>
using namespace std;
// �迭�� ũ�Ⱑ �ʹ� Ŭ ��� ���������� ���ÿ� ������ ���� �����Ƿ�
// �������� �����޸𸮳� �����Ҵ����� ���޸𸮿� ����
 int arr[1000000] = { 0 }; //������ ����
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*�ּ�, �ִ� 10818*/
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