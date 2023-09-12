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
void path_sum(listnode* root,int target,vector<int> &path){
    //base case..
    if(root==NULL){
        return ;
    }
    if(root->val==target){
        path.push_back(root->val);
        for(int x: path){
            cout<<x<<" ";
        }
        cout<<endl;
        path.pop_back();
        
    }


    //recursive case...
     path.push_back(root->val);
     path_sum(root->left,target-root->val,path);
     path_sum(root->right,target-root->val,path);

     path.pop_back(); //back tracking..

}
void solve(listnode* root,vector<int> &path,int target){
    //base case...
    if(root==NULL){
        return ;
    }
    if(root->val==target){
        path.push_back(root->val);
        for(int x: path){
            cout<<x<<" ";
        }
        cout<<endl;
        path.pop_back();
        return ;
    }
    if(root->left==NULL and root->right==NULL){  //condition of leaf node..
        return ;  
    }



    //recursive case..

    solve(root->left,path,target);
    solve(root->right,path,target);
        
    path_sum(root,target,path);
    


}

int main(){
    listnode* root=new listnode(10);
    root->left=new listnode(5);
    root->right=new listnode(-3);
    root->right->right=new listnode(11);

    root->left->left=new listnode(3);
    root->left->left->left=new listnode(0);
    root->left->left->right=new listnode(-2);
    root->left->right=new listnode(2);
    root->left->right->right=new listnode(1);
      
      int target = 8;

    vector<int> path;
    solve(root,path,target);


    

}