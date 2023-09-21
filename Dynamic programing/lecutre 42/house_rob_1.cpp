#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &v,int size,int i){

	//base case..
	if(i>=size){
		return 0;
	}


	//recursive case..
	int a=v[i]+solve(v,size,i+2);                //rob the ith house...
	int b=solve(v,size,i+1);                     //doesn't rob the ith house..


     int ans=max(a,b);
   
	return ans;

}

int solveTopDown(vector<int>&v,int size,vector<int>&dp,int i){
  //base case..
	if(i>=size){
        return 0;
	}
	//lookups..
	if(dp[i]!=-1){
		return dp[i];
	}

	int a=v[i]+solveTopDown(v,size,dp,i+2);
	int b=solveTopDown(v,size,dp,i+1);

	return dp[i]=max(a,b);
}

int solveBottomUp(vector<int> v){
	int size=v.size();
	vector<int> dp(size+2);  //if we rob the last house then we call the size+2 house so for compute the profit of the last house we make array of size+2
 
   for(int i=size-1;i>=0;i--){

   	   dp[i]=max(v[i]+dp[i+2],dp[i+1]);
   }


   return dp[0];
}
int main(){
	vector<int> v={100,50,400,200,100};
	int size=v.size();
	
	cout<<solve(v,size,0)<<endl;


	vector<int>dp(size,-1);
	cout<<solveTopDown(v,size,dp,0)<<endl;

	cout<<solveBottomUp(v)<<endl;

}