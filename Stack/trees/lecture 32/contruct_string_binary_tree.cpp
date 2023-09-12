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
listnode* built_tree(){
     int val;
     cin>>val;
    //base case..
    if(val==-1){
        return NULL;
    }

    //recursive case...

    //1.first,create a root node and assign the given val in it..
    listnode* root=new listnode(val);

    //2. recursively, make the left subtree of the root node..
   listnode* left=built_tree();

   //3. recursively, make the right subtree of the root node...
    listnode* right=built_tree();

    //4. attach the right subtree and leftsubtree to the main node..
    root->left=left;
    root->right=right;

    return root;
}
 string treetostr(listnode* root){

    //base casae....
    if(root==NULL){
        return "";
    }

    //recursive case..
    string str1=treetostr(root->left);
    string str2=treetostr(root->right);

    if( str1!="" and str2==""){
        return to_string(root->val)+'('+str1+')';
    }
    else if(str1=="" and str2==""){
          return to_string(root->val);
    }
    else{
        return to_string(root->val)+'('+ str1 +")("+str2+')';
    }



 }

int main(){
    listnode* root=NULL;
    root=built_tree();

     string str= treetostr(root);
     cout<<str<<endl;



}