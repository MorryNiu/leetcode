/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int size = 10, i, j, n=0, flag, len, temp;
    int* res;

    res = (int*)malloc(size*sizeof(int));

    for (i = left; i <= right; i++) {
        if (i % 10) {
            flag = 1;
            len = 0;
            temp = i;

            while(temp > 0){
                len++;
                temp /= 10;
            }

            temp = i;
            for (j = len - 1; j >= 0; j--) {
                if (i % (temp / (int)pow(10, j))) {
                    flag = 0;
                    break;
                }
                temp -= (i % 10);
            }

            if (flag) {
                if (size >= n) {
                    res[n] = i;
                    n++;
                }else{
                    size *= 2;
                    res = realloc(res, size*sizeof(int));
                    res[n] = i;
                    n++;
                }
            }
        }
    }

    returnSize = res;

    return returnSize;
}
