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
class data{
public:
  int sum; // root->val + righttree sum + left treesum
  bool isbst; // tree is bst or not..
  int minval;// int max if root is null
  int maxval; //int min if root is null
  int maxsum; //if root is bst the root->val + left.sum + right.sum. 
};
data helper(listnode* root){
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

int maxSum(listnode* root){
   data d=helper(root);
   return d.maxsum;
}

int main(){
   // listnode* root = new listnode(7);

    // root->left = new listnode(3);
    // root->left->left = new listnode(1);
    // root->left->left->left = new listnode(0);
    // root->left->left->right = new listnode(2);

    // root->left->right = new listnode(5);
    // root->left->right->left = new listnode(9);
    // root->left->right->right = new listnode(6);

    // root->right = new listnode(8);
    // root->right->right = new listnode(10);
    // root->right->right->left = new listnode(4);
    // root->right->right->right = new listnode(15);

    listnode* root = new listnode(3);
 
    root->left = new listnode(2);
    root->left->left = new listnode(0);
    root->left->right = new listnode(1);

    root->right = new listnode(5);
    root->right->left = new listnode(4);
    root->right->right = new listnode(6);

    cout<< maxSum(root)<<endl;
    return 0;
}
