#include<bits/stdc++.h>
using namespace std;
int main(){

    //syntax for declaration of array on heap
    // int *ptr=new int[5]; 
     //array of size 5 should be made in heap memory.

    //intialisation of value in array declare in heap memory.
    int *arr=new int[5]{1,2,3,4,5};


      //given the size of array during intialisation is optional..
    // int *ptr=new int[]{1,2,3,4,5}; 
    //why its not work when the size is not given
 


 //Accessing the element in the heap array   same as the accessing of elemnt of array in stack allocation 
    //   cout<<arr[0]<<" "<<*(arr)<<endl;
    //   cout<<arr[1]<<" "<<*(arr+1)<<endl;
    //   cout<<arr[2]<<" "<<*(arr+2)<<endl;
    //   cout<<arr[3]<<" "<<*(arr+3)<<endl;
    //   cout<<arr[4]<<" "<<*(arr+4)<<endl;
    

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<*(arr+i)<<endl;
    }
    cout<<endl;


    // arithmatics operation are valid for the array on heap
    cout<<*arr<<endl;
    arr++;
    cout<<*arr<<endl;

    
  
    //deallocation of memory...
    delete []arr;

}