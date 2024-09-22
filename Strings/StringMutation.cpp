#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    while(ss>>s){
        /*1st word 1st character to =a*/
        //-> NOPE it changes all word first char
        /*
        my name is isha
        ay aame as asha
        */
        s[0]='a';
        cout<<s<<endl;
    }
    return 0;
}