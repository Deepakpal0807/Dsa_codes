#include<bits/stdc++.h>
using namespace std;
int ministep(int a){
	//base case..
	if(a==1){
		return 0;
	}

	//recursive case.
	int x=ministep(a-1); //reduce by one..
	int y=INT_MAX;
	int z=INT_MAX;

	if(a%2==0){
		y=ministep(a/2);
	}
	if(a%3==0){
		z=ministep(a/3);
	}

	return 1+min(x,min(y,z));
}


int ministepTopDown(int a,vector<int>& dp){
      //base case..
	if(a==1){
		return dp[1]=0;
	}
	if(dp[a]!=-1){
		return dp[a];
	}

     int x=ministep(a-1); //reduce by one..
	int y=INT_MAX;
	int z=INT_MAX;
	if(a%2==0){
		y=ministep(a/2);
	}
	if(a%3==0){
		z=ministep(a/3);
	}

	


	//recursive case...

	return dp[a]=1+min(x,min(y,z));
}

//time: O(n)
//space: O(n) //due to dp vector..
int ministepBottomUp(int a){
	vector<int> dp(a+1);
	dp[1]=0;//base case..

	for(int i=2;i<a+1;i++){
        //dp[i]=f(i): 1+ min{f(i-1),f(i/2),f(i/3)};

        //for compute the dp[i] .. we have 3 options..
        //reduce the i to i-1
        //reduce the i to i/2
        //reduce the i to i/3

        int x=dp[i-1];
        int y=INT_MAX;
        int z=INT_MAX;

        if(i%2==0){
             y=dp[i/2];
        }
        if(i%3==0){
        	z=dp[i/3];
        }

        dp[i]=1+min({x,y,z});

	}
	return dp[a];

}
int main(){
	int a=2;
    cout<<ministep(a)<<endl;
    vector<int> dp(a+1,-1);
    cout<<ministepTopDown(a,dp)<<endl;
    cout<<ministepBottomUp(a)<<endl;
}