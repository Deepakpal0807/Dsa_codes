#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
	unordered_map<T,list<T>> mp;
	bool isdirected;
public:

	graph(bool isdirected=false){
		this->isdirected=isdirected;
	}

	void addEdge(T u,T v){
		mp[u].push_back(v);
		if(!isdirected){
			mp[v].push_back(u);
		}
	}

	void print(){
		for(pair<T,list<T>> x:mp){
			cout<<x.first<<" : ";
			for(T p: x.second){
				cout<<p<<" ";
			}
			cout<<endl;
		}
	}
	 void dfshelper(T u,unordered_set<T> &visited){
             visited.insert(u);
             cout<<u<<" ";

             list<T> neighbour=mp[u];
             for(T x: neighbour){
             	if(visited.find(x)==visited.end()){
             		//vertices are not visited yet
             		dfshelper(x,visited);
             	}
             }
	 }

	void dfs(T src){
         cout<<"dfs : ";
         unordered_set<T> visited; //to store the visited vertices..
         dfshelper(src,visited);
	}
	void bfs(T src){
		cout<<"bfs : ";
		queue<T> q;
		q.push(src);

		unordered_set<T> visited; //store the visited vertices.
		visited.insert(src);


		while(!q.empty()){
           T x=q.front();
           q.pop();
           cout<<x<<" ";
           list<T> neighbour=mp[x];
           for(T p:neighbour ){
           	if(visited.find(p)==visited.end()){
           		q.push(p);
           		visited.insert(p);
           	}
           }

		}
		cout<<endl;
	}

};


int main(){
		graph<char> g;

	g.addEdge('A', 'B');
	g.addEdge('A', 'C');
	g.addEdge('B', 'D');
	g.addEdge('B', 'E');
	g.addEdge('C', 'E');
	g.addEdge('C', 'F');
	g.addEdge('D', 'G');
	g.addEdge('E', 'G');
	g.addEdge('E', 'H');
	g.addEdge('F', 'H');
	g.addEdge('G', 'I');
	g.addEdge('H', 'I');
	// g.print();

	g.dfs('A');
	cout<<endl;
	g.bfs('A');

}