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

        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;

        while( temp1 != NULL && temp2 != NULL ){

            int sum = temp1->val + temp2->val + carry;
            int rem = 0;
            

            if( sum > 9 ){

                sum = sum%10;
                rem = 1;

            }

            ListNode* ans = new ListNode(sum);
            tail->next = ans;
            tail = tail->next;

            carry = rem;

            temp1 = temp1->next;
            temp2 = temp2->next;




        }

        while( temp1 != NULL ){

            int sum = temp1->val + carry;
                        int rem = 0;


           if( sum > 9 ){

                sum = sum%10;
                rem = 1;

            }

            ListNode* ans = new ListNode(sum);
            tail->next = ans;
            tail = tail->next;

            carry = rem;

            temp1 = temp1->next;
            

        }


        while( temp2 != NULL ){

            int sum = temp2->val + carry;
                        int rem = 0;


           if( sum > 9 ){

                sum = sum%10;
                rem = 1;

            }

            ListNode* ans = new ListNode(sum);
            tail->next = ans;
            tail = tail->next;

            carry = rem;

            temp1 = temp2->next;
            

        }


        if( carry == 1 ){

            ListNode* lastCarry = new ListNode(1);
            tail->next = lastCarry;

        }

        return dummy->next;
        
    }
};