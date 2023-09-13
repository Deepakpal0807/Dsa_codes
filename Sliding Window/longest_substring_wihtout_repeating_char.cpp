#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="abcabcabc";
	int size=s.size();
	
	unordered_map<char,int> mp;
	int maxlen=0;

	int i=0;
	int j=0;
	while(j<size){
       //add the jth char in the window...
		char c=s[j];
		mp[c]++;
		
	     if(mp[c]>1){
			//duplicate char are included...
		while(mp[c]>1){
			mp[s[i]]--;
			i++;
		}

		}

		maxlen=max(maxlen,j-i+1);
		j++;
		}
		cout<<maxlen<<endl;

		



			}
