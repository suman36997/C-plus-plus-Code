#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix) {
        vector<int>ans;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        int starting_row=0;
        int starting_col=0;
        int ending_row=row-1;
        int ending_col=col-1;
        while(count<total){
//            print first row
            for(int index=starting_col;index<=ending_col&&count<total;index++){
                ans.push_back(matrix[starting_row][index]);
                  count++;
            }
            starting_row++;
          
//             print last col
            for(int index=starting_row;index<=ending_row&&count<total;index++){
                ans.push_back(matrix[index][ending_col]);
                  count++;
            }
            ending_col--;
                     
//             print last row
            for(int index = ending_col;index>=starting_col&&count<total;index--){
                ans.push_back(matrix[ending_row][index]);
                            count++;
            }
            ending_row--;
                        
//         print first col
            for(int index=ending_row&&count<total; index>=starting_row; index--){
                ans.push_back(matrix[index][starting_col]);
                            count++;
            }
            starting_col++;
        }
        return ans;
        
        
    }
    int main(){
        vector<vector<int>>s;
        s={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
        spiralOrder(s);
        for(int i=0;i<4;i++){
            for(int j=0;j<3;j++){
                cout<<s[i][j];
            }
        }
    }