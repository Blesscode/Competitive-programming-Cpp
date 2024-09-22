#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main(){
    
    /*6666->"6666"*/
    int number;
    cin>>number;
    string s;
    stringstream obj;
    obj<<number;
    string word;
    obj>>word;
    word=word+"abc";
   
    cout<<"the string number: "<<word<<" The number: "<<number<<endl;

    return 0;
}