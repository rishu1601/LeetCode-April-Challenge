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
    TreeNode* helper(TreeNode* node,int data){
       if( node == NULL){
           return new TreeNode(data);
       }
        if(node->val > data){
            node->left = helper(node->left, data);
        }else{
            node->right = helper(node->right, data);
        }
        return node;
    }
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root = NULL;
        int n = preorder.size();
        if( n == 0){
            return root;
        }
        root = new TreeNode(preorder[0]);
        for(int i = 1; i < n; i++){
            helper(root, preorder[i]);
        }
        return root;
    }
};
