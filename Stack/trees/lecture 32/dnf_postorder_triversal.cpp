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


 void postorder_triversal(listnode* root){
     //base case....
     if(root==NULL){
        cout<<-1<<" ";
        return ;
     }


     //recursive case..

     //1.Ask your friend to print  the triversal leftsubtree of the root node..
     postorder_triversal(root->left);

     //2. Ask your friend to print the  triversal rightsubtree of the root node..
     postorder_triversal(root->right);

     //3.print the value of the root node..
     cout<<root->val<<" ";
 }
 int main(){
 listnode* root=new listnode(10);
 root->left=new listnode(20);
 root->right=new listnode(30);
 root->left->left=new listnode(40);
 root->left->right=new listnode(50);
 root->left->right->left=new listnode(70);
 root->right->right=new listnode(60);

 postorder_triversal(root);

}