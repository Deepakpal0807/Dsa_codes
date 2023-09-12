#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<int,int> duplicates;
	int arr[]={1,2,3,1,2,3,2};
	int size=sizeof(arr)/sizeof(int);
	int k=2;
	for(int i=0;i<size;i++){
		if(duplicates.find(arr[i])==duplicates.end()){
			//means duplicate not present..
			duplicates[arr[i]]=i;
		}
		else{
			//duplicate are present..
			if(abs(i - duplicates[arr[i]])<=k){
				cout<<"true"<<endl;
				return 0;
			}else{
				duplicates[arr[i]]=i;
			}
		}
		
	}
	cout<<"False"<<endl;
	for(pair<int,int> p:duplicates){
		cout<<p.first<<" "<<p.second<<endl;
	}
	return 0;
}