/**
Intuition: if there are two people
P1: travellling at speed x
P2: travellling at speed x/2

Then :
When P1  covers distance d, P2 covers distance d/2
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head;

        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;

    }
};
