#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*수 정렬하기 2750*/
    int cnt = 0, num;
    vector<int> arr;
    cin >> cnt;
    for (int i = 0; i < cnt; i++)
    {
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)cout << arr[i] << "\n";
}