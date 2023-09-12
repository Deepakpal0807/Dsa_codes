ListNode* solve(ListNode* head,int t1, int t2){
    ListNode* temp=head;
    ListNode* prev;
    while(temp->val!=t1){
        prev=temp;
        temp=temp->next;
    }
    ListNode*head1=temp;
    ListNode* tail1=prev;
    while(temp->val!=t2){
        temp=temp->next;
    }
    ListNode* tail2=temp;
    ListNode* head2=tail2->next;
    tail2->next=NULL;
    tail2=head1;
    head1=reverse_linklist_iterative(head1);
    // tail2=gettail(head1);
    tail1->next=head1;
    tail2->next=head2;

    return head;
}
