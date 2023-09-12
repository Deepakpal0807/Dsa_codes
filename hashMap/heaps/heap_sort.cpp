#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int> &v,int n,int i){
	int min_ind=i;
	int leftchild=i*2+1;
	if(leftchild<n and v[leftchild]>v[min_ind]){
		min_ind=leftchild;
	}

	int rightchild=i*2+2;;
	if(rightchild<n and v[rightchild]>v[min_ind]){
		min_ind=rightchild;
	}

	if(min_ind!=i){
		swap(v[i],v[min_ind]);
		heapify(v,n,i);
	}
}
int main(){
	vector<int> v={20,10,50,40,30};
	int n=v.size();
	//1.create a max heap using the array..

	for(int i=n-1;i>=0;i--){
          heapify(v,n,i);
	}

	//2. make a heap size int variable to track the size of the heap
	int heapsize=n;
	for(int i=0;i<n;i++){
		swap(v[0],v[heapsize-1]);
		heapsize--;
		heapify(v,heapsize,0);
	}
	//time: n+nlogn ~ O(nlogn)
	//space : logn due to heapify function call stack..

	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}