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

void mid_point(listnode* head){
    //corner case..
    if(head==NULL){
        //means ll is empty..
        cout<<"Link list is empty";
        return ;
    }
    listnode* slow=head;
    listnode* fast=head->next;
    while(fast!=NULL and fast->next!=NULL ){
             slow=slow->next;
             fast=fast->next->next;
    }

    cout<<slow->val;
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

        mid_point(head);
}