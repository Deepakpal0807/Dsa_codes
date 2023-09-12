#include<bits/stdc++.h>
using namespace std;
void solve(char *str,int i){
    //base case..
    if(str[i]=='\0'){
        cout<<str<<endl;
        return;
    }

    //recursive case..
    int size=strlen(str);
    //make decision for the ith element which are assignn..
    for(int j=i;j<size;j++){
       
        if(i==j || str[i]!=str[j]){

        swap(str[i],str[j]);
        
 solve(str,i+1);
 

 swap(str[i],str[j]);    //backtracking....
 
        }

    }
}
int main(){
    char str[100];
    cin>>str;
    int size;
    size=sizeof(str);
    solve(str,0);
}