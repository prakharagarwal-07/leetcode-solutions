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
    int ht( TreeNode* root ){

        if( root == NULL ){

            return 0;

        }

        int leftHt = ht( root->left );
        int rightHt = ht( root->right );

        return max( leftHt , rightHt ) + 1;
    }

    int maxDepth(TreeNode* root) {

        return ht( root );
        
    }
};