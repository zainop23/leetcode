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
 // slow-fast approach : use slow fast approach to get to the middle(in case of even no of nodes : the 2nd mid). Notice that all the elements to be inserted are coming after the mid(or 2nd mid) 
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* secHead;
        secHead = slow->next;
        slow->next = NULL;
        ListNode* prev= nullptr;
        while(secHead){
        ListNode* temp = secHead->next;
        secHead->next= prev;
        prev=secHead;
        secHead=temp;
        }
        ListNode* temp=head;
        ListNode* secTemp = prev;
        
        while(secTemp){
            ListNode* tmp1= temp->next;
            ListNode* tmp2= secTemp->next;
            temp->next = secTemp;
            secTemp->next = tmp1;

            temp=tmp1;
            secTemp=tmp2;
        }
    }
};