#include<iostream>
#include<vector>
using namespace std;
vector<int> print(vector<vector<int>>s,int nRows,int mCols){
    vector<int> ans;
    for(int col=0;col<mCols;col++){
        int index=col;
        if (index&1)
        {
            for(int row = nRows-1;row>=0;row--){
                cout<<s[row][col]<<" ";
                ans.push_back(s[row][col]);
            }
        }
        else{
          for(  int row=0;row<nRows;row++){
            cout<<s[row][col]<<" ";
            ans.push_back(s[row][col]);
          }
        }
        cout<<endl;
    }
    return ans;
}
int main(){
    vector<vector<int>>s;
    s={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    print(s,3,4);
}