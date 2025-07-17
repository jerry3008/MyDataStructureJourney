ListNode* rotateRight(ListNode* head, int k) 
{
    ListNode* current = head;
    int length = 0;
    while(current)
    {
        length += 1;
        current = current -> next; 
    }
    k = k % length;
    if(k == 0)
    {
        return head;
    }
    
    current = head;
    while(current -> next)
    {
        current = current -> next; 
    }
    current->next = head;
    ListNode* new_tail = head;
    for(int i = 0; i< length -k -1; ++i)
    {
        new_tail = new_tail -> next;
    }
    ListNode* new_head = new_tail -> next;
    new_tail -> next = nullptr;
    return new_head;
}