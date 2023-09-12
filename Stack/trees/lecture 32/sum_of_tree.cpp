#include<bits/stdc++.h>
using namespace std;
//input val= 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1

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
    listnode* root=new listnode(val);
   listnode* left=built_tree();
     listnode* right=built_tree();
   
    root->left=left;
    root->right=right;

    return root;
}

//1.using global variable..
int sum=0;
void sum_of_tree(listnode* root){
 //base case...
 if(root==NULL){
    return ;
 }
 //recursive case..
 sum+=root->val;
 sum_of_tree(root->left);
 sum_of_tree(root->right);
 return ;

}


 //2. using sum local varible and pass by value..
int sum_of_tree(listnode* root,int val){
 //base case...
 if(root==NULL){
    return 0 ;
 }
 //recursive case..

  
  int a=sum_of_tree(root->left,val);
 int b=sum_of_tree(root->right,val);
  val=a+b+root->val;
 return  val;

}



//3.using pass by refrence..

// int sum_of_tree(listnode* root,int &sum){
//  //base case...
//  if(root==NULL){
//     return 0 ;
//  }
//  //recursive case..

//  sum_of_tree(root->left,sum);
// sum_of_tree(root->right,sum);
//   sum+=root->val;

//  return  sum;

// }
int main(){
    listnode* root=NULL;
    root=built_tree();

  //1. using global variable..
    // sum_of_tree(root);
    // cout<<sum<<endl;

    // 2. using local variable...
    int sum=0;
    sum=sum_of_tree(root,sum);
    cout<<sum<<endl;\


    //3. using pass by refrence..
    // int sum=0;
    // sum_of_tree(root,sum);
    // cout<<sum<<endl;


}