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
    int maxLen = 0;


    int dia( TreeNode* root ){


        if( root == NULL ){

            return 0;

        }

        int leftHt = dia( root->left );
        int rightHt = dia( root->right );

        maxLen = max( maxLen , leftHt + rightHt );

        return max( leftHt , rightHt ) + 1;
    }

    int diameterOfBinaryTree(TreeNode* root) {


        dia(root);



        return maxLen;


        
    }
};