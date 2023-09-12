#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    char *name;
    int age;
    char gender;
    double credits;


customer(){
        cout<<"I am inside the parameterised constructor"<<endl;
    }
    
      customer(char *n,int a,char g, double c){
        name=new char[100];  //char array on heap..
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;
      }

   



    void printinfo(){
        cout<<"Customer information "<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
        cout<<"Credits = "<<credits<<endl;
        cout<<endl<<endl;
    }
};
int main(){

   customer c1("Armaan ",19,'M',1000000000);
   c1.printinfo();      

  




}