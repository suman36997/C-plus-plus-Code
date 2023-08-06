#include<iostream>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    // vector
    vector<int> a;
    a.push_back(0);
    a.push_back(2);
    a.push_back(5);
    a.push_back(3);
    int n=a.size();
    cout<<"The size of vector is "<<n<<endl;
    for(int i:a){
        cout<<i<<" ";
        
    }
    cout<<endl;
    a.pop_back();
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    // Deque
    deque<int> d;
    d.push_front(0);
    d.push_back(3);
    d.push_front(1);
   d.push_front(2);
   for(int i:d){
    cout<<i<<" ";
   }
   cout<<endl;
   d.erase(d.begin(),d.begin()+1);
   d.pop_front();
   d.pop_back();
   for(int i:d){
    cout<<i<<" ";
   }
   cout<<endl;
//    lists
    list<int> l;
    l.push_back(4);
    l.push_front(3);
    l.push_front(2);
    l.push_back(5);
    l.push_front(1);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.pop_front();
    l.pop_back();
    for(int i:l){
        cout<<i<<" ";

    }
    cout<<endl;
    l.erase(l.begin());
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    // Stack
    stack<string> s;
    s.push("Suman");
    s.push("Saurav");
    s.push("Kumar");
    cout<<"Top element before pop "<< s.top()<<endl;
    cout<<"Size of stack before pop "<<s.size()<<endl;
     cout<<endl;
    s.pop();
    cout<<"Top element after pop "<<s.top()<<endl;
    cout<<"Size of stack after pop "<<s.size()<<endl;
    cout<<"Is stack empty or not "<<s.empty()<<endl;
     cout<<endl;
    // Queue 
    queue<string> s1;

    s1.push("Suman");
    s1.push("Saurav");
    s1.push("Kumar");
    cout<<"Top element before pop "<< s1.front()<<endl;
    cout<<"Size of stack before pop "<<s1.size()<<endl;
     cout<<endl;
    s1.pop();
    cout<<"Top element after pop "<<s1.front()<<endl;
    cout<<"Size of stack after pop "<<s1.size()<<endl;
    cout<<"Is stack empty or not "<<s1.empty()<<endl;

    // Priority_Queue
    priority_queue<int> maxi;
    priority_queue<int , vector<int>,greater<int>> mini;
    maxi.push(0);
    maxi.push(6);
    maxi.push(3);
    maxi.push(9);
    maxi.push(2);
    int n1=maxi.size();
    cout<<"In descending order "<<endl;
    for(int i=0;i<n1;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    mini.push(0);
    mini.push(6);
    mini.push(3);
    mini.push(9);
    mini.push(2);
    cout<<"In ascending order"<<endl;
    for(int i=0;i<n1;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    // Sets
    set<int> s2;
    s2.insert(0);
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);
    s2.insert(2);
    s2.insert(2);
    s2.insert(3);
    s2.insert(1);
    s2.insert(1);
    cout<<"Set gives the element in ascending order without any repeatation"<<endl;
    for(int i:s2){
        cout<<i<<" ";
    }

    cout<<endl;
    cout<<" Is 5 present in sets or not "<<s2.count(5)<<endl;
 
    // Iterator initiliazation syntax
    set<int>::iterator it=s2.begin();
    
    s2.erase(s2.begin());
    for(int i:s2){
        cout<<i<<" ";
    }
cout<<endl;
// Algorithm
    vector<int> v;
    v.push_back(0);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout<<binary_search(v.begin(),v.end(),30)<<endl;
    // here the above line returns 1 which shows 3 is present
    cout<<"lower bound of 30 is  "<<endl ;
    cout<<lower_bound(v.begin(),v.end(),30)-v.begin()<<endl;
    cout<<"upper bound is of 30 is "<<upper_bound(v.begin(),v.end(),30)-v.begin()<<endl;
    // int c=5;
    // int d=8;
    // cout<<max(c,d);
    // cout<<min(c,d);
    string s3="abcd";
    reverse(s3.begin(),s3.end());
    cout<<"String after reversing "<<endl;
    cout<<s3<<endl;
    cout<<endl;
    rotate(v.begin(),v.begin()+2,v.end());
    cout<<"vector after rotating "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"vector after sorting "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }



}