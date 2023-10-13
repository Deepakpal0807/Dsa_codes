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

    void topologicalSort(){
    	
      unordered_map<T,int> indegree;
      queue<T> q;
      for(auto x: mp){
      	for(auto p: x.second){
           indegree[p]++;
      	}
      }
     //staring point 

      for(auto x: mp){
      	if(indegree.find(x.first)==indegree.end()){
      		q.push(x.first);
      	 }
      	}
      	if(q.empty()){
      		cout<<"there is no starting point!"<<endl;
      		return ;
      	}

      	while(!q.empty()){
    		T front=q.front();
    		q.pop();
    		cout<<front<<" ";
    		for (T neighbor : mp[front]) {
    indegree[neighbor]--;
    if (indegree[neighbor] == 0) {
        q.push(neighbor);
    }
}
    	}
    	cout<<endl;


    }
};
int main() {

	graph<char> g;
   g.addEdge('I','B');
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