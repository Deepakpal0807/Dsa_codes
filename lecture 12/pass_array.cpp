#include<bits/stdc++.h>
using namespace std;
// if array is pass into the function then the array is pass by refrence so if we can change the value of array in function the change would reflect in the main function also..

void sum_of_array(int arr[],int size){
    for(int i=0;i<size;i++){
       ++arr[i];
    }
    return ;

}
int main(){

int a;
cin>>a;
int arr[a];
for(int i=0;i<a;i++){
    cin>>arr[a];
}
sum_of_array(arr,a);
for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
}


}