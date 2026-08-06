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

        ListNode* slow = head;
        ListNode* fast = head;

        while( fast != NULL  && fast->next != NULL ){

            fast = fast->next->next;
            slow = slow->next;

        }

        



        ListNode* half = slow;

        slow = slow->next;


        ListNode* prev = NULL;
        ListNode* next;

        while( half != NULL ){

            next = half->next;

            half->next = prev;

            prev = half;
            half = next;


        }

        while( head != slow && prev != NULL ){

            if( head->val == prev->val ){

                head = head->next;
                prev = prev->next;

            }

            else{

                return false;
            }
        }

        return true;







        
    }
};


