#include<iostream>
#include<math.h>
using namespace std;
float geoMean(int k){
    if(k<=0){
        return 1;
    }
    return (1/pow(2,k))+geoMean(k-1);

}
int main(){
    cout<<"Enter the value of k"<<endl;
    int k;
    cin>>k;
    cout<<"The geometric mean is "<<geoMean(k)<<endl;
}