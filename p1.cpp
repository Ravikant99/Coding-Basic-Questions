#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int shortestPath(vector<vector<int>> &grid, int k)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> dir = {0, 1, 0, -1, 0};
        vector<vector<vector<int>>> vis(n, vector<vector<int>>(m, vector<int>(k + 1, 0)));
        queue<vector<int>> q;
        q.push({0, 0, k});
        vis[0][0][k] = 1;
        int steps = 0;
        while (!q.empty())
        {
            int sz = q.size();

            while (sz--)
            {
                auto cur = q.front();
                q.pop();
                int x = cur[0];
                int y = cur[1];
                int cnt = cur[2];
                if (x == n - 1 and y == m - 1)
                    return steps;
                for (int i = 0; i < 4; i++)
                {
                    int nx = x + dir[i];
                    int ny = y + dir[i + 1];
                    if (nx >= 0 and nx < n and ny >= 0 and ny < m)
                    {
                        if (grid[nx][ny] == 0 and !vis[nx][ny][cnt])
                        {
                            q.push({nx, ny, cnt});
                            vis[nx][ny][cnt] = 1;
                        }
                        else if (grid[nx][ny] == 1 and cnt > 0 and !vis[nx][ny][cnt - 1])
                        {
                            q.push({nx, ny, cnt - 1});
                            vis[nx][ny][cnt - 1] = 1;
                        }
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};