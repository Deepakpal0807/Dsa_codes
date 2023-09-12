/*
given the pre-order traversal of a binary tree, check if it is height balanced or not

Example
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: true

	Input : 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
	Output: true

	Input : 10 20 30 -1 -1 -1 -1
	Output: false

*/

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
class Pair{
    public:
    int first;  //lenght of the tree. 
    int second; //diameter of the tree..
   
};
listnode* buildtree(){
    int val;
    cin>>val;
    //base case...
    if(val==-1){
        return NULL;
    }


    //recursive case..
    listnode* root=new listnode(val);

    listnode* left=buildtree();
    listnode* right=buildtree();
     
     root->left=left;
     root->right=right;
     return root;
}

Pair diameter(listnode* root){
    //base case...
    Pair p;
    if(root==NULL){
        p.first=-1;
        p.second=0;
        return p;
    }


    //recursive case...
    //1. recursively, compute the diameter of the lst
    Pair left=diameter(root->left);
    //2. recursively, compute the diameter of the rst
    Pair right=diameter(root->right);

    int diameterwithnode=left.first+right.first+2;
    
    p.first=1+max(left.first,right.first);
    p.second=max(diameterwithnode,max(left.second,right.second));
    return p;


    
}

int main(){
    listnode* root=NULL;
    root=buildtree();
    Pair p=diameter(root);
      cout<<p.second<<endl;
}