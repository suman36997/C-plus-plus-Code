#include <iostream>
using namespace std;
void  unique_element(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout<<a[i];
            break;
        }
    }
}
int main()
{
    cout << "Enter the size of array" << endl;
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[size];
    }
    cout << "unique element in array is " << endl;
    unique_element(a, size);
}
