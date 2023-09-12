#include<iostream>
using namespace std;
int  increment(int &y){
y++;
return y;

}
int main(){
    int x;
    cin>>x;
    
    cout<<increment(x)<<endl;

    //here if we can change the value of y in function then it will also change the value of x in main function because of refrence variable..
    // it is used in fuctionn and recursion code 
    


}