#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    public:

    node(int x){
        this->data=x;
        this->left=NULL;
        this->right=NULL;
    }
};
//maketree
vector<int>preorder(node* root){
    stack<node*>st;
    vector<int>ans;
    node* curr=root;
    if(root ==NULL)return ans;
    st.push(root);
    while(!st.empty()){
        curr=st.top();
        st.pop();
        ans.push_back(curr->data);
    if(curr->right!=NULL){
        st.push(curr->right);
    }
     if(curr->left!=NULL){
        st.push(curr->left);
    }
    }
    return ans;
}
node* maketree(vector<string>arr){
    if(arr.size()<=0 || arr[0]=="null") return NULL;

    node*root=new node(stoi(arr[0]));
    queue<node*>q;
    q.push(root);
    int i=1;
    while(i<arr.size()){
        node* curr=q.front();
        q.pop();
        if(i<arr.size()&&arr[i]!="null"){
            curr->left=new node(stoi(arr[i]));
            q.push(curr->left);
        }
        i++;
        if(i<arr.size()&&arr[i]!="null"){
            curr->right=new node(stoi(arr[i]));
            q.push(curr->right);
        }
        i++;
    }
    return root;

}
//main
int main(){
    int n;
    cin>>n;
    vector<string>arr;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        arr.push_back(x);
    }
    node* root=maketree(arr);
    vector<int>ans=preorder(root);
    for(auto it:ans){
        cout<<it;
    }
}