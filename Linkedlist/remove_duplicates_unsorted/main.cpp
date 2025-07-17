#include <unordered_set>

using namespace std;
ListNode* removeDuplicates(ListNode* head) 
{
    unordered_set<int>values;
    ListNode dummy(0);
    dummy.next = head;
    ListNode* prev = &dummy;
    ListNode* current = head;
    while (current) 
    {
        if(values.find(current -> val) != values.end())
        {
            prev -> next = current -> next;
            delete current;
            current = prev -> next;
            
        }else 
        {
            values.insert(current -> val);
            prev = current;
            current = current -> next;
        }
    }
    return dummy.next; // placeholder
}