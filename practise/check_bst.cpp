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
int checkmin(listnode* root){
	//base case...
      if(root->left==NULL){
      	return root->val;
      }

	//recursive case..
	return checkmin(root->left);
}
int checkmax(listnode* root){
	//base case..
	if(root->right==NULL){
		return root->val;
	}

	//recursive case..
	return checkmax(root->right);
}

void printInOrder(listnode* root){
	//base case..
	if(root==NULL){
		return ;
	}

	//recursive case.
	printInOrder(root->left);
	cout<<root->val<<" ";
	printInOrder(root->right);
}
bool check(listnode* root){


	//base case...
	if(root==NULL){
		return true;
	}
	if(root->left==NULL and root->right==NULL){
		return true;
	}


	//recursive case..
	bool left=check(root->left);
	bool right=check(root->right);
	int leftmax=checkmax(root->left);
	int rightmin=checkmin(root->right);
	bool rootbst= root->val>leftmax and root->val<rightmin ? true : false;

	return left and right and rootbst;
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
  check(root)? cout<<" BST !":
               cout<<" not BST !";
               cout<<endl;

  

    printInOrder(root);
    cout<<endl;

    return 0;
}
