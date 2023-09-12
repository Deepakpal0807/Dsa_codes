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
vector<TreeNode*> inorder;
void contructinorder(TreeNode* root){
	//base case...
	if(root==NULL){
		return;
	}

	//recursive case..
	contructinorder(root->left);
	inorder.push_back(root);
	contructinorder(root->right);


}
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
void recoverTree(TreeNode* root){
	contructinorder(root);

	TreeNode* first=NULL;
	TreeNode* second=NULL;
	cout<<endl<<inorder.size()<<endl;
	for(int i=1;i<inorder.size();i++){
		if(inorder[i-1]->val > inorder[i]->val){
			if(first==NULL){
				//you found the first mistake on i-1th inds..
				first=inorder[i-1];
			}
			//second mistake was on the ithe index (if the mistake was adjacent )(if not then next mistake found soon
			second=inorder[i];
         
		}
	}
	swap(first->val,second->val);
	return ;
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
