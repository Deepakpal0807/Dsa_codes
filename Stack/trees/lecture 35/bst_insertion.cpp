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
    queue<listnode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
     listnode* front=q.front();
     q.pop();
     if(front==NULL){
        cout<<endl;
        if(!q.empty()) q.push(NULL);
        continue;
     }
     cout<<front->val<<" ";
     if(front->left!=NULL){
        q.push(front->left);
     }
     if(front->right!=NULL){
        q.push(front->right);
     }
    }
    return ;
}
void inorder(listnode* root){
    //base case...
    if(root==NULL){
        return ;
    }


    //recursive case. 
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
listnode* insertion(listnode* root,int key){
    //base case..
    if(root==NULL){
        root=new listnode(key);
        return root;
    }



    //recursive case..
   
    if(key<root->val){//insert key in the left subtree 
     listnode* left=insertion(root->left,key);
     root->left=left;
    }
    else{
        //insert the key in the right subtree
        listnode* right=insertion(root->right,key);
        root->right=right;
        
    }
    return root;

}


    int main(){
//      listnode* root=new listnode(10);
//  root->left=new listnode(5);
//  root->right=new listnode(15);
//  root->left->left=new listnode(3);
//  root->left->right=new listnode(7);

//  root->right->right=new listnode(17);
//  root->right->left=new listnode(13);


listnode* root=NULL;
root=insertion(root,10);
root=insertion(root,5);
root=insertion(root,15);
root=insertion(root,3);
root=insertion(root,7);
root=insertion(root,13);
root=insertion(root,17);
root=insertion(root,6);
root=insertion(root,16);


 
 
 inorder(root);
 cout<<endl;
 levelorder(root);



}