#include<bits/stdc++.h>
using namespace std;
template<typename t>
class  graph
{
	unordered_map<t,list<pair<t,int>>> mp;
	bool isdirected;
public:
	 graph(bool isdirected=false){
	 	this->isdirected=isdirected;
	 }

	void addedge(t u, t v,int weight){
		mp[u].push_back({v,weight});
		if(!isdirected){
			mp[v].push_back({u,weight});
		}
	}
	 void print(){
       for(pair<t,list<pair<t,int>>>x: mp){
       	t key=x.first;
       	cout<<key<<" : ";
       	list<pair<t,int>> neighbour=x.second;
       	for(pair<t,int> temp:neighbour){
       		cout<<"{"<<temp.first<<","<<temp.second<<"}";
       	}
       	cout<<endl;


       	
       	cout<<endl;
       }
	}
	
	
};

int main(){
	// graph<int> g;  //specify the type of generic pointer..

	// g.addedge(1,0);
	// g.addedge(0,2);
	// g.addedge(2,3);
	// g.addedge(1,3);
	// g.addedge(2,4);
	// g.addedge(3,4);

	// g.print();

	graph<string> g;

	g.addedge("Deepak","Goru",100);
	g.addedge("Deepak","Rohit",90);
	g.addedge("Goru","sivani",95);
	g.addedge("Rohit","Sneha",50);
	g.addedge("Deepak","Sneha",1);

	g.print();
	
}