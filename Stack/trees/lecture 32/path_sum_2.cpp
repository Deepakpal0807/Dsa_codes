#include<iostream>
#include<vector>

using namespace std;

class listnode {

public :

	int val;
	listnode* left;
	listnode* right;

	listnode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

};

// void path_sum(listnode* root,int target,vector<int> &path){
//     //base case..
//     if(root==NULL){
//         return ;
//     }
//     if(root->left==NULL and root->right==NULL){
//         if(root->val==target){
//             path.push_back(root->val);
//             for(int x: path){
//                 cout<<x<<" ";
//             }
//             cout<<endl;
//             path.pop_back();
//         }
//         return ;
//     }

//     //recursive case...
//      path.push_back(root->val);
//      path_sum(root->left,target-root->val,path);
//      path_sum(root->right,target-root->val,path);

//      path.pop_back(); //back tracking..

// }

//leetcode return type is vector<vector<int>> ;
void helper(listnode* root,int target,vector<int> &path,vector<vector<int>> &paths){
    //base case..
    if(root==NULL){
        return ;
    }
    if(root->left==NULL and root->right==NULL){
        if(root->val==target){
            path.push_back(root->val);
            paths.push_back(path);
            path.pop_back();
        }
        return ;
    }

    //recursive case...
     path.push_back(root->val);
     helper(root->left,target-root->val,path,paths);
     helper(root->right,target-root->val,path,paths);

     path.pop_back(); //back tracking..

}
vector<vector<int>> pahtsum(listnode* root,int target){
             vector<int> path;
             vector<vector<int>> paths;
             helper(root,target,path,paths);
             return paths;
}

int main() {

	listnode* root = NULL;

	root = new listnode(5);

	root->left = new listnode(4);
	root->left->left = new listnode(11);
	root->left->left->left = new listnode(7);
	root->left->left->right = new listnode(2);

	root->right = new listnode(8);
	root->right->left = new listnode(13);
	root->right->right = new listnode(4);
	root->right->right->right = new listnode(1);
	root->right->right->left = new listnode(5);

	int targetSum = 22;

	vector<int> path;
    // path_sum(root,targetSum,path);
	

    vector<vector<int>> ans=pahtsum(root,targetSum);


	return 0;
}
