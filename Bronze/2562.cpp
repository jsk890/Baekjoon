#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    /*ÃÖ´ñ°ª 2562*/
    int arr[9] = { 0 }, index = 0, max = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] >= max) {
            max = arr[i];
            index = i+1;
        }
    }
    cout << max << "\n" << index;
}