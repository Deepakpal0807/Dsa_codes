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
int getsize(listnode* head){
    int n=0;
    while(head!=NULL){
        head=head->next;
        n++;
    }
    return n;
}

listnode* sorting(listnode* head){
    int n=getsize(head);

    int i=1;
    while(i<n){
             int j=0;
             listnode* prev=NULL;
             listnode* curr=head;

        while(j<n-i){
            listnode* temp=curr->next;
            if(curr->val > temp->val){
                //swap curr and temp
                curr->next=temp->next;
                temp->next=curr;
                if(prev==NULL){
                    head=temp;
                }
                else{
                    prev->next=temp;
                }
                prev=temp;
             }

        else{
            prev=curr;
            curr=curr->next;
        }
        j++;
        }
        i++;

    }

    return head;
}

int main(){
    listnode* head=NULL;
    insertionathead(head,10);
    insertionathead(head,20);
    insertionathead(head,30);
    insertionathead(head,40);
    insertionathead(head,50);

printlinklist(head);
     head=sorting(head);

     printlinklist(head);
}