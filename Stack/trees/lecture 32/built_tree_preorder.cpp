//input val= 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1 
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
listnode* built_tree(){
     int val;
     cin>>val;
    //base case..
    if(val==-1){
        return NULL;
    }

    //recursive case...

    //1.first,create a root node and assign the given val in it..
    listnode* root=new listnode(val);

    //2. recursively, make the left subtree of the root node..
   listnode* left=built_tree();

   //3. recursively, make the right subtree of the root node...
    listnode* right=built_tree();

    //4. attach the right subtree and leftsubtree to the main node..
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
int main(){
      listnode* root=NULL;
      root=built_tree();

      preorder_triversal(root);

      
}