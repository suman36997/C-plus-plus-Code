#include <iostream>
using namespace std;
int main()
{
    cout << "Enter 1st no." << endl;
    int a;
    cin >> a;
    cout << "Enter 2nd no." << endl;
    int b;
    cin >> b;
    cout << "which operation do you want" << endl
         << "+,-,*,/,%" << endl;
    char ch;
    cin>>ch;
    switch (ch)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;
    case '%':
        cout << a % b;
        break;
    default:
        cout << "sorry!wrong choice" << endl;
    }
}