#include<bits/stdc++.h>
using namespace std;
//Time: O(2^n)
//space: O(n) //due to fn call stack.
int fibo(int a){
	//base case..
	if(a==0 || a==1){
		return a;
	}

	//base case..
     return fibo(a-1)+fibo(a-2);
}

 //time: n+n-1 : O(n)
//space: n+n+1 : O(n) //due to fn stack and dp vector..
int fiboTopDown(int a,vector<int> &dp){
	//base case..
	if(a==0 || a==1){
		return a;
	}

	//lookup
	if(dp[a]!=-1){
		//this problem is solved earlier..
		return dp[a];
	}


	//recusive case..
     int ans=fiboTopDown(a-1,dp)+fiboTopDown(a-2,dp);
     return dp[a]=ans;

}


//Time: O(n)
//space: O(n) //due to dp vector.
int fiboBottomup(int a){
	//create a dp vector of size a+1
	vector<int> dp1(a+1);
	dp1[0]=0;
	dp1[1]=1;
	//compute the vector..
	for(int i=2;i<=a;i++){
         dp1[i]=dp1[i-1]+dp1[i-2];
	}
   
	return dp1[a];
}

//time: O(n)
//space: O(1) 
int fiboBottomupoptimsed(int n){
	if(n==1 || n==0){
		return n;
	}
	int a=0;
	int b=1;
	int i=2;
	int c;
	while(i<=n){
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return c;
}
int main(){
	int a=7;
	// cin>>a;
	vector<int> dp(7+1,-1);
	cout<<fibo(a)<<endl;
	cout<<fiboTopDown(a,dp)<<endl;
	cout<<fiboBottomup(a)<<endl;
	cout<<fiboBottomupoptimsed(a)<<endl;

}