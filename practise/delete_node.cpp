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
void inorder(listnode* root){
	//base case..
    if(root==NULL){
    	return ;
    }

    //recursive case..
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);

    return ;
}
listnode* minval(listnode* root){
	//base case..
	if(root==NULL){
		//tree is empty return NULL;
		return NULL;
	}
	if(root->left==NULL){
 return root;
	}


	 return minval(root->left); //call the leftmost node of the leftsubtree.

}
listnode* maxval(listnode* root){
	//base case..
	if(root==NULL){
		//tree is empty return NULL;
		return NULL;
	}
	if(root->right==NULL){
 return root;
	}


	 return minval(root->right); //call the rightmose  node of the rightsubtree.

}

listnode* deletenode(listnode* root,int key){
	//base case..
	if(root==NULL){
		//tree are empty then return empty tree..
		return root;//or NULL;
	}

	//recursive case...
	if(root->val==key){
		//there are three case.
		//1. deleting node are leaf node..
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			}

	    //2. deleting node contain only one child node..
		else if(root->left==NULL and root->right!=NULL){
			//node contain right child only..
			listnode* temp=root->right;
			delete root;
			return temp;


		}
		else if(root->left!=NULL and root->right==NULL){
			//node contain left child only.
			listnode* temp=root->left;
			delete root;
			return temp;

		}
		//3. deleting node contain both left and right child..
		else{

           // listnode* leftmax=maxval(root->left);
           // swap(root->val,leftmax->val);  //swap the val of the left max and the root node and then delete the leaf node that are swaped so they satisfy the binary search tree condition..
           //  root->left=deletenode(root->left,key);

			listnode* rightmin=minval(root->right);
			swap(root->val,rightmin->val);
			root->right=deletenode(root->right,key);


		}

	}
	else if(root->val<key){
		//key are present in the right subtree..
		root->right=deletenode(root->right,key);
	}
	else{
		//key are present in the left subtree..
		root->left=deletenode(root->left,key);
	}
	return root;
}
int main(){
	 listnode* root=NULL;
root=insertion(root,10);
root=insertion(root,5);

root=insertion(root,15);
root=insertion(root,3);
root=insertion(root,7);
root=insertion(root,13);
root=insertion(root,17);
root=insertion(root,6);
root=insertion(root,9);


inorder(root);
cout<<endl;


root=deletenode(root,3);

inorder(root);

cout<<endl;


root=deletenode(root,5);

inorder(root);


cout<<endl;


root=deletenode(root,10);

inorder(root);
cout<<endl;
cout<<root->val<<endl;
}