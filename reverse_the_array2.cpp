#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> a,int m){
    int s=m+1;
    int e=a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;
}
void print(vector <int> a ){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> a;
    cout<<"Enter the size of vector"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements in vector"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    cout<<"you elemets are"<<endl;
    print(a);
    cout<<"Enter the index no. after you want to reverse"<<endl;
    int m;
    cin>>m;
    vector<int> ans=reverse(a,m);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}