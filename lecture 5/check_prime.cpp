#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cout<<"Enter an positive interger : ";
    cin>>n;
    // int i=2;
    // while(i<=sqrt(n)){
    //     if(n%i==0){
    //         cout<<"false"<<endl;
    //         return 0;
    //     }
    //     i++;
    // }
    // cout<<" True "<<endl;
    // return 0;


    //using break statement..
    int i=2;
    while(i<=sqrt(n)){
        if(n%i==0){
            cout<<"false"<<endl;
            break;
        }
        i++;
    }
    //agar break statment ki vjah se bhar ayga to i always be lesser than or equal then  to sqrt(n ) and if it doesn't come because of break statment then i is greater than to sqrt(n);
    if(i>=sqrt(n)){
    cout<<" True "<<endl;

    }
    return 0;

}