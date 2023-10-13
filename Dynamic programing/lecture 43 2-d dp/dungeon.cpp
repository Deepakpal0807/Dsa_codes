#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>>&dungeon,int m,int n,int i,int j){
	//base case...
	if(i==m-1 and j==n-1){
		return 1-dungeon[i][j];
	}

	if(i==m || j==n){
		return INT_MAX;
	}


	//recursidungeone case...
	int x=solve(dungeon,m,n,i+1,j);
	int y=solve(dungeon,m,n,i,j+1);

	//     if (dungeon[i][j] == 0) {
    //         return min(x, y);
    //     } else if (dungeon[i][j] < 0) {
    //         return min(x, y) - dungeon[i][j]; // min(x, y) + abs(dungeon[i][j])
    //     } else { // dungeon[i][j] > 0
    //         if (dungeon[i][j] >= min(x, y)) {
    //             return 1;
    //         } else {
    //            return min(x, y) - dungeon[i][j];
    //         }
    //     }

    if(dungeon[i][j]>=min(x,y)){
    	return 1;
    }
    else{
    	return min(x,y)-dungeon[i][j];
    }
}
int main(){
	vector<vector<int>>dungeoni={
		{-2,-3,3},
		{-5,-10,1},
		{10,30,-5}
	};

	int m=dungeon.size();
	int n=dungeon.size();

	cout<<soldungeone(dungeon,m,n,0,0)<<endl;
}