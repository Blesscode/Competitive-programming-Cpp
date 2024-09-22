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

vector<vector<int> postorderTraversal(TreeNode* root){
	vector<int>ans; //array stack
	stack<int>st;
	TreeNode* curr=root; //preserve root
	TreeNode* temp=root;
	while(curr!=NULL){
		if(curr!=NULL){
			st.push(curr);
			curr=curr->left;
		}
		else{
			temp=st.top()->right;
			if(temp==NULL){
				temp=st,top();
				st.pop();
				ans.push_back(temp);
				if(!st.empty()&&temp==st.top()->right){
					temp=st,top();
				    st.pop();
				    ans.push_back(temp);
				}
			}
			curr=temp;
		}
	}
	return ans;
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
	vector<int> inorderResult=postorderTraversal(root);
	for(int j=0;j<inorderResult.size();j++){
		cout<<inorderResult[j]<<endl;
	}
	return 0;
}

