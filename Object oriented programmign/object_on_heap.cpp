#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;


    customer(string n,int a,char g,double c){ //parameterised constructor..
        name=n;
        age=a;
        gender=g;
        credits=c;
    }
    customer(){
        cout<<"I am inside the default contructor of the customer class"<<endl;
    }

    void printinfo(){
  cout<<"Customer information"<<endl;
  cout<<"Name = "<<name<<endl;
  cout<<"Age = "<<age<<endl;
  cout<<"Gender = "<<gender<<endl;
  cout<<"credits = "<<credits<<endl;   
    }
};
int main(){
    customer *ptr=new customer;

    customer *ptr1=new customer("Deepak",19,'m',48987430);

    ptr1->printinfo();

    //read value on heap..
    cin>>ptr->name;
    cin>>ptr->age;
    cin>>ptr->gender;
    cin>>ptr->credits;

    ptr->printinfo();


    //assign value on heap
    ptr1->name="Sneha";
    ptr1->age=20;
        ptr1->gender='f';
    ptr1->credits=43556434;
    

    ptr1->printinfo();
   
}