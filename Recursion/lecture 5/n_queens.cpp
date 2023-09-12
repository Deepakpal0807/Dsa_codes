#include<bits/stdc++.h>
using namespace std;
void f(int n,int* pos,int k){
    //base case..
    if(k==n){
        // for(int i=0;i<n;i++){
        //     cout<<pos[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(pos[i]==j){
                    cout<<'Q'<<" ";
                }
                else{
                    cout<<"_ ";
                                    }
            }
            cout<<endl;
        }



        return ;
    }


    //recursive case...
    for(int j=0;j<n;j++){
        bool canplace=true;
        for(int i=0;i<k;i++){
            if(pos[i]==j || pos[i]==j-(k-i) || pos[i]==j+(k-i)){ // col and left diagonal and right diagonal..
                canplace=false;
                break;
            }
        }
        if(canplace){
            pos[k]=j;
            f(n,pos,k+1);

        }
    }
}
int main(){
    int n;
    cin>>n;
    int pos[n];
    f(n,pos,0);
}