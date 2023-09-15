#include<bits/stdc++.h>
using namespace std;
class node{
public:
	node* left; //show the left pointer store the bit 0
	node* right; //show the right pointer store the bit 1
	node(){
		this->left=NULL;
		this->right=NULL;

	}
};

class tries{
	node* root;
public:
	 tries(){
	 	 root=new node();
	 }

	void insert(int n){
		node* curr=root;

		for(int i=31;i>=0;i--){
			int ith_bit=(n>>i)&1; // 1<<i&n
			if(ith_bit==0){
				//check it has left child or not..
				if(curr->left==NULL){
              //it has no left child..
					curr->left=new node();
				}
				curr=curr->left;
			}
			else{
				//ith_bit is 1;
				if(curr->right==NULL){
					curr->right=new node();
				}
				curr=curr->right;
			}
		}
	}


	bool search(int n){
		node* curr=root;
		for(int i=31;i>=0;i--){
			int ith_bit=(n>>i)&1;
			if(ith_bit==0){
				if(curr->left==NULL){
					return false;;
				}
				curr=curr->left;
			}
			else{
				//ith bit is 1;
				if(curr->right==NULL){
					return false;
				}
				curr=curr->right;
			}
		}
		return true;
	}

};
int main(){
	tries t;
	int arr[]={1,2,5,6,7};
	int x=sizeof(arr)/sizeof(int);
	for(int i=0;i<x;i++){
       t.insert(arr[i]);
	}
	int brr[]={1,2,3,4,5,6,7,8};
	int y=sizeof(brr)/sizeof(int);
	for(int i=0;i<y;i++){
		
	 t.search(brr[i])?cout<<brr[i]<<" is present "<<endl:
	             cout<<brr[i]<<" is absent"<<endl;
	}
\


}