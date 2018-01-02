int maxAreaOfIsland(int** grid, int r, int c) {
    int i,j,n=0,t=0;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (grid[i][j]) {
                t = 1+countSize(grid, i, j, r, c);
                if (t > n) {
                    n = t;
                }
            }
        }
    }

    return n;
}


int countSize(int** grid, int x, int y, int r, int c){
    int n=0;

    grid[x][y] = 0;

    if ( (x+1 < r) && grid[x+1][y]) {
        grid[x+1][y] = 0;
        n += 1+countSize(grid, x+1, y, r, c);
    }

    if ( (x-1 >= 0) && grid[x-1][y]) {
        grid[x-1][y] = 0;
        n += 1+countSize(grid, x-1, y, r, c);
    }

    if ( (y+1 < c) && grid[x][y+1]) {
        grid[x][y+1] = 0;
        n += 1+countSize(grid, x, y+1, r, c);
    }

    if ( (y-1 >= 0) && grid[x][y-1]) {
        grid[x][y-1] = 0;
        n += 1+countSize(grid, x, y-1, r, c);
    }

    return n;
}
