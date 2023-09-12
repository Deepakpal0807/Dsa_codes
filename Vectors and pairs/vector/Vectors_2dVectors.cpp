#include<bits/stdc++.h>
using namespace std;
int main(){
    //syntax of declaration of 2d vector...
    // vector<vector<int>>v;


    // declare a 2d  vector of specific size;
    // vector<vector<int>>v(3,vector<int>(4));
    // here row=3 and each row has 4 coloumn...

    vector<vector<int>>v(3,vector<int>(4,10));
     // here row=3 and each rows has 4 coloum intialise with 10...
 

    //  int rows=v.size();
    //  int columns=v[0].size();

    //  //iteration as same as the 2d array..
    //  for(int i=0;i<rows;i++){
    //     for(int j=0;j<columns;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    //  }
    //  cout<<endl;

    //  //using for each loop/
    //  for(vector<int> x: v){
    //     for(int c : x){
    //         cout<<c<<" ";
    //     }
    //     cout<<endl;
    //  }


     //intialisation of 2d vector..
     vector<vector<int>>x{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
     };

     for(int i=0;i<x.size();i++){
        for(int j=0;j<x[0].size();j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
     }





}