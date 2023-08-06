#include<iostream>
using namespace std;
class dynamic{
    int *data;
    int nextIndex;
    int size;
    public:
    dynamic(){
       int *data=new int[5];
       nextIndex=0;
       size=5;
    }
    void addelement(int element){

        if(nextIndex==size){
            int *newdata=new int[2*size];
            for(int i=0; i<size;i++){
            newdata[i]=data[i];
        }
        delete []data;
        data=newdata;
        size*=2;
        }
        data[nextIndex]=element;
        nextIndex++;
        
    }
    int getdata(int i){
        if(i<nextIndex){
            return data[i];
        }
        else{
            return -1;
        }
    }
    void add(int element ,int index){
        if(index<size){
            data[index]=element;
        }
        else if(index==size){
            addelement(element);
        }
        else{
            return;
        }
    }
    void operator=(dynamic &d){
        int *data1=new int[d.size];
        for(int i=0;i<nextIndex;i++){
            data1[i]=data[i];

        }
        this->size=d.size;
        this->nextIndex=d.nextIndex;
    }
     
     
};
int main(){
    cout<<"Enter the array elements"<<endl;


}