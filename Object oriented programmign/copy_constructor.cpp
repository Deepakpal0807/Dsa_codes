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

      customer(){
        // cout<<"I am inside default parameterised constructor"<<endl;
      }
  void printinfo(){
    cout<<"Name = "<<name<<endl;
    cout<<"Age = "<<age<<endl;
    cout<<"Gender = "<<gender<<endl;
    cout<<"Credits = "<<credits<<endl;
  }
  };


int main(){

    customer c1("Armaan",19,'M',1823979);
    c1.printinfo();
   
   //using copy constructor
   customer c2=c1; //or customer c2(c1);
    
    c2.printinfo();

    //using copy assigment operator
    
    customer c3;   //default contructed...
    c3=c1;
    c3.printinfo();


    //if we do any change in c2 or c3 it would no effect the information stored in c1;

    c2.age=10;
    cout<<c1.age<<" "<<c2.age<<endl;
    //here the value of c1.age does'nt change only c2.age is change..

    c3.age=17;
    cout<<c1.age<<" "<<c3.age<<endl;
    //here the value of c1.age does'nt change only c3.age is change..

}