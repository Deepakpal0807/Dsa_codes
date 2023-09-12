#include<bits/stdc++.h>
using namespace std;
class customer{
    public:
      string name;
      int age;
      char gender;
      double credits;


      void printcustomerinfo(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
        cout<<credits<<endl;
      }
};
int main(){
 customer c1;
 cin>>c1.name>>c1.age>>c1.gender>>c1.credits;

 c1.printcustomerinfo();
  return 0;
}