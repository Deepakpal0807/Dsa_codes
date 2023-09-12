
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
int height(listnode* head){
    //base case..
    if(head==NULL){
        return -1;
    }

    //recursive case..
    int left=height(head->left);
    int right=height(head->right);
    return 1+max(left,right);
}
//time: O(n^2); //quadratic time...
bool checkheightbalanced(listnode* root){
    //base case....
    if(root==NULL){
        return true;
    }

    //recursive case...
    //1. recursively check the lst is balanced or not 
    bool left=checkheightbalanced(root->left);
    
    //2. recursively check the rst is balanced or not
    bool right=checkheightbalanced(root->right);

    //3. check the node is height balanced or not.
    bool root1=abs(height(root->left)-height(root->right))<=1? true : false;

    return left and right and root1;
}

int main(){
    listnode* root=NULL;
   root= buildtree();
   checkheightbalanced(root)? cout<<"Height balanced !": 
                               cout<<"Not balanced !";
}