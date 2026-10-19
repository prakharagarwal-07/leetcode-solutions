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

    bool sameTree( TreeNode* root , TreeNode* subRoot ){

        if( root == NULL && subRoot == NULL ){

            return true;
        }

        if( root == NULL || subRoot == NULL ){

            return false;
        }

        if( root->val != subRoot->val ){

            return false;
        }

        if( !sameTree( root->left , subRoot->left ) ){

            return false;
        }

        if( !sameTree( root->right , subRoot->right ) ){

            return false;
        }

        return true;





    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if( root == NULL || subRoot == NULL ){

            return false;
        }

        if( root->val == subRoot->val ){

            if( sameTree( root , subRoot ) ){

                return true;
            }
        } 

        if( isSubtree( root->left , subRoot ) ){

            return true;
        }


        if( isSubtree( root->right , subRoot ) ){

            return true;
        }

        return false;

        
    }
};