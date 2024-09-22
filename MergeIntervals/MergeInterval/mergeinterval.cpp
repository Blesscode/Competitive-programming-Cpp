#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// 2
// 1 2 3
// 4 5 6

// class Interval{
//     public:
//     int start;
//     int end;

//     public:
//     Interval(int start, int end) {
//         this->start = start;
//         this->end = end;
//     }
// };

// class solution{
//     public:
//     vector<vector<int>>
// }

vector<vector<int>>mergeIntervals(vector<vector<int>>&Intervals,int n){ //[][]
      vector<int> start =Intervals[0];//[]
      vector<vector<int>>ans;
    for(int i=1;i<n;i++){
        if(Intervals[i][0]<start[1]){
            start[0]=min(start[0],Intervals[i][0]);
            start[1]=max(start[1],Intervals[i][1]);
            Intervals[i]=start;
           Intervals.erase(Intervals.begin() + i - 1);
            i--;
            n--;
        }
        else{
            start=Intervals[i];
        }
    }
    return Intervals;

}
int main(){
    int n; //noOfpair;
    cin>>n;
    // vector<vector<int>Intervals; //[[start,end]]
    // for(int i=0;i<n;i++){
    //     int x,y;
    //     cin>>x>>y;
    //     Intervals.push_back(Interval(start,end));
    // }
    vector<vector<int>>Intervals;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
       Intervals.push_back({a,b});
    }

  Intervals= mergeIntervals(Intervals,n);
   // cout<<Intervals[0][0];
    for (auto it : Intervals) {
        cout << "[" << it[0] << ", " << it[1] << ", " <<"] ";
        
    }
}