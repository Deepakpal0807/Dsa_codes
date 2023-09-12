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
      customer(){  // if we make a contructor then we also need to make a default construtor becuase the c++ no longer provide the default constructor..
        cout<<endl<<endl<<"I am inside the parameterised constructor that are made by me after decalaring the another constructor"<<endl;
      }

    


      void printcustomerinfo(){
        cout<<"Customer information"<<endl;
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
        cout<<credits<<endl;
      }
};
int main(){
     customer c1("Armaan",19,'M',145245252524);

     c1.printcustomerinfo();
     
     customer c2("Sneha",19,'F',343497832);
     c2.printcustomerinfo();

     customer c3; 
}