#include<bits/stdc++.h>
using namespace std;
bool canplace(int grid[][9],int n,int i,int j,int d){
    //check for the same row and column..
    for(int x=0;x<n;x++){
        if(grid[i][x]== d || grid[x][j]==d){
            return false;
        }
    }

    //check for the subgrid..

    // starting point of the subgrid my approchh.
    // int sr=0;
    // int temp=0;
    // while(temp<=i){
    // sr=temp;
    //     temp=temp+sqrt(n);
    // }
    // temp=0;
    // int sc=0;
    // while(temp<=j){
    // sc=temp;
    //     temp+=sqrt(n);
    // }

    int rn=sqrt(n);
    int sr=(i/rn)*rn;
    int sc=(j/rn)*rn;
    for(int x=sr;x<sr+sqrt(n);x++){
        for(int y=sc;y<sc+sqrt(n);y++){
            if(grid[x][y]==d){
                return false;
            }
        }
    }
    return true; //same number not found..
}
void solveSudoku(int grid[][9],int n,int i,int j){
    //base case...
    if(i==n){ //all rows are filled corectly..
        for(int ii=0;ii<n;ii++){
            for(int jj=0;jj<n;jj++){
                cout<<grid[ii][jj]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return ;
    }



    //recursive case..
    //one row are completely filled..
    if(j==n){
        solveSudoku(grid,n,i+1,0);
        return ;
    }
    //cell are already filled..
    if(grid[i][j]!=0){
        solveSudoku(grid,n,i,j+1);
        return ;
    }
    //we fill the cell
    
        for(int x=1;x<=9;x++){
            if(canplace(grid,n,i,j,x)){
                grid[i][j]=x;
                solveSudoku(grid,n,i,j+1);
                grid[i][j]=0; //backtracking..
            }
        }
    


}
int main() {

	int n = 9;
	int grid[][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
		{5, 2, 0, 0, 0, 0, 0, 0, 0},
		{0, 8, 7, 0, 0, 0, 0, 3, 1},
		{0, 0, 3, 0, 1, 0, 0, 8, 0},
		{9, 0, 0, 8, 6, 3, 0, 0, 5},
		{0, 5, 0, 0, 9, 0, 6, 0, 0},
		{1, 3, 0, 0, 0, 0, 2, 5, 0},
		{0, 0, 0, 0, 0, 0, 0, 7, 4},
		{0, 0, 5, 2, 0, 6, 3, 0, 0}
	};

	solveSudoku(grid, n, 0, 0);

	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		cout << grid[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// cout << endl;

	return 0;
}