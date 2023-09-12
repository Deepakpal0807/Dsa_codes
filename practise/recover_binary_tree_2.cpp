#include<bits/stdc++.h>
using namespace std;
class TreeNode{
public:
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int val){
		this->val=val;
		this->left=NULL;
		this->right=NULL;
	}
};

void printInOrder(TreeNode* root){
	//base case..
	if(root==NULL){
		return ;
	}

	//recursive case.
	printInOrder(root->left);
	cout<<root->val<<" ";
	printInOrder(root->right);
}
TreeNode* first=NULL;
TreeNode* second=NULL;
TreeNode* pre=NULL;
void helper(TreeNode* root){
	//base case..
	if(root==NULL){
		return ;
	}

	//recursive case..
	helper(root->left);
	if(pre!=NULL and pre->val > root->val){
		//you found a mistake...
		if(first==NULL){
			first=pre;
		}
		second=root;
	}
	pre=root;
	helper(root->right);
}
void recoverTree(TreeNode* root){
	helper(root);
	swap(first->val,second->val);
}
int main(){
   // TreeNode* root = new TreeNode(7);

    // root->left = new TreeNode(3);
    // root->left->left = new TreeNode(1);
    // root->left->left->left = new TreeNode(0);
    // root->left->left->right = new TreeNode(2);

    // root->left->right = new TreeNode(5);
    // root->left->right->left = new TreeNode(9);
    // root->left->right->right = new TreeNode(6);

    // root->right = new TreeNode(8);
    // root->right->right = new TreeNode(10);
    // root->right->right->left = new TreeNode(4);
    // root->right->right->right = new TreeNode(15);

    TreeNode* root = new TreeNode(3);

    root->left = new TreeNode(2);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(1);

    root->right = new TreeNode(5);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(6);

printInOrder(root);
cout<<endl;

    recoverTree(root);

    printInOrder(root);
    cout<<endl;

    return 0;
}
