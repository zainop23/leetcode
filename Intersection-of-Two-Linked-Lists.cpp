/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // Brute force : store the nodes in a hashmap, and then comppare the common node.
 // Better approach : calculate the lengths of the two LLs, subtract larger by the smaller and then for the larger one, move forward (l2-l1). Then traverse both the LLs together, and return the common node.
 // Optimal approach : when temp1 reaches null, point it to to headB, and when temp2 reaches null point it to headA.
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA= headA;
        ListNode* tempB= headB;
        while(tempA != tempB){
            tempA= tempA->next;
            tempB= tempB->next;
            if(tempA == tempB) return tempA;
            if(tempA == NULL) tempA = headB;
            if(tempB == NULL) tempB = headA;
        }
        return tempA;
    }
};