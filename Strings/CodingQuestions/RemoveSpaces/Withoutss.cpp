#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*TASK:
    //"    My name is @isha    an!!@d I am   22   year's old  "->remove 
    // 1. leading and trailing space 
    // 2. Remove every special sign except '
    // 3. Keep in between space as it is -->Made 2 methods
    */    
string RemoveStrart(string &s){
    int i=0;
    while(s[i]==' '){
        i++;
    }
    return s.substr(i,s.size());
}
string RemoveEnd(string &s){
    int i=s.size()-1;
    while(s[i]==' '){
        i--;
    }
    return s.substr(0,i+1);
}

string RemoveSpace(string &s){
    s=RemoveStrart(s);
    s=RemoveEnd(s);
    string result;
    for(int i=0;i<s.size();i++){
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]=='\'')||(s[i]==' ')||(s[i]-'0'>=1 && s[i]-'0'<=9)){
            result+=s[i];
        }
    }
    return result;
}
int main(){
    string s;
    getline(cin,s);
    //cin hota then tum lgate cin.get();->catch tab
    cout<<RemoveSpace(s)<<endl;
}