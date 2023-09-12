#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;

    
    //if the name of the argument is same as the data member than we use this pointer to assign the value
    customer(string name,int age,char gender,double credits){
        this->name=name;
        this->age=age;
       this->gender=gender;
        this->credits=credits;
    }



    // void printinfo(){
    //       cout<<"Customer information "<<endl;
    //     cout<<" Name = "<<name<<endl;
    //     cout<<" Age = "<<age<<endl;
    //     cout<<" Gender = "<<gender<<endl;
    //     cout<<" credits = "<<credits<<endl;
    //     cout<<endl;
    //     cout<<endl;
    // }

    //by usign this pointer.
    void printinfo(){
          cout<<"Customer information "<<endl;
        cout<<" Name = "<<this->name<<endl;
        cout<<" Age = "<<this->age<<endl;
        cout<<" Gender = "<<(*this).gender<<endl;
        cout<<" credits = "<<this->credits<<endl;
        cout<<endl;
        cout<<endl;
    }
};
int main(){
    customer c1("Deepak",19,'m',4790);
    c1.printinfo();
}