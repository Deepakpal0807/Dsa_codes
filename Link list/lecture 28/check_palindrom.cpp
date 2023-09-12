#include <bits/stdc++.h>
using namespace std;
class listnode
{
public:
    int val;
    listnode *next;

    // parameterised constructor..
    listnode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertionathead(listnode *&head, int val)
{
    listnode *n = new listnode(val);

    n->next = head;

    head = n;
}

void printlinklist(listnode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    return;
}

listnode* mid_point(listnode* head){
    //corner case..
    if(head==NULL){
        //means ll is empty..
        // cout<<"Link list is empty";
        return head;
    }
    listnode* slow=head;
    listnode* fast=head->next;
    while(fast!=NULL and fast->next!=NULL ){
             slow=slow->next;
             fast=fast->next->next;
    }

    return slow;
}
   listnode* reverse_linklist_recursive(listnode* head){
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
           listnode* revtail=head->next;
          listnode* headfromfriend= reverse_linklist_recursive(head->next);
           revtail->next=head;
           head->next=NULL;

           return headfromfriend;


           
    }
    bool checkpalindrom(listnode* head){

        listnode* midpoint=mid_point(head);
        

        listnode* head2=midpoint->next;
        midpoint->next=NULL;
 
    head2=reverse_linklist_recursive(head2);
        while(head!=NULL and head2!=NULL){
            if(head->val!=head2->val){
                return false;
            }
            head=head->next;
            head2=head2->next;
        }

        //loop is over means one or both ll is exhaust so the ll is palindrom..
        return true;
    }

int main(){
     listnode* head=NULL;
        insertionathead(head,10);
        insertionathead(head,20);
        insertionathead(head,30);
        insertionathead(head,30);
        insertionathead(head,20);
        insertionathead(head,10);

    
            printlinklist(head);

    

    checkpalindrom(head)? cout<<"Linklist is palindrom!"<<endl:
    cout<<"Linklist is not palindrom!"<<endl;

}