#include<bits/stdc++.h>
using namespace std;
//no of path are exits from source cell to destination cell.

int solve(char maze[][10],int m,int n,int i,int j){
    //base case
    if(i==m-1 and j==n-1){

        //you've reached the destination cell..
        
        return 1;
    }
    if(maze[i][j]=='X'){
        //you've reached to the blocked cell..
        return 0;
    }
    if(i==m || j==n){
        //you are outside the maze..
        return 0;
    }


    //recursive case..
    //rat move in the right direction 
   int right= solve(maze,m,n,i,j+1);
   
    //rat move in the left direction...
    int down=solve(maze,m,n,i+1,j);
    
    return right+down;
}
int main(){
    char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0X00"
	                  };
	int m = 4;
	int n = 4;
   int count= solve(maze,m,n,0,0);
   cout<<count<<endl;
}