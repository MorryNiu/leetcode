/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* new = NULL;

    while (head) {
        struct ListNode* nextNode = head->next;
        head->next = new;
        new = head;
        head = nextNode;
    }

    return new;
}

/* using iterative */


/* using recursive */
