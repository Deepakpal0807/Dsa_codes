#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;

    customer(string name,int age,char gender,double credits){
        this->name=name;
        this->age=age;
        this->gender=gender;
        this->credits=credits;
    }

    customer(){
        cout<<"I am inside the default construtor of the customer class"<<endl;
    }

};
/* if swap is needed then return false.
if the swap is not needed then return true..*/


bool mycomparitor(customer c1,customer c2){
    // if(c1.credits>c2.credits){
    //     return true;
    //     //if c1.credits is greater then c2.credits then we don't need a swap...

    // }
    // //else swap is needed..
    // return false;
    

    return c1.credits>c2.credits;
}
bool mynamecomparitor(customer c1,customer c2){
    // //is c1.name is greater then c2.name then swap is needed  then return false
    // if(c1.name<c2.name){
    //     return true;
    // }
    // return false;


    return c1.name<c2.name;
}

int main(){
    vector<customer> v;
    v.push_back(customer("Armaan",19,'m',5000));
    v.push_back(customer("Deepak",20,'m',2000));
    v.push_back(customer("Sneha",19,'f',2500));
    v.push_back(customer("Lata",19,'f',1500));


    for(customer c:v){
        cout<<c.name<<" "<<c.age<<" "<<c.gender<<" "<<c.credits<<endl;
    }

    //sorting the vector in the order of dec. credits. so we need to make a comparitor...
    sort(v.begin(),v.end(),mycomparitor);

    cout<<"Vector after sorting according to their credits"<<endl;
    for(auto c:v){
        cout<<c.name<<" "<<c.age<<" "<<c.gender<<" "<<c.credits<<endl;
    }


    //sorting customer based on name in increasing order...
    sort(v.begin(),v.end(),mynamecomparitor);
    cout<<"Sorting vector according to their name in incresing order"<<endl;
    for(auto c:v){
        cout<<c.name<<" "<<c.age<<" "<<c.gender<<" "<<c.credits<<endl;
    }
}