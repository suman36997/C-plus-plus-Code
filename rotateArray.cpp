#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>&a,int k ){
    vector<int>b(a.size());
    for(int i=0;i<a.size();i++){
        b[(i+k)%a.size()]=a[i];
    }
    a=b;
}
int main(){
    cout<<"Enter the size of vector "<<endl;
    int size;
    cin>>size;
    vector<int>ar;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++){
        int temp;
        cin>>temp;
        ar.push_back(temp);

    }
    cout<<"How many rotation you want "<<endl;
    int k;
    cin>>k;
    rotate(ar,k);
    for(int i=0;i<size;i++){
        cout<<ar[i]<<" ";
    }
}