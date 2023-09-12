#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    char *name;
    int age;
    char gender;
    double credits;
    customer(char n[],int a,char g,double c){
        name=new char[100]; //dynamic array created on heap
        strcpy(name,n);
        age=a;
        gender=g;
        credits=c;
    }


    customer(customer &c){
        name=new char[100]; // new char array for new customer created on heap....
        strcpy(name,c.name);
        age=c.age;
        gender=c.gender;
        credits=c.credits;
    }
    void operator=(customer c){
        name=new char[100];
        strcpy(name,c.name);
        age=c.age;
        gender=c.gender;
       
        credits=c.credits;
    }
    customer(){
        cout<<endl<<"I am inside the parameterised construtor of the customer class"<<endl;
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
    customer c1("Armaan",19,'m',8930427);
    c1.printinfo();

    customer c2=c1; // or customer c2(c1);

      c2.printinfo();

      strcpy(c2.name,"Sneha");
      cout<<c1.name<<" "<<c2.name<<endl; // change the name of customer c2 could not change the name of customer c1 because the name of both c1 and c2 points the alternate dynamic array...


      customer c3;
      c3=c1;
      c3.printinfo();
}