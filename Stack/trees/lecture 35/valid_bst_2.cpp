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

 class triple{
 public:
 	bool isbst;
 	int minval;
 	int maxval;

};

//using long long while return intmin and intmax asn LLONG_MAX and LLONG_MIN because int min max stuck in leetcode case..
triple checkbst(TreeNode* root){
   triple p;

	//base case...
	if(root==NULL){
		p.isbst=true;
		p.minval=INT_MAX;
		p.maxval=INT_MIN;
		return p;
	}
	if(root->left==NULL and root->right==NULL){
		//bst only contain leaf node means one node...
		p.isbst=true;
		p.maxval=root->val;
		p.minval=root->val;
		return p;
	}



	//recursive case..
	triple left=checkbst(root->left);  
	triple right=checkbst(root->right);
	bool rootbst=(root->val > left.maxval   and root->val < right.minval);
	p.isbst=left.isbst and right.isbst and rootbst;

	p.maxval=max({left.maxval,right.maxval,root->val});
	p.minval=min({left.minval,right.minval,root->val});

	return p;
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

    // TreeNode* root = new TreeNode(3);
 
    // root->left = new TreeNode(1);
    // root->left->left = new TreeNode(0);
    // root->left->right = new TreeNode(4);

    // root->right = new TreeNode(5);
    // root->right->left = new TreeNode(2);
    // root->right->right = new TreeNode(6);

	// TreeNode* root=new TreeNode(2);
	// root->left=new TreeNode(1);
	// root->right=new TreeNode(3);


      TreeNode* root=new TreeNode(1);
      root->left=new TreeNode(1);
// printInOrder(root);
// cout<<endl;
  checkbst(root).isbst? cout<<" BST !":
               cout<<" not BST !";
               cout<<endl;

  

    // printInOrder(root);
    // cout<<endl;

    return 0;
}
