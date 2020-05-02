//Calculate diameter at each node
//Do a post order traversal
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int dia = INT_MIN;
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int left_height = height(root->left);
        int right_height = height(root->right);
        dia = max(dia, left_height + right_height);
        return 1 + max(left_height, right_height);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int height_of_tree = height(root);
        return dia;
    }
};
