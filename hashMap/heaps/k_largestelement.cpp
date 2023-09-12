// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	vector<int> s={10,30,50,40,60,20};
// 	priority_queue<int> n(s.begin(),s.end());

// 	int k=3;
// 	while(k--){
// 		cout<<n.top() <<"   ";
// 		n.pop();
// 	}
// 	cout<<endl;

// }

//approch3. 
#include<bits/stdc++.h>
using namespace std;
int main(){
   vector<int> v={60,30,40,50,10,20};
   priority_queue<int,vector<int>,greater<int>> q;
   int k=3;
   int n=v.size();
   
   //1.push first k element into the min heap..
   for(int i=0;i<k;i++){
   	q.push(v[i]);
   }

   //2. scan the remaining n-k element and update the mean heap.
   for(int i=k;i<n;i++){
   	if(v[i]>q.top()){
   		q.pop();
   		q.push(v[i]);
   	}
   }
  while(!q.empty()){
  	cout<<q.top()<<" ";
  	q.pop();
  }
  cout<<endl;
}