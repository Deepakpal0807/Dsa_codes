#include<bits/stdc++.h>
using namespace std;
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
    listnode* gettail(listnode* head){
    while(head->next!=NULL){
        head=head->next;
    }
    return head;
}
    void insertionattail(listnode* &head,int val){

      if(head==NULL){
        //LL is empty..
         head= new listnode(val);
         return;
      }

    //1.create a new node with the given val on heap
    listnode*n =new listnode(val);

    //2.get hold the pointer of the tail node that are given by the gettail function..
    listnode *tail=gettail(head);

    //3.assign the address of the new node into tail->next..
    tail->next=n;

}

   listnode*  solve(listnode* head){
        set<int> s;
        listnode* temp=head;
        while(temp!=NULL){
            s.insert(temp->val);
            temp=temp->next;
        }

        listnode* head1=NULL;
       for(int x: s){
        insertionattail(head1,x);
       }
       return head1;

    }
int main(){
    listnode* head=NULL;
    insertionathead(head,50);
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,20);
    insertionathead(head,10);
    insertionathead(head,10);

    printlinklist(head);
        head=solve(head);

        printlinklist(head);

}