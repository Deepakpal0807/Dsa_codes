#include<bits/stdc++.h>
using namespace std;

//all the house are in a circle if you rob the first house then you don't rob the last.
//if you rob the last house then you dont rob the first..
int solve(vector<int> &v,int size,int i){

	//base case.
	if(i>=size){
		return 0;
	}


	//recursive case..
	int a=v[i]+solve(v,size,i+2);                //rob the ith house...
	int b=solve(v,size,i+1);                     //doesn't rob the ith house..


     int ans=max(a,b);
   
	return ans;

}


int solveTopDown(vector<int>&v,int size,int i,vector<int>&dp){
	//base case..
	if(i>=size){
		return 0;
	}

	//lookups
	if(dp[i]!=-1){
		return dp[i];
	}


	//recursive case..
	int a=v[i]+solveTopDown(v,size,i+2,dp);                //rob the ith house...
	int b=solveTopDown(v,size,i+1,dp);                     //doesn't rob the ith house..


     int ans=max(a,b);
   
	return dp[i]=ans;


}
int solveBottomup(vector<int> v,int size,int j){
	vector<int>dp(size+2);//due to outer bond call

	  for(int i=size-1;i>=j;i--){
	  	dp[i]=max(v[i]+dp[i+2],dp[i+1]);
	  }

	  return dp[j];

}


int main(){
	vector<int> v={100,50,400,200,100};
	int size=v.size();


	  int a=solve(v,size-1,0);
	  int b=solve(v,size,1);

	  cout<<max(a,b)<<endl;



	  //Top Up Dynamic programing..
	  vector<int>dp1(size,-1);
	  a=solveTopDown(v,size-1,0,dp1);
	  vector<int>dp2(size,-1);
	  b=solveTopDown(v,size,1,dp2);
	  cout<<max(a,b)<<endl;




	  //Bottom Up Dynamic programing..
	  
	  a=solveBottomup(v,size-1,0);
	 
	  b=solveBottomup(v,size,1);
	  cout<<max(a,b)<<endl;
	  


}