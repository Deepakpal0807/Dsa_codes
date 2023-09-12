/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
set<TreeNode*> s;
unordered_map<string,TreeNode*> mp;
string dfs(TreeNode* root){
    //base case..
    if(root==NULL){
        return "X";
    }

    //recursive case..
    string left=dfs(root->left);
    string right=dfs(root->right);
    string unique=to_string(root->val)+" "+left+right;
    if(mp.find(unique)!=mp.end()){
        //duplicate tree are found
        s.insert(mp[unique]);
    }
    else{
        mp[unique]=root;
    }
    return unique;
}
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        dfs(root);
        return  vector<TreeNode*>(s.begin(),s.end());
    }
};