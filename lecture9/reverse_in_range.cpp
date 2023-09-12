    
    #include<iostream>
using namespace std;
int main(){

    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(int);
    

    int i,j;

   cout<<"Enter range : ";
   cin>>i>>j;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    // array is reversed successfully.
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
