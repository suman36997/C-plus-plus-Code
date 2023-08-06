#include<iostream>
using namespace std;
void pattern(int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            count++;
            cout<<count<<"*";
        }
        int count1=count*count+i;
        for(int j=n;j>i;j--){
            count1++;
            cout<<count1<<"*";
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter the value of n"<<endl;
    int n;
    cin>>n;
    pattern(n);

}