#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class TreeNode{
	public:
		int data;
		TreeNode* left;
		TreeNode* right;
	public:
	TreeNode(){
		data=0;
		left=right=NULL;
	}
	TreeNode(int x){
		data=x;
		left=right=NULL;
	}
	TreeNode(int data,TreeNode*left,TreeNode*right){
		this->data=data;
		this->left=left;
		this->right=right;
	}
};




	
int height(TreeNode*root){
    if(root==NULL){
        return 0;
    }
   
    int maxiL=height(root->left);
    int maxiR=height(root->left);
    return 1 + max(leftHeight, rightHeight);
}


// Build Tree
TreeNode* BuildTree(vector<string>&arr){
	if(arr.size()<=0|| arr[0]=="null") return NULL;

	//create root
        TreeNode* root=new TreeNode(stoi(arr[0])); 
	
	//initial queue init and pass root in it
	queue<TreeNode*>q;
	q.push(root);
	
	int i=1;
	while(i<arr.size()&&!q.empty()){
		TreeNode* curr=q.front();
		q.pop();
		if(i<arr.size()&&arr[i]!="null" ){
			curr->left=new TreeNode(stoi(arr[i]));
			q.push(curr->left);
		}
		i++;
		if(i<arr.size()&& arr[i]!="null"){
			curr->right=new TreeNode(stoi(arr[i]));
			q.push(curr->right);
		}
		i++;

	}
	return root;
}

//main
int main(){
	// array i/p
	int n;
	cin>>n;
	vector<string>arr;
	
	for(int i=0;i<n;i++){
		string x;
		cin>>x;
		arr.push_back(x);
	}
	TreeNode* root=BuildTree(arr);
	int depth=height(root);
	cout<<depth;
	return 0;
}

