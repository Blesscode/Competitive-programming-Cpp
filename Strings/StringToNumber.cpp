#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main(){
    /*"6666"->6667*/
   
    string s;
    cin>>s;
    stringstream obj(s);
    int number;
    obj>>number;
    
    number=1+number;
    cout<<"the string number: "<<s<<" The number: "<<number<<endl;

    return 0;
}