#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&v,int n,int i){
	int min_ind=i;
	int leftchild=i*2+1;
	if(leftchild<n and v[leftchild]<v[min_ind]){
		min_ind=leftchild;
	}

	int rightchild=i*2+2;;
	if(rightchild<n and v[rightchild]<v[min_ind]){
		min_ind=rightchild;
	}

	if(min_ind!=i){
		swap(v[i],v[min_ind]);
		heapify(v,n,i);
	}
}
int main(){
	vector<int> v={1,5,6,9,8,7,3,4,2};
	int n=v.size();

//call the heapify function to solve the voilation of min heap property..
	for(int i=n-1;i>=0;i--){
		heapify(v,n,i);
	}

	//after calling the heapify function complete min heap are formed..
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}