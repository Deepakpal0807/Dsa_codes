// #include<iostream>
// using namespace std;
// void even(int a){
//     if(a%2==0){
//         cout<<a<<" is even number "<<endl;
//     }
//     else{
//         cout<<a<<" is odd number"<<endl;
//     }
//     return;
// }
// int main(){
//   int a;
//   cin>>a;
//   even(a);
//   return 0;



// }
#include<iostream>
using namespace std;
bool even(int a){
    if(a%2==0){
        return 1;
    }
       return 0;
    
   
}
int main(){
  int a;
  cin>>a;
//   cout<<even(a)<<endl;
if(even(a)){
    cout<<"true"<<endl;
    return 0;
}
cout<<"false"<<endl;

  return 0;



}