#include<bits/stdc++.h>
using namespace std;
class creditcard{
    public:
    string cardnumber;
    string bankname;

    creditcard(string cn,string bn){
     cardnumber=cn;
     bankname=bn;
    }
    creditcard(){  // if the parameterised constructor are not made it will give error so to fix this error we use the member intialisation...
        cout<<"I am inside the parameretised constructor of creditcard class"<<endl;
    }
};
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;
    creditcard card;

   customer(string n,int a,char g,double c,string cn,string bn){ // if we not intialise the value of card member than firstly the default construtor is invoked and then value  is copied to the credit card class..
    name=n;
    age=a;
    gender=g;
    credits=c;
    card.cardnumber=cn;
    card.bankname=bn;
   }


   void printinfo(){
  cout<<"Customer information"<<endl;
  cout<<"Name = "<<name<<endl;
  cout<<"Age = "<<age<<endl;
  cout<<"Gender = "<<gender<<endl;
  cout<<"credits = "<<credits<<endl;
  cout<<"Card number  = "<<card.cardnumber<<endl;
  cout<<"Bank name  = "<<card.bankname<<endl;
   }
};
int main(){
      customer c1("Deepak",19,'M',98747302,"123456789101","SBI");
      c1.printinfo();

}