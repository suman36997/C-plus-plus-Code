#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector <int> a){
    int s=0;
    int e=a.size()-1;
    while(s<=e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    return a;

}
int main(){
    vector <int>a;
    a.push_back(4);
    a.push_back(2);
    a.push_back(9);
    a.push_back(5);
    a.push_back(6);
    cout<<"Array before rev is "<<endl;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    vector<int> ans=reverse(a);
    cout<<"Array after rev is "<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

     
}