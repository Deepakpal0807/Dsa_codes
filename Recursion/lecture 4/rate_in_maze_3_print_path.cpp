#include<bits/stdc++.h>
using namespace std;
//print path that are exits from source cell to destination cell.

void print(char mat[][10],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void solve(char maze[][10],int m,int n,int i,int j,char out[][10]){
    //base case
    if(i==m-1 and j==n-1){
        //you've reached the destination cell..
        out[i][j]='1';
        print(out,m,n);
        out[i][j]='0'; //backtracking....   
        return ;
    }
    if(maze[i][j]=='X'){
        //you've reached to the blocked cell..
        return ;
    }
    if(i==m || j==n){
        //you are outside the maze..
        return ;
    }


    //recursive case..
    //rat move in the right direction 
    out[i][j]='1';
   solve(maze,m,n,i,j+1,out);

   
    //rat move in the left direction...
  solve(maze,m,n,i+1,j,out);

    out[i][j]='0'; //backtracking..
    
    // return right+down;
}
int main(){
    char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0X00"
	                  };
	int m = 4;
	int n = 4;
    char out[][10]={
        {"0000"},
        {"0000"},
        {"0000"},
        {"0000"}
    };
   solve(maze,m,n,0,0,out);
;
}