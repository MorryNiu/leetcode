/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* trimBST(struct TreeNode* root, int L, int R) {

    if (!root) {
        return NULL;
    }else if (root->val < L) {
        return trimBST(root->right, L, R);
    }else if (root->val > R){
        return trimBST(root->left, L, R);
    }else{
        root->right = trimBST(root->right, L, R);
        root->left = trimBST(root->left, L, R);
    }

    return root;
}
