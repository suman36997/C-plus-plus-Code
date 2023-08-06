#include <iostream>
using namespace std;
void insertion_sort(int a[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = a[i];
        int j ;
        for (j = i - 1; j >= 0; j--)
        {
            if (a[j] > temp)
            {
                a[j+1] = a[j];
            }
            else 
            {
                break;
            }
        }
      a[j+1]=temp;
    }
}
int main()
{
    cout << "Enter the size of array" << endl;
    int size;
    cin >> size;
    cout << "Now enter the elements of array" << endl;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    insertion_sort(a, size);
    for (int i = 0; i < size; i++)
    {
        cout << a[i]<<" ";
    }
}