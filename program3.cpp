#include<iostream>
#include<math.h>
using namespace std;
void pow_of_two(int n){
    for(int i=0;i<30;i++){
        int ans=pow(2,i);
        if(ans==n){
            cout<<"This no. is power of 2"<<endl<<"2"<<i<<endl;
        }
        else{
            cout<<"Not power of 2"<<endl;
        }
    }
}
int main(){
    cout<<"Enter a no. to check it wheather it is power of 2"<<endl;
    int n;
    cin>>n;
    pow_of_two(n);
   
}