class Solution {
public:

int helper(TreeNode* root){
    //base case..
    if(root==NULL){
        return 0;
    }

    //recursive case..
   //op.1 : if we rob the root house then we next rob the root->child->lefts and root->child->rights house
  //recursive case..
   //op.1 : if we rob the root house then we next rob the root->child->lefts and root->child->rights house
    int a=root->val;
    int a1=0;
    int a2=0;
    int a3=0;
    int a4=0;
    if(root->left !=NULL and root->left->left!=NULL)
    a1=helper(root->left->left);
    if(root->left!=NULL and root->left->right)
         a2=helper(root->left->right);
    if(root->right!=NULL and root->right->left)
         a3=helper(root->right->left);
  if(root->right!=NULL and root->right->right)
        a4= helper(root->right->right);

    int x=a+a1+a2+a3+a4;

   //op2 : if we doesn't rob the root house then we roob the root->left and root->right;
   int b=helper(root->left)+helper(root->right); 

   return max(x,b);           
}

int solveTopDown(TreeNode* root,unordered_map<TreeNode*,int>&mp){
     //base case..
    if(root==NULL){
        return 0;
    }

    //lookups..
    if(mp.find(root)!=mp.end()){
        return mp[root];
    }

    //recursive case..
   //op.1 : if we rob the root house then we next rob the root->child->lefts and root->child->rights house
  //recursive case..
   //op.1 : if we rob the root house then we next rob the root->child->lefts and root->child->rights house
    int a=root->val;
    if(root->left!=NULL){
        a+=solveTopDown(root->left->left,mp);
        a+=solveTopDown(root->left->right,mp);
    }
    if(root->right!=NULL){
        a+=solveTopDown(root->right->left,mp);
        a+=solveTopDown(root->right->right,mp);
    }

   //op2 : if we doesn't rob the root house then we roob the root->left and root->right;
   int b=solveTopDown(root->left,mp)+solveTopDown(root->right,mp); 

   return  mp[root]=max(a,b); 
}
int helperTopDown(TreeNode* root){
    unordered_map<TreeNode*,int> mp;
     return solveTopDown(root,mp);
}






    int rob(TreeNode* root) {
        int ans= helper(root);
        return ans;


        //top down approch..
        int ans=helperTopDown(root);
        return ans;
    }
};