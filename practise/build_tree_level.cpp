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
	q.push(NULL);
	while(!q.empty()){
		listnode* front=q.front();
		q.pop();
		if(front==NULL){
			cout<<endl;
			if(!q.empty())
				q.push(NULL);
			continue;
		}
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

listnode* buildtree(){
	int val;
	cin>>val;
	listnode* root=new listnode(val);
	
	queue<listnode*> q;
	q.push(root);
	while(!q.empty()){
		listnode* front=q.front();
		q.pop();
		int left;
		cin>>left;
		if(left!=-1){
			front->left= new listnode(left);
			q.push(front->left);
		}
		int right;
		cin>>right;
		if(right!=-1){
			front->right=new listnode(right);
			q.push(front->right);
		}
	}

	return root;
}
int main(){
	listnode* root=NULL;
	root=buildtree();

	 levelorder(root);
}