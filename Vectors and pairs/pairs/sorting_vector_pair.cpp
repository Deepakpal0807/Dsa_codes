#include<bits/stdc++.h>
using namespace std;
bool mycomparitor(pair<int,char>a,pair<int,char>b){
   if(a.second<b.second){
    // swap are not needed
    return true;
   }
   return false;
}
int main(){
    vector<pair<int,char>>v={
           {3,'a'},
           {1,'b'},
           {2,'c'}
    };
     
     sort(v.begin(),v.end());
	 // by default, a vector of pair is sorted in the
	 // increasing order of first element of the pair

     for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
     }
     cout<<endl;


     //if we want to sort in the dec order then we use a comparitor..
      
      sort(v.begin(),v.end(),mycomparitor);
       // myComparator ensures vector is sorted
	 // is sorted in the increasing order of
	// second element of the pair

      for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
     }
     cout<<endl;


}