#include<bits/stdc++.h>
using namespace std;
int main(){
	// string s="aabacbebebe";
	// int k=3;
	string s="aabaccabbabba";
	int k=2;
	int size=s.size();

	//Time:O(n)
	//Space: O(n) //assume all the char have unique... space complexity is due to the unordered map...
	

	unordered_map<char,int>  mp;
	int count=0; //to store the number of unique character into the window..
	int maxlen=0;
	int i=0;
	int j=0;
	while(j<size){
		//add the element in the window until the property is not voilated..
		char c=s[j];
		
		mp[c]++;
		if(mp[c]==1){
			//means the char is tracked is the unique character..
			count++;

		}

		while(k<count){
           mp[s[i]]--;
           if(mp[s[i]]==0){
           	//means one char are exclude from the string..
           	count--;
           }
           i++;
		}

		if(k==count){
			maxlen=max(maxlen,j-i+1);
		}
		j++;
	}
	cout<<maxlen<<endl;
}