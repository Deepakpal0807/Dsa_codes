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
int maxlevel=-1;
void right_view(listnode* root,int level){
    //base case..
    if(root==NULL){
        return ;
    }

    //recursive case..
    if(level>maxlevel){
        maxlevel++;
        cout<<root->val<<" ";
    }
    right_view(root->right,level+1);
    right_view(root->left,level+1);

}

int main(){
     listnode* root=new listnode(10);
 root->left=new listnode(20);
 root->right=new listnode(30);
 root->left->left=new listnode(40);
 root->left->right=new listnode(50);
 root->left->right->left=new listnode(70);
 root->right->right=new listnode(60);
 
 right_view(root,0);

}