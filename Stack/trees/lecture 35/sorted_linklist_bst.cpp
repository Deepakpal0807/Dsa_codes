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
class point{
public:
	listnode* head;
	listnode* tail;
};
point helper(listnode* root){
	point p;
	//base caes..
	if(root==NULL){
         p.head=p.tail=NULL;
         return p;
	}
	//recursive case..
	//make a sorted linklist from the lst. and return the head and tail pointer of it/
	point left=helper(root->left);
	if(left.tail!=NULL){ // lst sub tree are exist.
		left.tail->right=root;
		p.head=left.head;
	}
	else{
		p.head=root;
	}

	point right=helper(root->right);
	if(right.head!=NULL){
		//means rst is exist.
		root->right=right.head;
		p.tail=right.tail;
	}
	else{
		p.tail=root;
	}

	return p;

}
void printlinklist(listnode* root){
	while(root!=NULL){
		cout<<root->val<<" ";
		root=root->right;
	}
	cout<<endl;
}
int main(){
	   listnode* root = new listnode(7);

    root->left = new listnode(3);
    root->left->left = new listnode(1);
    root->left->left->left = new listnode(0);
    root->left->left->right = new listnode(2);

    root->left->right = new listnode(5);
    root->left->right->left = new listnode(4);
    root->left->right->right = new listnode(6);

    root->right = new listnode(8);
    root->right->right = new listnode(10);
    root->right->right->left = new listnode(9);
    root->right->right->right = new listnode(15);

     point p=helper(root);

     printlinklist(p.head);
}