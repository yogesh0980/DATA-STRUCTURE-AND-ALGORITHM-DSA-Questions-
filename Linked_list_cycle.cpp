class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        bool isCycle = false;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                isCycle = true;
                    break;
            }
        }
        if(!isCycle) {
            return NULL;
        }

        // reinitialise slow pointer to head
        slow = head;
         while(slow != fast) {
                slow = slow->next;
                fast = fast->next;
               
                }
            
        return fast;
    }
};