#include<bits/stdc++.h>
using namespace std;
int main(){
    int freq[26]={};
    queue<int> q;
    char ch;
    while(true){
        cin>>ch;
        freq[ch-'a']++;
        if(freq[ch-'a']==1){
           q.push(ch);   //non repeating char...
        }
        while(!q.empty() and freq[q.front()-'a']>1){
             q.pop();    //front element are repeating char.
        }
        if(q.empty()){
            cout<<-1<<" ";
        }
        else{  //freq[q.top()-'a']==1
        //non repeating char are found..
            cout<<q.front()<<" ";

        }
    }
    return 0;
}