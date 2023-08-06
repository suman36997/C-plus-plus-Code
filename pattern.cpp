#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the no." << endl;
    int n;
    cin >> n;
    int i = 1;
    
    while (i <= n)
    {   int j = 1;
        while (j <= n)
        {
            cout <<i;
            j++;
        }
        cout << endl;

        i++;
    }
}