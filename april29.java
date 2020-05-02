/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
import java.util.*;
class Solution {
    int res = Integer.MIN_VALUE;
    private int maxPathSumHelper(TreeNode root){
        if(root == null){
            return 0;
        }
        int left_sum = maxPathSumHelper(root.left);
        int right_sum = maxPathSumHelper(root.right);
        
        int max_sum_here = Math.max(Math.max(left_sum, right_sum) + root.val, root.val);
        
        res = Math.max(res, Math.max(max_sum_here, left_sum + right_sum + root.val));
        
        return max_sum_here;
        
    }
    public int maxPathSum(TreeNode root) {

        
        maxPathSumHelper(root);
        return res;
    }
}