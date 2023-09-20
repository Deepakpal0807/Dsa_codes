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
		} 1
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

	//using csum array...
	//Time: O(n^2) 
	//space : O(N)
	int arr[]={25,10,2,8,5,3};
	int size=sizeof(arr)/sizeof(int);
	int cxor[size+1]={0};

	for(int i=1;i<=size;i++){
          //compute the cxor array.
          cxor[i]=cxor[i-1]^arr[i-1];
	}



    //approch 2: 
    //Time: O(n^2)
    //space:O(n) due to cxor array..


	// int maxxor=0;
	// for(int i=0;i<size;i++){
	// 	for(int j=i;j<size;j++){
    //        maxxor=max(maxxor,cxor[j+1]^cxor[i]);
	// 	}
	// }


	// cout<<endl<<maxxor<<endl;


	//approch 3: using tries..
	// insert teh cxor array in trie..

	tries t;
	for(int i=0;i<=size;i++){
		t.insert(cxor[i]);
	}

	//max xor b.w the pair..
	int maxi=0;
	for(int i=0;i<=size;i++){
		maxi=max(maxi,t.maximum(cxor[i]));
	}
	cout<<maxi<<endl;





}