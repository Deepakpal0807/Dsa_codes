// #include<bits/stdc++.h>
// using namespace std;
// //it would give error because we want to access those variable which is deallocated...

// int *f(){
//     int x=10;
//     return &x;
// }

// int main(){
//     int *ptr=f();
//     cout<<*ptr<<endl;
// }

//now we use the heap memory..

#include<bits/stdc++.h>
using namespace std;

int *f(){
    int *xptr=new int;
    *xptr=100;
    return xptr;
}
int main(){
    int *xptr=f();
    cout<<*xptr<<endl;
}