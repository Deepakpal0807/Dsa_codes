#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;

    customer(string n,int a,char g,double c){
        name=n;
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

};
int main(){
      customer c1("Deepak",19,'m',23489);
      customer *cptr=&c1;
    
    cout<<(*cptr).name<<" "<<cptr->name<<endl;
    cout<<(*cptr).age<<" "<<cptr->age<<endl;
    cout<<(*cptr).gender<<" "<<cptr->gender<<endl;
    cout<<(*cptr).credits<<" "<<cptr->credits<<endl;

  //we can use this address syntax to printinfo..
    (*cptr).printinfo();
    //or
    cptr->printinfo();

     
}