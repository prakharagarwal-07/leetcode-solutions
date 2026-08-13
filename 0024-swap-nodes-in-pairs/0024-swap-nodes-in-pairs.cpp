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
    ListNode* swapPairs(ListNode* head) {

        if( head == NULL || head->next == NULL ){

            return head;
        }

        ListNode* slow = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        ListNode* fast = head->next;

        dummy->next = head;

        while( fast != NULL ){

            slow->next = fast->next;
            fast->next = slow;
            prev->next = fast;


            prev = slow;

            if( slow->next != NULL ){
                fast = slow->next->next;
            }

            else{

                fast = NULL;
            }
            slow = slow->next;




        }

        return dummy->next;

        
    }
};