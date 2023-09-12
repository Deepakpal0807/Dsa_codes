#include<bits/stdc++.h>
using namespace std;
 class customer{
    public:
      char name[100];
      int age;
      char gender;
      double credits;

      customer(char *n,int a,char g, double c){
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;
      }

      customer (customer &c){
        age=c.age;
        strcpy(name,c.name);
        gender=c.gender;
        credits=c.credits;
      }
      customer(){
        cout<<endl<<"I am inside the paramerterised construtor of customer class"<<endl; 
      }


      void printinfo(){
        cout<<"Customer INformation \n"<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
        cout<<"Credits = "<<credits<<endl;
             }
 };

int main(){
    customer c1("Armaan ",19,'M',2348709);
    c1.printinfo();

    //using copy constructor

    // customer c2=c1;
    //or
    customer c2(c1);
    c2.printinfo();
    


    
}