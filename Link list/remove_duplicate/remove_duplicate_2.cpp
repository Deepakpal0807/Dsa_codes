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

//Time : O(n)  // Space: O(n) //due to function call stack..
listnode* solve(listnode* head){
    //base caes..
    if(head==NULL ){
        return head ;
    }
    if(head->next==NULL){
        return head;
    }

    //recursive case...
    if(head->val != head->next->val){
        listnode* headfromfriend=solve(head->next);
        head->next=headfromfriend;
        return head;
    }
    else{
     while( head->next!=NULL and head->val==head->next->val){
        head=head->next;
     }
     listnode* headfromfriend=solve(head->next);
     
     return headfromfriend;
    }
}

int main(){
    listnode* head=NULL;
    insertionathead(head,10);
    insertionathead(head,10);
    insertionathead(head,10);
    insertionathead(head,10);
    insertionathead(head,10);
    insertionathead(head,10);

    printlinklist(head);

    head=solve(head);
    printlinklist(head);
}