#include <iostream>
using namespace std;

int main()
{
    /*º°Âï±â 2442*/
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < num - i; j++)
        {
            cout.put(' ');
        }
        for (int k = 0; k < 2 * i - 1; k++)
        {
            cout.put('*');
        }
        cout << "\n";
    }
    
}