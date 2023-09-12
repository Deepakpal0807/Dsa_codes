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

int maxval(listnode* root){
	//base case..

    if(root==NULL){
        return NULL;
    }
	if(root->right==NULL){
        //right child are not exitst then this node are maximum.
 return root->val;
	}


	 return maxval(root->right); //call the rightmost node  in the rst  and return the node.

}
int main(){
	 listnode* root=NULL;
// root=insertion(root,10);
// root=insertion(root,5);

// root=insertion(root,15);
// root=insertion(root,3);
// root=insertion(root,7);
// root=insertion(root,13);
// root=insertion(root,17);
// root=insertion(root,6);
// root=insertion(root,16);


inorder(root);
cout<<endl;
cout<<maxval(root)<<endl;
}