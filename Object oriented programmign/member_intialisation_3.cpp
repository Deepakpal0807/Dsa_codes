// here we intialise the value of member that are class itself...
#include<bits/stdc++.h>
using namespace std;
class creditcard{
    public:
         string cardnumber;
         string bankname;

         creditcard(string cn, string bn){
            cardnumber=cn;
            bankname=bn;
         }
};
class customer{
    public:
    string name;
    int age;
    char gender;
    double credits;
    creditcard card;

   customer(string n,int a,char g,double c,string cn,string bn):card(cn,bn){
    name=n;
    age=a;
    gender=g;
    credits=c;
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
    customer c1("Deepak",19,'m',84293,"12345678","SBI");
    c1.printinfo();

}