#include <iostream>
#include <string>
using namespace std;
char to_lowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool check_palidrome(string a)
{
    int s = 0;
    int e = a.size() - 1;

    while (s <= e)
    {
        if (to_lowercase(a[s]) == to_lowercase(a[e])){ 
       
            s++;
            e--;
          
        }
         else
        
        {
            return 0;
        }

    }
    return 1;
}
int main(){
    cout<<"Enter a string to check it is palidrome or not"<<endl;
    string s;
    cin>>s;
int a=check_palidrome(s);
    if(a==1){
        cout<<"palidrome string"<<endl;
    }
    else{
        cout<<"NOt palidrome"<<endl;
    }

}