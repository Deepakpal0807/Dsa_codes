#include<bits/stdc++.h>
using namespace std;
void solve(int n,int k,vector<int> &v){
  //base case..
	if(n==0){
		for(int x:v){
			cout<<x<<" ";
		}
		cout<<endl;
		return ;
	}


	//recursive case..
	
	for(int i=1;i<=k;i++){
		if(n-i>=0){
			v.push_back(i);
			solve(n-i,k,v);
			v.pop_back();

		}
	}
	return ;
}
int solve1(int n,int k){
  //base case..
	if(n==0){
		
		return 1;
	}


	//recursive case..
	int count=0;
	for(int i=1;i<=k;i++){
		if(n-i>=0){
			
			count+=solve1(n-i,k);
		

		}
	}
	return count;
}

//time: O(n.k)
//space: n+1 +n+1 ~ O(n)
int solveTopDown(int n,int k,vector<int>& dp){
	//base case...
	if(n==0){
		return dp[0]=1;
	}

	//lookups..
	if(dp[n]!=-1){
		return dp[n];
	}

	//recursive case..
	int count=0;
	for(int i=1;i<=k;i++){
		if(n-i>=0){
          count+=solveTopDown(n-i,k,dp);
		}
	}
	return dp[n]=count;

}


//time: O(n.k)
//space: O(n ) //due to dp vector..
void solveBottomUp(int n,int k){
	vector<int> dp(n+1);
	dp[0]=1;

	for(int i=1;i<=n;i++){
		int ans=0;
		for(int j=1;j<=k;j++){

			if(i-j>=0){
				 ans+=dp[i-j];
			}
		}
		dp[i]=ans;
	}
	cout<<dp[n]<<endl;
}


int solveBottomUptimeoptimised(int n,int k){
	vector<int> dp(n+1);
	dp[0]=1;
	dp[1]=dp[0];

	for(int i=2;i<=k;i++){
		dp[i]=2*dp[i-1];
	}
	for(int i=k+1;i<=n;i++){
     dp[i]=2*dp[i-1] - dp[i-k-1];
	}

	cout<<dp[n]<<endl;
}
int main(){
	int n=4;
	// cin>>n;
	int k=3;
	// cin>>k;
	vector<int> v;
solve(n,k,v);
	cout<<solve1(n,k)<<endl;
	vector<int>dp(n+1,-1);
	cout<<solveTopDown(n,k,dp)<<endl;
	solveBottomUp(n,k);
	solveBottomUptimeoptimised(n,k);
}