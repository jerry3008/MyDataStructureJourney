#include "ListNode.h"
#include <vector>

bool isPalindrome(ListNode* head) 
{
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast && fast->next)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    ListNode* current = slow;
    ListNode* prev = nullptr;
    ListNode* nextNode = nullptr;
    while (current) 
    {
        nextNode = current -> next;
        current->next = prev;
        prev = current;
        current = nextNode;
    }
    ListNode* first = head;
    ListNode* second = prev;
    while(second)
    {
        if(first -> val != second -> val)
        {
            return false;
        }
        first = first -> next;
        second = second -> next;
    }
    
    
    // TODO: implement
    return true;
}