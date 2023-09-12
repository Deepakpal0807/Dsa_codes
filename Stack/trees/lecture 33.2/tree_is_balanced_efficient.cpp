
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
   pair<bool,int> v;
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
//Time: O(n) // linear time...
pair<bool,int> checkheightbalanced(listnode* root){
    //base case....
    pair<bool,int> v;
    if(root==NULL ){
        return {true,-1};
    }

    //recursive case...
    //1. recursively check the lst is balanced or not 
   pair<bool,int> left=checkheightbalanced(root->left);
    
    //2. recursively check the rst is balanced or not
    pair<bool,int> right=checkheightbalanced(root->right);

    //3. check the node is height balanced or not.
    pair<bool,int> root1;
    root1.first=abs(right.second-left.second)<=1? true: false;
    root1.second=1+max(left.second,right.second);

    v.first=root1.first and left.first and right.first; //check the root and lst and rst is balanced or not.

    v.second=root1.second; //return the height of the balanced tree..
    return v;
}

int main(){
    listnode* root=NULL;
   root= buildtree();
   
   checkheightbalanced(root).first? cout<<"Height balanced !": 
                               cout<<"Not balanced !";
}