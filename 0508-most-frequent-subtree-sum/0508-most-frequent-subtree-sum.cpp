/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

     unordered_map<int , int> freq;


    int countSum( TreeNode* root ){

        if( root == NULL ){

            return 0;
        }

        int leftSum = countSum( root->left );
        int rightSum = countSum( root->right );

        int sum = leftSum + rightSum + root->val;

        freq[sum]++;

        return sum;
    }


    vector<int> findFrequentTreeSum(TreeNode* root) {

        int maxFreq = 0;

        countSum( root );

        for( auto m: freq ){

            maxFreq = max( maxFreq , m.second );


        }

        vector<int> answer;

        for( auto x: freq ){

            if( x.second == maxFreq ){

               answer.push_back(x.first);

            }
        }
 





        return answer;



       


        
    }
};