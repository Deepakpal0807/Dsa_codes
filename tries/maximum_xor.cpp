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

	int maximum(int n){
		node* curr = root;
		int XOR = 0;

		for (int i = 31; i >= 0; i--) {

			int ith_bit = (n >> i) & 1;

			if (ith_bit == 0) {

				if (curr->right != NULL) {
					// ith bit of XOR can be set
					XOR += (1 << i); // or pow(2, i)
					curr = curr->right;
				} else {
					// ith bit of XOR cannot be set
					curr = curr->left;
				}

			} else { // ith_bit == 1

				if (curr->left != NULL) {
					// ith bit of XOR can be set
					XOR += (1 << i); // or pow(2, i)
					curr = curr->left;
				} else {
					// ith bit of XOR cannot be set
					curr = curr->right;
				}
			}

		}

		cout << n << "^" << (n ^ XOR) << " = " << XOR << endl;

		return XOR;	}

};

int main(){
	tries t;
	int arr[]={2,4,5,8,10};
	int x=sizeof(arr)/sizeof(int);
	for(int i=0;i<x;i++){
       t.insert(arr[i]);
	}
	int count=0;
	for(int i=0;i<x;i++){
           count=max(count,t.maximum(arr[i]));
	}
	cout<<endl<< count<<endl;;

}