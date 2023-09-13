#include<bits/stdc++.h>
using namespace std;
int freq[26]={0};
bool shrink(){
	for(int i=0;i<26;i++){
		if(freq[i]>1){
			return false; //duplicate char found..
		}
	}
	return true;
}
int main(){
	string s="abcddcbae";
	int size=s.size();
	int count=0;//store the number of unique char in the sliding window...
	
	int maxlen=0;

	int i=0;
	int j=0;
	while(j<size){
       //add the jth char in the window...
		  char c=s[j];
		  freq[c-'a']++;
		  count++;
		  if(freq[c-'a']>1){
		  	//property is voilated..then we need to shrink the window..
		  	while(!shrink()){
		  		freq[s[i]-'a']--;
		  		i++;
		  		count--;
		  	}
		  }
		  maxlen=max(maxlen,j-i+1);
		  j++;
			}
			cout<<maxlen<<endl;
}