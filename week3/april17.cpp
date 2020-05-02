
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
    const int n = size(grid);
    const int m = empty(grid) ? 0 : size(grid.front());

    function<void(int, int)> dfs;
    dfs = [&](int i, int j)
    {
        grid[i][j] = '-';
        for (auto[x, y] : vector<pair<int, int>>{ {i - 1, j}, {i + 1, j},{i, j - 1}, {i, j + 1} })
        {
            if (x < 0 || x >= n || y < 0 || y >= m || grid[x][y] != '1')
                continue;
            dfs(x, y);
        }
    };
    int ans = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (grid[i][j] == '1')
            {
                ++ans;
                dfs(i, j);
            }
    return ans;
    }
};
