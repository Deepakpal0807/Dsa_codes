#include<bits/stdc++.h>
using namespace std;
int main(){

	//Time:O(n)
	//space:O(n)

	
	unordered_set<char> s;
	string str="aabbccddaae";
	int length=0;
	int size=str.size();
	for(int i=0;i<size;i++){
		if(s.empty()){
			s.insert(str[i]);
		}
	  else if(s.find(str[i])==s.end()){
	  	//duplicate are not found..
	  	s.insert(str[i]);
	  }
		else{
			//duplicate are found..
			s.erase(str[i]);
			length+=2;

		}
	}
	if(s.empty()){
		//set are empty means length is the answer
		cout<<length<<endl;
	}
	else{
		//set is not empty means the length+1 is the answer
		cout<<length+1<<endl;
        
	}
	
}