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

TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p,TreeNode*q){
    //base cae...
    if(root==NULL){
        return NULL;


    }

    if(root==p || root==q){
        return root;
    }
    // recursive case..
    TreeNode* left= lowestCommonAncestor(root->left,p,q);
    TreeNode* right=lowestCommonAncestor(root->right,p,q);
     if(left==NULL) return right;
     if(right==NULL ) return left;


     return root;

}


  int main(){
        TreeNode* root=new TreeNode(3);
        root->left=new TreeNode(5);
        root->right=new TreeNode(1);
        root->left->left=new TreeNode(6);
        root->left->right=new TreeNode(2);
        root->right->left=new TreeNode(0);
        root->right->right=new TreeNode(8);
        root->left->right->left=new TreeNode(7);
        root->left->right->right=new TreeNode(7);

        TreeNode* p=root->left;
        TreeNode* q=root->left->right;

        TreeNode* ans=lowestCommonAncestor(root,p,q);
        cout<<ans->val<<endl;
        
    }