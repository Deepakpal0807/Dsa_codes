/*

Given string str of size n, design a recursive algorithm to replace all
occurrences of "pi" with "3.14" in the given string and then print it.

Example :
	Input : inp[] = "pippppiiiipi"
	Output: out[] = "3.14ppp3.14iii3.14"

	Input : inp[] = "pip"
	Output: out[] = "3.14p"

	Input : inp[] = "xpix"
	Output: out[] = "x3.14x"

Constraints :

	1 < n < 10

*/



#include<bits/stdc++.h>
using namespace std;
int replacepi(char *ch,int i){
          
          int j=i+2;
          //finding the index of null
          while(ch[j]!='\0'){
            j++;
          }

          while(j>=i+2){
            ch[j+2]=ch[j];
            j--;
          }
              ch[i]='3';
          ch[i+1]='.';
          ch[i+2]='1';
          ch[i+3]='4';

}
void replace(char *arr,int i){
    //base case...
    if(arr[i]=='\0'){
        return;
    }




    //recursive case..
    int x;
   
    if((arr[i]=='p' and arr[i+1]=='i') || (arr[i]=='P' and arr[i+1]=='I')){
        //replace pi with 3.14
        replacepi(arr,i);
        
    replace(arr,i+4);
    }
    else{
        replace(arr,i+1);
    }
  
}
int main(){
    char arr[20]={"PIPipipi"};
    int size=sizeof(arr)/sizeof(char);
    replace(arr,0);
    cout<<arr<<endl;
}