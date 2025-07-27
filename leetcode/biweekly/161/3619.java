import java.util.Stack;

class Point {
    int x;
    int y;

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}

class Solution {
    public int countIslands(int[][] grid, int k) {
        int rcount = grid.length;
        int ccount = grid[0].length;
        int count = 0;
        boolean[][] vis = new boolean[rcount][ccount];
        int[][] directions = { { 1, 0 }, { -1, 0 }, { 0, 1 }, { 0, -1 } };

        for (int i = 0; i < rcount; i++) {
            for (int j = 0; j < ccount; j++) {
                if (!vis[i][j] && grid[i][j] != 0) {
                    int sum = 0;
                    Stack<Point> s = new Stack<>();
                    s.push(new Point(i, j));
                    vis[i][j] = true;

                    while (!s.isEmpty()) {
                        Point curr = s.pop();
                        sum += grid[curr.x][curr.y];

                        for (int[] dir : directions) {
                            int dx = curr.x + dir[0];
                            int dy = curr.y + dir[1];

                            if (dx >= 0 && dy >= 0 && dx < rcount && dy < ccount && !vis[dx][dy] && grid[dx][dy] != 0) {
                                s.push(new Point(dx, dy));
                                vis[dx][dy] = true;
                            }
                        }
                    }

                    if (sum % k == 0) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
}