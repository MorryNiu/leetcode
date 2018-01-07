/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* majorityElement(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)(malloc(2*sizeof(int)));
    int i;
    int count1=0, count2=0, res[0]=0, res[1]=1;

    for (i = 0; i < numsSize; i++) {
        if (nums[i] == res[0]) {
            count1++;
        }else if (nums[i] == res[1]){
            count2++;
        }else if (count1 == 0){
            res[0] = nums[i];
            count1 = 1;
        }else if (count2 == 0){
            res[1] = nums[i];
            count2 = 1;
        }else{
            count1--;
            count2--;
        }
    }

    if (res[0] == res[1]) {
        returnSize = 1;
    }else{
        returnSize = 2;
    }

    return res;
}

/*not finish yet*/
