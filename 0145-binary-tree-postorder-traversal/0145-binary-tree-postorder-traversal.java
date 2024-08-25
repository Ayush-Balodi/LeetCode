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
class Solution {
    List<Integer> answer = new ArrayList <>();
    public List<Integer> postorderTraversal(TreeNode root) {
        if( root == null ){
            return answer;
        }
        answer = postorderTraversal( root.left );
        answer = postorderTraversal( root.right );
        answer.add( root.val );
        return answer;
    }
}