/*

given the pre-order traversal of a binary tree, output its level-order traversal.

Example
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 20 30 40 50 60 70
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
void levelorder(listnode* root){
    queue <listnode* > q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        listnode* front=q.front();
        q.pop();
        if(front==NULL){
              cout<<endl;
              if(!q.empty())
              q.push(NULL);

        }
        else{
            cout<<front->val<<" ";
            if(front->left!=NULL){
                q.push(front->left);

            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }
}
 listnode* buildtree_levelorder(){
       int val;
       cin>>val;
       listnode* root=new listnode(val);
       queue<listnode*> q;
       q.push(root);
       while(!q.empty()){
        listnode* front=q.front();
        q.pop();
           int leftdata;
           cin>>leftdata;
           if(leftdata!=-1){
            //left child of the front exist...
            front->left=new listnode(leftdata);
            q.push(front->left);
           }
           int rightdata;
           cin>>rightdata;
           if(rightdata!=-1){
            //right child of the front exist..
            front->right=new listnode(rightdata);
            q.push(front->right);
           }
       }

       return root;

 }

int main(){
    listnode* root=NULL;
    root=buildtree_levelorder();
     levelorder(root);
}