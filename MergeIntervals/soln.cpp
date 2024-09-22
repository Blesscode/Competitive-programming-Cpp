#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//[[1,4],[2,5],[7,9]]
//  | ||  |
// class Solution{
//     public:
//         vector<vector<int>>mergeIntervals(vector<vector<int>>&arr){
//             //vector<int>>ans2;
//              sort(arr.begin(), arr.end());
//             for(int i=1;i<arr.size();i++){
//                 vector<int>& current=arr[i]; //[[1,]]
//                 vector<int>& prev=arr[i-1];
//                 if(prev[1]>=current[0]){
//                     arr[i]={prev[0],max(prev[1],current[1])}; //[2,5]=[1,5]
//                     arr.erase(arr.begin() + (i - 1));
//                     i--; //1->0
//                 }
//             }
//             return arr;
//         }
        
// };
// int main(){
//     //no of intervals
//     int n;
//     cin>>n;
//     //vector of inetrvals
//     vector<vector<int>>arr(n);
//     for(int i=0;i<n;i++){
//         int x,y;
//         cin>>x>>y;
//         arr.push_back({x,y});
//     }
//     for(auto &j:arr){
//         cout<<arr[j];
//     }
// }

int main() {
    // Number of intervals
    int n;
    cin >> n;

    // Vector of intervals
    vector<vector<int>> arr(n);  // Initialize the vector with n elements

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[i] = {x, y};  // Assign values to the i-th element
    }

    // Print the intervals
    cout << "Intervals:" << endl;
    for (const auto &j : arr) {
        cout << j;
    }
    cout << endl;

    return 0;
}