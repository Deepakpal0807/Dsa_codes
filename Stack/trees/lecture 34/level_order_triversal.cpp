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


//my approch..
void level_order_triversal(listnode* root){
    if(root==NULL){
        return ;
    }
    //it is a iterative algorithmm.
    queue<listnode*> q;
    q.push(root);
    while(!q.empty()){
        if(q.front()==NULL){
            q.pop();
            root=q.front();
            continue;
        }
        cout<<q.front()->val<<" ";
        q.push(root->left);
        q.push(root->right);
        q.pop();
        root=q.front();    
    }
    cout<<endl;
    return ;

}

// abhishek bhaiya approch..
void leverorder(listnode* root){
    queue<listnode*> q;
    q.push(root);
    while(!q.empty()){
        listnode* front=q.front();
        cout<<front->val<<" ";
        if(front->left!=NULL){
            //push the left child in the queue
            q.push(front->left);
        }
        if(front->right!=NULL){
            //push the right child in the queue
            q.push(front->right);
        }
        q.pop();
    }
    cout<<endl;
}

int main(){
     listnode* root=new listnode(10);
 root->left=new listnode(20);
 root->right=new listnode(30);
 root->left->left=new listnode(40);
 root->left->right=new listnode(50);
 root->left->right->left=new listnode(70);
 root->right->right=new listnode(60);
 level_order_triversal(root);
 leverorder(root);

}