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
bool detect_cycle(listnode* head){
    listnode* slow=head;
    listnode* fast=head;
    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            //cycle are present in the given linklist..
            return true;
        }
    }

    return false;
    //cycle are not present...
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

        

        detect_cycle(head)?cout<<"Cycle Found !":
        cout<<"Cycle not Found !";

}