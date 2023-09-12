#include<bits/stdc++.h>
using namespace std;
int dx[]={1,2};
int dy[]={2,1};
vector<int> v;

void solve(int n,int i,int j,vector<string> str){
	//base case..
	if(i==n-1 and j==n-1){
		// at last column..
		for(auto x:str){
			cout<<x;
		}
		cout<<" ";
		
		return;
	}
	if(i==-1 || i>=n || j==-1 || j>=n){
		return ;
	}


	

	//recursive case..
	if(i==0 || j==0 || i==n-1 || j==n-1){
		//here are the move of rock...
		str.push_back("R");
		for(int x=1;x<=n;x++){
			if(x+i>=n || x+j>=n){
				break;
			}
		   string help="{"+to_string(i+x)+'-'+to_string(j)+'}';
		   str.push_back(help);
            solve(n,i+x,j,str);
			str.pop_back();

            help="{"+to_string(i)+'-'+to_string(j+x)+'}';
			str.push_back(help);
			solve(n,i,j+x,str);
			str.pop_back();
			
		}
		str.pop_back();
	}
	if(i==j){//at diagonal there is a turn of bishop.
	   str.push_back("B");
	   for(int x=0;x<n;x++){
		   if(x+i>n || x+j>n){
			   break;
		   }
		   else{
			  string help="{"+to_string(i+x)+'-'+to_string(j+x)+'}';
			  str.push_back(help);
			    solve(n,i+x,j+x,str);
				str.pop_back();

		   }
	   }
	   str.pop_back();
	}

	//here is the turn of the knight.. horse..
	str.push_back("K");
	for(int x=0;x<2;x++){
	string help="{"+to_string(i+dx[x])+'-'+to_string(j+dy[x])+'}';
	str.push_back(help);
       solve(n,i+dx[x],j+dy[x],str);
	   str.pop_back();
	}
	str.pop_back();
}

int main() {
int n;
cin>>n;
vector<string> str;
string help="{0-0} ";
str.push_back(help);
solve(n,0,0,str);
}