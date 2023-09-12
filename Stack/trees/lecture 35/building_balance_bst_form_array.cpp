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

listnode* buildtree(int* arr,int start,int end){
	// base case..
	if(start>end){
		return NULL;
	}


	// recursive case..
	int k=start+(end-start)/2;
	listnode* root=new listnode(arr[k]);

	//recursively,make the left subtree..
	root->left=buildtree(arr,start,k-1);

	//recursively, make the right subtre...
	root->right=buildtree(arr,k+1,end);

	return root;


}
int main(){
	int arr[]={3,5,7,10,13,15,17};
	int size=sizeof(arr)/sizeof(int);
	listnode* root=NULL;
	root=buildtree(arr,0,size-1);

	inorder(root);
	cout<<endl;

}