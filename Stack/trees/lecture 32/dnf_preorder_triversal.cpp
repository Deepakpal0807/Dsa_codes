#include<bits/stdc++.h>
using namespace std;
class listnode{

 public:
   int val;
   listnode* left;
   listnode* right;

   listnode(int val){  //parameterised constructor..
     this->val=val;
     this->left=NULL;
     this->right=NULL;
   }

 };


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
 int main(){
 listnode* root=new listnode(10);
 root->left=new listnode(20);
 root->right=new listnode(30);
 root->left->left=new listnode(40);
 root->left->right=new listnode(50);
 root->left->right->left=new listnode(70);
 root->right->right=new listnode(60);

 preorder_triversal(root);

}