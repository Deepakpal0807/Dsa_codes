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
void preorder(listnode* root){
    //base case....
    if(root==NULL){
        return ;
    }


    //recursive case..
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(listnode* root){
    //base case....
    if(root==NULL){
        return ;
    }


    //recursive case..
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
int i=0;
listnode* buildtree(int* pre,int* in,int s,int e){
    if(s>e){
        return NULL;
    }

     int val=pre[i];
     i++;
     listnode* root=new listnode(val);
     int k=0;
     for(k=s;k<=e;k++){
        if(in[k]==val){ //root node are found in the inorder triversal..
            break;
        }
     }
     listnode* left=buildtree(pre,in,s,k-1);  //left subtree..
     listnode* right=buildtree(pre,in,k+1,e);
     root->left=left;
     root->right=right;

     return root;

}
int main(){
    int pre[]={10,20,40,50,70,30,60};
    int in[]={40,20,70,50,10,30,60};
    int size=sizeof(pre)/sizeof(int);
    listnode* root=buildtree(pre,in,0,size-1);
    
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    leverorder(root);

    
}