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
// void remove_cycle(listnode* head){
//         listnode* slow=head;
//         listnode* fast=head;
//         listnode* prev=NULL;
//         while(true ){
//             prev=slow;
//             slow=slow->next;
//             fast=fast->next->next;
//             if(fast==slow){
//                 break;
//             }
//         }
//         //loop are over means meeting point are found..
//         slow=head;
//         //move slow and fast both at same speed;
//         while(slow!=fast){
//             prev=fast;
//             fast=fast->next;
//             slow=slow->next;
//         }

//         prev->next=NULL;
// }


void remove_cycle(listnode* head){
    listnode* slow=head;
    listnode* fast=head;
    while(true){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            break;
        }
    }
    //loop is over means, fast and slow are at meeting point..
    slow=head;
    while(slow->next!=fast->next){
        fast=fast->next;
        slow=slow->next;
    }
    //now fast at tail of the linklist..
    fast->next=NULL;
    return ;
}
int main(){

listnode* head=NULL;
        insertionathead(head,60);
        insertionathead(head,50);
        insertionathead(head,40);
        insertionathead(head,30);
        insertionathead(head,20);
        insertionathead(head,10);

        head->next->next->next->next->next->next=head->next;

        
      remove_cycle(head);

      printlinklist(head);

}