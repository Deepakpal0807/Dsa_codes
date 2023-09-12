#include<bits/stdc++.h>
using namespace std;
  class customer{
    public:
  char name[100];
    int age;
    char gender;
    double credits;

  };
  void printinfo(customer c){
    cout<<"Name = "<<c.name<<endl;
    cout<<"Age = "<<c.age<<endl;
    cout<<"Gender = "<<c.gender<<endl;
    cout<<"Credits = "<<c.credits<<endl;
  }
int main(){
    customer c1;  //object declaration
    

    //assining value in customer class data member
    // strcpy(c1.name,"Deepak pal");

    // c1.age=19;
    // c1.gender='m';
    // c1.credits=1021012210552426.52;
  
       cin>>c1.name;
       cin>>c1.age>>c1.gender>>c1.credits;


    //print all the information stored in all data members
    // cout<<"Customer information"
    //     <<endl<<"Name = "<<c1.name<<endl<<
    //      "Age = "<<c1.age<<endl<<
    //      "Gender = "<<c1.gender<<endl<<
    //      "Credits = "<<c1.credits<<endl;
    printinfo(c1);


         customer c2;
        
        strcpy(c2.name,"Sneha");
        c2.age=19;
        c2.gender='f';
        c2.credits=75775775;


        // cout<<"Customer information"<<endl;
        // cout<<c2.name<<endl;
        // cout<<c2.age<<endl;
        // cout<<c2.gender<<endl;
        // cout<<c2.credits<<endl;


        printinfo(c2);
         



    
}