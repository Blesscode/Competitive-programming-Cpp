#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    while(ss>>s){
        /*ignores all whilespaces*/
        cout<<"'"<<s<<"'"<<endl;
    }
    return 0;
}