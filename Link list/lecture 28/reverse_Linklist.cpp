#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:

          int val;
          ListNode *next;

    //parameterised constructor..
    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertionathead(ListNode* &head,int val){  
            ListNode* n=new ListNode(val);
      
            n->next=head;
       
            head=n;
    }


    void printlinklist(ListNode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
      

        return ;
    }
    void reverse_linklist_iterative(ListNode* &head){
        //corner caseeeeeee..
        if(head==NULL){
            //means ll is empty ..
            return ;
        }
        if(head->next==NULL){
            //ll has one node .. so no need to reverse the linklist...
            return ;
        }


        ListNode* prev=NULL;
        ListNode* curr=head;

        //1. my approch..
        ListNode* temp=curr->next;

        while(curr->next!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            

        }
        head=curr;
        curr->next=prev;
    }

           ListNode* reverse_linklist_recursive(ListNode* head){
           //base case..
           if(head==NULL){
               //ll is empty..
               return  head;
           }
           if(head->next==NULL){
            //ll has one node so no need to reverse the linklist..
            return head;
           }


           //recursive case..
           ListNode* revtail=head->next;
          ListNode* headfromfriend= reverse_linklist_recursive(head->next);
           revtail->next=head;
           head->next=NULL;

           return headfromfriend;
         
    }

int main(){
    ListNode* head=NULL;
    insertionathead(head,50);
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,10);

    printlinklist(head);

    reverse_linklist_iterative(head);

    printlinklist(head);

   head= reverse_linklist_recursive(head);
    
    printlinklist(head);
}