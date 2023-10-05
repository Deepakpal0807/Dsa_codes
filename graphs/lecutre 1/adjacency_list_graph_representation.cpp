#include<bits/stdc++.h>
using namespace std;
class graph
{
	int v;
	bool isdirected;
	list<int>* arr;

public:
	graph(int v,bool isdirected=false){
		this->v=v;   //no of nodes in the graph
		this->isdirected=isdirected; //graph is directed or not..
		arr=new list<int>[v]; //array of linklist of size v
	}

	void addedge(int x,int y){
          //add y in the x neighbour list
		//add x in the y neighbour list..
		arr[x].push_back(y); // insert y in the x neighbour

		if(!isdirected){
			arr[y].push_back(x); //insert x in y neighbour
		}
		
	}
	void print(){
		for(int i=0;i<v;i++){
			cout<<i<<": ";
			for(int x:arr[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}
	}
	
	
};
int main(){

	graph g(5) ;
	g.addedge(0,1);
	g.addedge(0,2);
	g.addedge(1,3);
	g.addedge(2,3);
	g.addedge(2,4);
	g.addedge(3,4);

	g.print();

}