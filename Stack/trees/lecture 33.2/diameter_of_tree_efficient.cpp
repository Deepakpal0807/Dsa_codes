/*
given the pre-order traversal of a binary tree, check if it is height balanced or not

Example
	 Input  : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output : 5

          Input  : 10 20 30 50 70 -1 -1 -1 -1 40 -1 60 -1 80 -1 -1 90 -1 -1
          Output : 6

          Input  : 10 20 -1 -1 30 40 60 80 -1 -1 -1 -1 50 -1 70 -1 90 -1 -1
          Output : 6

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
    //1. recursively, compute the diameter  and height of the lst
    Pair left=diameter(root->left);
    //2. recursively, compute the diameter and height  of the rst
    Pair right=diameter(root->right);

    int diameterwithnode=left.first+right.first+2; //diameter of root ..
    
    p.first=1+max(left.first,right.first); //length of root..
    p.second=max(diameterwithnode,max(left.second,right.second)); //maximum diameter of root or left or right..
    return p;


    
}
//time: O(N). .//using pair...


int main(){
    listnode* root=NULL;
    root=buildtree();
    Pair p=diameter(root);
      cout<<p.second<<endl;
}