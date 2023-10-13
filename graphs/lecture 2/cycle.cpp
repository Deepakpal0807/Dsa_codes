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
	bool dfs(T source,T parent,unordered_set<T>& visited){
                visited.insert(source);
                list<T> x=mp[source];
                for(auto p: x){
                	if(visited.find(p)==visited.end()){
                		//vertices are not visited first..
                         if(dfs(p,source,visited)){
                         	return true;
                         }
                	}
                	else{
                		if(p!=parent){
                			return true;
                		}
                	}
                }
                return false;
	}

	bool hascycle(){
		unordered_set<T> visited;
		bool flag=false; //assume the graph does'nt have cycle..
		for(auto p: mp){
			if(visited.find(p.first)==visited.end()){
			   if(dfs(p.first,p.first,visited)){
			   	flag=true;
			   	return flag;
			   }
			}
		}
		return flag;
	}
};
int main(){
	graph<char> g;
	g.addedge('A','B');
	g.addedge('A','C');
	// g.addedge('B','C');

	g.addedge('G','H');
	g.addedge('G','I');
	g.addedge('H','I');

	g.hascycle()? cout<<"Cycle found !"<<endl:
	              cout<<"Cycle not found !"<<endl;
}