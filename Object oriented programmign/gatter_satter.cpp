#include<bits/stdc++.h>
using namespace std;
class customer{
  
   
    char name[100];
    int age;
    char gender;
    double credits;
    public:
    customer(char n[],int a,char g,double c){
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;
    }

    void setage(int a){ // to update the value of private member function..
        age=a;
    }

    int getage(){ // to read the value of private member function..
        return age;
    }
};
int main(){
    customer c1("Armaan",19,'m',7484387854);

    cout<<c1.age<<endl; // we cann't access the age because it is a privater member..
    //so we need to use get and set to read and update the private information...



    cout<<c1.getage()<<endl; //read the value of private date member
    c1.setage(25); //update the value of private data member
    cout<<c1.getage()<<endl;
}

 