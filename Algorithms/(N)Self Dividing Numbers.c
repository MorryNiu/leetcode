/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int size = right - left + 1, i, j, n=0, flag, len;
    int t;
    char temp[5];

    returnSize = (int*)malloc(size*sizeof(int));

    for (i = left; i < right; i++) {
        flag = 1;
        itoa(i, temp, 10);

        len = strlen(temp);

        for (j = 0; j < len; j++) {
            if (temp[j] == '0') {
                flag = 0;
            }
        }

        if (flag) {
            flag = 1;
            for (j = 0; j < len; j++) {
                t = atoi(temp[j]);

                if (i % t) {
                    flag = 0;
                    break;
                }
            }

            if (flag) {
                returnSize[n] = i;
                n++;
            }
        }
    }

    return returnSize;
}
