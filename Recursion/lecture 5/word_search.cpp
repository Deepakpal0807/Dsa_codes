#include<bits/stdc++.h>
using namespace std;
  int dx[]={0,0,1,-1};
  int dy[]={1,-1,0,0};
bool solve(vector<vector<char>> board,string word,int m,int n,int i,int j,int k){
  //base case...

  //order of the base case are matter in this question..
  //1. all word in string word are found means k==word.size()..
  if(k==word.size()){
    return true;
  }
  //2. we try to find the word outside the matrix...
  if(i==-1 || i==m || j==-1 || j==n){
    //out-side the matrix..
    return false;
  }
  //3.word does't match to the next word of string word..
  if(board[i][j]!=word[k]){
    //word not match..
    return false;
  }



  //recursive case....
  board[i][j]=='#'; //blokcing...
  for(int x=0;x<4;x++){
   if( solve(board,word,m,n,i+dx[x],j+dy[x],k+1)){
    return true;
   }

  }
  board[i][j]=word[k]; // backtracking... //unblocking.. 
  return false; //try all four direction of board[i][j] but the next same letter are not found...

}
 
 bool exist(vector<vector<char>> board, string word){
    int m=board.size();
    int n=board[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==word[0]){
                if(solve(board,word,m,n,i,j,0)){
                return true;
                } //finding the starting poinnt of the word in board..

            }
        }
    }
    return false;
    
     }
int main() {

	vector<vector<char>> board = {{'A', 'B', 'C', 'E'},
		{'S', 'F', 'C', 'S'},
		{'A', 'D', 'E', 'E'}
	};

	string word = "ABCB";

	exist(board, word) ? cout << "true" << endl :
	                          cout << "false" << endl;

	return 0;
}