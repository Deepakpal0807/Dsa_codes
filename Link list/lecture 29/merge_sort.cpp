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
    listnode* getmid(listnode* head){
        listnode* slow=head;
        listnode* fast=head->next;
        while(fast!=NULL and fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
      //after completaion the loop the slow at mid of the linklist..
      return slow;
    }
     listnode* merge(listnode* head1,listnode* head2){
        //base case...
        if(head1==NULL){
            
            return head2;
        }
        if(head2==NULL){
            return head1;
        }

        //recursive case..
        listnode *headfromfriend;
        listnode* head;
        if(head1->val < head2->val){
           head=head1;
           
           headfromfriend= merge(head1->next,head2);
           head->next=headfromfriend;
           return head;



        }
        
        else{
             head=head2;

       headfromfriend= merge(head1,head2->next);
       head->next=headfromfriend;
       return head;
        }

     }


    listnode* mergesort(listnode* head){

        //base case...
        if(head==NULL or head->next==NULL){
            //means the ll is empty or contain only one node so no need to sort
            return head;
        }


        //recursive case..
        
        //1.first,seperate the ll into two equal halfs..
        listnode* mid=getmid(head);
        listnode* head2=mid->next;
        mid->next=NULL;

        //2. recursively sort the two linklist..
                head=mergesort(head);
                head2=mergesort(head2);

        //3. merge the two sorted linklist..
       return  merge(head,head2);

    }


     

     int main(){
        listnode* head=NULL;
        insertionathead(head,50);
        insertionathead(head,30);
        insertionathead(head,10);
        insertionathead(head,40);
        insertionathead(head,20);
        insertionathead(head,60);

        printlinklist(head);

    head= mergesort(head);
    printlinklist(head);


    }