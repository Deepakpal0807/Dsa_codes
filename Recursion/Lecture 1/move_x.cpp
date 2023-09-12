#include<bits/stdc++.h>
using namespace std;
string move_x(string str){
    //base case
    if(str==""){
        return str;
    }


    //recursive case..
    string substr=str.substr(1);
   string x= move_x(substr);

   if(str[0]=='x'){
    return x+str[0];
   }
   return str[0]+x;

}
int main(){
   string str="aaxbxc";
   cout<<move_x(str)<<endl; 
}