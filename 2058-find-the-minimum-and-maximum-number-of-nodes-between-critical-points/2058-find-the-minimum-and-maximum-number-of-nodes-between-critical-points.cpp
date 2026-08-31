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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int> crit;

      
        

        ListNode* temp = head->next;
        ListNode* prev = head;

        int idx = 1;
        

        while( temp != NULL && temp->next != NULL ){

            if( prev->val > temp->val && temp->next->val > temp->val ){

                crit.push_back( idx );
            }

            if( prev->val < temp->val && temp->next->val < temp->val ){

                crit.push_back( idx );
            }


            prev = temp;


            temp = temp->next;

            idx++;
            


        }

        vector<int> ans;

        if( crit.size() < 2 ){

            return {-1,-1};

        }

        int minimum = INT_MAX;

        for( int i = 0 ; i < crit.size()-1 ; i++ ){

            minimum = min( minimum , abs( crit[i] - crit[i+1] ));



        }

        ans.push_back( minimum );

        ans.push_back( crit.back() - crit.front() );


        return ans;

        



        
    }
};