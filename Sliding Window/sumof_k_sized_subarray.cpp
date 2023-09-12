#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,2,7,6,3,5};
    int size=sizeof(arr)/sizeof(int);
    int k=4;
    int i=0; //starting ind of sliding window
    int j=0; //ending ind of sliding window
    int winsum=0;
    int maxsum=0;
    while(j<k){   //k steps
        winsum+=arr[j];
        j++;     
    }
    // for(int i=0;i<=size-k;i++){
    //     maxsum=max(maxsum,winsum);
    //     winsum=winsum-arr[i];
    //     winsum+=arr[j];
    //     j++;
    // }
    maxsum=winsum;
    while(j<size){ //n-k steps..
        winsum-=arr[i];
        winsum+=arr[j];
        j++;
        i++;
        maxsum=max(maxsum,winsum);
    }
    cout<<maxsum<<endl;
}