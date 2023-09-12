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



// listnode* gettail(listnode* head){
//     listnode* temp;
//     while(head!=NULL){
//         temp=head;
//         head=head->next;
//     }
//     return temp;
// }
//or
listnode* gettail(listnode* head){
    while(head->next!=NULL){
        head=head->next;
    }
    return head;
}



//Time:O(n) //due to find the tail pointer
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




void printlinklist(listnode* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}





int main(){
    // listnode* head=new listnode(10);
    listnode* head=NULL;
    
  
    insertionattail(head,20);
    insertionattail(head,30);
    insertionattail(head,40);
    insertionattail(head,50);
    insertionattail(head,60);

    printlinklist(head);

}