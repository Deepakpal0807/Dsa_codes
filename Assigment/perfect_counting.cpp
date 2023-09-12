#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int target;
        cin>>target;
        int ans=0;
        for(int i=0;i<size;i++){
            if(arr[i]<=target){
                ans++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}