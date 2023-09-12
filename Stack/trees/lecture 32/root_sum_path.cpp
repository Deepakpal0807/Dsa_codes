#include<iostream>
#include<vector>

using namespace std;

class TreeNode {

public :

	int val;
	TreeNode* left;
	TreeNode* right;

	TreeNode(int val) {
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}

};

void path_sum(TreeNode* root,int target,vector<int> &path){
    //base case..
    if(root==NULL){
        return ;
    }
    if(root->val==target){
        path.push_back(root->val);
        for(int x: path){
            cout<<x<<" ";
        }
        cout<<endl;
        path.pop_back();
        
    }
    // if(root->left==NULL and root->right==NULL){
    //     // if(root->val==target){
    //     //     path.push_back(root->val);
    //     //     for(int x: path){
    //     //         cout<<x<<" ";
    //     //     }
    //     //     cout<<endl;
    //     //     path.pop_back();
    //     // }
    //     return ;
    // }

    //recursive case...
     path.push_back(root->val);
     path_sum(root->left,target-root->val,path);
     path_sum(root->right,target-root->val,path);

     path.pop_back(); //back tracking..

}

// int path_sum(TreeNode* root,int target){

//     //base casae...
//     if(root==NULL){
//         return 0;
//     }
//     int count=0;
//     if(root->val==target){
//         count++;
//     }
   

//     //recursive case..
//     int x=path_sum(root->left,target-root->val);
//     int y=path_sum(root->right,target-root->val);

//     return x+y+count;

// }



int main() {

	TreeNode* root = NULL;

	root = new TreeNode(2);

	root->left = new TreeNode(7);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(3);
	root->left->left->left = new TreeNode(1);
	root->left->left->right = new TreeNode(8);

	root->right = new TreeNode(6);
	root->right->left = new TreeNode(4);
	root->right->right = new TreeNode(5);

	int targetSum = 12;

	vector<int> path;
    path_sum(root,targetSum,path);


    // int count=path_sum(root,targetSum);
    // cout<<count<<endl;
    
	



	return 0;
}
