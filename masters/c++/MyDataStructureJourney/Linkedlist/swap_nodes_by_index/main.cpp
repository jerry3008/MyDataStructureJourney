#include <iostream>
ListNode* swapNodes(ListNode* head, int start, int end) 
{
    ListNode dummynode (0);
    dummynode.next = head;
    ListNode* preStart = &dummynode;
    ListNode* preEnd = &dummynode;
    for(int i = 0; i < start; ++i)
    {
        preStart = preStart -> next;
    }
    for(int i = 0; i < end; ++i)
    {
        preEnd = preEnd -> next;
    }
    ListNode* nodeStart = preStart-> next;
    ListNode* nodeEnd = preEnd-> next;
    ListNode* nodeStartNext = nodeStart->next;
    ListNode* nodeEndNext = nodeEnd->next;
    nodeStart->next =  nodeEndNext; 
    nodeEnd->next = nodeStartNext;
    preStart-> next = nodeEnd;
    preEnd -> next = nodeStart;
    return dummynode.next;
}