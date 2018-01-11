/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int n, int target, int* returnSize) {
    int* res = (int*)malloc(2*sizeof(int));
    int idx=0;
    *returnSize = 0;

    if (n==0) {
        return res;
    }

    for (size_t i = 0; i < n; i++) {
        idx=bs(numbers+i,n-i,target-numbers[i]);
        if (idx != -1) {
            res[0] = i+1;
            res[1] = idx+1+i;
            *returnSize = 2;
            break;
        }
    }
    return res;
}


int bs(int* ns, int n, int target){
    int le=0,ri=n,mid=n/2;

    while (le<ri && mid!=le && mid !=ri) {
        if (ns[mid] > target) {
            ri = mid;
            mid = (ri + le) / 2;
        }else if (ns[mid] < target){
            le = mid;
            mid = (ri + le) / 2;
        }else {
            return mid;
        }
    }

    return -1;
}
