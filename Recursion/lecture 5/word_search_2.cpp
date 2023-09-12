#include<bits/stdc++.h>
using namespace std;
bool solve(vector<vector<char>> board,string word,int m,int n,int i,int j,int k){//k store the no of word found..
    //base case...
    if(k==word.size()){
        return true;
    }
    if(i==m || j==n|| i==-1 || j==-1){
        //outside the board..
        return false;
    }
    if(board[i][j]!=word[k]){
        return false;
    }


    //recursive case..
   int dx[]={0,0,-1,1};
   int dy[]={1,-1,0,0};
   board[i][j]='#';
   for(int x=0;x<4;x++){

    if(solve(board,word,m,n,i+dx[x],j+dy[x],k+1)){
        return true;
    }
   }
   board[i][j]=word[k];//backtracking...
   return false;
    
}
bool exist(vector<vector<char>> board,string word){
    int m=board.size();
    int n=board[0].size();
    for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
        if(board[i][j]==word[0]){
           if(solve(board,word,m,n,i,j,0)){
            return true;
           }
        }
       }
    }
    return false;
}

int main() {

	vector<vector<char>> board = {{'A','A','A','A','A','A'},
		{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'},{'A','A','A','A','A','A'}
		
	};

	string word = "AAAAAAAA";

	exist(board, word) ? cout << "true" << endl :
	                          cout << "false" << endl;

	return 0;
}