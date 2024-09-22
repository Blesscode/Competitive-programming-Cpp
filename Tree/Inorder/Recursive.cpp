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


/* 	Inorder     Traversal 		*/

// Inorder Traversal Declaration =>due to error 
/*error: 'InorderTraversal' was not declared in this scope
  InorderTraversal(root,ans);*/
void InorderTraversal(TreeNode* root, vector<int>& ans);

vector<int>Inorder(TreeNode* root){
	vector<int>ans;
	InorderTraversal(root,ans);
	return ans;
}
void InorderTraversal(TreeNode* root,vector<int>&ans){
	
	if(root==NULL){
		return ;
	}
	InorderTraversal(root->left,ans);
	ans.push_back(root->data);
	InorderTraversal(root->right,ans);

	
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
	vector<int> inorderResult=Inorder(root);
	for(int j=0;j<inorderResult.size();j++){
		cout<<inorderResult[j]<<endl;
	}
	return 0;
}

