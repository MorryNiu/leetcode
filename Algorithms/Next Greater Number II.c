/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElements(int* nums, int numsSize, int* returnSize) {
    int i, j, count;
    int* res = (int*)malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    for (i = 0; i < numsSize; i++) {
        j = i;
        count = 0;
        res[i] = -1;
        while (count < numsSize) {
            if (j == numsSize) {
                j = 0;
            }

            if (nums[j] > nums[i]) {
                res[i] = nums[j];
                break;
            }

            j++;
            count++;
        }
    }

    return res;
}
