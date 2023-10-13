#include<bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>>&grid,int m,int n,vector<vector<bool>> &visited,int i,int j){
	//base case..
	if(i==m || j==n || i==-1 || j==-1){
		//outside the grid..
		return 0;
	}
	if(grid[i][j]==0 || visited[i][j]){
		return 0; //not a land.
	}
	visited[i][j]=true;

	//recursive case..
	int area=1;
	int dx[]={1,-1,0,0};
	int dy[]={0,0,1,-1};

	for(int x=0;x<4;x++){
		area+=dfs(grid,m,n,visited,i+dx[x],j+dy[x]);
	}


	return area;

}



int largestIsland(vector<vector<int>> grid,int m,int n){
	// vector<vector<bool>> visited(m,vector<bool>(n,false));
	vector<vector<bool>> visited(m, vector<bool>(n, false));
	int maxarea=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			
			if(grid[i][j]==1 and !visited[i][j]){
				maxarea=max(maxarea,dfs(grid,m,n,visited,i,j));
				//largestIsland area are stored in maxarea ..
			}
		}
	}

	return maxarea;
}

int main() {

	vector<vector<int>> grid = {
		{1, 0, 0, 1, 0},
		{1, 0, 1, 0, 0},
		{0, 0, 1, 0, 1},
		{1, 0, 1, 1, 1},
		{1, 0, 1, 1, 0}
	};

	int m = grid.size();
	int n = grid[0].size();

	cout << largestIsland(grid, m, n) << endl;

	return 0;
}