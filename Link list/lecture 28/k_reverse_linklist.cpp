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
listnode* k_reverse(listnode* head,int k){
    //base case..
    if(head==NULL){
        //means ll is empty..
        return head;
    }
    // if(head->next==NULL){// not the neccesary base case it will be handeled by our code..
    //     //ll is one node..
    //     return head;
    // }





    //recursive case...
    listnode* prev=NULL;
    listnode* curr=head;
    int j=0;
     while(curr!=NULL and j<k){
            listnode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            j++;
        }
        
       listnode* headfromfriend=k_reverse(curr,k);
       head->next=headfromfriend;
       return prev;

    }

int main()
{
    listnode *head = NULL;

    // insertionathead(head, 60);
    // insertionathead(head, 50);
    // insertionathead(head, 40);
    // insertionathead(head, 30);
    // insertionathead(head, 20);
    insertionathead(head, 10);

    printlinklist(head);

     int k=4;
     head=k_reverse(head,k);

     printlinklist(head);

}