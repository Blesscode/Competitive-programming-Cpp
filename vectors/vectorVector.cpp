#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// [
//     [1,2,3,4],
//     [5,6,7,8],
//     [9,10,11,12],
//     [13,14,15,16],
// ]

int main() {
    // Number of intervals
    int N;
    cin >> N;
    vector<vector<int>>outer;

    for(int i=0;i<N;i++){
        // [..]
        int n;
        cin>>n;//[[..] [..]]
        vector<int>temp;
        for(int j=0;j<n;j++){
            int x;//. .
            cin>>x;
            temp.push_back(x);
        }
        outer.push_back(temp);
    }

    //output
   for (auto &it : outer) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }

}