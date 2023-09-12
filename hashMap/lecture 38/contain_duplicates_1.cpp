#include<bits/stdc++.h>
using namespace std;
int main(){

	  set<int> s;
  int arr[]={1,2,3,4};
   int size=sizeof(arr)/sizeof(int);

	//using set..

  //Time: O(logn)

 
 
  // for(int i=0;i<size;i++){
  // if(s.empty()){
  // 	s.insert(arr[i]);
  // }
  // else if(s.find(arr[i])!=s.end()){
  // 	//duplicate found...
  // 	cout<<"Duplicate found!"<<endl;
  // 	return 0;
  // }
  // }
  // cout<<"Duplicate not found!"<<endl;
  // return 0;



	//using hashmap
	unordered_map<int,int> freq;
	for(int i=0;i<size;i++){
		freq[arr[i]]++;
	}
	for(int i=0;i<size;i++){
		if(freq[arr[i]]>1){
			cout<<"Duplicate found!"<<endl;
			return 0;
		}
	}
	cout<<"Duplicate not found!"<<endl;
	return 0;

}