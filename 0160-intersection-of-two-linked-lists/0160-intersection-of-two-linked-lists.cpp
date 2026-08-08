/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        ListNode* tempA = headA;
        ListNode* tempB = headB;


        unordered_map<ListNode* , int> freq;

        while( tempA != NULL ){


            freq[tempA]++;

            tempA = tempA->next;

        }

        while( tempB != NULL ){


            if( freq[tempB] == 1 ){

                return tempB;
            }

            tempB = tempB->next;
            
        }

        

        return NULL;
        
        
    }
};