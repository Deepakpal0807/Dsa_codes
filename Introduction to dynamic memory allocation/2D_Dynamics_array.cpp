#include<bits/stdc++.h>
using namespace std;

int main(){


    int m;
    cin>>m;  // no of rows.....
    int n;
    cin>>n; //no of coloumns...

    //creating an array on heap
    int **arr=new int*[m];
    for(int i=0;i<5;i++){
        arr[i]=new int[n];
    }


    //reading value in 2d array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
 
   
   //print all the value of 2d array
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";      //or cout<<*(arr[i]+j)<<" ";     //or cout<<*(*(arr+i)+j); 
    }
    cout<<endl;
   }

   //deallocation of memory
  //if we want to deallocate the 2d array we deallocate the all rows one by one
  for(int i=0;i<m;i++){
    delete [] arr[i];
  }


  //delete the pointer array..
  delete []arr;
     

}