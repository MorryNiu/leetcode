/*primary*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    struct TreeNode* res;

    if (t1 == NULL && t2 == NULL) {
        res = NULL;
        return res;
    } else {
        if (t1 == NULL) {
            res->val = t2->val;
            res->left = mergeTrees(NULL, t2->left);
            res->right = mergeTrees(NULL, t2->right);
        } else if (t2 == NULL) {
            res->val = t1->val;
            res->left = mergeTrees(t1->left, NULL);
            res->right = mergeTrees(t1->right, NULL);
        } else {
            res->val = t1->val + t2->val;
            res->left = mergeTrees(t1->left, t2->left);
            res->right = mergeTrees(t1->right, t2->right);
        }
    }

    return res;
}


/* improved */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    if(t1 == NULL){
        return t2;
    }

    if (t2 == NULL){
        return t1;
    }

    t1->val += t2->val;
    t1->left = mergeTrees(t1->left, t2->left);
    t1->right = mergeTrees(t1->right, t2->right);
    return t1;
}
