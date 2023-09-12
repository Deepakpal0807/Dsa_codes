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
void solve(listnode* root,int target,vector<int> &path){
    //base case..

    if(root==NULL){
        return;
    }
    if(root->val==target){
        path.push_back(root->val);
        for(int x: path){
            cout<<x<<" ";
        }
        cout<<endl;
        path.pop_back();
    }


    //recursive case..
    path.push_back(root->val);
    solve(root->left,target,path);
    solve(root->right,target,path);
    path.pop_back();

}
int main(){
    listnode* root = NULL;

	root = new listnode(2);

	root->left = new listnode(7);
	root->left->left = new listnode(3);
	root->left->left->left = new listnode(1);
	root->left->left->right = new listnode(9);
	root->left->right = new listnode(8);

	root->right = new listnode(6);
	root->right->left = new listnode(4);
	root->right->right = new listnode(3);

	int target = 8;
    vector<int> path;

    solve(root,target,path);
}