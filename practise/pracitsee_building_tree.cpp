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
void inorder(listnode* root){
	//base case..
	if(root==NULL){
		return ;
	}
	//recursive case..
	inorder(root->left);
	cout<<root->val<<" ";
	inorder(root->right);
	return ;
}
void levelorder(listnode* root){
	queue<listnode*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		listnode* front=q.front();
		q.pop();
		if(front==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
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
	return ;
}

listnode* buildtree(int* arr,int s,int e){
	//base case...
	if(s>e){  //starting index > ending index.
		return NULL;
	}


	//recursive case..
	int m=s+(e-s)/2;
	listnode* root=new listnode(arr[m]);

	//recursively make the left sub tree with the arr[s to m-1]
	root->left=buildtree(arr,s,m-1);

	//recursively make the right subtree with the arr[k+1 to e]
	root->right=buildtree(arr,m+1,e);

	return root;
}
int main(){
	int arr[]={3,5,7,10,13,15,17};
	int size=sizeof(arr)/sizeof(int);
	listnode* root=buildtree(arr,0,size-1);

	levelorder(root);
	inorder(root);
}