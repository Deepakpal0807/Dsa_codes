#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    char *name;
    int age;
    char gender;
    double credits;

     customer(char n[],int a,char g,double c){
        cout<<"I am inside the parameterised constructor of customer class"<<endl;
        name=new char[100];
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;

     }
    

    ~customer(){  //destructor of customer class that are invoke automatically when the main stack frame are closed..
        cout<<"Destructing"<<" "<<name<<endl;
        delete [] name;
    }
      



   
};
int main(){

    customer c1("Armaan",19,'m',34892);
    customer c2("Sneha",19,'f',90487);
    customer c3("Nidhi",20,'f',84970);

  // distruction are occur in opposite order 
  //firstly nidhi second sneha and third armaan was distructed due to function stack frame...
    
}