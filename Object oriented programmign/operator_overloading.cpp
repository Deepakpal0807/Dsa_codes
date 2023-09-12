#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
      char name[100];
      int age;
      char gender;
      double credits;

      customer(char* n,int a,char g,double c){
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;
      }

       void printinfo(){
        cout<<"Customer information "<<endl;
        cout<<" Name = "<<name<<endl;
        cout<<" Age = "<<age<<endl;
        cout<<" Gender = "<<gender<<endl;
        cout<<" credits = "<<credits<<endl;
        cout<<endl;
        cout<<endl;
    }
     
     //on the basis of credits...
    //  bool operator>(customer c){ // it can be pass by value of refrence both 
    //        return credits>c.credits;
    //  }

  
     //on the basis of their age..
     bool operator >(customer c){
        return age>c.age;
     }




};
int main(){

    customer c1("Deepak",19,'m',7344798043);
    customer c2("Sneha",20,'f',48932047);


    //on the basis of their credits..

//    if(c1>c2){ //the behaviour of > operator are not defined in class so we made a custom operator class..
//    // here c1.operator>(c2) are called..
//     cout<<c1.name<<" is richer than "<<c2.name<<endl;
//    }
//    else{
//     cout<<c2.name<<" is richer than "<<c1.name<<endl;
//    }

   //on the basis of their age..
   if(c1>c2){
    cout<<c1.name <<" is older than "<<c2.name<<endl;
   }
   else{
    cout<<c2.name<< " is older than "<<c1.name<<endl;
   }


   
}