#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string RemoveSpace(string &s){
    /*TASK:
    //"    My name is @isha    an!!@d I am   22   year's old  "->remove 
    // 1. leading and trailing space 
    // 2. Remove every special sign except '
    // 3. Keep in between space as it is -->can't be done by stringstream


    ```
    Fancy methods:
    isspace(ch)
    isalpha(ch)
    remove trailing space-> s.erase(s.find_last_not_of(" /t/n/r/v/f")+1);
    remove leading space-> s.erase(0,s.find_first_not_of(" /t/n/r/v/f"));
    ```
    */
    stringstream obj(s);
    string words,result;

    while(obj>>words){
        string newWord;
        for(char ch:words){
            if((isalpha(ch))||(ch=='\'')||((ch-'0')>1 &&(ch-'0')<9)){
                newWord=newWord+ch;
            }
            
            //remove that unwanted character that is don't add it

        }
        if(!(result.empty())){
            result+=' ';
        }
        result+=newWord;
    }
    return result;

}
int main(){
    string s;
    getline(cin,s);
    cout<<RemoveSpace(s)<<endl;
    return 0;
}