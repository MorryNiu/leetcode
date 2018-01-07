int majorityElement(int* nums, int numsSize) {
    int i, res, c=0;

    for (i = 0; i < numsSize; i++) {
        if (c==0) {
            res = nums[i];
        }
        if (res == nums[i]) {
            c++;
        }else{
            c--;
        }
    }

    return res;
}
