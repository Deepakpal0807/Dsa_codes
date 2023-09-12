bool flipEquiv(TreeNode* root1, TreeNode* root2) {  //function of flip equivalent on leetcode..
           //base case..
           if(root1==NULL and root2==NULL){
               return true;
           }
           if(root1==NULL or root2==NULL){
               return false;
           }
          

          



           if(root1->val!=root2->val){
               return false;
           }
        swap(root1->right,root1->left);
          bool left= flipEquiv(root1->left,root2->left);
          bool right= flipEquiv(root1->right,root2->right);
          if(left and right){
              return true;
          }

          swap(root1->left,root1->right); //backtracking..
            left= flipEquiv(root1->left,root2->left);
         right= flipEquiv(root1->right,root2->right);

         if(left and right){
             return true;
         }
        
        return false;
          

      
    }