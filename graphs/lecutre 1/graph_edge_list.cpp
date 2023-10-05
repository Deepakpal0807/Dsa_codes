#include<bits/stdc++.h>
using namespace std;
template <typename T>
class edge{
public:
	T u;
	T v;
	int w;

	edge(T u,T v,int w){
		this->u=u;
		this->v=v;
		this->w=w;
	}
};
template <typename T>
class graph{
	set<T> vertices; //store the vertivess. 
	vector<edge<T>> edgelist; //store the relation ..
public:
	void addedge(T u,T v,int w){
		edgelist.push_back(edge<T>(u,v,w));
		vertices.insert(u);
		vertices.insert(v);
	}

	void print(){
		for(edge<T> edge:edgelist){
         cout<<edge.u<<"->"<<edge.v<<" : "<<edge.w<<endl;
		}
	}
	void printset(){
		for(T x: vertices){
			cout<<x<<" ";
		}
		cout<<endl;
	}
};



int main(){
    graph<string> g;
    g.addedge("Deepak","Rohit",9);
    g.addedge("Deepak","Gourav",10);
    g.addedge("Deepak","Sivangi",6);

    g.print();

    g.printset();
}