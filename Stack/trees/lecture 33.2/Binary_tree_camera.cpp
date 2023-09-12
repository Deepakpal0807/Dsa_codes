#include <bits/stdc++.h>
using namespace std;
class listnode
{
public:
    int val;
    listnode *left;
    listnode *right;
    listnode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
class triple
{
public:
    int numcamera;
    bool iscovered;
    bool hascamera;
};

triple minCameraCover(listnode *root)
{
    triple p;
    // base case..
    if(root==NULL){
        p.iscovered=true;
        p.hascamera=false;
        p.numcamera=0;
        return p;
    }

    // recursive case..

    triple left = minCameraCover(root->left);

    triple right = minCameraCover(root->right);

    
    if (left.iscovered and right.iscovered){
        p.hascamera=false;
        p.numcamera=left.numcamera+right.numcamera;
        p.iscovered=left.hascamera || right.hascamera? true: false;
        return p;
    }
   
        p.hascamera=true;
        p.numcamera=1+left.numcamera+right.numcamera;
        p.iscovered=true;

   
      
    return p;
    
}

int main()
{
    listnode *root = NULL;

    // root = new listnode(0);

    // root->left = new listnode(0);
    // root->left->left = new listnode(0);
    // root->left->right = new listnode(0);

   // triple t=minCameraCover(root);
    // //if root is covered then cout t.hascamera or if root is not covered then increase no of camera by one..
    // t.iscovered? cout<<t.numcamera: cout<<t.numcamera+1<<endl;

    // root = new listnode(0);

    // root->left = new listnode(0);
    // root->left->left = new listnode(0);
    // root->left->left->left = new listnode(0);
    // root->left->left->left->right = new listnode(0);
   
    // triple t=minCameraCover(root);
    // //if root is covered then cout t.hascamera or if root is not covered then increase no of camera by one..
    // t.iscovered? cout<<t.numcamera: cout<<t.numcamera+1<<endl;

    listnode *root1 = new listnode(0);

    root = new listnode(0);

    root1->left = root;

    root->left = new listnode(0);
    root->left->left = new listnode(0);
    root->left->right = new listnode(0);

    root->right = new listnode(0);
    root->right->left = new listnode(0);
    root->right->right = new listnode(0);

       triple t=minCameraCover(root1);
    //if root is covered then cout t.hascamera or if root is not covered then increase no of camera by one..
    t.iscovered? cout<<t.numcamera: cout<<t.numcamera+1<<endl;
}