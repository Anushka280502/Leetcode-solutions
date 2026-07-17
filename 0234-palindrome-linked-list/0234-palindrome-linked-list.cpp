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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        ListNode* curr;
        ListNode* after=NULL;

        if(head == NULL || head->next == NULL){
            return true;
        }

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;    
        }
        if(fast!=NULL){
            slow=slow->next;
        }
        curr = slow;
        while(curr != NULL){
           after=curr->next;
           curr->next=prev;
           prev=curr;
           curr=after;
        }
        while(prev != NULL){
            if(head->val != prev->val){
                return false;
            }
            head=head->next;
            prev=prev->next;
        }
        return true;

        

        
    }
};