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

    listnode* getnode(listnode* head,int i){
        
         // if the i>size of linklist then we check head->next!=NULL and insert the node at tha last means at tail...
            while(head->next!=NULL and i--){ 
               
                head=head->next;
                
            }
            return head;
    }



    void insertionatindex(listnode* &head,int val,int i){
        if(i==0){
            // insertionathead(head,val); 
            // or
            listnode* n=new listnode(val);
            n->next=head;
            head=n;
            

            return ;
        }
        if(head==NULL){

            //means ll is empty..
            head=new listnode(val);
            return ;
        }
        listnode* n=new listnode(val);
        
        //give the address of i-1 node 
        listnode* prev=getnode(head,i-1);

         n->next=prev->next;

         prev->next=n;

    }
    void printlinklist(listnode* head){
        while(head!=NULL){
            cout<<head->val<<" ";
            head=head->next;
        }
        cout<<endl;
        return ;

    }

int main(){
    listnode* head=NULL;
    insertionathead(head,50);
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,10);


    insertionatindex(head,25,0);  //indexing start from 0 ... like an array..

    printlinklist(head);

 
    

}