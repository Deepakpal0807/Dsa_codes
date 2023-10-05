#include<bits/stdc++.h>
using namespace std;
template<typename T>
class graph{
    bool isdirected;
    unordered_map<T,list<T>> mp;
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


	void traverse(){
		unordered_set<T> visited;
		int component=0;
		for(pair<T,list<T>> x: mp){
			if(visited.find(x.first)==visited.end()){
				visited.insert(x.first);
				cout<<x.first<<" : ";
               dfshelper(x.first,visited);
               cout<<endl;
               component++;
			}
		}
		cout<<"No of component : "<<component<<endl;

	}
};
int main(){

	graph<char> g;

	g.addEdge('A', 'C');
	g.addEdge('A', 'D');
	g.addEdge('B', 'D');
	g.addEdge('B', 'E');
	g.addEdge('C', 'F');
	g.addEdge('D', 'F');
	g.addEdge('D', 'G');
	g.addEdge('E', 'G');

	g.addEdge('H', 'J');
	g.addEdge('I', 'J');
	g.addEdge('J', 'K');
	g.addEdge('J', 'L');

	g.addEdge('M', 'N');
	g.addEdge('M', 'O');
	g.addEdge('N', 'P');
	g.addEdge('O', 'P');

	g.traverse();
}