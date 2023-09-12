#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
      string name;
      int age;
      char gender;
      double credits;

      customer(){
        cout<<"I am inside the automatically invoked parameterised customer constructor"<<endl;
      }


      void printcustomerinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
        cout<<credits<<endl;
      }
};
int main(){
    customer c1;
    
}