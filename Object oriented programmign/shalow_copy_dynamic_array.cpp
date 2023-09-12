#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    char *name;
    int age;
    char gender;
    double credits;

     customer(char n[],int a,char g,double c){
        name=new char[100];
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;

     }
     customer(){
        cout<<endl<<"I am inside the parameterised construtor of the customer class"<<endl;
     }
     customer(customer &c){
        
        
        name=c.name; //this is called shallow copy
        //if we change the name of c2 it will also effect the name of the c1 because the address of c1 name is passed...
        age=c.age;
        gender=c.gender;
        credits=c.credits; 
     }

       void operator=(customer c){  //copy assigment operator
      
     name=c.name;
        age=c.age;
        gender=c.gender;
        credits=c.credits;
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
};
int main(){

  customer c1("Armaan",19,'m',89742309574);
  c1.printinfo();

  customer c2=c1; //copy construtor...
   c2.printinfo();


  //this is called shalow copy only one dynamic array is generated on the heap..
   strcpy(c2.name,"Sneha goyal");
   cout<<c1.name<<" "<<c2.name<<endl;



   customer c3;
   c3=c1;
   c3.printinfo();

}