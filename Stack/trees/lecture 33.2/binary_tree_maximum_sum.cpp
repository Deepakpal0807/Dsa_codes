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
class Pair{
    public:
    int maxpath;
    int maximumsum;
};
Pair maximum_sum(listnode* root){
 //base case...
 Pair p;
 if(root==NULL){
    p.maxpath=0;
    p.maximumsum=INT_MIN;
    return p;
     }
 //recursive case...
   Pair left=maximum_sum(root->left);

   Pair right=maximum_sum(root->right);
   //compute the maxsum that contain the root..

   int max_sum=max({root->val,
                    (root->val+left.maxpath+right.maxpath),
                    (root->val+left.maxpath),
                    (root->val+right.maxpath)});
    
  p.maximumsum=max({left.maximumsum,right.maximumsum,max_sum});

  p.maxpath=max({root->val,
                root->val+left.maxpath,
                root->val+right.maxpath});

 return p;

}
int main(){
    listnode* root=NULL;
    // root=buildtree();
    // root=new listnode(-5);
    // root->left=new listnode(1);
    // root->left->left=new listnode(2);
    // root->left->right=new listnode(3);

    // root->right=new listnode(4);




  cout<<maximum_sum(root).maximumsum;
}