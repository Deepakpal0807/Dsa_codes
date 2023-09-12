#include<iostream>
#include<utility>
using namespace std;
int main(){
    //declaration of pairs..
    pair<int,int>p1;
    pair<string,int>p2;
    pair<string,string>p3;

    //intialising the value in pairs..
    pair<int,int>p4(12,13);
    pair<string,string>p5("Armaan","Sneha");
    pair<string,int>p6("Armaan",19);

    //accessing the element using first and second data members..
    cout<<p4.first<<"   "<<p4.second<<endl;
    cout<<p5.first<<"   "<<p5.second<<endl;
    cout<<p6.first<<"   "<<p6.second<<endl;

    //creating a pair using the make_pair() function 
    pair<string,int>p7=make_pair("sneha",10);
    cout<<p7.first<<" "<<p7.second<<endl;

}