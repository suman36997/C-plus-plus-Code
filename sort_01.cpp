#include <iostream>
using namespace std;
void sort_01(int a[], int size)
{
    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        while (a[i] == 0 && i < j)
        {
            i++;
        }
        while (a[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);

            i++;
            j--;
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
        cin >> a[i];
    }
    sort_01(a, size);
    cout << "Array after sorting 0's and 1's" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}