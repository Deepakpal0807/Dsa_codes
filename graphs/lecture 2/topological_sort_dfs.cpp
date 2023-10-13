#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
public:
	T u;
    T v;
    unordered_map<T,list<T>> mp;
    //graph is directed..

     void addEdge(T u,T v){
    	mp[u].push_back(v);
    }
     
     void dfs(T s, unordered_set<T> & visited,vector<T> &ans){
     	visited.insert(s);
     	list<T> neighbourList=mp[s];
     	for(T x: neighbourList){
     		if(visited.find(x)==visited.end()){
     			 dfs(x,visited,ans);
     		}
     	}
     	ans.push_back(s);

     }
    void topologicalSort(){
    	
      // unordered_map<T,int> indegree;
      vector<T> ans;
      unordered_set<T> visited;

     //  for(auto x: mp){
     //  	for(auto p: x.second){
     //       indegree[p]++;
     //  	}
     //  }
     // //staring point 

      // for(auto x: mp){
      // 	if(indegree.find(x.first)==indegree.end()){
      // 		dfs(x.first,visited,ans);
      // 	 }
      // 	}

      //if we do topological sort with the help of dfs then we start from any vertices with any indegree value..
         for(auto x: mp){
         	if(visited.find(x.first)==visited.end()){
         		dfs(x.first,visited,ans);
         	}
         }
      	
      	reverse(ans.begin(),ans.end());
      	for(T x: ans){
      		cout<<x<<" ";
      	}
      	cout<<endl;

  
    }
};
int main() {

	graph<char> g;
  
	g.addEdge('A', 'B');

	g.addEdge('A', 'C');
	g.addEdge('A', 'D');
	g.addEdge('B', 'D');
	g.addEdge('B', 'E');
	g.addEdge('D', 'C');
	g.addEdge('D', 'E');
	g.addEdge('D', 'F');
	g.addEdge('D', 'G');
	g.addEdge('D', 'H');
	g.addEdge('E', 'G');
	g.addEdge('F', 'C');
	g.addEdge('G', 'H');
	g.addEdge('H', 'F');

	g.topologicalSort();

	return 0;
}