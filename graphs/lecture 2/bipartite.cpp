#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
	bool isdirected;
   unordered_map<T,list<T>> mp;

public:
	void addedge(T u,T v){
         mp[u].push_back(v); 
         if(!isdirected){
         	mp[v].push_back(u);
         }
	}

	void print(){
		for(auto x:mp){
			cout<<x.first<<" : ";
			for(auto p: x.second){
				cout<<p<<" ";
			}
			cout<<endl;
		}
	}

	
  

	bool bfs(T u,unordered_map<T,int> &color){
		 queue<T> q;
		 q.push(u);
		 color[u]=0;
		 while(!q.empty()){
		 	T front=q.front();
		 	q.pop();
             auto neighbour=mp[front]; //neighbour list of front
		 	for(auto x: neighbour){ 
		 		if(color.find(x)==color.end()){
		 			//vertices not visited yet..
		 			color[x]=1-color[front];
		 			q.push(x);
		 		}
		 		else{
		 			if(color[x]==color[front]){
		 				return false;
		 			}
		 		}

		 	}
		 }
		 return true;
	}


	bool isbipartite(){
		unordered_map<T,int> color; //store the visit of vertices..
		bool flag=true; //assume that graph is bipartite.

		for(auto x: mp){
			if(color.find(x.first)==color.end()){
				//vertice are not visited yed
				
				if(bfs(x.first,color)==false){
	      return false;
}
			}
		}
		return flag;

	}
	

};
int main(){
	graph<char> g;
	 
	 g.addedge('A', 'B');
	g.addedge('A', 'C');
	g.addedge('B', 'D');
	g.addedge('C', 'E');
	g.addedge('D', 'E');

	 g.isbipartite()?cout<<"Graph is Bipartite!"<<endl:
	                 cout<<"Graph is not Bipartite!"<<endl;

	
}