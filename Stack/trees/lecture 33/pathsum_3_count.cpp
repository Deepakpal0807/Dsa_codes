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
int path_sum(TreeNode* root,int target){

    //base casae...
    if(root==NULL){
        return 0;
    }
    int count=0;
    if(root->val==target){
        count++;    // donot return zero because the next node of its contain zero..
    }
    

    //recursive case..
    int x=path_sum(root->left,target-root->val);
    int y=path_sum(root->right,target-root->val);

    return x+y+count;

}
int count(TreeNode* root,int target){
    //base case..
    if(root==NULL){
        return 0;
    }
   




    //recursive case...

    //excluding the value of the root node..
    int x=count(root->left,target);
    int y=count(root->right,target);
    int z=path_sum(root,target);  //including the path..

    return x+y+z;
     
}
int main(){
     TreeNode* root=new TreeNode(10);
    root->left=new TreeNode(5);
    root->right=new TreeNode(-3);
    root->right->right=new TreeNode(11);

    root->left->left=new TreeNode(3);
    root->left->left->left=new TreeNode(3);
    root->left->left->right=new TreeNode(-2);
    root->left->right=new TreeNode(2);
    root->left->right->right=new TreeNode(1);
      
      int target = 8;
     cout<< count(root,target)<<endl;
      

}