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



    //total steps: n+(k%n)+(n-k%n) ~ 2n steps...
    listnode* rotate(listnode* head,int k){
        listnode*temp=head;
        int n=0;
        //1.find the size of the linklist..
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        //2. j is the no of rotate node in the linklist...
        int j=k%n;
       
       //3. find the (k-1)th node using slow and fast pointer..
        listnode* slow=head;
        listnode* fast=head;

        while(j--){
           
             fast=fast->next;
        }
       
       
        while(fast->next!=NULL){
           
           
            slow=slow->next;
            fast=fast->next;
        }
        //fast is at tail of the linklist
        //slow is at the new tail of the linklist(k-1)th node..
     
        
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        return head;

    }

    int main(){
        listnode* head=NULL;
        insertionathead(head,70);
        insertionathead(head,60);
        insertionathead(head,50);
        insertionathead(head,40);
        insertionathead(head,30);
        insertionathead(head,20);
        insertionathead(head,10);

        printlinklist(head);
        
        int k=14;
        head=rotate(head,k);
        printlinklist(head);
    }