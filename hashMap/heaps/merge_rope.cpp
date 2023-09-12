#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v={4,3,3,5};
	priority_queue<int,vector<int>,greater<int>> minheap(v.begin(),v.end());

	int maxsum=0;
	while(minheap.size()>1){
		int x=minheap.top();
		minheap.pop();
		int y=minheap.top();
		minheap.pop();

		maxsum+=(x+y);
		minheap.push(x+y);
			}

		cout<<maxsum<<endl;
}