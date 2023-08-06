#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralprint(vector<vector<int>> & matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    int starting_row=0;
    int starting_col=0;
    int ending_row=row-1;
    int ending_col=col-1;
    int total=row*col;
    int count=0;
    vector<int>ans;
    while(count<total){
        for(int index=starting_col;index<=ending_col&&count<total;index++){
            ans.push_back({matrix[starting_row][index]});
            count++;
        }
        starting_row++;
        for(int index=starting_row;index<=ending_row&&count<total;index++){
            ans.push_back({matrix[index][ending_col]});
            count++;
        }
        ending_col--;
        for(int index=ending_col;index>=starting_col&&count<total;index--){
            ans.push_back({matrix[ending_row][index]});
            count++;
        }
        ending_row--;
        for(int index=ending_row;index>=starting_row&&count<total;index--){
            ans.push_back({matrix[index][starting_col]});
            count++;
        }
        starting_col++;


    }
        return ans;

}
int main(){
    vector<vector<int>>s;
    s={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
   
   vector<int>ss=spiralprint(s);
    spiralprint(s);
   for(int i=0;i<16;i++){
    if(i%4==0&&i!=0){
        cout<<endl;
    }
    cout<<ss[i]<<" ";
    
   }
   cout<<endl;
}
