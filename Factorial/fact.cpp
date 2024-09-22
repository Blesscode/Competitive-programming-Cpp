#include<iostream>
using namespace std;
int fact(int n){                    //try giving 14 as inp
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
long long correctfact(int n){        //try giving 14 as inp
    if(n==0||n==1){
        return 1;
    }
    return n*correctfact(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    cout<<correctfact(n);
    return 0;
}
