#include<bits/stdc++.h>
using namespace std;

//time:O(1)    //take constant time because nothing will depent on the sizeo fthe linklist..
class listnode{
    public:

          int val;
          listnode *next;

    //parameterised constructor..
    listnode(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertionathead(listnode* &head,int val){  
            listnode* n=new listnode(val);
      
            n->next=head;
       
            head=n;
    }


    void printlinklist(listnode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;

        return ;
    }
    


    //deletion at head...
    void deletionathead(listnode* &head){ //if we pass head by value then we want to access the that memory that are deleted and it give us run time error..
            if(head==NULL){   //corner case...
              return ;
                }
        //make a temperary node to store the address of first head..
        listnode* temp=head;
        //shift the head to next node 
        head=head->next;
        //delete the first node point by temp pointer...
        delete temp;
    }
int main(){
    listnode* head=NULL;
    insertionathead(head,50);
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,10);

    printlinklist(head);

    deletionathead(head);
    printlinklist(head);
    
}