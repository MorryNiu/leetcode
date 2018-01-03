/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc((numsSize)*sizeof(int));

    memset(res, 0, numsSize*sizeof(int));

    if (numsSize==0) {
        returnSize = 0;
        return res;
    }

    for (size_t i = 0; i < numsSize; i++) {
        res[nums[i]-1] = 1;
    }

    *returnSize = 0;

    for (size_t i = 0; i < numsSize; i++) {
        if (res[i]==0) {
            res[(*returnSize)] = i+1;
            (*returnSize) += 1;
        }
    }

    return res;
}
