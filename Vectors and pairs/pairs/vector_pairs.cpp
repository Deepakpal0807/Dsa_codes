#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v1;
    //v1 is the vector to store the sequence of interger..

    //declaration of vector of pairss..

    vector<pair<int,int>>v2;
    //v2 is the vector to store the sequence of pair of int and int

    vector<pair<string,string>>v3;
    //v3 is the vector to store the sequence of pair of string and string..

    //initialising a vector of pair..

    //a. using { }

    vector<pair<int,int>>v4={
        {1,2},
        {3,4},
        {5,6}
    };
    for(int i=0;i<v4.size();i++){
        cout<<v4[i].first<<" "<<v4[i].second<<endl;
    }

    //b. using make_pair

    vector<pair<int,int>>v5={
        make_pair(1,2), make_pair(3,4),make_pair(5,6)
    };

    for(int i=0;i<v5.size();i++){
        cout<<v5[i].first<<" "<<v5[i].second<<endl;
    }


    



}