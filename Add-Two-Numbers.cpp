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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy =new ListNode(0);
        ListNode* temp= dummy;
        int carry=0;
        while(l1 || l2 ){
            int val1=0,val2=0;
            if(l1){ val1=l1->val; l1=l1->next;}
            if(l2){ val2=l2->val; l2=l2->next;}
            int sum = val1+ val2+ carry;
            if(sum>=10){
                carry=1;
                sum %= 10;
            } 
            else carry=0;
            ListNode* newNode = new ListNode(sum);
            temp->next = newNode;
            temp=temp->next;
        }
        if(carry==1){
            ListNode* newNode = new ListNode(1);
            temp->next=newNode;
        }
        return dummy->next;
    }
};