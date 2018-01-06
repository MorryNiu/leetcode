void moveZeroes(int* nums, int numsSize) {
    int i;

    if (numsSize == 0) {
        return;
    }

    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            swap(nums+i, nums);
            break;
        }
    }
    moveZeroes(nums+1, numsSize-1);
}

void swap(int* a, int *b){
    int t;

    t = *a;
    *a = *b;
    *b = t;
}

/* second approach */

void moveZeroes(int* nums, int numsSize) {
    int i,t=0;

    if (numsSize == 0) {
        return;
    }

    for (i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            swap(nums+i, nums+t);
            t++;
        }
    }
}

void swap(int* a, int *b){
    int t;

    t = *a;
    *a = *b;
    *b = t;
}
