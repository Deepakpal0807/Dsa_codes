#include<bits/stdc++.h>
using namespace std;
bool solve(char maze[][10],int m,int n,int i,int j){
    //base case
    if(i==m-1 and j==n-1){

        //you've reached the destination cell..
        return true;
    }
    if(maze[i][j]=='X'){
        //you've reached to the blocked cell..
        return false;
    }
    if(i==m || j==n){
        //you are outside the maze..
        return false;
    }


    //recursive case..
    //rat move in the right direction 
    bool right= solve(maze,m,n,i,j+1);
    if(right){
        return true;
    }
    //rat move in the left direction...
    bool down=solve(maze,m,n,i+1,j);
    if(down){
        return true;
    }
    return false;
}
int main(){
    char maze[][10] = {"0000",
	                   "00X0",
	                   "000X",
	                   "0XX0"
	                  };
	int m = 4;
	int n = 4;
    solve(maze,m,n,0,0)? cout<<"True":
                         cout<<"False";
                         cout<<endl;
}