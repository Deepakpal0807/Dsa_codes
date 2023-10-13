

class graph{
public:
	int u;
    int v;
    unordered_map<int,list<int>> mp;
    //graph is directed..
    graph( int n ){
       for(int i=0;i<n;i++){
           mp[i]={};
       }
    }

     void addEdge(int u,int v){
    	mp[u].push_back(v);
    }

    vector<int> topologicalSort(int x){
    	
      unordered_map<int,int> indegree;
      queue<int> q;

      vector<int> ans;
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

      	while(!q.empty()){
    		int front=q.front();
    		q.pop();
    		ans.push_back(front);
    		for (int neighbor : mp[front]) {
    indegree[neighbor]--;
    if (indegree[neighbor] == 0) {
        q.push(neighbor);
    }
}
    	}
    	cout<<endl;

        return ans;
    }
};
class Solution {
public:

    vector<int> findOrder(int numCourses, vector<vector<int>>& x) {
        int m=x.size();
        graph g(numCourses);
        for(int i=0;i<m;i++){
            g.addEdge(x[i][1],x[i][0]);
        }
       vector<int> ans= g.topologicalSort(numCourses);
      return ans.size()==numCourses?ans:vector<int> {};
    }
};