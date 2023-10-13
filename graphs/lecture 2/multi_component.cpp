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
	void dfs(T u,unordered_set<T> &visited){
		visited.insert(u);
		cout<<u<<" ";
		list<T> neighbour=mp[u];
		for(auto p: neighbour){
			if(visited.find(p)==visited.end()){
				dfs(p,visited);
			}
			
		}
	}
	void printcomponent(){
		unordered_set<T> visited;
		int component=0;
		for(auto p: mp){
			if(visited.find(p.first)==visited.end()){
				cout<<p.first<<" : " ;
                dfs(p.first,visited);
				component++;
				cout<<endl;
			}
		}
		cout<<component<<endl;
	}
       
};
int main(){

	graph<char> g;
	g.addedge('A','C');
	g.addedge('A','D');
	g.addedge('C','F');
	g.addedge('F','D');
	g.addedge('D','B');
	g.addedge('D','G');
	g.addedge('B','E');
	g.addedge('G','E');


	g.addedge('H','J');
	g.addedge('J','I');
	g.addedge('J','K');
	g.addedge('J','L');


	g.addedge('M','N');
	g.addedge('M','O');
    g.addedge('N','P');
    g.addedge('P','O');


		// g.print();
		g.printcomponent();


}