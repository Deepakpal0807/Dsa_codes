#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;

    // parameterised constructor..
    ListNode(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insertionathead(ListNode *&head, int val)
{
    ListNode *n = new ListNode(val);

    n->next = head;

    head = n;
}

void printlinklist(ListNode *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;

    return;
}

ListNode *sum(ListNode *head1, ListNode *head2)
{
    ListNode *head = NULL;

    int carry = 0;
    int reminder = 0;
    while (head1 != NULL and head2 != NULL)
    {
        int sum = head1->val + head2->val+carry;
        reminder = sum % 10;

        insertionathead(head, reminder);
        carry = sum / 10;

        head1 = head1->next;
        head2 = head2->next;
    }

    while (head1 != NULL)
    {
        int sum = (head1->val + carry);
        reminder = sum % 10;
        insertionathead(head, reminder);
        carry = sum / 10;
        head1 = head1->next;
    }
    while (head2 != NULL)
    { // dono me se ekk hi loop chlega;
        int sum = (head2->val + carry);
        reminder = sum % 10;
        insertionathead(head, reminder);
        carry = sum / 10;

        head2 = head2->next;
    }

    // if linklist has same size
    if (carry == 1)
    {
        insertionathead(head, 1);
        carry = 0;
    }

    return head;
}

// ListNode* sum_refactor(ListNode* head1 , ListNode* head2){
//     ListNode* head=NULL;
//     int carry=0;
//     int sum=0;
//     int reminder=0;
//     while(head1!=NULL ||  head2 != NULL || carry=1){
//       int d1=  head1!=NULL ? head1->val : 0;
//       int d2= head2!=NULL ? head2->val : 0;
//       int sum= d1 + d2=carry;
//       reminder=sum%10;
//       insertionathead(head,reminder);
//       carry=sum/10;
//      head1 =  head1!=NULL? head1->next : NULL;
//      head2= head2!=NULL ? head2->next: NULL;
//     }
// }

int main()
{
    ListNode *head1 = NULL;
    insertionathead(head1, 9);
    insertionathead(head1, 9);
    insertionathead(head1, 9);

    ListNode *head2 = NULL;

    insertionathead(head2, 8);
    insertionathead(head2, 8);
    insertionathead(head2, 8);

    printlinklist(head1);
    printlinklist(head2);

    ListNode *head = sum(head1, head2);
    // ListNode* head=sum_refactor(head1,head2);
    printlinklist(head);
}