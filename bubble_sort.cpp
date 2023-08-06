#include <iostream>
using namespace std;
void bubble_sort(int a[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < (size - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the elements of array"<<endl;
    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    bubble_sort(a,size);
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}