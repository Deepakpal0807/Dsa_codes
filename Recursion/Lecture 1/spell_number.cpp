#include<bits/stdc++.h>
using namespace std;
string str[]={"Zero","one","Two","Three","four","five","six","Seven","eight","nine"};
void spellnumber(int a){
    //base case
    if(a==0){
        return ;
    }


    //recursive case..
    int x=a%10;
   spellnumber(a/10);

   cout<<str[x]<<" ";
}

int main(){
    int a;
    cin>>a;

    spellnumber(a);

}





