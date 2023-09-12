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
listnode* k_node(listnode* head,int k){
    if(head==NULL){
        return head;
    }
    listnode* slow=head;
    listnode* fast=head;
    while( fast!=NULL and k--){
        fast=fast->next;
    }
    //after complete this loop the distance b/w slow and fast are k .. then move both pointer with same speed
    while(fast!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    return slow;

}
int main(){
       listnode* head=NULL;
        insertionathead(head,60);
        insertionathead(head,50);
        insertionathead(head,40);
        insertionathead(head,30);
        insertionathead(head,20);
        insertionathead(head,10);

        printlinklist(head);
      int k=3;

      listnode* kth_node = k_node(head,k);
      cout<<kth_node->val<<endl;
}