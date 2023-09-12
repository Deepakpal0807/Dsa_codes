#include<bits/stdc++.h>
using namespace std;
//input val= 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1

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
listnode* built_tree(){
     int val;
     cin>>val;
    //base case..
    if(val==-1){
        return NULL;
    }

    //recursive case...
    listnode* root=new listnode(val);
   listnode* left=built_tree();
     listnode* right=built_tree();
   
    root->left=left;
    root->right=right;

    return root;
}

 void preorder_triversal(listnode* root){
     //base case....
     if(root==NULL){
        cout<<-1<<" ";
        return ;
     }


     //recursive case..

     //1.print the value of the root node..
     cout<<root->val<<" ";

     //2.Ask your friend to print the leftsubtree of the root node..
     preorder_triversal(root->left);

     //3. Ask your friend to print the rightsubtree of the root node..
     preorder_triversal(root->right);
 }
 int tree_height(listnode* root){

    //base case...
    if(root==NULL){
        return -1;  //because single node doesn't have any height..
        //return 0 if we calculate the no of node instead of the branch...
    }


    //recursive case..
    //1. recursively,compute the height of the left subtree.
    int x=tree_height(root->left);

    //2. recursively,compute the height of the right subtree.
    int y=tree_height(root->right);

    //return the height 1+max(rigth_height, left_height);
    return 1+max(x,y);

 }
int main(){
    listnode* root=NULL;
    root=built_tree();

    int height=tree_height(root);
    cout<<height<<endl;



}