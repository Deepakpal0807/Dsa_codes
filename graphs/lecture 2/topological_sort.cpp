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
    	for(auto x:mp){
          indegree[x.first]=0;
    	}

    	queue<T> q;

    	for(auto x: mp){
    		// cout<<x.first<<" : ";
    		for(T neighbour: x.second){
    			// cout<<neighbour<<" ";
    			indegree[neighbour]++;

    		}
    		// cout<<endl;
    	}
    
    	for(auto x:indegree){
    		if(indegree[x.first]==0){
            
            q.push(x.first);   	
            break;	}
    	}
    	if(q.empty()){
    		cout<<"There are no starting point so there are not an answer !";
    		cout<<endl;
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
    	return ;



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