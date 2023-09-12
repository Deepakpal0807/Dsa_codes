#include<bits/stdc++.h>
using namespace std;
int main(){
	unordered_map<string,vector<string>> phonebook;
	phonebook["Armaan"].push_back("9817905254");
	phonebook["Armaan"].push_back("9468002668"); //give us the address of vector inwhich we push back the phone number.

	phonebook["Goru"].push_back("8708763918");
	phonebook["Goru"].push_back("9996170714");

	for(pair<string,vector<string>>temp:phonebook){
		string key=temp.first;
		cout<<key<<" : ";
		vector<string> value=temp.second;
		for(string x: value){
			cout<<x<<" ";
		}
		cout<<endl;
	}
	return 0;
}