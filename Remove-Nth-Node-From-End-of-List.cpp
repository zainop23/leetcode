/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// Brute force : Get the size of the LL, then subtract it by n. Then go to (size - n)th node and delete the next node

//Another way : reverse the LL delete the nth node, reverse it back and return head

//optimal approach: two pointer : use slow and fast pointer. Take fast pointer, move it by n nodes, then move both slow and fast pointers by one node. Stop when fast->next is null. Then delete slow->next;
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow= head;
        ListNode* fast= head;
        for(int i=0; i<n; i++){
            fast=fast->next;
        }
        //important case : when we have to delete head.
        if(fast==NULL){
            head=head->next;
            return head;
        }
        while(fast->next){
            fast=fast->next;
            slow=slow->next;
        }
        
        ListNode* temp = slow->next;
        slow->next= slow->next->next;
        delete temp;
        return head;
    }       
};