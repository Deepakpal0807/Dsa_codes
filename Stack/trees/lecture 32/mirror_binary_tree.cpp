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
void mirror(listnode* root){
    //base case..
    if(root==NULL){
        return ;
    }

    //recursive case..
   mirror(root->left);
   mirror(root->right);
   swap(root->right,root->left); //swap the left and right node of the root node... 
}
int main(){
  listnode* root=NULL;
  root=built_tree();

  mirror(root);
  preorder_triversal(root);

}