#include<iostream>
using namespace std;
// class Address{
//     string name,city;
//     public:
//     Address(string n , string c){
//         name=n;
//         city=c;
//     }
//     void display(){
//         cout<<name<<" "<<city<<endl;
//     }
// };
// int main(){
//     Address a("Mac","sohdih");
//     a.display();
    
// }
// class Date{
//     int day,month,year;
//     public:
//       Date(){
//         day=7;
//         month=9;
//         year=2019;
        
//     }
//     void display(){
//         cout<<day<<" "<<month<<" "<<year<<endl;
//     }
// };
// int main(){
//     Date d;
//     d.display();
// class sample{
//     int data1;
//     float data2;
//     char c;
//     public:
//       sample();
//     void showData();
// };
// sample::sample(){
//     data1=10;
//     data2=20;
// }
//  void sample:: showData(){
//     cout<<data1<<" "<<data2<<endl;
// }
// int main(){
//     cout<<sizeof(sample)<<endl;
//     cout<<sizeof(float)<<" "<<sizeof(int)<<" "<<sizeof(char)<<endl;
//     sample s;
//     cout<<sizeof(s)<<endl;
//     s.showData();
// }
// class student{
//     int m1,m2,m3;
//     float per;
//     public:
//     student(){
//         m1=m2=m3=0;
//         per=0.0;

//     }
//     void calcper(int x,int y ,int z){
//         m1=x;
//         m2=y;
//         m3=z;
//         per=(m1+m2+m3)/3;
//         displayper();
//     }
//     void displayper(){
//         cout<<"percentage ="<<per<<" %"<<endl;
//     }};
//     int main(){
//         student s;
//         s.displayper();
//         s.calcper(35,35,35);
//         s.displayper();
//     }
class student{
    int age;
    int rollNo;
    static int totalStudent;
    public:
    student(int x,int y){
        age=x;
        rollNo=y;
        totalStudent++;
    }
    static void display(){ //defining of static function
        cout<<totalStudent<<endl;
    }
    void print(){
        cout<<age<<" "<<rollNo<<endl;
    }

};
int student::totalStudent=0;//defining of static data members
int main(){
    student s1(10,20);
    student s2(11,30);
    student s3(12,40);
    student::display();//calling of static function
}



