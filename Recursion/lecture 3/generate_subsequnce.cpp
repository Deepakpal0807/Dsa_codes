//size of inp arr is 
// 0 < n 10

//to print all the subsequence lexographical increasing order we use the set....

#include<bits/stdc++.h>
using namespace std;
set<string>s;
void subsequence(char *in,int i,char *op,int j){
    //base case...
    if(in[i]=='\0'){
        op[j]='\0';
        // cout<<op<<endl;
        s.insert(string(op)); //convert char array into string..
        return;
    }


    //recursive case...
    op[j]=in[i];
    subsequence(in,i+1,op,j+1);//include the char

    //exclude the character..
    subsequence(in,i+1,op,j);
}


int main(){
    char ch[]={"abc"};
    char out[20];
    subsequence(ch,0,out,0);

    for(string sub:s){
        cout<<sub<<endl;
    }
    cout<<endl;
}