#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"enter range"<<endl;
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
       // cout<<"enter no "<<i<<":"<<endl;
        int x;
        cin>>x;
        arr.push_back(x);
    }
     cout<<"result"<<endl;
    for(int j=0;j<n;j++){
        
        cout<<arr[j];
       
    }
    return 0;

}