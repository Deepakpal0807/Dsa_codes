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

        //you've reached to the blocked cell..
    if(i==m || j==n || i==-1 || j==-1){
        //you are outside the maze..
        return ;
    }
    if(i==m-1 and j==n-1){
        //you've reached the destination cell..
        out[i][j]='1';
        print(out,m,n); 
        out[i][j]='0'; //backtracking.   //but for destination cell backtracking is not needed because the destination call is always 1..
        //if one's a path is exist.

        return ;
    }
    if(maze[i][j]=='X'){
        return ;
    }
    


    //recursive case..
    //condition of infinite recursion
    if(out[i][j]=='1'){
        //means you stuck in a infinte cycle..
        //means i,jth cell already the part of the path..
        return;
    }
    //rat move in the right direction 
    out[i][j]='1';
   solve(maze,m,n,i,j+1,out);

   
    //rat move in the down direction...
  solve(maze,m,n,i+1,j,out);

  //move in left direction
  solve(maze,m,n,i,j-1,out);

 //move in upward direction
 solve(maze,m,n,i-1,j,out);

    out[i][j]='0'; //backtracking..
    
    // return right+down;
}
int main(){
   
    // char maze[][10] = {"0X00",
	//                    "00X0",
	//                    "000X",
	//                    "0X00"
	//                   };

	// char out[][10] = {"0000",
	//                    "0000",
	//                    "0000",
	//                    "0000"
	//                   };
    //                   int m=4,n=4;



    char maze[][10] = {"0X00",
	                   "000X",
	                   "X0X0",
	                   "X00X",
	                   "XX00"
	                  };


	char out[][10] = {"0000",
	                   "0000",
	                   "0000",
	                   "0000",
	                   "0000"
	                  };
	int m = 5;
	int n = 4;
   solve(maze,m,n,0,0,out);
;
}