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
    vector<int> nextLargerNodes(ListNode* head) {

        ListNode* temp = head;

        stack<pair<int,int>> s;

        vector<int> ans;

        int idx = 0;

        while( temp != NULL ){


            while( !s.empty() && s.top().first < temp->val ){

                int oldIndex = s.top().second;

                ans[oldIndex] = temp->val;

                s.pop();


            }

            ans.push_back(0);

            s.push({temp->val , idx});
            idx++;

            temp = temp->next;
        }

        return ans;
        
    }
};