#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &v,int m,int n,int i,int j){
	//base case...
	if(i==m-1 and j==n-1){
		return v[i][j];
	}
	if(i==m || j==n){
		return INT_MAX;
	}


	//recursive case.
	int a=solve(v,m,n,i,j+1); //move right..
	int b=solve(v,m,n,i+1,j); //move down..

	return min(a,b)+v[i][j];
}

int solveTopDown(vector<vector<int>> v,int m,int n,int i,int j,vector<vector<int>> &dp){
	//base case...
	if(i==m-1 and j==n-1){
		 dp[i][j]=v[i][j];
		 return dp[i][j];
	}

	
	if(i==m || j==n){
		return INT_MAX;
	}

	//lookups..
	if(dp[i][j]!=-1){
		return dp[i][j];
	}

	//recursvie calls..

	int a=solveTopDown(v,m,n,i+1,j,dp);
	int b=solveTopDown(v,m,n,i,j+1,dp);

	return dp[i][j]=(min(a,b)+v[i][j]);

}
int solveBottomUp(vector<vector<int>> v){
	int m=v.size();
	int n=v[0].size();

	vector<vector<int>>dp(m,vector<int>(n));

	for(int i=m-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(i==m-1 and j==n-1){
				dp[i][j]=v[i][j];
			}
			else if(i!=m-1 and j==n-1){
				dp[i][j]=v[i][j]+dp[i+1][j];
			}
			else if(i==m-1 and j!=n-1){
				dp[i][j]=v[i][j]+dp[i][j+1];
			}
			else{
				dp[i][j]=v[i][j]+min(dp[i+1][j],dp[i][j+1]);
			}
		}
	}
	return dp[0][0];

}
int main(){
	vector<vector<int>> v={
		{1,3,1},
		{1,5,1},
		{4,2,1}
	};
	int m=v.size();
	int n=v[0].size();
	cout<<solve(v,m,n,0,0)<<endl;


	vector<vector<int>> dp(m,vector<int>(n,-1));
	cout<<solveTopDown(v,m,n,0,0,dp)<<endl;


	cout<<solveBottomUp(v)<<endl;
}