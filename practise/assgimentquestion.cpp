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
void solve(){
	queue<listnode*> q;
	int val;
	cin>>val;
	listnode* root=new listnode(val);
	q.push(root);
	while(!q.empty()){
		listnode* temp=q.front();
	      q.pop();
		  int left;
		  cin>>left;
		  int right;
		  cin>>right;
		  if(left==-1 and right==-1){
			  cout<<temp->val<<" ";
		  }
		  if(left!=-1){
			  temp->left=new listnode(left);
			  q.push(temp->left);
		  }
		  if(right!=-1){
			  temp->right=new listnode(right);
			  q.push(temp->right);
		  }
	}
	cout<<endl;
	return ;
}
int main(){
	solve();
}