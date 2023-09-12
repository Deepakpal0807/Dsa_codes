// 10 10 10 20 20 30 40 50 50 60 60 60
#include<bits/stdc++.h>
using namespace std;
class pairclass{
public:
	int a;
	int b;
	pairclass(int a,int b){
		this->a=a;
		this->b=b;
	}

};
class owncomparitor{
public:
	bool operator()(pairclass a,pairclass b){
		if(b.b>a.b){
			return true;
		}
		else{
			return false;
		}
	}

};
class owncomparitormin{
public:
	bool operator()(pairclass a,pairclass b){
		if(b.b>a.b){
			return true;
		}
		else{
			return false;
		}
	}

};
int main(){
	int arr[]={10,10,10,20,20,30,30,30,30,40,60,60,60};
	int k=3;
	int size=sizeof(arr)/sizeof(int);
	unordered_map<int,int> mp;
	for(int i=0;i<size;i++){
		mp[arr[i]]++;
	}
	//frequency array are build


	//1.using maxheap...
	priority_queue<pairclass,vector<pairclass>,owncomparitor> maxheap;
	for(pair<int,int> p : mp){
		// pairclass x(p.first,p.second);
		
		// maxheap.push(x);
		maxheap.push({p.first,p.second});

	}
	for(int i=0;i<k;i++){
		pairclass ans=maxheap.top();
		cout<<ans.a<<endl;
		maxheap.pop();
	}


} 

