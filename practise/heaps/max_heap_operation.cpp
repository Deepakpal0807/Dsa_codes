#include<bits/stdc++.h>
using namespace std;
class minheap{
	vector<int> v;
	void heapify(int i){
		int min_ind=i;
		//compare the rootval and left child val and rightchild val and swap the rootval with minimum val..

		//compare the value of root with the left child..
		int leftchild=2*i+1;
		if( leftchild<v.size() and v[min_ind]<v[leftchild]){

			min_ind=leftchild;
		}


      //compare the value of min_ind with the right child of the root.
		int rightchild=2*i+2;
		if(rightchild<v.size() and v[min_ind]<v[rightchild]){
			min_ind=rightchild;
		}


		if(min_ind!=i){ //means swap is needed becuase the heap property is evoluted on the root.
			swap(v[i],v[min_ind]);
			heapify(min_ind);
 
		}
	}

public:	

	 void push(int val){
         v.push_back(val);
         int childidx=v.size()-1;
         int parentind=(childidx-1)/2;
         while(childidx==0 and v[childidx]>v[parentind]){ //childnode value is smaller then the parent node value then swap the value of childnode with the parent node until all node will not satify the property of min heap.
         	swap(v[childidx],v[parentind]);
         	childidx=parentind;
         	parentind=(childidx-1)/2;
         	
         }

	}

	void pop(){//we want to delete the root element..
		 swap(v[v.size()-1],v[0]);
		 v.pop_back(); //remove the last element of the vector means the smallest element of the min heap..
		 heapify(0);
	}

	int top(){
		return v.front();
	}

	int size(){
		return v.size();
	}

	bool empty(){
		return v.empty(); //v.size()==0
	}


};
int main(){
	minheap m;
   m.push(9);
   m.push(7);
   m.push(8);

m.push(5);

m.push(4);
m.push(6);
m.push(3);
m.push(2);
m.push(1);

while(!m.empty()){
	cout<<m.top()<<" ";
	m.pop();
}
cout<<endl;
cout<<m.size()<<endl;



}