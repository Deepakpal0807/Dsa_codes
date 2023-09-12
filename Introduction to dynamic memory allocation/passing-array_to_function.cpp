#include<bits/stdc++.h>
using namespace std;
void printarray(int **arr,int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }
}
void f(int **arr,int m,int n){
    //we can pass the two array that made on heap by using ** pointer notation
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
printarray(arr,m,n);
}

//function for 2d array that create on stack
void printarray1(int (*arr)[4],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void input(int arr[][4],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    printarray1(arr,m,n);
}
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


    f(arr,m,n);



    //creating a 2d array on stack
    int arrr[3][4];
    //passign 2d array to function that create on stack
    input(arr,3,4);
}