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
class data{
public:
  int sum; // root->val + righttree sum + left treesum
  bool isbst; // tree is bst or not..
  int minval;// int max if root is null
  int maxval; //int min if root is null
  int maxsum; //if root is bst the root->val + left.sum + right.sum. 
};
data helper(TreeNode* root){
  //base case..
  data d;
    if(root==NULL){
      d.isbst=true;
      d.sum=0;
      d.minval=INT_MAX;
      d.maxval=INT_MIN;
      d.maxsum=0;
      return d;
    }
    //recursive case..
    data left=helper(root->left);
    data right=helper(root->right);

    //check the root node is bst or not and calculate the maximum sum..
    d.sum=left.sum+right.sum+root->val;
    d.isbst=left.isbst and right.isbst and (root->val > left.maxval  and root->val < right.minval);
    d.minval=min({left.minval,right.minval, root->val});
    d.maxval=max({left.maxval,right.maxval, root->val});
    //if root is bst then maxsumis max({root->val + left.sum+right.sum,left.maxsum,right.maxsum});
    //if root is not bst then maxsum is max(left.maxsum+right.maxsum);

    d.maxsum= d.isbst?  max({left.maxsum,right.maxsum,d.sum}) : 
                        max(left.maxsum,right.maxsum);

    return d;
}

int maxSumBst(TreeNode* root){
   data d=helper(root);
   return d.maxsum;
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

    cout<< maxSum(root)<<endl;
    return 0;
}
