// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	int arr[]={1,2,2,2,3};
// 	unordered_set<int> s;
// 	unordered_set<int> ans;
// 	int size=sizeof(arr)/sizeof(int);
// 	for(int i=0;i<size;i++){
//         if(s.find(arr[i])!=s.end()){
//         	//means duplicate are found.
//         	ans.insert(arr[i]);
//         }
//         else{
//         	s.insert(arr[i]);
//         }
// 	}
// 	for(int x: ans){
// 		cout<<x<<" ";
// 	}
// 	cout<<endl;
// }



//approch 2nd

#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,0,1,0,2};


	int  size=sizeof(arr)/sizeof(int);
	cout<<size<<" "<<endl;
   for(int i=0;i<size;i++){
   	arr[arr[i]%size]+=size;
   }
   for(int i=0;i<size;i++){
   	cout<<arr[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<size;i++){
      if(arr[i]/size > 1){
      	cout<<arr[i]%size<<" ";
       }

   }
}