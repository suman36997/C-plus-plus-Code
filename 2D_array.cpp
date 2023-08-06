#include <iostream>
using namespace std;
bool is_present(int a[][4],int target,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int a[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"Enter the element you want to find"<<endl;
    int target ;
    cin>>target;
    int b=is_present(a,target,3,4);
    if(b==1){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element not present"<<endl;
    }
//     cout << "output according to row wise" << endl;
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

// cout << "output according to col wise" << endl;
// for (int i = 0; i < 4; i++)
// {
//     for (int j = 0; j < 3; j++)
//     {
//         cout << a[j][i] << " ";
//     }
//     cout << endl;
// }
}