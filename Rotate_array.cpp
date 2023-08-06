#include<iostream>
#include<vector>
using namespace std;
void Rotate(vector <int>&a  , int size,int key){
    vector <int> temp(a.size());
    for(int i=0;i<a.size();i++){
        temp[(i+key)%a.size()]=a[i];
    }
    a=temp;
}
int main(){
    cout<<"Enter the size of array"<<endl;
    int size;
    cin>>size;
    vector <int> a;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<size;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    cout<<"Enter the rotation"<<endl;
    int key;
    cin>>key;
    Rotate(a,size,key);
    cout<<"Now the rotating array is "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
}