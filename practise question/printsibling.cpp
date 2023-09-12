#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int val;
	node* left;
	node* right;
	node(int left){
		this->val=left;
		this->left=NULL;
		this->right=NULL;
	}
};
node* buildtree(){
	int val;
	cin>>val;
	node* root=new node(val);
     queue<node*> q;
	 q.push(root);
	 while(!q.empty()){
		 node* temp=q.front();
		 q.pop();
        bool left;
		cin>>left;
		if(left){
			int val;
			cin>>val;
			temp->left=new node(val);
			q.push(temp->left);
		}
		bool right;
		cin>>right;
		if(right){
			int val;
			cin>>val;
			temp->right=new node(val);
			q.push(temp->right);
		}
		
	 }
	 return root;
}
void preorder(node* root){
	if(root==NULL){
		return;
	}

	cout<<root->val<<" ";
	preorder(root->left);
	preorder(root->right);
	return ;
}

int main() {
	node* root=buildtree();
	preorder(root);
}