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



int main(){
     listnode* root=new listnode(10);
 root->left=new listnode(20);
 root->right=new listnode(30);
 root->left->left=new listnode(40);
 root->left->right=new listnode(50);
 root->left->right->left=new listnode(70);
 root->right->right=new listnode(60);
 
 levelorder(root);

}