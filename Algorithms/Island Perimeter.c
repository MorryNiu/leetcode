int islandPerimeter(int** grid, int r, int c) {
    int res = 0, i, j;

    if (!grid) {
        return 0;
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (grid[i][j] == 1) {
                if (i+1 == r || grid[i+1][j] == 0) {
                    res += 1;
                }

                if (i-1 < 0 || grid[i-1][j] == 0) {
                    res += 1;
                }

                if (j+1 == c || grid[i][j+1] == 0) {
                    res += 1;
                }

                if (j-1 < 0 || grid[i][j-1] == 0) {
                    res += 1;
                }
            }
        }
    }

    return res;

}
