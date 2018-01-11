/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int n, int target, int* returnSize) {
    returnSize = 2;
    int* res = (int*)malloc(returnSize*sizeof(int));

    for (size_t i = 0; i < target; i++) {
        
    }

}


int bs(int* ns, int n, int target){
    int le=0,ri=n,mid=n/2;

    while (le<ri) {
        if (ns[mid] > target) {
            ri = mid;
            mid = (ri + le) / 2;
        }else if (ns[mid] < target){
            le = mid;
            mid = (ri + le) / 2;
        }else{
            return mid;
        }
    }

}
