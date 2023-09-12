#include<bits/stdc++.h>
using namespace std;
class listnode{
public:
	int val;
	listnode* left;
	listnode* right;
	listnode(int val){
		this->val=val;
		this->left=NULL;
		this->right=NULL;
	}

};
void levelorder(listnode* root){
	queue<listnode*> q;
	q.push(root);
	while(!q.empty()){
		listnode* front=q.front();
		q.pop();
		cout<<front->val<<" ";
		if(front->left!=NULL){
			q.push(front->left);
		}
		if(front->right!=NULL){
			q.push(front->right);
		}
	}
	cout<<endl;
}
int main(){
	listnode* root=NULL;
	root=new listnode(10);
	root->left=new listnode(20);
	root->right=new listnode(30);
	root->left->left=new listnode(40);
	root->left->right=new listnode(50);
	root->right->right=new listnode(60);
	root->left->right->left=new listnode(70);

	 levelorder(root);
}