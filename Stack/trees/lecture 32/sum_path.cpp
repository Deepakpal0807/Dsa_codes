https://leetcode.com/problems/path-sum/submissions/

   bool hasPathSum(TreeNode* root, int targetSum) {
         
    //base case...
    if(root==NULL){
        return false;
    }
    if(root->left==NULL and root->right==NULL){ //leaf node...
         if(targetSum==root->val){
           return true;
         }
         return false;
    }



    //recursive case...
    //1.check path are found in the left subtree..
    bool left=hasPathSum(root->left,targetSum-root->val);

    //2. check path are found or not in the right subtree..
      bool right=hasPathSum(root->right,targetSum-root->val);

      return left or right;
    