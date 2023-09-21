#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<int> v){
	//base case..
	if(n==0){
		return 0;
	}

	//recursive case..

	//we take to decision to cut the road in ith part...


	int maxi=0;
	for(int j=1;j<=n;j++){
		maxi=max(maxi,v[j-1]+solve(n-j,v));
		
	}

	return maxi;
	
}



//time: n+1. n  ~ O(n^2)
//spcae :(n+1)due to fn call stack +(n+1)due to dp vector..
int solveTopDown(int n,vector<int> v,vector<int>& dp){
	//base case..
	if(n==0){
		return dp[n]=0;
	}

	//lookups..
	if(dp[n]!=-1){
		return dp[n];
	}

	//recursive case..

	//we take to decision to cut the road in ith part...


	int maxi=0;
	for(int j=1;j<=n;j++){
		maxi=max(maxi,v[j-1]+solveTopDown(n-j,v,dp));
		
	}

	return dp[n]=maxi;
	
}

int solveBottomUp(int n,vector<int> v){
	vector<int> dp(n+1);

	dp[0]=0;

	for(int i=1;i<n+1;i++){
		int maxi=-1;
         for(int j=1;j<=i;j++){
         	maxi=max(maxi,v[j-1]+dp[i-j]);
         }
         dp[i]=maxi;
	}
	for(int i=0;i<=n;i++){
		cout<<dp[i]<<" ";
	}
	cout<<endl;
	return dp[n];
}

int main(){
	int n=8;

	vector<int> v={3,5,8,9,10,17,17,20};
	cout<<solve(n,v)<<endl;

	vector<int> dp(n+1,-1);
	cout<<solveTopDown(n,v,dp)<<endl;

	cout<<solveBottomUp(n,v)<<endl;
	

}