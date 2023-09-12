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
bool check(listnode* root,long long low,long long high){
	//base case..
	if(root==NULL){
		return true;
	}

	//recursive case..
	return root->val> low and root->val < high and check(root->left,low,root->val) and check(root->right,root->val,high);
}
int main(){
   // listnode* root = new listnode(7);

    // root->left = new listnode(3);
    // root->left->left = new listnode(1);
    // root->left->left->left = new listnode(0);
    // root->left->left->right = new listnode(2);

    // root->left->right = new listnode(5);
    // root->left->right->left = new listnode(9);
    // root->left->right->right = new listnode(6);

    // root->right = new listnode(8);
    // root->right->right = new listnode(10);
    // root->right->right->left = new listnode(4);
    // root->right->right->right = new listnode(15);

    listnode* root = new listnode(3);
 
    root->left = new listnode(2);
    root->left->left = new listnode(0);
    root->left->right = new listnode(1);

    root->right = new listnode(5);
    root->right->left = new listnode(4);
    root->right->right = new listnode(6);

printInOrder(root);
cout<<endl;
long long  low=(long long)INT_MIN-1;
long long high=(long long)INT_MAX+1;
  check(root,low,high)? cout<<" BST !":
               cout<<" not BST !";
               cout<<endl;

  

    printInOrder(root);
    cout<<endl;

    return 0;
}
