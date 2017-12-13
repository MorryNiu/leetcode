/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** nums, int m, int n, int r, int c, int** columnSizes, int* res) {
    /* I rename some of the variable here */
    int **result = (int**)malloc(r *sizeof(int*));
    int i;

    if (m * n != r * c) {
        r = m;
        c = n;
    }

    *res = r;
    *columnSizes = (int*)malloc(r*sizeof(int));

    for (i = 0; i < r; i++) {
        result[i] = (int*)malloc(c * sizeof(int));
        (*columnSizes)[i] = c;
    }

    for (i = 0; i < m*n; i++) {
        result[i/c][i%c] = nums[i/n][i%n];
    }

    return result;
}
