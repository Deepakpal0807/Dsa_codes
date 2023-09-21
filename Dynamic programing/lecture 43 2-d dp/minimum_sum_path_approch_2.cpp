#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>&v,int i,int j){
	if(i==0 and j==0){
		return v[i][j];
	}
	if(i==-1 || j==-1){
		return INT_MAX;
	}

	//recursive case...
	int x=solve(v,i-1,j); //upside.
	int y=solve(v,i,j-1); //leftside..

	return v[i][j]+min(x,y);
}

//time:O(n*m)

//space:O(n.m) //due to dp + O(n+m)//due to fn call stack.
int solveTopDown(vector<vector<int>>&v,int i,int j,vector<vector<int>>&dp){
	//base case.
	if(i==0 and j==0){
		return dp[i][j]=v[i][j];
	}

	if(i==-1 || j==-1){
		//outside the grid..
		return INT_MAX;
	}

	//lookups..
	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	//recursive call..
	int x=solveTopDown(v,i-1,j,dp);
	int y=solveTopDown(v,i,j-1,dp);

	return dp[i][j]=v[i][j]+min(x,y);
}
int solveBottomUp(vector<vector<int>> v){
	int m=v.size();
	int n=v[0].size();
	vector<vector<int>>dp(m,vector<int>(n));

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0 and j==0){
				dp[i][j]=v[i][j];
			}
			else if(i==0 and j!=0){
               dp[i][j]=v[i][j]+dp[i][j-1];
			}
			else if(j==0 and i!=0){
				dp[i][j]=v[i][j]+dp[i-1][j];
			}
			else{
				dp[i][j]=v[i][j]+min(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	return dp[m-1][n-1];
}
int main(){

	vector<vector<int>> v={
		{1,3,1},
		{1,5,1,},
        {4,2,1}
	};
	int m=v.size();
	int n=v[0].size();

	cout<<solve(v,m-1,n-1)<<endl;


	vector<vector<int>>dp(m,vector<int>(n,-1));
	cout<<solveTopDown(v,m-1,n-1,dp)<<endl;


	cout<<solveBottomUp(v)<<endl;
}