#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a no."<<endl;
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int value =i;
        while (j<=i)
        {
            cout<<value<<" ";
            j++;
            value--;
        }
        cout<<endl;
        i++;
        
    }
}