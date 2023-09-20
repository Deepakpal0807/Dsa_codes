#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<int> v){
	//base case..
	if(n==0){
		return 0;
	}

	//recursive case..
	int ans=INT_MAX;
	int size=v.size();
	for(int i=0;i<size;i++){
		if(n-v[i]>=0){
			ans=min(ans,solve(n-v[i],v));
		}
	}
    return ans==INT_MAX?INT_MAX:ans+1;
}


//time:n.k ~ O(n)
//space: n+n ~ O(n) //due to fn call stack and dp vector..
int solveTopDown(int n,vector<int>v ,vector<int>& dp){
	//base case..
	if(n==0){
		return 0;
	}
	if(dp[n]!=-1){
		return dp[n];
	}


	//recursive case..
	int ans=INT_MAX;
	int size=v.size();
	for(int i=0;i<size;i++){
		if(n-v[i]>=0){
			ans=min(ans,solve(n-v[i],v));
		}
	}
    return dp[n]=(ans==INT_MAX?INT_MAX:ans+1);
}

//time: O(n.k)
//space: O(n) //due to dp vector..
int solveBottomUp(int a,vector<int>& v){
	int k=v.size();
	vector<int> dp(a+1);
	dp[0]=0;
	for(int i=1;i<=a;i++){
       //compute the minimum for the ith coin
		int ans=INT_MAX;
		for(int j=0;j<k;j++){
			if(i-v[j]>=0){
				ans=min(ans,dp[i-v[j]]);
			}
			dp[i]=ans==INT_MAX?INT_MAX:ans+1;
		}
	}

	return dp[a];


}
int main(){
vector<int> v={2,25,15};
	
	int n=3;
	int ans=solve(n,v);
	ans==INT_MAX?
	cout<<"Change does'not  exitst"<<endl:
	cout<<ans<<endl;


	vector<int> dp(n+1,-1);
	int ans1=solveTopDown(n,v,dp);
		ans1==INT_MAX?
	cout<<"Change does'not  exitst"<<endl:
	cout<<ans1<<endl;

	ans =solveBottomUp(n,v);
	ans==INT_MAX?
	cout<<"Change does'not  exitst"<<endl:
	cout<<ans<<endl;


}