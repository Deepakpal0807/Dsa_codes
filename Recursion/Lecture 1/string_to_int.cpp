#include<bits/stdc++.h>
using namespace std;
int Print(string str,int size){
    //base case.
    if(str==""){
        return 0;
    }

    //recursive case./
     string substr=str.substr(0,size-1);
     int x=Print(substr, size-1);

     return x*10 + (str[size-1]-'0');
   
}
int main(){
    string a;
    cin>>a;
    int size=a.size();
   cout<< Print(a,size)<<endl;
}













// //built-in function..

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin>>str;
//    int a=stoi(str);
//    cout<<a<<endl;
// }