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
void reverse_linklist_iterative(listnode *&head)
{
    // corner caseeeeeee..
    if (head == NULL)
    {
        // means ll is empty ..
        return;
    }
    if (head->next == NULL)
    {
        // ll has one node .. so no need to reverse the linklist...
        return;
    }

    listnode *prev = NULL;
    listnode *curr = head;

    // 1. my approch..
    listnode *temp = curr->next;

    while (curr->next != NULL)
    {
        temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    head = curr;
    curr->next = prev;
}

void solve(listnode *head)
{
    if (head->val % 2 != 0)
    {

        listnode *prev = head;
        listnode *curr = head->next;
        listnode *temp = head;
        while (curr != NULL)
        {

            if (curr->val % 2 != 0)
            {
                temp->next = curr->next;
                curr->next = prev->next;
                prev->next = curr;
                prev = curr;
                curr = temp->next;
            }
            else
            {
                temp = curr;
                curr = curr->next;
            }
        }
    }

    else
    {
        listnode *prev = head;
        listnode *curr = head->next;
        listnode *temp = head;
        while (curr != NULL)
        {

            if (curr->val % 2 == 0)
            {
                temp->next = curr->next;
                curr->next = prev->next;
                prev->next = curr;
                prev = curr;
                curr = temp->next;
            }
            else
            {
                temp = curr;
                curr = curr->next;
            }
        }
    }
}
int main()
{
    int size;
    cin >> size;
    listnode *head = NULL;
    for (int i = 0; i < size; i++)
    {
        int val;
        cin >> val;
        insertionathead(head, val);
    }
    // printlinklist(head);
    reverse_linklist_iterative(head);
    cout << "Original List: ";
    printlinklist(head);

    solve(head);
    cout << "Modified List: ";
    printlinklist(head);
}