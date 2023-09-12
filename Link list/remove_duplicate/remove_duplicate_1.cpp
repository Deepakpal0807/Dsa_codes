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



//my approch..
// void remove_duplicate(listnode* head){
//      if(head==NULL){
//             return ;
//         }
//        listnode* prev=head;
//  listnode* curr=head->next;
//     while(curr!=NULL ){
//         if(prev!=curr and prev->val==curr->val){
//             curr=curr->next;
//             prev->next=curr;
//             if( curr!=NULL and curr->val!=prev->val){

//             prev=prev->next;
           
//                 curr=curr->next;
           
//             }            
//         }
//         else{
//             curr=curr->next;
//             prev=prev->next;
           
//         }

//     }


// }



//abhishek bhaiya approch..
void remove_duplicate(listnode* head){
    
    if(head==NULL){
        return ;
    }
    listnode* prev=head;
    listnode* curr=head->next;
    while(curr!=NULL){
        if(prev->val !=  curr->val){
              prev->next=curr;
              prev=prev->next;
        }
        curr=curr->next;

    }
    prev->next=NULL;
}

int main(){
    listnode* head=NULL;
    insertionathead(head,40);
    insertionathead(head,30);
    insertionathead(head,30);
    insertionathead(head,20);
    insertionathead(head,10);
    insertionathead(head,10);

    printlinklist(head);
    
    remove_duplicate(head);
    printlinklist(head);
}