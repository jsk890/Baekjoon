#include <iostream>
using namespace std;

int main()
{
    /*시험성적 9498*/
    int num1;
    cin >> num1;

    if (num1 >= 90) cout << "A";
    else if (num1 >= 80) cout << "B";
    else if (num1 >= 70) cout << "C";
    else if (num1 >= 60) cout << "D";
    else cout << "F";
    
    return 0;
}