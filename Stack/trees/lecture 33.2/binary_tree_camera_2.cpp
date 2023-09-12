#include<bits/stdc++.h>
using namespace std;
int camera;
class listnode
{
public:
    int val;
    listnode *left;
    listnode *right;
    listnode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int minCameraCover(listnode* root){
    //base case.. 
    if(root==NULL){
        return 1;
    }


    //recursive case..
    int left=minCameraCover(root->left);
    int right=minCameraCover(root->right);

    if(left==0 or right==0){
        // left or  right sub tree are not covered then we install camera on root.
        camera++;
        return 2; 
    }
    if(left==2 or right==2){
        //left or right sub tree or both are contain camera ,so we don't need to install camera on root and root is covered
        return 1;
    }
    //left ==1 or right==1
    //means the left or right sub tree are covered but no contain camera so we cannot install camera on root and root are not covered also..
    return 0;
}
int main(){
     listnode *root = NULL;

    // root = new listnode(0);

    // root->left = new listnode(0);
    // root->left->left = new listnode(0);
    // root->left->right = new listnode(0);
      // int t=minCameraCover(root);
    //    if(t==0){
    //     //means root node is not covered...
    //     camera++;
    //    }
    //    cout<<camera<<endl;


    // root = new listnode(0);

    // root->left = new listnode(0);
    // root->left->left = new listnode(0);
    // root->left->left->left = new listnode(0);
    // root->left->left->left->right = new listnode(0);
    // int t=minCameraCover(root);
    //    if(t==0){
    //     //means root node is not covered...
    //     camera++;
    //    }
    //    cout<<camera<<endl;
  
    

    listnode *root1 = new listnode(0);

    root = new listnode(0);

    root1->left = root;

    root->left = new listnode(0);
    root->left->left = new listnode(0);
    root->left->right = new listnode(0);

    root->right = new listnode(0);
    root->right->left = new listnode(0);
    root->right->right = new listnode(0);

       int t=minCameraCover(root1);
       if(t==0){
        //means root node is not covered...
        camera++;
       }
       cout<<camera<<endl;
  
}