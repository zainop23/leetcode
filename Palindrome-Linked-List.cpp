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
class Solution {
public:

    ListNode* reverse(ListNode* head){
        if(!head || !head->next) return head;
        ListNode* prev = nullptr;
        while(head){
            ListNode* temp= head->next;
            head->next=prev;
            prev=head;
            head=temp;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newHead= reverse(slow->next);
        ListNode* first = head;
        ListNode* second = newHead;
        while(first && second){
            if(first->val!=second->val) return false;
            first=first->next;
            second=second->next;
        }
        return true;
    }
};