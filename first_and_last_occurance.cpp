#include <iostream>
using namespace std;
int left_occurance(int a[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == a[mid])
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > a[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int right_occurance(int a[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (key == a[mid])
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > a[mid])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    cout << "Enter the size of array" << endl;
    int size;
    cin >> size;
    int a[size];
    cout << "Now enter the elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "Now enter which element whom you want to find occurance " << endl;
    int key;
    cin >> key;
    cout << "The first occurance of " << key << " at index " << left_occurance(a, size, key) << endl;
    cout << "The last occurance of " << key << " at index " << right_occurance(a, size, key);
}