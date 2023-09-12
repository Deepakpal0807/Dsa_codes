#include<bits/stdc++.h>
using namespace std;
void print(priority_queue<int,vector<int>,greater<int>> q){
   while(!q.empty()){
      cout<<q.top()<<" ";
      q.pop();
   }
   cout<<endl;
}
int main(){
   vector<int> v={60,50,10,-1,20,30,-1,40,-1};
   priority_queue<int,vector<int>,greater<int>> q;
   int k=3;
   int n=v.size();
   
   //1.push first k element into the min heap..
   for(int i=0;i<k;i++){
   	q.push(v[i]);
   }

   //2. scan the remaining n-k element and update the mean heap.
   for(int i=k;i<n;i++){
      if(v[i]==-1){
         print(q);
  
  continue;
      }
   	if(v[i]>q.top()){
   		q.pop();
   		q.push(v[i]);
   	}
   }

}