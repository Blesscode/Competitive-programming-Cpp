#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    //My name is isha and i am in 8
    int classs;
    cin>>classs;
    //cin.get();
    //OR
    cin>>ws;
    string description;
    getline(cin,description);
   // stringstream obj(description);
    //string word;
    //ovj>>word;
  
    cout<<"'"<<description<<"'"<<" "<<"'"<<classs<<"'";


    //solution:
    //1 parse int->string for taking input->explicit convert string -> no
    //2 catch the /n in a get
    //3 stringstream
    //4 ws
    return 0;
}