#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    char name[100];
    int age;
    char gender;
    double credits;
    customer(){
        cout<<"I am inside the parameterised constructor"<<endl;
    }
    
      customer(char *n,int a,char g, double c){
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;
      }
    void operator=(customer c){  // copy assigment operator...  // it can be pass by value or pass by refrence it will always work..
        strcpy(name,c.name);
        age=c.age;
        gender=c.gender;
        credits=c.credits;
    }


    void printinfo(){
        cout<<"Customer information "<<endl;
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<gender<<endl;
        cout<<"Credits = "<<credits<<endl;
    }
};
int main(){
     customer c1("Deepak",19,'M',123243254656475867);
      
      c1.printinfo();


     customer c3;
     c3=c1; //or  c3.operator=(c1);
     c3.printinfo();


}