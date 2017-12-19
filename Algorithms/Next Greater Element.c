/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* num1, int s1, int* num2, int s2, int* returnSize) {
    int i,j,k,n=0;
    int* res;
    res = (int*)malloc(s1*sizeof(int));

    for (i = 0; i < s1; i++) {
        for (j = 0; j < s2; j++) {
            if (num1[i] == num2[j]) {
                res[n] = -1;
                if (j+1 < s2) {
                    for (k = j+1; k < s2; k++) {
                        if (num2[k] > num1[i]) {
                            res[n] = num2[k];
                            break;
                        }
                    }
                }
                n++;
            }
        }
    }

    *returnSize = n;

    return res;
}
