int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int i,n=0,t=0;

    for (i = 0; i < numsSize; i++) {
        if (nums[i]) {
            t += 1;
        } else {
            if (t > n) {
                n = t;
            }
            t = 0;
        }
    }

    if (t > n) {
        n = t;
    }

    return n;
}
