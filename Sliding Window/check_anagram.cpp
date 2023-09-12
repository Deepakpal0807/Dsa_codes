#include<bits/stdc++.h>
using namespace std;
bool compare(int * a,int * b){
    for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    // string s="cbaebabacd";
    // string t="abc";
    string s="xyzxyz";
    string t="xyz";
    int n=s.size();
    int k=t.size();

    int tfreqmap[26]={0};
    for(int i=0;i<k;i++){
        tfreqmap[t[i]-'a']++;

    }
    int i=0; //starting ind of the sliding window
    int j=0;//ending ind of the sliding window
    int count=0;
    int winfreq[26]={0};
    while(j<k){
        winfreq[s[j]-'a']++;
        j++;
    }
    if(compare(tfreqmap,winfreq)){
          count++;
    }

    while(j<n){
        winfreq[s[i]-'a']--;
        i++;
        winfreq[s[j]-'a']++;
        j++;
        if(compare(winfreq,tfreqmap)){
            count++;
        }
    }
    cout<<count<<endl;

    
 
}