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
void  solve(listnode *head, int target,vector<int> path,vector<int> &path1)
{
    // base case...
    if(head==NULL){
        return  ;
    }
    if(head->val==target){
        path.push_back(head->val);
        path1=path;
       
        path.pop_back();
        return ;
        
    }

    // recursive case...
    path.push_back(head->val);
    solve(head->left,target,path,path1);
    solve(head->right,target,path,path1);
    path.pop_back(); // backtracking..
    
}

int main()
{
    listnode* root=NULL;
    	root = new listnode(3);

	root->left = new listnode(5);
    root->right=new listnode(1);
	
	root->left->left = new listnode(6);
	root->left->right = new listnode(2);
    root->left->right->left = new listnode(7);
    root->left->right->right = new listnode(4);
	


	root->right->left = new listnode(0);
	root->right->right = new listnode(8);
    int p = 6;
    int q = 7;
    vector<int> v;
vector<int> path1;
vector<int> path2;
    
      solve(root,p,v,path1);
     solve(root,q,v,path2);

      for(int x: path1){
        cout<<x<<" ";
      }
      cout<<endl;
      for(int x: path2){
        cout<<x<<" ";
      }
      cout<<endl;
      
}