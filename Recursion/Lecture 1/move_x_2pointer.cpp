#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int size=str.size();
    int i=0;
    int j=0;
    while(j<size){
        if(str[j]!='x'){
            swap(str[i],str[j]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    cout<<str<<endl;
}