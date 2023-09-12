#include<bits/stdc++.h>
using namespace std;
class listnode{
    public:
   int val;
    listnode* left;
    listnode* right;

    listnode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
int minmoves;
int coin(listnode* root){
    //base case..
    if(root==NULL){
        return 0;
    }


    //recursive case..
    int left=coin(root->left);
    int right=coin(root->right);
    int rootreq=left+right+1-root->val;
    minmoves+=abs(rootreq); //due to negative coin will also takes moves ..
    return rootreq;
}
int main(){
    listnode* root=NULL;
    root=new listnode(2);
    root->left=new listnode(0);
    root->left->left=new listnode(0);
    root->left->left->left=new listnode(0);
    root->left->left->right=new listnode(2);
    root->left->right=new listnode(4);
    root->left->right->left=new listnode(0);
    root->left->right->right=new listnode(0);
  
     coin(root);
     cout<<minmoves<<endl;


    
}