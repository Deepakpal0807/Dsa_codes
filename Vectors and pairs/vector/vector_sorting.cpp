#include<bits/stdc++.h>
using namespace std;

bool mygreatercomparitor(int a,int b){
 return a>b;
 //if a>b then no swap nedded so return true else return false..
}
bool mylesscomparitor(int a,int b){
    return b>a;
    //if a>b then swap is required so return false else return true..
}
int main(){
    vector<int> v={1,2,3,4,5};
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    reverse(v.begin(),v.end());

    cout<<"After reverse : "<<endl;

    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


 cout<<endl<<endl<<endl;
    // sorting vector..
    vector<int> a={1,5,3,2,6,9};
    size=a.size();
    cout<<"Before sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<"After sorting"<<endl;
    sort(a.begin(),a.end());
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;


//    ------------------------------------------- //sorting in reverse order..
    //1.using rbegin() and rend();

    sort(a.rbegin(),a.rend());
    cout<<"Sorting in reverse order ...."<<endl;
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;


    //2. using inbuilt comparitors..
    cout<<"Sorting in reverse order using inbuilt comparitor..."<<endl;
      sort(a.begin(),a.end(),greater<int>()); //same less<int>() for inc order
      for(int x:a){
        cout<<x<<" ";
      }
      cout<<endl;


      //3.using custom comparitor...
      cout<<"Sorting in reverse order using custom comparitor..."<<endl;
      sort(a.begin(),a.end(),mygreatercomparitor);
      for(int x:a){
        cout<<x<<" ";
      }
      cout<<endl;


      //4. using custom comparitor for sort in inc order..
      
      cout<<"Sorting in reverse order using custom comparitor..."<<endl;
      sort(a.begin(),a.end(),mylesscomparitor);
   for(int x:a){
    cout<<x<<" ";
   }
   cout<<endl;
}